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
CMAKE_SOURCE_DIR = C:\Users\86188\Desktop\c-language-practice\compute_letter

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\86188\Desktop\c-language-practice\compute_letter\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/compute_letter.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/compute_letter.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/compute_letter.dir/flags.make

CMakeFiles/compute_letter.dir/main.cpp.obj: CMakeFiles/compute_letter.dir/flags.make
CMakeFiles/compute_letter.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\86188\Desktop\c-language-practice\compute_letter\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/compute_letter.dir/main.cpp.obj"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\compute_letter.dir\main.cpp.obj -c C:\Users\86188\Desktop\c-language-practice\compute_letter\main.cpp

CMakeFiles/compute_letter.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/compute_letter.dir/main.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\86188\Desktop\c-language-practice\compute_letter\main.cpp > CMakeFiles\compute_letter.dir\main.cpp.i

CMakeFiles/compute_letter.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/compute_letter.dir/main.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\86188\Desktop\c-language-practice\compute_letter\main.cpp -o CMakeFiles\compute_letter.dir\main.cpp.s

# Object files for target compute_letter
compute_letter_OBJECTS = \
"CMakeFiles/compute_letter.dir/main.cpp.obj"

# External object files for target compute_letter
compute_letter_EXTERNAL_OBJECTS =

compute_letter.exe: CMakeFiles/compute_letter.dir/main.cpp.obj
compute_letter.exe: CMakeFiles/compute_letter.dir/build.make
compute_letter.exe: CMakeFiles/compute_letter.dir/linklibs.rsp
compute_letter.exe: CMakeFiles/compute_letter.dir/objects1.rsp
compute_letter.exe: CMakeFiles/compute_letter.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\86188\Desktop\c-language-practice\compute_letter\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable compute_letter.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\compute_letter.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/compute_letter.dir/build: compute_letter.exe

.PHONY : CMakeFiles/compute_letter.dir/build

CMakeFiles/compute_letter.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\compute_letter.dir\cmake_clean.cmake
.PHONY : CMakeFiles/compute_letter.dir/clean

CMakeFiles/compute_letter.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\86188\Desktop\c-language-practice\compute_letter C:\Users\86188\Desktop\c-language-practice\compute_letter C:\Users\86188\Desktop\c-language-practice\compute_letter\cmake-build-debug C:\Users\86188\Desktop\c-language-practice\compute_letter\cmake-build-debug C:\Users\86188\Desktop\c-language-practice\compute_letter\cmake-build-debug\CMakeFiles\compute_letter.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/compute_letter.dir/depend

