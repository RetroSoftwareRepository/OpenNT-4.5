What is OpenNT?
-----------------------
OpenNT is an operating system based upon Windows NT 4.0 that has been updated with components from Windows 2000.

Windows is copyright Microsoft Corporation

this code is for educational use only. Copyright infringement is not intended.

Getting started
----------------------
To compile the OS, you must have a flash drive or second hard drive with the drive letter set to W:
The build environment looks for things in this letter. This can be changed, but is very time consuming if you don't want to change drive letters.

The Windows version used to compile doesn't matter, as long as it is not Windows 1.x to NT 3.5. 

I recommend 2000 or later (MUST BE 32-BIT) as it supports larger hard drives and flash drives (up to 2 terabytes)

In short:
- copy all source files to w:\
- run "W:\setup.cmd"
- run zTESTBUILD.cmd and answer 'yyy' for the 1st pass clean build and ignore building errors if any
- if any building errors, run zTESTBUILD.cmd again and answer 'nyy' for a 2nd pass non-clean build

Have fun!