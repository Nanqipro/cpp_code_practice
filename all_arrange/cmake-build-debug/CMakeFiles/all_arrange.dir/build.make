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
CMAKE_SOURCE_DIR = C:\Users\86188\Desktop\c-language-practice\all_arrange

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\86188\Desktop\c-language-practice\all_arrange\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/all_arrange.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/all_arrange.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/all_arrange.dir/flags.make

CMakeFiles/all_arrange.dir/main.cpp.obj: CMakeFiles/all_arrange.dir/flags.make
CMakeFiles/all_arrange.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\86188\Desktop\c-language-practice\all_arrange\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/all_arrange.dir/main.cpp.obj"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\all_arrange.dir\main.cpp.obj -c C:\Users\86188\Desktop\c-language-practice\all_arrange\main.cpp

CMakeFiles/all_arrange.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/all_arrange.dir/main.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\86188\Desktop\c-language-practice\all_arrange\main.cpp > CMakeFiles\all_arrange.dir\main.cpp.i

CMakeFiles/all_arrange.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/all_arrange.dir/main.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\86188\Desktop\c-language-practice\all_arrange\main.cpp -o CMakeFiles\all_arrange.dir\main.cpp.s

# Object files for target all_arrange
all_arrange_OBJECTS = \
"CMakeFiles/all_arrange.dir/main.cpp.obj"

# External object files for target all_arrange
all_arrange_EXTERNAL_OBJECTS =

all_arrange.exe: CMakeFiles/all_arrange.dir/main.cpp.obj
all_arrange.exe: CMakeFiles/all_arrange.dir/build.make
all_arrange.exe: CMakeFiles/all_arrange.dir/linklibs.rsp
all_arrange.exe: CMakeFiles/all_arrange.dir/objects1.rsp
all_arrange.exe: CMakeFiles/all_arrange.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\86188\Desktop\c-language-practice\all_arrange\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable all_arrange.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\all_arrange.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/all_arrange.dir/build: all_arrange.exe

.PHONY : CMakeFiles/all_arrange.dir/build

CMakeFiles/all_arrange.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\all_arrange.dir\cmake_clean.cmake
.PHONY : CMakeFiles/all_arrange.dir/clean

CMakeFiles/all_arrange.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\86188\Desktop\c-language-practice\all_arrange C:\Users\86188\Desktop\c-language-practice\all_arrange C:\Users\86188\Desktop\c-language-practice\all_arrange\cmake-build-debug C:\Users\86188\Desktop\c-language-practice\all_arrange\cmake-build-debug C:\Users\86188\Desktop\c-language-practice\all_arrange\cmake-build-debug\CMakeFiles\all_arrange.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/all_arrange.dir/depend

