#!/usr/bin/env python3

# Run in root of cpython to detect buggy commit

import os.path
from subprocess import run

CONF = 'tmp-bisect-build'

INSTALL = os.path.abspath('../install')
ROOT = '../pycds'

if __name__ == '__main__':
    run(['rm', '-rf', INSTALL])
    run(['./configure', f'--prefix={INSTALL}', '--with-pydebug',
         '--with-openssl=/opt/homebrew/opt/openssl@3'])

    run(['make', 'clean'], check=True)
    run(['make', '-j'], check=True)
    run(['make', 'install'], check=True)

    run(['rm', '-rf', 'venv'], cwd=ROOT)
    run([f'{INSTALL}/bin/python3', '-m', 'venv', 'venv'], check=True, cwd=ROOT)

    run(['./venv/bin/pip3', 'install', '.'], check=True, cwd=ROOT)
    r = run(['./venv/bin/python3', '-c', 'import _cds; _cds._set_mode(0)'], cwd=ROOT)
    assert r.returncode == 0
