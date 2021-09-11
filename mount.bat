SET "MOUNTER_PATH=C:\Users\ManuShamil\Documents\GitHub\DayZ-ProjectMounter\main.py"
SET "DAYZ_PATH=C:\Program Files (x86)\Steam\steamapps\common\DayZ Exp\DayZDiag_x64.exe"



SET MYPATH=%cd%

SET "PROJECT_FOLDER=%MYPATH%"
SET "PROJECT_NAME=DayZ-KeyCardSystem-Commercial"
SET "PROJECT_SETTINGS=project.json"
SET "WORK_DRIVE=P:"


py "%MOUNTER_PATH%" "%PROJECT_FOLDER%" "%PROJECT_NAME%" %PROJECT_SETTINGS% %WORK_DRIVE% "%DAYZ_PATH%"