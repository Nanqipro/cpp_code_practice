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
CMAKE_SOURCE_DIR = C:\Users\86188\Desktop\c-language-practice\Grading

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\86188\Desktop\c-language-practice\Grading\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Grading.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Grading.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Grading.dir/flags.make

CMakeFiles/Grading.dir/main.cpp.obj: CMakeFiles/Grading.dir/flags.make
CMakeFiles/Grading.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\86188\Desktop\c-language-practice\Grading\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Grading.dir/main.cpp.obj"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Grading.dir\main.cpp.obj -c C:\Users\86188\Desktop\c-language-practice\Grading\main.cpp

CMakeFiles/Grading.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Grading.dir/main.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\86188\Desktop\c-language-practice\Grading\main.cpp > CMakeFiles\Grading.dir\main.cpp.i

CMakeFiles/Grading.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Grading.dir/main.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\86188\Desktop\c-language-practice\Grading\main.cpp -o CMakeFiles\Grading.dir\main.cpp.s

# Object files for target Grading
Grading_OBJECTS = \
"CMakeFiles/Grading.dir/main.cpp.obj"

# External object files for target Grading
Grading_EXTERNAL_OBJECTS =

Grading.exe: CMakeFiles/Grading.dir/main.cpp.obj
Grading.exe: CMakeFiles/Grading.dir/build.make
Grading.exe: CMakeFiles/Grading.dir/linklibs.rsp
Grading.exe: CMakeFiles/Grading.dir/objects1.rsp
Grading.exe: CMakeFiles/Grading.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\86188\Desktop\c-language-practice\Grading\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Grading.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Grading.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Grading.dir/build: Grading.exe

.PHONY : CMakeFiles/Grading.dir/build

CMakeFiles/Grading.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Grading.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Grading.dir/clean

CMakeFiles/Grading.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\86188\Desktop\c-language-practice\Grading C:\Users\86188\Desktop\c-language-practice\Grading C:\Users\86188\Desktop\c-language-practice\Grading\cmake-build-debug C:\Users\86188\Desktop\c-language-practice\Grading\cmake-build-debug C:\Users\86188\Desktop\c-language-practice\Grading\cmake-build-debug\CMakeFiles\Grading.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Grading.dir/depend

