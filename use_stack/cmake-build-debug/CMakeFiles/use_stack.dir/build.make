# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.1.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.1.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\86188\Desktop\c-language-practice\use_stack

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\86188\Desktop\c-language-practice\use_stack\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/use_stack.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/use_stack.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/use_stack.dir/flags.make

CMakeFiles/use_stack.dir/main.cpp.obj: CMakeFiles/use_stack.dir/flags.make
CMakeFiles/use_stack.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\86188\Desktop\c-language-practice\use_stack\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/use_stack.dir/main.cpp.obj"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\use_stack.dir\main.cpp.obj -c C:\Users\86188\Desktop\c-language-practice\use_stack\main.cpp

CMakeFiles/use_stack.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/use_stack.dir/main.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\86188\Desktop\c-language-practice\use_stack\main.cpp > CMakeFiles\use_stack.dir\main.cpp.i

CMakeFiles/use_stack.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/use_stack.dir/main.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\86188\Desktop\c-language-practice\use_stack\main.cpp -o CMakeFiles\use_stack.dir\main.cpp.s

# Object files for target use_stack
use_stack_OBJECTS = \
"CMakeFiles/use_stack.dir/main.cpp.obj"

# External object files for target use_stack
use_stack_EXTERNAL_OBJECTS =

use_stack.exe: CMakeFiles/use_stack.dir/main.cpp.obj
use_stack.exe: CMakeFiles/use_stack.dir/build.make
use_stack.exe: CMakeFiles/use_stack.dir/linklibs.rsp
use_stack.exe: CMakeFiles/use_stack.dir/objects1.rsp
use_stack.exe: CMakeFiles/use_stack.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\86188\Desktop\c-language-practice\use_stack\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable use_stack.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\use_stack.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/use_stack.dir/build: use_stack.exe

.PHONY : CMakeFiles/use_stack.dir/build

CMakeFiles/use_stack.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\use_stack.dir\cmake_clean.cmake
.PHONY : CMakeFiles/use_stack.dir/clean

CMakeFiles/use_stack.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\86188\Desktop\c-language-practice\use_stack C:\Users\86188\Desktop\c-language-practice\use_stack C:\Users\86188\Desktop\c-language-practice\use_stack\cmake-build-debug C:\Users\86188\Desktop\c-language-practice\use_stack\cmake-build-debug C:\Users\86188\Desktop\c-language-practice\use_stack\cmake-build-debug\CMakeFiles\use_stack.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/use_stack.dir/depend

