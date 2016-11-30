UNAME = $(shell uname)

#OBJS specifies which files to compile as part of the project
#Should be added everytiem


OBJS = textoutput.o Text_log.o t_characteristic.o attribute.o skill.o item.o inventory.o character.o main.o


#CC specifies which compiler we're using
CC = g++

#INCLUDE_PATHS specifies the additional include paths we'll need
INCLUDE_PATHS = -IC:\mingw_dev_lib\include\SDL2

#LIBRARY_PATHS specifies the additional library paths we'll need
LIBRARY_PATHS = -LC:\mingw_dev_lib\lib

#COMPILER_FLAGS specifies the additional compilation options we're using
# -w suppresses all warnings
# -Wall enables "all" warnings
# -Wextra enables additional warnings
# according to http://stackoverflow.com/a/12247461  there is much more
# -Wl,-subsystem,windows gets rid of the console window
COMPILER_FLAGS = -Wall -Wextra 
#-Wl,-subsystem,windows

#LINKER_FLAGS specifies the libraries we're linking against
LINKER_FLAGS = -lmingw32 -lSDL2main -lSDL2

#OBJ_NAME specifies the name of our exectuable
#OBJ_NAME = 01_hello_SDL

#This is the target that compiles our executable
all: hello 
#	echo $(UNAME)
#Crossplatforming here!!
ifeq ($(UNAME), Windows_NT)

hello: $(OBJS)
	$(CC) $(OBJS) $(INCLUDE_PATHS) $(LIBRARY_PATHS)  $(LINKER_FLAGS) -o Jack

else 
# ifeq ($(UNAME), Linux)
# RIGHT HERE!!
hello: $(OBJS)
	$(CC) $(OBJS) -o Jack

endif

item.o: item.cpp item.h
	$(CC) -c item.cpp $(COMPILER_FLAGS) 
inventory.o: inventory.cpp inventory.h
	$(CC) -c inventory.cpp $(COMPILER_FLAGS) 
t_characteristic.o: t_characteristic.cpp t_characteristic.h
	$(CC) -c t_characteristic.cpp $(COMPILER_FLAGS) 
attribute.o: attribute.cpp attribute.h
	$(CC) -c attribute.cpp $(COMPILER_FLAGS) 
Text_log.o: Text_log.cpp Text_log.h
	$(CC) -c Text_log.cpp $(COMPILER_FLAGS) 
skill.o: skill.cpp skill.h
	$(CC) -c skill.cpp $(COMPILER_FLAGS) 
character.o: character.cpp character.h
	$(CC) -c character.cpp $(COMPILER_FLAGS) 
textoutput.o: textoutput.cpp textoutput.h 
	$(CC) -c textoutput.cpp $(COMPILER_FLAGS) 
main.o: main.cpp main.h 
	$(CC) -c main.cpp $(COMPILER_FLAGS) 

clean: 
	rm *.o *.exe