# internship-f22labs

PreRequisite:
GCC with C++14 support on Ubuntu
   
Installation:
Install GCC with C++14 support on Ubuntu

$sudo add-apt-repository ppa:ubuntu-toolchain-r/test                                 

$sudo apt-get update

$sudo apt-get install g++-4.9

To set g++4.9 as default compiler, the symlink in has to be updated:

$sudo ln -f -s /usr/bin/g++-4.9 /usr/bin/g++

To check if you are now using the right compiler you can print the gcc version. It should be something like 4.9.X.

$g++ -v

Compilation:

$g++ main.cpp

To Run:
$./a.out

If you are using operating system other than Linux, install c++14 to run the files.

