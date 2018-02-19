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

OBJECTS = big_file_C4_c.o 

OLDOBJECTS =  ev1088.o ev1088d.o we1087.o we1087d.o we1086.o we1086d.o we1085.o \
	we1085d.o we1084.o we1084d.o we1083.o we1083d.o we1082.o we1082d.o \
	ev1081.o ev1081d.o we1080.o we1080d.o ev1079.o ev1079d.o we1078.o \
	we1078d.o we1077.o we1077d.o ev1076.o ev1076d.o we1075.o we1075d.o \
	we1074.o we1074d.o we1073.o we1073d.o we1072.o we1072d.o we1071.o \
	we1071d.o we1070.o we1070d.o uc1069.o uc1069d.o kl1068.o kl1068d.o \
	we1067.o we1067d.o we1066.o we1066d.o we1065.o we1065d.o we1064.o \
	we1064d.o ev1063.o ev1063d.o ev1062.o ev1062d.o ev1061.o ev1061d.o \
	we1060.o we1060d.o we1059.o we1059d.o we1058.o we1058d.o we1057.o \
	we1057d.o we1056.o we1056d.o 

all::  Cobj4.o

Cobj4.o: $(OBJECTS) Makefile
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

