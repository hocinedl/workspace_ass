# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /root/Desktop/workspace_ass/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /root/Desktop/workspace_ass/build

# Utility rule file for assignmentPackage_genlisp.

# Include the progress variables for this target.
include assignmentPackage/CMakeFiles/assignmentPackage_genlisp.dir/progress.make

assignmentPackage_genlisp: assignmentPackage/CMakeFiles/assignmentPackage_genlisp.dir/build.make

.PHONY : assignmentPackage_genlisp

# Rule to build all files generated by this target.
assignmentPackage/CMakeFiles/assignmentPackage_genlisp.dir/build: assignmentPackage_genlisp

.PHONY : assignmentPackage/CMakeFiles/assignmentPackage_genlisp.dir/build

assignmentPackage/CMakeFiles/assignmentPackage_genlisp.dir/clean:
	cd /root/Desktop/workspace_ass/build/assignmentPackage && $(CMAKE_COMMAND) -P CMakeFiles/assignmentPackage_genlisp.dir/cmake_clean.cmake
.PHONY : assignmentPackage/CMakeFiles/assignmentPackage_genlisp.dir/clean

assignmentPackage/CMakeFiles/assignmentPackage_genlisp.dir/depend:
	cd /root/Desktop/workspace_ass/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/Desktop/workspace_ass/src /root/Desktop/workspace_ass/src/assignmentPackage /root/Desktop/workspace_ass/build /root/Desktop/workspace_ass/build/assignmentPackage /root/Desktop/workspace_ass/build/assignmentPackage/CMakeFiles/assignmentPackage_genlisp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : assignmentPackage/CMakeFiles/assignmentPackage_genlisp.dir/depend
