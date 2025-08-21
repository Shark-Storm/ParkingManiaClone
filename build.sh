#!/bin/bash

libs="-luser32 -lopengl32 -Igdi32"
warnings="-Wno-writable-strings -Wno-format-security"
includes="-Ithird_party -I third_party/Include"


clang++ -g src/main.cpp -oParkingMania.exe $libs $warnings $includes