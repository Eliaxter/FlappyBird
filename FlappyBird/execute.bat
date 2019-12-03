@echo off

echo Copiado en curso

copy %1 %2 /Y

xcopy %3 %2 /s /Y

echo Finalizando el copiado