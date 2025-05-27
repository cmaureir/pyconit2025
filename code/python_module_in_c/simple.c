#include <Python.h>

static PyObject* hello(PyObject* self, PyObject* args){
    char *msg = "Hello PyCon Italy!";
    return Py_BuildValue("s", msg);
}

static char hello_docs[] =
    "hello(): print hello message\n";

static PyMethodDef functions[] = {
    {"hello",                // ml_name
     (PyCFunction)hello,     // ml_meth
     METH_NOARGS,            // ml_flags
     hello_docs},            // ml_doc
    {NULL, NULL, NULL, NULL} // sentinel
};

static struct PyModuleDef simplemodule = {
    PyModuleDef_HEAD_INIT,  // m_base
    "pyconit",             // m_name
    NULL,                   // m_doc
    -1,                     // m_size
    functions               // m_methods
};

PyMODINIT_FUNC PyInit_pyconit(void){
    return PyModule_Create(&simplemodule);
}
