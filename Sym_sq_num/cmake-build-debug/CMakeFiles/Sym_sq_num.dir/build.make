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
CMAKE_SOURCE_DIR = C:\Users\86188\Desktop\c-language-practice\Sym_sq_num

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\86188\Desktop\c-language-practice\Sym_sq_num\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Sym_sq_num.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Sym_sq_num.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Sym_sq_num.dir/flags.make

CMakeFiles/Sym_sq_num.dir/main.cpp.obj: CMakeFiles/Sym_sq_num.dir/flags.make
CMakeFiles/Sym_sq_num.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\86188\Desktop\c-language-practice\Sym_sq_num\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Sym_sq_num.dir/main.cpp.obj"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Sym_sq_num.dir\main.cpp.obj -c C:\Users\86188\Desktop\c-language-practice\Sym_sq_num\main.cpp

CMakeFiles/Sym_sq_num.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Sym_sq_num.dir/main.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\86188\Desktop\c-language-practice\Sym_sq_num\main.cpp > CMakeFiles\Sym_sq_num.dir\main.cpp.i

CMakeFiles/Sym_sq_num.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Sym_sq_num.dir/main.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\86188\Desktop\c-language-practice\Sym_sq_num\main.cpp -o CMakeFiles\Sym_sq_num.dir\main.cpp.s

# Object files for target Sym_sq_num
Sym_sq_num_OBJECTS = \
"CMakeFiles/Sym_sq_num.dir/main.cpp.obj"

# External object files for target Sym_sq_num
Sym_sq_num_EXTERNAL_OBJECTS =

Sym_sq_num.exe: CMakeFiles/Sym_sq_num.dir/main.cpp.obj
Sym_sq_num.exe: CMakeFiles/Sym_sq_num.dir/build.make
Sym_sq_num.exe: CMakeFiles/Sym_sq_num.dir/linklibs.rsp
Sym_sq_num.exe: CMakeFiles/Sym_sq_num.dir/objects1.rsp
Sym_sq_num.exe: CMakeFiles/Sym_sq_num.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\86188\Desktop\c-language-practice\Sym_sq_num\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Sym_sq_num.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Sym_sq_num.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Sym_sq_num.dir/build: Sym_sq_num.exe

.PHONY : CMakeFiles/Sym_sq_num.dir/build

CMakeFiles/Sym_sq_num.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Sym_sq_num.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Sym_sq_num.dir/clean

CMakeFiles/Sym_sq_num.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\86188\Desktop\c-language-practice\Sym_sq_num C:\Users\86188\Desktop\c-language-practice\Sym_sq_num C:\Users\86188\Desktop\c-language-practice\Sym_sq_num\cmake-build-debug C:\Users\86188\Desktop\c-language-practice\Sym_sq_num\cmake-build-debug C:\Users\86188\Desktop\c-language-practice\Sym_sq_num\cmake-build-debug\CMakeFiles\Sym_sq_num.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Sym_sq_num.dir/depend

