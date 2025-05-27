from setuptools import setup, Extension

setup(name='pycon_pt', version='1.0',
      ext_modules=[Extension('pycon_pt', ['simple.c'])])
