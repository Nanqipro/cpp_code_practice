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
CMAKE_SOURCE_DIR = C:\Users\86188\Desktop\c-language-practice\date_class

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\86188\Desktop\c-language-practice\date_class\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/date_class.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/date_class.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/date_class.dir/flags.make

CMakeFiles/date_class.dir/main.cpp.obj: CMakeFiles/date_class.dir/flags.make
CMakeFiles/date_class.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\86188\Desktop\c-language-practice\date_class\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/date_class.dir/main.cpp.obj"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\date_class.dir\main.cpp.obj -c C:\Users\86188\Desktop\c-language-practice\date_class\main.cpp

CMakeFiles/date_class.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/date_class.dir/main.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\86188\Desktop\c-language-practice\date_class\main.cpp > CMakeFiles\date_class.dir\main.cpp.i

CMakeFiles/date_class.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/date_class.dir/main.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\86188\Desktop\c-language-practice\date_class\main.cpp -o CMakeFiles\date_class.dir\main.cpp.s

# Object files for target date_class
date_class_OBJECTS = \
"CMakeFiles/date_class.dir/main.cpp.obj"

# External object files for target date_class
date_class_EXTERNAL_OBJECTS =

date_class.exe: CMakeFiles/date_class.dir/main.cpp.obj
date_class.exe: CMakeFiles/date_class.dir/build.make
date_class.exe: CMakeFiles/date_class.dir/linklibs.rsp
date_class.exe: CMakeFiles/date_class.dir/objects1.rsp
date_class.exe: CMakeFiles/date_class.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\86188\Desktop\c-language-practice\date_class\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable date_class.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\date_class.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/date_class.dir/build: date_class.exe

.PHONY : CMakeFiles/date_class.dir/build

CMakeFiles/date_class.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\date_class.dir\cmake_clean.cmake
.PHONY : CMakeFiles/date_class.dir/clean

CMakeFiles/date_class.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\86188\Desktop\c-language-practice\date_class C:\Users\86188\Desktop\c-language-practice\date_class C:\Users\86188\Desktop\c-language-practice\date_class\cmake-build-debug C:\Users\86188\Desktop\c-language-practice\date_class\cmake-build-debug C:\Users\86188\Desktop\c-language-practice\date_class\cmake-build-debug\CMakeFiles\date_class.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/date_class.dir/depend

