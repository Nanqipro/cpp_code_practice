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
CMAKE_SOURCE_DIR = C:\Users\86188\Desktop\c-language-practice\xxx_law

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\86188\Desktop\c-language-practice\xxx_law\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/xxx_law.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/xxx_law.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/xxx_law.dir/flags.make

CMakeFiles/xxx_law.dir/main.cpp.obj: CMakeFiles/xxx_law.dir/flags.make
CMakeFiles/xxx_law.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\86188\Desktop\c-language-practice\xxx_law\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/xxx_law.dir/main.cpp.obj"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\xxx_law.dir\main.cpp.obj -c C:\Users\86188\Desktop\c-language-practice\xxx_law\main.cpp

CMakeFiles/xxx_law.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/xxx_law.dir/main.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\86188\Desktop\c-language-practice\xxx_law\main.cpp > CMakeFiles\xxx_law.dir\main.cpp.i

CMakeFiles/xxx_law.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/xxx_law.dir/main.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\86188\Desktop\c-language-practice\xxx_law\main.cpp -o CMakeFiles\xxx_law.dir\main.cpp.s

# Object files for target xxx_law
xxx_law_OBJECTS = \
"CMakeFiles/xxx_law.dir/main.cpp.obj"

# External object files for target xxx_law
xxx_law_EXTERNAL_OBJECTS =

xxx_law.exe: CMakeFiles/xxx_law.dir/main.cpp.obj
xxx_law.exe: CMakeFiles/xxx_law.dir/build.make
xxx_law.exe: CMakeFiles/xxx_law.dir/linklibs.rsp
xxx_law.exe: CMakeFiles/xxx_law.dir/objects1.rsp
xxx_law.exe: CMakeFiles/xxx_law.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\86188\Desktop\c-language-practice\xxx_law\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable xxx_law.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\xxx_law.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/xxx_law.dir/build: xxx_law.exe

.PHONY : CMakeFiles/xxx_law.dir/build

CMakeFiles/xxx_law.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\xxx_law.dir\cmake_clean.cmake
.PHONY : CMakeFiles/xxx_law.dir/clean

CMakeFiles/xxx_law.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\86188\Desktop\c-language-practice\xxx_law C:\Users\86188\Desktop\c-language-practice\xxx_law C:\Users\86188\Desktop\c-language-practice\xxx_law\cmake-build-debug C:\Users\86188\Desktop\c-language-practice\xxx_law\cmake-build-debug C:\Users\86188\Desktop\c-language-practice\xxx_law\cmake-build-debug\CMakeFiles\xxx_law.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/xxx_law.dir/depend
