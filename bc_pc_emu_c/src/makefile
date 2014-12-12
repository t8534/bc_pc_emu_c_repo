# headers subdirs
IDIRS = -I. -I"C:/MinGW/include" -I"C:/MinGW/include/lib/gcc/mingw32/4.5.0/include" -I"C:/MinGW/include/lib/gcc/mingw32/4.5.0/include-fixed" -I./libs/sdl/include -I./libs/sdl/include/SDL -I./sys
#IDIRS = -I. -I./libs/sdl/include/SDL -I./sys

CC=gcc   
CFLAGS=-c -Wall $(IDIRS) 

#CXX=g++
#CXXFLAGS=-c -Wall $(IDIRS) 

LDFLAGS=
#LDLIBS= -L./libs/sdl/include -L./libs/sdl/include/SDL -L./libs/sdl/libs -lSDLmain -lSDL
LDLIBS= -L./libs/sdl/libs -lmingw32 -lSDLmain -lSDL 
#LDLIBS= -lmingw32


# all source subdirs for linker and compilator
VPATH = ./ sys libs libs/sdl libs/sdl/libs

all : bc_pc_emu_c.exe

bc_pc_emu_c.exe : bc_pc_emu_c.o app_timer.o hal.o  
	$(CC) -o bc_pc_emu_c.exe bc_pc_emu_c.o app_timer.o hal.o


clean:
	rm -f bc_pc_emu_c.exe bc_pc_emu_c.o app_timer.o hal.o



##########################################################
### Working base 

## headers subdirs
#IDIRS = -I. -I./display -I./sensor -I./sound  -I./sys  -I./vario
#
#CC=gcc   
#CFLAGS=-c -Wall $(IDIRS) 
#
##CXX=g++
##CXXFLAGS=-c -Wall $(IDIRS) 
#
#LDFLAGS=
#LDLIBS=
#
## all source subdirs for linker and compilator
#VPATH = ./ display sensor sound sys vario
#
#all : vario_emu_pc.exe
#
#vario_emu_pc.exe : vario_emu_pc.o display.o BP085.o sensor.o sound.o app_timer.o hal.o calc.o  
#	$(CC) -o vario_emu_pc.exe vario_emu_pc.o display.o BP085.o sensor.o sound.o app_timer.o hal.o calc.o




