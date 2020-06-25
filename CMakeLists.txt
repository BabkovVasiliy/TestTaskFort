#Для данного проекта достаточно простенького cmake файла.
cmake_minimum_required (VERSION 3.8)
project ("testTaskPositions")
file (GLOB SOURCE *.cpp)
file (GLOB HEADER *.h)

add_executable (testTastCmake ${SOURCE} ${HEADER} )

