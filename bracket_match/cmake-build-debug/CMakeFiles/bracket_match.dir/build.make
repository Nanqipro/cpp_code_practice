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
CMAKE_SOURCE_DIR = C:\Users\86188\Desktop\c-language-practice\bracket_match

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\86188\Desktop\c-language-practice\bracket_match\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/bracket_match.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/bracket_match.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/bracket_match.dir/flags.make

CMakeFiles/bracket_match.dir/main.cpp.obj: CMakeFiles/bracket_match.dir/flags.make
CMakeFiles/bracket_match.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\86188\Desktop\c-language-practice\bracket_match\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/bracket_match.dir/main.cpp.obj"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\bracket_match.dir\main.cpp.obj -c C:\Users\86188\Desktop\c-language-practice\bracket_match\main.cpp

CMakeFiles/bracket_match.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bracket_match.dir/main.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\86188\Desktop\c-language-practice\bracket_match\main.cpp > CMakeFiles\bracket_match.dir\main.cpp.i

CMakeFiles/bracket_match.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bracket_match.dir/main.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\86188\Desktop\c-language-practice\bracket_match\main.cpp -o CMakeFiles\bracket_match.dir\main.cpp.s

# Object files for target bracket_match
bracket_match_OBJECTS = \
"CMakeFiles/bracket_match.dir/main.cpp.obj"

# External object files for target bracket_match
bracket_match_EXTERNAL_OBJECTS =

bracket_match.exe: CMakeFiles/bracket_match.dir/main.cpp.obj
bracket_match.exe: CMakeFiles/bracket_match.dir/build.make
bracket_match.exe: CMakeFiles/bracket_match.dir/linklibs.rsp
bracket_match.exe: CMakeFiles/bracket_match.dir/objects1.rsp
bracket_match.exe: CMakeFiles/bracket_match.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\86188\Desktop\c-language-practice\bracket_match\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable bracket_match.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\bracket_match.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/bracket_match.dir/build: bracket_match.exe

.PHONY : CMakeFiles/bracket_match.dir/build

CMakeFiles/bracket_match.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\bracket_match.dir\cmake_clean.cmake
.PHONY : CMakeFiles/bracket_match.dir/clean

CMakeFiles/bracket_match.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\86188\Desktop\c-language-practice\bracket_match C:\Users\86188\Desktop\c-language-practice\bracket_match C:\Users\86188\Desktop\c-language-practice\bracket_match\cmake-build-debug C:\Users\86188\Desktop\c-language-practice\bracket_match\cmake-build-debug C:\Users\86188\Desktop\c-language-practice\bracket_match\cmake-build-debug\CMakeFiles\bracket_match.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/bracket_match.dir/depend

