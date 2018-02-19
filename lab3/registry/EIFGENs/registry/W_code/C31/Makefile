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

OBJECTS = big_file_C31_c.o 

OLDOBJECTS =  ty1972.o ty1972d.o ty1973.o ty1973d.o he1978.o he1978d.o bi1975.o \
	bi1975d.o bi1974.o bi1974d.o pr1979.o pr1979d.o tr1976.o tr1976d.o \
	li1977.o li1977d.o in1971.o in1971d.o ev1956.o ev1956d.o ev1950.o \
	ev1950d.o ev1958.o ev1958d.o ev1957.o ev1957d.o ev1963.o ev1963d.o \
	ev1959.o ev1959d.o ev1949.o ev1949d.o ev1954.o ev1954d.o ev1955.o \
	ev1955d.o ev1947.o ev1947d.o ev1951.o ev1951d.o ev1953.o ev1953d.o \
	ev1969.o ev1969d.o uc1966.o uc1966d.o ev1968.o ev1968d.o ev1970.o \
	ev1970d.o ev1948.o ev1948d.o ev1962.o ev1962d.o ev1961.o ev1961d.o \
	ev1960.o ev1960d.o ev1952.o ev1952d.o kl1965.o kl1965d.o ki1964.o \
	ki1964d.o uc1967.o uc1967d.o 

all::  Cobj31.o

Cobj31.o: $(OBJECTS) Makefile
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

