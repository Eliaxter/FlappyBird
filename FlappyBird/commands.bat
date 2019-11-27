@echo off

echo Ejecutnado comandos

git config --global merge.tool p4merge

git config --global mergetool.p4merge.path "C:/Program Files/Perforce/p4merge.exe"

git config --global mergetool.KeepBackup false

echo Terminando comando