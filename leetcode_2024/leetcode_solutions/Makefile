# Solution directory
# change this and compile example range-sum-of-sorted-subarray-sums-leetcode. keep space at beginning and no space at end
SOLUTIONS_DIR = determine-if-two-strings-are-close-leetcode

# Compiler and flags
CXX = C:\MinGW\bin\g++.exe  # Adjust if you're using a different compiler
CXXFLAGS = -std=c++17 -Iinclude

# Directories
INCLUDE_DIR = include
SRC_DIR = src
OBJ_DIR = obj

# Source files
SRC = $(shell find $(SRC_DIR) -name "*.cpp")
OBJ = $(SRC:$(SRC_DIR)\%.cpp=$(OBJ_DIR)\%.o)

# Solution files
SOLUTIONS = $(wildcard $(SOLUTIONS_DIR)\*.cpp)

# Build target
all: $(SOLUTIONS:$(SOLUTIONS_DIR)\%.cpp=%)

# Rule to build object files from src and include
$(OBJ_DIR)\%.o: $(SRC_DIR)\%.cpp
    @if not exist "$(OBJ_DIR)" mkdir "$(OBJ_DIR)"
    $(CXX) $(CXXFLAGS) -c $< -o $@

# Rule to build each executable from solution file and precompiled objects
%: $(OBJ) $(SOLUTIONS_DIR)\%.cpp
    $(CXX) $(CXXFLAGS) $(OBJ) $(SOLUTIONS_DIR)\$@.cpp -o $@

# Clean up
clean:
    rm -f $(OBJ_DIR)\*.o $(SOLUTIONS:$(SOLUTIONS_DIR)\%.cpp=%)

# Phony targets
.PHONY: all clean