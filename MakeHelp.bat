@echo off
REM -- First make map file from Microsoft Visual C++ generated resource.h
echo // MAKEHELP.BAT generated Help Map file.  Used by ROBORALLY.HPJ. >"hlp\RoboRally.hm"
echo. >>"hlp\RoboRally.hm"
echo // Commands (ID_* and IDM_*) >>"hlp\RoboRally.hm"
makehm ID_,HID_,0x10000 IDM_,HIDM_,0x10000 resource.h >>"hlp\RoboRally.hm"
echo. >>"hlp\RoboRally.hm"
echo // Prompts (IDP_*) >>"hlp\RoboRally.hm"
makehm IDP_,HIDP_,0x30000 resource.h >>"hlp\RoboRally.hm"
echo. >>"hlp\RoboRally.hm"
echo // Resources (IDR_*) >>"hlp\RoboRally.hm"
makehm IDR_,HIDR_,0x20000 resource.h >>"hlp\RoboRally.hm"
echo. >>"hlp\RoboRally.hm"
echo // Dialogs (IDD_*) >>"hlp\RoboRally.hm"
makehm IDD_,HIDD_,0x20000 resource.h >>"hlp\RoboRally.hm"
echo. >>"hlp\RoboRally.hm"
echo // Frame Controls (IDW_*) >>"hlp\RoboRally.hm"
makehm IDW_,HIDW_,0x50000 resource.h >>"hlp\RoboRally.hm"
REM -- Make help for Project ROBORALLY

goto :done

echo Building Win32 Help files
start /wait hcw /C /E /M "hlp\RoboRally.hpj"
if errorlevel 1 goto :Error
if not exist "hlp\RoboRally.hlp" goto :Error
if not exist "hlp\RoboRally.cnt" goto :Error
echo.
if exist Debug\nul copy "hlp\RoboRally.hlp" Debug
if exist Debug\nul copy "hlp\RoboRally.cnt" Debug
if exist Release\nul copy "hlp\RoboRally.hlp" Release
if exist Release\nul copy "hlp\RoboRally.cnt" Release
echo.
goto :done

:Error
echo hlp\RoboRally.hpj(1) : error: Problem encountered creating help file

:done
echo.
