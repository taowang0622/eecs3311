INCLUDE_PATH =  -I"D:\Program Files\aiffelstudio\library\time\spec\include"
SHELL = /bin/sh
CC = "D:\Program Files\aiffelstudio/gcc/win64/mingw/bin/gcc"
CPP = "D:\Program Files\aiffelstudio/gcc/win64/mingw/bin/gcc"
CFLAGS = -O0 -pipe -imacros eif_config.mingw.h -D_WIN32_WINNT=0x0500 -DWINVER=0x0500 -D_UNICODE -DUNICODE -DWIN32_LEAN_AND_MEAN  -DEIF_THREADS  -DEIF_IEEE_BEHAVIOR -DWORKBENCH -I"D:\Program Files\aiffelstudio/studio/spec/win64/include" -I. $(INCLUDE_PATH)
CPPFLAGS = -O0 -pipe -imacros eif_config.mingw.h -D_WIN32_WINNT=0x0500 -DWINVER=0x0500 -D_UNICODE -DUNICODE -DWIN32_LEAN_AND_MEAN  -DEIF_THREADS  -DWORKBENCH -I"D:\Program Files\aiffelstudio/studio/spec/win64/include" -I. $(INCLUDE_PATH)
LDFLAGS = 
CCLDFLAGS =   -mconsole
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
SYSTEM_IN_DYNAMIC_LIB = calculator.dll 

.SUFFIXES:.cpp .o 

.c.o:
	$(CC) $(CFLAGS) -c $<

.cpp.o:
	$(CPP) $(CPPFLAGS) -c $<

OBJECTS = big_file_C4_c.o 

OLDOBJECTS =  kl1077.o kl1077d.o ti1088.o ti1088d.o ki1056.o ki1056d.o kl1076.o \
	kl1076d.o kl1057.o kl1057d.o yy1068.o yy1068d.o da1086.o da1086d.o \
	ti1087.o ti1087d.o kl1071.o kl1071d.o yy1067.o yy1067d.o fi1085.o \
	fi1085d.o kl1078.o kl1078d.o kl1073.o kl1073d.o kl1069.o kl1069d.o \
	yy1066.o yy1066d.o kl1072.o kl1072d.o kl1084.o kl1084d.o kl1082.o \
	kl1082d.o kl1083.o kl1083d.o kl1070.o kl1070d.o kl1075.o kl1075d.o \
	kl1080.o kl1080d.o ki1081.o ki1081d.o kl1079.o kl1079d.o kl1074.o \
	kl1074d.o uc1058.o uc1058d.o kl1059.o kl1059d.o kl1065.o kl1065d.o \
	uc1064.o uc1064d.o uc1063.o uc1063d.o uc1062.o uc1062d.o uc1061.o \
	uc1061d.o uc1060.o uc1060d.o 

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

