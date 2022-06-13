#include <Python.h>

#include "clinic/_cdsmodule.c.h"

/*[clinic input]
module _cds
[clinic start generated code]*/
/*[clinic end generated code: output=da39a3ee5e6b4b0d input=4970e54eebac52d1]*/

// clang-format off
static PyMethodDef CDSMethods[] = {
    _CDS__SET_MODE_METHODDEF
    {NULL, NULL, 0, NULL},
};

static struct PyModuleDef _cdsmodule = {
    PyModuleDef_HEAD_INIT,
    "_cds",
    NULL,
    -1,
    CDSMethods
};

PyMODINIT_FUNC
PyInit__cds(void)
{
    PyObject *m;
    int res;

    m = PyModule_Create(&_cdsmodule);
    if (m == NULL)
        return NULL;
    return m;
}

/*[clinic input]
_cds._set_mode

    mode: int

[clinic start generated code]*/

static PyObject *
_cds__set_mode_impl(PyObject *module, int mode)
/*[clinic end generated code: output=ba43df118acf9262 input=d1ad8244814a77a7]*/
{
    return Py_None;
}
