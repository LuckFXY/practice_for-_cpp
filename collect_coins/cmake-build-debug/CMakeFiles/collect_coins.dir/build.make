# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.8

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2017.2.1\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2017.2.1\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = F:\GitHub\practice_for_cpp\collect_coins

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = F:\GitHub\practice_for_cpp\collect_coins\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/collect_coins.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/collect_coins.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/collect_coins.dir/flags.make

CMakeFiles/collect_coins.dir/main.cpp.obj: CMakeFiles/collect_coins.dir/flags.make
CMakeFiles/collect_coins.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\GitHub\practice_for_cpp\collect_coins\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/collect_coins.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\collect_coins.dir\main.cpp.obj -c F:\GitHub\practice_for_cpp\collect_coins\main.cpp

CMakeFiles/collect_coins.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/collect_coins.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E F:\GitHub\practice_for_cpp\collect_coins\main.cpp > CMakeFiles\collect_coins.dir\main.cpp.i

CMakeFiles/collect_coins.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/collect_coins.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S F:\GitHub\practice_for_cpp\collect_coins\main.cpp -o CMakeFiles\collect_coins.dir\main.cpp.s

CMakeFiles/collect_coins.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/collect_coins.dir/main.cpp.obj.requires

CMakeFiles/collect_coins.dir/main.cpp.obj.provides: CMakeFiles/collect_coins.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\collect_coins.dir\build.make CMakeFiles/collect_coins.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/collect_coins.dir/main.cpp.obj.provides

CMakeFiles/collect_coins.dir/main.cpp.obj.provides.build: CMakeFiles/collect_coins.dir/main.cpp.obj


# Object files for target collect_coins
collect_coins_OBJECTS = \
"CMakeFiles/collect_coins.dir/main.cpp.obj"

# External object files for target collect_coins
collect_coins_EXTERNAL_OBJECTS =

collect_coins.exe: CMakeFiles/collect_coins.dir/main.cpp.obj
collect_coins.exe: CMakeFiles/collect_coins.dir/build.make
collect_coins.exe: CMakeFiles/collect_coins.dir/linklibs.rsp
collect_coins.exe: CMakeFiles/collect_coins.dir/objects1.rsp
collect_coins.exe: CMakeFiles/collect_coins.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=F:\GitHub\practice_for_cpp\collect_coins\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable collect_coins.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\collect_coins.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/collect_coins.dir/build: collect_coins.exe

.PHONY : CMakeFiles/collect_coins.dir/build

CMakeFiles/collect_coins.dir/requires: CMakeFiles/collect_coins.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/collect_coins.dir/requires

CMakeFiles/collect_coins.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\collect_coins.dir\cmake_clean.cmake
.PHONY : CMakeFiles/collect_coins.dir/clean

CMakeFiles/collect_coins.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" F:\GitHub\practice_for_cpp\collect_coins F:\GitHub\practice_for_cpp\collect_coins F:\GitHub\practice_for_cpp\collect_coins\cmake-build-debug F:\GitHub\practice_for_cpp\collect_coins\cmake-build-debug F:\GitHub\practice_for_cpp\collect_coins\cmake-build-debug\CMakeFiles\collect_coins.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/collect_coins.dir/depend

