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
CMAKE_SOURCE_DIR = C:\Users\86188\Desktop\c-language-practice\n_factorial

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\86188\Desktop\c-language-practice\n_factorial\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/n_factorial.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/n_factorial.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/n_factorial.dir/flags.make

CMakeFiles/n_factorial.dir/main.cpp.obj: CMakeFiles/n_factorial.dir/flags.make
CMakeFiles/n_factorial.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\86188\Desktop\c-language-practice\n_factorial\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/n_factorial.dir/main.cpp.obj"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\n_factorial.dir\main.cpp.obj -c C:\Users\86188\Desktop\c-language-practice\n_factorial\main.cpp

CMakeFiles/n_factorial.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/n_factorial.dir/main.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\86188\Desktop\c-language-practice\n_factorial\main.cpp > CMakeFiles\n_factorial.dir\main.cpp.i

CMakeFiles/n_factorial.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/n_factorial.dir/main.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\86188\Desktop\c-language-practice\n_factorial\main.cpp -o CMakeFiles\n_factorial.dir\main.cpp.s

# Object files for target n_factorial
n_factorial_OBJECTS = \
"CMakeFiles/n_factorial.dir/main.cpp.obj"

# External object files for target n_factorial
n_factorial_EXTERNAL_OBJECTS =

n_factorial.exe: CMakeFiles/n_factorial.dir/main.cpp.obj
n_factorial.exe: CMakeFiles/n_factorial.dir/build.make
n_factorial.exe: CMakeFiles/n_factorial.dir/linklibs.rsp
n_factorial.exe: CMakeFiles/n_factorial.dir/objects1.rsp
n_factorial.exe: CMakeFiles/n_factorial.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\86188\Desktop\c-language-practice\n_factorial\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable n_factorial.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\n_factorial.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/n_factorial.dir/build: n_factorial.exe

.PHONY : CMakeFiles/n_factorial.dir/build

CMakeFiles/n_factorial.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\n_factorial.dir\cmake_clean.cmake
.PHONY : CMakeFiles/n_factorial.dir/clean

CMakeFiles/n_factorial.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\86188\Desktop\c-language-practice\n_factorial C:\Users\86188\Desktop\c-language-practice\n_factorial C:\Users\86188\Desktop\c-language-practice\n_factorial\cmake-build-debug C:\Users\86188\Desktop\c-language-practice\n_factorial\cmake-build-debug C:\Users\86188\Desktop\c-language-practice\n_factorial\cmake-build-debug\CMakeFiles\n_factorial.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/n_factorial.dir/depend

