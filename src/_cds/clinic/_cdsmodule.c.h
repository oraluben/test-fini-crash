/*[clinic input]
preserve
[clinic start generated code]*/

PyDoc_STRVAR(_cds__set_mode__doc__,
"_set_mode($module, /, mode)\n"
"--\n"
"\n");

#define _CDS__SET_MODE_METHODDEF    \
    {"_set_mode", (PyCFunction)(void(*)(void))_cds__set_mode, METH_FASTCALL|METH_KEYWORDS, _cds__set_mode__doc__},

static PyObject *
_cds__set_mode_impl(PyObject *module, int mode);

static PyObject *
_cds__set_mode(PyObject *module, PyObject *const *args, Py_ssize_t nargs, PyObject *kwnames)
{
    PyObject *return_value = NULL;
    static const char * const _keywords[] = {"mode", NULL};
    static _PyArg_Parser _parser = {NULL, _keywords, "_set_mode", 0};
    PyObject *argsbuf[1];
    int mode;

    args = _PyArg_UnpackKeywords(args, nargs, NULL, kwnames, &_parser, 1, 1, 0, argsbuf);
    if (!args) {
        goto exit;
    }
    mode = _PyLong_AsInt(args[0]);
    if (mode == -1 && PyErr_Occurred()) {
        goto exit;
    }
    return_value = _cds__set_mode_impl(module, mode);

exit:
    return return_value;
}
/*[clinic end generated code: output=6185eb661ba5b864 input=a9049054013a1b77]*/
