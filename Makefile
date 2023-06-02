EXE := example

vpath %.cpp src
vpath %.h include

T := g++

FLA := -Iinclude -MMD -MP -Wall
FLA1 := -Llib -pie -fpie
FLA3 := -lm

SRC := main.cpp point.cpp shape.cpp rectangle.cpp circle.cpp square.cpp rotatable.cpp 

OBJ := $(SRC:.cpp=.o)

REBUILDABLES = $(OBJ) $(OBJ:.o=.d)

.DEFAULT_GOAL := all

.PHONY: all clean

clean :
	rm -f $(REBUILDABLES)
	rm -f -r ./build || echo " [ i ] build directory does not exist"

all : $(EXE)
	mkdir build || echo " [ i ] build directory was already created"
	mv $(EXE) ./build/$(EXE)

$(EXE): $(OBJ)
	$(T) $(FLA1) $^ $(FLA3) -o $@

%.o : %.cpp
	$(T) $(FLA) -c $< -o $@

-include $(OBJ:.o=.d)
