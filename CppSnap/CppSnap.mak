# Microsoft Developer Studio Generated NMAKE File, Based on CppSnap.dsp
!IF "$(CFG)" == ""
CFG=CppSnap - Win32 Debug
!MESSAGE No configuration specified. Defaulting to CppSnap - Win32 Debug.
!ENDIF 

!IF "$(CFG)" != "CppSnap - Win32 Release" && "$(CFG)" != "CppSnap - Win32 Debug"
!MESSAGE Invalid configuration "$(CFG)" specified.
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "CppSnap.mak" CFG="CppSnap - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "CppSnap - Win32 Release" (based on "Win32 (x86) Application")
!MESSAGE "CppSnap - Win32 Debug" (based on "Win32 (x86) Application")
!MESSAGE 
!ERROR An invalid configuration is specified.
!ENDIF 

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE 
NULL=nul
!ENDIF 

CPP=cl.exe
MTL=midl.exe
RSC=rc.exe

!IF  "$(CFG)" == "CppSnap - Win32 Release"

OUTDIR=.\Release
INTDIR=.\Release
# Begin Custom Macros
OutDir=.\Release
# End Custom Macros

ALL : "$(OUTDIR)\CppSnap.exe"


CLEAN :
	-@erase "$(INTDIR)\CppSnap.obj"
	-@erase "$(INTDIR)\CppSnap.pch"
	-@erase "$(INTDIR)\CppSnap.res"
	-@erase "$(INTDIR)\CppSnapDlg.obj"
	-@erase "$(INTDIR)\ideadisplay.obj"
	-@erase "$(INTDIR)\ideafg.obj"
	-@erase "$(INTDIR)\picture.obj"
	-@erase "$(INTDIR)\StdAfx.obj"
	-@erase "$(INTDIR)\vc60.idb"
	-@erase "$(OUTDIR)\CppSnap.exe"

"$(OUTDIR)" :
    if not exist "$(OUTDIR)/$(NULL)" mkdir "$(OUTDIR)"

CPP_PROJ=/nologo /MD /W3 /GX /O2 /I "..\..\include" /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_AFXDLL" /D "_MBCS" /Fp"$(INTDIR)\CppSnap.pch" /Yu"stdafx.h" /Fo"$(INTDIR)\\" /Fd"$(INTDIR)\\" /FD /c 
MTL_PROJ=/nologo /D "NDEBUG" /mktyplib203 /win32 
RSC_PROJ=/l 0x409 /fo"$(INTDIR)\CppSnap.res" /d "NDEBUG" /d "_AFXDLL" 
BSC32=bscmake.exe
BSC32_FLAGS=/nologo /o"$(OUTDIR)\CppSnap.bsc" 
BSC32_SBRS= \
	
LINK32=link.exe
LINK32_FLAGS=/nologo /subsystem:windows /incremental:no /pdb:"$(OUTDIR)\CppSnap.pdb" /machine:I386 /out:"$(OUTDIR)\CppSnap.exe" 
LINK32_OBJS= \
	"$(INTDIR)\CppSnap.obj" \
	"$(INTDIR)\CppSnapDlg.obj" \
	"$(INTDIR)\ideadisplay.obj" \
	"$(INTDIR)\ideafg.obj" \
	"$(INTDIR)\picture.obj" \
	"$(INTDIR)\StdAfx.obj" \
	"$(INTDIR)\CppSnap.res"

"$(OUTDIR)\CppSnap.exe" : "$(OUTDIR)" $(DEF_FILE) $(LINK32_OBJS)
    $(LINK32) @<<
  $(LINK32_FLAGS) $(LINK32_OBJS)
<<

!ELSEIF  "$(CFG)" == "CppSnap - Win32 Debug"

OUTDIR=.\Debug
INTDIR=.\Debug
# Begin Custom Macros
OutDir=.\Debug
# End Custom Macros

ALL : "$(OUTDIR)\CppSnap.exe"


CLEAN :
	-@erase "$(INTDIR)\CppSnap.obj"
	-@erase "$(INTDIR)\CppSnap.pch"
	-@erase "$(INTDIR)\CppSnap.res"
	-@erase "$(INTDIR)\CppSnapDlg.obj"
	-@erase "$(INTDIR)\ideadisplay.obj"
	-@erase "$(INTDIR)\ideafg.obj"
	-@erase "$(INTDIR)\picture.obj"
	-@erase "$(INTDIR)\StdAfx.obj"
	-@erase "$(INTDIR)\vc60.idb"
	-@erase "$(INTDIR)\vc60.pdb"
	-@erase "$(OUTDIR)\CppSnap.exe"
	-@erase "$(OUTDIR)\CppSnap.ilk"
	-@erase "$(OUTDIR)\CppSnap.pdb"

"$(OUTDIR)" :
    if not exist "$(OUTDIR)/$(NULL)" mkdir "$(OUTDIR)"

CPP_PROJ=/nologo /MDd /W3 /Gm /GX /ZI /Od /I "..\..\include" /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_AFXDLL" /D "_MBCS" /Fp"$(INTDIR)\CppSnap.pch" /Yu"stdafx.h" /Fo"$(INTDIR)\\" /Fd"$(INTDIR)\\" /FD /GZ /c 
MTL_PROJ=/nologo /D "_DEBUG" /mktyplib203 /win32 
RSC_PROJ=/l 0x409 /fo"$(INTDIR)\CppSnap.res" /d "_DEBUG" /d "_AFXDLL" 
BSC32=bscmake.exe
BSC32_FLAGS=/nologo /o"$(OUTDIR)\CppSnap.bsc" 
BSC32_SBRS= \
	
LINK32=link.exe
LINK32_FLAGS=/nologo /subsystem:windows /incremental:yes /pdb:"$(OUTDIR)\CppSnap.pdb" /debug /machine:I386 /out:"$(OUTDIR)\CppSnap.exe" /pdbtype:sept 
LINK32_OBJS= \
	"$(INTDIR)\CppSnap.obj" \
	"$(INTDIR)\CppSnapDlg.obj" \
	"$(INTDIR)\ideadisplay.obj" \
	"$(INTDIR)\ideafg.obj" \
	"$(INTDIR)\picture.obj" \
	"$(INTDIR)\StdAfx.obj" \
	"$(INTDIR)\CppSnap.res"

"$(OUTDIR)\CppSnap.exe" : "$(OUTDIR)" $(DEF_FILE) $(LINK32_OBJS)
    $(LINK32) @<<
  $(LINK32_FLAGS) $(LINK32_OBJS)
<<

!ENDIF 

.c{$(INTDIR)}.obj::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cpp{$(INTDIR)}.obj::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cxx{$(INTDIR)}.obj::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.c{$(INTDIR)}.sbr::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cpp{$(INTDIR)}.sbr::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cxx{$(INTDIR)}.sbr::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<


!IF "$(NO_EXTERNAL_DEPS)" != "1"
!IF EXISTS("CppSnap.dep")
!INCLUDE "CppSnap.dep"
!ELSE 
!MESSAGE Warning: cannot find "CppSnap.dep"
!ENDIF 
!ENDIF 


!IF "$(CFG)" == "CppSnap - Win32 Release" || "$(CFG)" == "CppSnap - Win32 Debug"
SOURCE=.\CppSnap.cpp

"$(INTDIR)\CppSnap.obj" : $(SOURCE) "$(INTDIR)" "$(INTDIR)\CppSnap.pch"


SOURCE=.\CppSnap.rc

"$(INTDIR)\CppSnap.res" : $(SOURCE) "$(INTDIR)"
	$(RSC) $(RSC_PROJ) $(SOURCE)


SOURCE=.\CppSnapDlg.cpp

"$(INTDIR)\CppSnapDlg.obj" : $(SOURCE) "$(INTDIR)" "$(INTDIR)\CppSnap.pch"


SOURCE=.\ideadisplay.cpp

"$(INTDIR)\ideadisplay.obj" : $(SOURCE) "$(INTDIR)" "$(INTDIR)\CppSnap.pch"


SOURCE=.\ideafg.cpp

"$(INTDIR)\ideafg.obj" : $(SOURCE) "$(INTDIR)" "$(INTDIR)\CppSnap.pch"


SOURCE=.\picture.cpp

"$(INTDIR)\picture.obj" : $(SOURCE) "$(INTDIR)" "$(INTDIR)\CppSnap.pch"


SOURCE=.\StdAfx.cpp

!IF  "$(CFG)" == "CppSnap - Win32 Release"

CPP_SWITCHES=/nologo /MD /W3 /GX /O2 /I "..\..\include" /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_AFXDLL" /D "_MBCS" /Fp"$(INTDIR)\CppSnap.pch" /Yc"stdafx.h" /Fo"$(INTDIR)\\" /Fd"$(INTDIR)\\" /FD /c 

"$(INTDIR)\StdAfx.obj"	"$(INTDIR)\CppSnap.pch" : $(SOURCE) "$(INTDIR)"
	$(CPP) @<<
  $(CPP_SWITCHES) $(SOURCE)
<<


!ELSEIF  "$(CFG)" == "CppSnap - Win32 Debug"

CPP_SWITCHES=/nologo /MDd /W3 /Gm /GX /ZI /Od /I "..\..\include" /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_AFXDLL" /D "_MBCS" /Fp"$(INTDIR)\CppSnap.pch" /Yc"stdafx.h" /Fo"$(INTDIR)\\" /Fd"$(INTDIR)\\" /FD /GZ /c 

"$(INTDIR)\StdAfx.obj"	"$(INTDIR)\CppSnap.pch" : $(SOURCE) "$(INTDIR)"
	$(CPP) @<<
  $(CPP_SWITCHES) $(SOURCE)
<<


!ENDIF 


!ENDIF 

