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
CMAKE_SOURCE_DIR = C:\Users\86188\Desktop\c-language-practice\find_multiple

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\86188\Desktop\c-language-practice\find_multiple\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/find_multiple.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/find_multiple.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/find_multiple.dir/flags.make

CMakeFiles/find_multiple.dir/main.cpp.obj: CMakeFiles/find_multiple.dir/flags.make
CMakeFiles/find_multiple.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\86188\Desktop\c-language-practice\find_multiple\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/find_multiple.dir/main.cpp.obj"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\find_multiple.dir\main.cpp.obj -c C:\Users\86188\Desktop\c-language-practice\find_multiple\main.cpp

CMakeFiles/find_multiple.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/find_multiple.dir/main.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\86188\Desktop\c-language-practice\find_multiple\main.cpp > CMakeFiles\find_multiple.dir\main.cpp.i

CMakeFiles/find_multiple.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/find_multiple.dir/main.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\86188\Desktop\c-language-practice\find_multiple\main.cpp -o CMakeFiles\find_multiple.dir\main.cpp.s

# Object files for target find_multiple
find_multiple_OBJECTS = \
"CMakeFiles/find_multiple.dir/main.cpp.obj"

# External object files for target find_multiple
find_multiple_EXTERNAL_OBJECTS =

find_multiple.exe: CMakeFiles/find_multiple.dir/main.cpp.obj
find_multiple.exe: CMakeFiles/find_multiple.dir/build.make
find_multiple.exe: CMakeFiles/find_multiple.dir/linklibs.rsp
find_multiple.exe: CMakeFiles/find_multiple.dir/objects1.rsp
find_multiple.exe: CMakeFiles/find_multiple.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\86188\Desktop\c-language-practice\find_multiple\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable find_multiple.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\find_multiple.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/find_multiple.dir/build: find_multiple.exe

.PHONY : CMakeFiles/find_multiple.dir/build

CMakeFiles/find_multiple.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\find_multiple.dir\cmake_clean.cmake
.PHONY : CMakeFiles/find_multiple.dir/clean

CMakeFiles/find_multiple.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\86188\Desktop\c-language-practice\find_multiple C:\Users\86188\Desktop\c-language-practice\find_multiple C:\Users\86188\Desktop\c-language-practice\find_multiple\cmake-build-debug C:\Users\86188\Desktop\c-language-practice\find_multiple\cmake-build-debug C:\Users\86188\Desktop\c-language-practice\find_multiple\cmake-build-debug\CMakeFiles\find_multiple.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/find_multiple.dir/depend
