# headers subdirs
IDIRS = -I. -I./sys

CC=gcc   
CFLAGS=-c -Wall $(IDIRS) 

#CXX=g++
#CXXFLAGS=-c -Wall $(IDIRS) 

LDFLAGS=
LDLIBS=

# all source subdirs for linker and compilator
VPATH = ./ sys 

all : bc_pc_emu_c.exe

bc_pc_emu_c.exe : bc_pc_emu_c.o app_timer.o hal.o  
	$(CC) -o bc_pc_emu_c.exe bc_pc_emu_c.o app_timer.o hal.o




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


################################################
### Example from eclipse executable c

# -O0 -g3 -Wall -c -fmessage-length=0
# C:/MinGW/include
# C:/MinGW/lib/gcc/mingw32/4.5.0/include
# C:/MinGW/lib/gcc/mingw32/4.5.0/include-fixed


