# Run

```
$./venv/bin/pip3 install .
...
$./venv/bin/python3 -c 'import _cds; _cds._set_mode(0)'
Fatal Python error: none_dealloc: deallocating None: bug likely caused by a refcount error in a C extension
Python runtime state: finalizing (tstate=0x0000000000b2cef8)

Current thread 0x00007fecc3b63740 (most recent call first):
  <no Python frame>
Aborted
```
(Where the module and function have both empty bodies and do nothing.)

The triggering PR is python/cpython#30807 (https://github.com/python/cpython/pull/30807).
