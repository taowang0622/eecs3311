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

OBJECTS = big_file_C7_c.o 

OLDOBJECTS =  es1157.o es1157d.o es1156.o es1156d.o es1155.o es1155d.o ki1181.o \
	ki1181d.o we1187.o we1187d.o we1186.o we1186d.o we1185.o we1185d.o \
	we1184.o we1184d.o ev1183.o ev1183d.o we1182.o we1182d.o ki1180.o \
	ki1180d.o uc1179.o uc1179d.o uc1178.o uc1178d.o we1177.o we1177d.o \
	we1176.o we1176d.o we1175.o we1175d.o we1174.o we1174d.o we1173.o \
	we1173d.o we1172.o we1172d.o we1171.o we1171d.o we1170.o we1170d.o \
	ev1169.o ev1169d.o we1168.o we1168d.o ev1167.o ev1167d.o we1166.o \
	we1166d.o uc1165.o uc1165d.o we1164.o we1164d.o we1163.o we1163d.o \
	we1162.o we1162d.o we1161.o we1161d.o we1160.o we1160d.o ev1159.o \
	ev1159d.o we1158.o we1158d.o 

all::  Cobj7.o

Cobj7.o: $(OBJECTS) Makefile
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

