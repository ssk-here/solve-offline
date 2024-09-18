# Main file
#MAINFILE ?= WEEK1/binary-tree-paths
MAINFILE ?= WEEK0/sample

# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -Iinclude -Wall -g

# Source and object files
SRCS = $(wildcard src/*.cpp)
MAINCPP = $(MAINFILE).cpp
OBJS = $(patsubst src/%.cpp, obj/%.o, $(SRCS))

# Target executable
TARGET = $(MAINFILE).exe

# Default rule
all: $(TARGET)

# Linking
$(TARGET): $(OBJS) $(MAINCPP)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Compilation
obj/%.o: src/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up
clean:
	@echo "OBJS = $(OBJS)"
	del $(TARGET)
	del $(OBJS)

.PHONY: all clean