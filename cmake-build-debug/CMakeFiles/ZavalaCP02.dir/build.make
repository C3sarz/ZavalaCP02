# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /cygdrive/c/Users/cesar/.CLion2019.2/system/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/cesar/.CLion2019.2/system/cygwin_cmake/bin/cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/c/Users/cesar/CLionProjects/ZavalaCP02

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/c/Users/cesar/CLionProjects/ZavalaCP02/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ZavalaCP02.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ZavalaCP02.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ZavalaCP02.dir/flags.make

CMakeFiles/ZavalaCP02.dir/main.c.o: CMakeFiles/ZavalaCP02.dir/flags.make
CMakeFiles/ZavalaCP02.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/cesar/CLionProjects/ZavalaCP02/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/ZavalaCP02.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ZavalaCP02.dir/main.c.o   -c /cygdrive/c/Users/cesar/CLionProjects/ZavalaCP02/main.c

CMakeFiles/ZavalaCP02.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ZavalaCP02.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /cygdrive/c/Users/cesar/CLionProjects/ZavalaCP02/main.c > CMakeFiles/ZavalaCP02.dir/main.c.i

CMakeFiles/ZavalaCP02.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ZavalaCP02.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /cygdrive/c/Users/cesar/CLionProjects/ZavalaCP02/main.c -o CMakeFiles/ZavalaCP02.dir/main.c.s

# Object files for target ZavalaCP02
ZavalaCP02_OBJECTS = \
"CMakeFiles/ZavalaCP02.dir/main.c.o"

# External object files for target ZavalaCP02
ZavalaCP02_EXTERNAL_OBJECTS =

ZavalaCP02.exe: CMakeFiles/ZavalaCP02.dir/main.c.o
ZavalaCP02.exe: CMakeFiles/ZavalaCP02.dir/build.make
ZavalaCP02.exe: CMakeFiles/ZavalaCP02.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/c/Users/cesar/CLionProjects/ZavalaCP02/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable ZavalaCP02.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ZavalaCP02.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ZavalaCP02.dir/build: ZavalaCP02.exe

.PHONY : CMakeFiles/ZavalaCP02.dir/build

CMakeFiles/ZavalaCP02.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ZavalaCP02.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ZavalaCP02.dir/clean

CMakeFiles/ZavalaCP02.dir/depend:
	cd /cygdrive/c/Users/cesar/CLionProjects/ZavalaCP02/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/c/Users/cesar/CLionProjects/ZavalaCP02 /cygdrive/c/Users/cesar/CLionProjects/ZavalaCP02 /cygdrive/c/Users/cesar/CLionProjects/ZavalaCP02/cmake-build-debug /cygdrive/c/Users/cesar/CLionProjects/ZavalaCP02/cmake-build-debug /cygdrive/c/Users/cesar/CLionProjects/ZavalaCP02/cmake-build-debug/CMakeFiles/ZavalaCP02.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ZavalaCP02.dir/depend

