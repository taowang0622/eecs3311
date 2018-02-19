INCLUDE_PATH =  -I"D:\Program Files\aiffelstudio\library\time\spec\include" -I"D:\Program Files\aiffelstudio\library\vision2\spec\include" -I"D:\Program Files\aiffelstudio\library\wel\spec\windows\include"
SHELL = /bin/sh
CC = "D:\Program Files\aiffelstudio/gcc/win64/mingw/bin/gcc"
CPP = "D:\Program Files\aiffelstudio/gcc/win64/mingw/bin/gcc"
CFLAGS = -O0 -pipe -imacros eif_config.mingw.h -D_WIN32_WINNT=0x0500 -DWINVER=0x0500 -D_UNICODE -DUNICODE -DWIN32_LEAN_AND_MEAN  -DEIF_THREADS  -DEIF_IEEE_BEHAVIOR -DWORKBENCH -I"D:\Program Files\aiffelstudio/studio/spec/win64/include" -I. $(INCLUDE_PATH)
CPPFLAGS = -O0 -pipe -imacros eif_config.mingw.h -D_WIN32_WINNT=0x0500 -DWINVER=0x0500 -D_UNICODE -DUNICODE -DWIN32_LEAN_AND_MEAN  -DEIF_THREADS  -DWORKBENCH -I"D:\Program Files\aiffelstudio/studio/spec/win64/include" -I. $(INCLUDE_PATH)
LDFLAGS = 
CCLDFLAGS =   -mwindows
LDSHAREDFLAGS =  
EIFLIB = "D:\Program Files\aiffelstudio/studio/spec/win64/lib/mingw/mtwkbench.a"
EIFTEMPLATES = D:\Program Files\aiffelstudio/studio/config/win64/templates
LIBS = 
MAKE = "D:\Program Files\aiffelstudio/gcc/win64/msys/1.0/bin/make.exe"
AR = "D:\Program Files\aiffelstudio/gcc/win64/mingw/bin/ar"
LD = "D:\Program Files\aiffelstudio/gcc/win64/mingw/bin/ld"
MKDEP =   --
MV = "D:\Program Files\aiffelstudio/gcc/win64/msys/1.0/bin/cp"
CP = "D:\Program Files\aiffelstudio/gcc/win64/msys/1.0/bin/cp"
RANLIB = "D:\Program Files\aiffelstudio/gcc/win64/mingw/bin/ranlib.exe"
RM = "D:\Program Files\aiffelstudio/gcc/win64/msys/1.0/bin/rm" -f
FILE_EXIST = 
RMDIR = "D:\Program Files\aiffelstudio/gcc/win64/msys/1.0/bin/rd"
X2C = "D:\Program Files\aiffelstudio/studio/spec/win64/bin/x2c.exe"
SHAREDLINK = "D:\Program Files\aiffelstudio/gcc/win64/mingw/bin/dllwrap"
SHAREDLIBS = -luser32 -lws2_32 -ladvapi32 -lgdi32 -lshell32 -lmsimg32 -lcomdlg32 -luuid -lole32 -loleaut32 -lcomctl32 -lmpr -lshlwapi -lwinspool -lstdc++ 
SHARED_SUFFIX = .dll
COMMAND_MAKEFILE = 
START_TEST = if [ ! -f finished ] ; then 
END_TEST = ; fi 
CREATE_TEST = "D:\Program Files\aiffelstudio/gcc/win64/msys/1.0/bin/touch" finished
PATH := D:\Program Files\aiffelstudio/gcc/win64/mingw/libexec/gcc/mingw32/3.4.2;C:\Program Files\Docker\Docker\Resources\bin;C:\Python27\;C:\Python27\Scripts;C:\ProgramData\Oracle\Java\javapath;C:\Program Files (x86)\Intel\iCLS Client\;C:\Program Files\Intel\iCLS Client\;C:\WINDOWS\system32;C:\WINDOWS;C:\WINDOWS\System32\Wbem;C:\WINDOWS\System32\WindowsPowerShell\v1.0\;C:\Program Files (x86)\Intel\Intel(R) Management Engine Components\DAL;C:\Program Files\Intel\Intel(R) Management Engine Components\DAL;C:\Program Files (x86)\Intel\Intel(R) Management Engine Components\IPT;C:\Program Files\Intel\Intel(R) Management Engine Components\IPT;C:\Program Files (x86)\Common Files\Lenovo;C:\ProgramData\Lenovo\ReadyApps;C:\Program Files (x86)\Common Files\lenovo\easyplussdk\bin;C:\Program Files\Java\jdk1.8.0_101\bin;C:\Program Files\apache-maven-3.3.9\bin;C:\Program Files\Intel\WiFi\bin\;C:\Program Files\Common Files\Intel\WirelessCommon\;C:\Program Files\Git\cmd;C:\Program Files\Git\mingw64\bin;C:\Program Files\Git\usr\bin;C:\Program Files\nodejs\;C:\Program Files\MySQL\MySQL Server 5.7\bin;E:\Program Files\putty\;D:\Program Files\svn\bin;C:\Users\taowang\AppData\Local\Microsoft\WindowsApps;C:\Users\taowang\AppData\Roaming\npm;;E:\Program Files\Microsoft VS Code\bin;E:\Program Files\Docker Toolbox 
SYSTEM_IN_DYNAMIC_LIB = registry.dll 

.SUFFIXES:.cpp .o 

.c.o:
	$(CC) $(CFLAGS) -c $<

.cpp.o:
	$(CPP) $(CPPFLAGS) -c $<

OBJECTS = big_file_C28_c.o 

OLDOBJECTS =  we1853.o we1853d.o we1859.o we1859d.o we1852.o we1852d.o we1864.o \
	we1864d.o ev1857.o ev1857d.o we1851.o we1851d.o ev1872.o ev1872d.o \
	ev1868.o ev1868d.o we1850.o we1850d.o we1874.o we1874d.o ev1858.o \
	ev1858d.o we1860.o we1860d.o ev1880.o ev1880d.o ev1867.o ev1867d.o \
	we1856.o we1856d.o ev1866.o ev1866d.o ev1871.o ev1871d.o we1873.o \
	we1873d.o we1869.o we1869d.o we1861.o we1861d.o we1849.o we1849d.o \
	we1878.o we1878d.o we1865.o we1865d.o we1848.o we1848d.o we1879.o \
	we1879d.o ev1870.o ev1870d.o we1876.o we1876d.o we1862.o we1862d.o \
	we1855.o we1855d.o we1863.o we1863d.o we1877.o we1877d.o we1875.o \
	we1875d.o we1854.o we1854d.o 

all::  Cobj28.o

Cobj28.o: $(OBJECTS) Makefile
	$(RM) $@
	$(LD) -r -o $@ $(OBJECTS)
	$(CREATE_TEST)
	$(RM) $(OBJECTS)


clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

