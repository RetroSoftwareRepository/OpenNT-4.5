@REM this gets us ready for the build process
copy /Y w:\tools\x86\idw\alias.exe  %SystemRoot%\system32

cd w:\nt\private
set username=x86chk
call zSHchk.cmd
