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
CMAKE_SOURCE_DIR = C:\Users\86188\Desktop\c-language-practice\OJAaddB

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\86188\Desktop\c-language-practice\OJAaddB\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/OJAaddB.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/OJAaddB.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/OJAaddB.dir/flags.make

CMakeFiles/OJAaddB.dir/main.c.obj: CMakeFiles/OJAaddB.dir/flags.make
CMakeFiles/OJAaddB.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\86188\Desktop\c-language-practice\OJAaddB\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/OJAaddB.dir/main.c.obj"
	C:\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\OJAaddB.dir\main.c.obj -c C:\Users\86188\Desktop\c-language-practice\OJAaddB\main.c

CMakeFiles/OJAaddB.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/OJAaddB.dir/main.c.i"
	C:\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\86188\Desktop\c-language-practice\OJAaddB\main.c > CMakeFiles\OJAaddB.dir\main.c.i

CMakeFiles/OJAaddB.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/OJAaddB.dir/main.c.s"
	C:\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\86188\Desktop\c-language-practice\OJAaddB\main.c -o CMakeFiles\OJAaddB.dir\main.c.s

# Object files for target OJAaddB
OJAaddB_OBJECTS = \
"CMakeFiles/OJAaddB.dir/main.c.obj"

# External object files for target OJAaddB
OJAaddB_EXTERNAL_OBJECTS =

OJAaddB.exe: CMakeFiles/OJAaddB.dir/main.c.obj
OJAaddB.exe: CMakeFiles/OJAaddB.dir/build.make
OJAaddB.exe: CMakeFiles/OJAaddB.dir/linklibs.rsp
OJAaddB.exe: CMakeFiles/OJAaddB.dir/objects1.rsp
OJAaddB.exe: CMakeFiles/OJAaddB.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\86188\Desktop\c-language-practice\OJAaddB\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable OJAaddB.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\OJAaddB.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/OJAaddB.dir/build: OJAaddB.exe

.PHONY : CMakeFiles/OJAaddB.dir/build

CMakeFiles/OJAaddB.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\OJAaddB.dir\cmake_clean.cmake
.PHONY : CMakeFiles/OJAaddB.dir/clean

CMakeFiles/OJAaddB.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\86188\Desktop\c-language-practice\OJAaddB C:\Users\86188\Desktop\c-language-practice\OJAaddB C:\Users\86188\Desktop\c-language-practice\OJAaddB\cmake-build-debug C:\Users\86188\Desktop\c-language-practice\OJAaddB\cmake-build-debug C:\Users\86188\Desktop\c-language-practice\OJAaddB\cmake-build-debug\CMakeFiles\OJAaddB.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/OJAaddB.dir/depend
