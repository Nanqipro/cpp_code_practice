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
CMAKE_SOURCE_DIR = C:\Users\86188\Desktop\c-language-practice\print_way

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\86188\Desktop\c-language-practice\print_way\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/print_way.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/print_way.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/print_way.dir/flags.make

CMakeFiles/print_way.dir/main.cpp.obj: CMakeFiles/print_way.dir/flags.make
CMakeFiles/print_way.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\86188\Desktop\c-language-practice\print_way\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/print_way.dir/main.cpp.obj"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\print_way.dir\main.cpp.obj -c C:\Users\86188\Desktop\c-language-practice\print_way\main.cpp

CMakeFiles/print_way.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/print_way.dir/main.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\86188\Desktop\c-language-practice\print_way\main.cpp > CMakeFiles\print_way.dir\main.cpp.i

CMakeFiles/print_way.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/print_way.dir/main.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\86188\Desktop\c-language-practice\print_way\main.cpp -o CMakeFiles\print_way.dir\main.cpp.s

# Object files for target print_way
print_way_OBJECTS = \
"CMakeFiles/print_way.dir/main.cpp.obj"

# External object files for target print_way
print_way_EXTERNAL_OBJECTS =

print_way.exe: CMakeFiles/print_way.dir/main.cpp.obj
print_way.exe: CMakeFiles/print_way.dir/build.make
print_way.exe: CMakeFiles/print_way.dir/linklibs.rsp
print_way.exe: CMakeFiles/print_way.dir/objects1.rsp
print_way.exe: CMakeFiles/print_way.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\86188\Desktop\c-language-practice\print_way\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable print_way.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\print_way.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/print_way.dir/build: print_way.exe

.PHONY : CMakeFiles/print_way.dir/build

CMakeFiles/print_way.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\print_way.dir\cmake_clean.cmake
.PHONY : CMakeFiles/print_way.dir/clean

CMakeFiles/print_way.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\86188\Desktop\c-language-practice\print_way C:\Users\86188\Desktop\c-language-practice\print_way C:\Users\86188\Desktop\c-language-practice\print_way\cmake-build-debug C:\Users\86188\Desktop\c-language-practice\print_way\cmake-build-debug C:\Users\86188\Desktop\c-language-practice\print_way\cmake-build-debug\CMakeFiles\print_way.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/print_way.dir/depend

