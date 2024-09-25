# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -std=c++17 -Wall -Wextra

# Executable name
EXEC = MobileApp

# Source files
SRCS = main.cpp mobile.cpp

# Object files (automatically generated from SRCS)
OBJS = $(SRCS:.cpp=.o)

# Default target, the final executable
all: $(EXEC)

# Rule to link the object files and create the executable
$(EXEC): $(OBJS)
	$(CXX) $(OBJS) -o $(EXEC)

# Rule to compile source files into object files
%.o: %.cpp mobile.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up object files and the executable
clean:
	rm -f $(OBJS) $(EXEC)

# Phony targets (these are not files)
.PHONY: all clean

