#!C:\A_VisIt\2.13RC\windowsbuild\MSVC2017\python\2.7.14\python.exe
# EASY-INSTALL-ENTRY-SCRIPT: 'Cython==0.25.2','console_scripts','cythonize'
__requires__ = 'Cython==0.25.2'
import re
import sys
from pkg_resources import load_entry_point

if __name__ == '__main__':
    sys.argv[0] = re.sub(r'(-script\.pyw?|\.exe)?$', '', sys.argv[0])
    sys.exit(
        load_entry_point('Cython==0.25.2', 'console_scripts', 'cythonize')()
    )
