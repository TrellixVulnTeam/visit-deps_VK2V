#!C:\A_VisIt\NewTrunk\windowsbuild\MSVC2017\python\2.7.14\python.exe
# EASY-INSTALL-ENTRY-SCRIPT: 'pygments==2.3.0','console_scripts','pygmentize'
__requires__ = 'pygments==2.3.0'
import re
import sys
from pkg_resources import load_entry_point

if __name__ == '__main__':
    sys.argv[0] = re.sub(r'(-script\.pyw?|\.exe)?$', '', sys.argv[0])
    sys.exit(
        load_entry_point('pygments==2.3.0', 'console_scripts', 'pygmentize')()
    )
