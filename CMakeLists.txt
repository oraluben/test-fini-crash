cmake_minimum_required(VERSION 3.20)
project(pycds)

set(CMAKE_BUILD_TYPE Debug)

set(CMAKE_C_STANDARD 11)

find_package(PythonExtensions REQUIRED)

add_library(_cds MODULE src/_cds/_cdsmodule.c)
python_extension_module(_cds)

# todo: if find cpython repo, run clinic
# currently we manually run `python3 ../cpython/Tools/clinic/clinic.py --make --srcdir src/_cds`

install(TARGETS _cds LIBRARY DESTINATION "${PYTHON_RELATIVE_SITE_PACKAGES_DIR}")
