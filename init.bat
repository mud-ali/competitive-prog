@ECHO OFF

echo "name?"
SET /p namex=
echo "language? choose c, java, or python"
SET /p langu=

mkdir %namex%

if %langu% == c (
    cp .templates/main.cpp %namex%/main.cpp
)
if %langu% == java (
    cp .templates/Main.java %namex%/Main.java
)
if %langu% == python (
    cd %namex%
    touch main.py
)