# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/wrudy/Desktop/ex03

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/wrudy/Desktop/ex03/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ex02.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ex02.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ex02.dir/flags.make

CMakeFiles/ex02.dir/main.cpp.o: CMakeFiles/ex02.dir/flags.make
CMakeFiles/ex02.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/wrudy/Desktop/ex03/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ex02.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex02.dir/main.cpp.o -c /Users/wrudy/Desktop/ex03/main.cpp

CMakeFiles/ex02.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex02.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/wrudy/Desktop/ex03/main.cpp > CMakeFiles/ex02.dir/main.cpp.i

CMakeFiles/ex02.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex02.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/wrudy/Desktop/ex03/main.cpp -o CMakeFiles/ex02.dir/main.cpp.s

CMakeFiles/ex02.dir/FragTrap.cpp.o: CMakeFiles/ex02.dir/flags.make
CMakeFiles/ex02.dir/FragTrap.cpp.o: ../FragTrap.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/wrudy/Desktop/ex03/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/ex02.dir/FragTrap.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex02.dir/FragTrap.cpp.o -c /Users/wrudy/Desktop/ex03/FragTrap.cpp

CMakeFiles/ex02.dir/FragTrap.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex02.dir/FragTrap.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/wrudy/Desktop/ex03/FragTrap.cpp > CMakeFiles/ex02.dir/FragTrap.cpp.i

CMakeFiles/ex02.dir/FragTrap.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex02.dir/FragTrap.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/wrudy/Desktop/ex03/FragTrap.cpp -o CMakeFiles/ex02.dir/FragTrap.cpp.s

CMakeFiles/ex02.dir/ScavTrap.cpp.o: CMakeFiles/ex02.dir/flags.make
CMakeFiles/ex02.dir/ScavTrap.cpp.o: ../ScavTrap.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/wrudy/Desktop/ex03/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/ex02.dir/ScavTrap.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex02.dir/ScavTrap.cpp.o -c /Users/wrudy/Desktop/ex03/ScavTrap.cpp

CMakeFiles/ex02.dir/ScavTrap.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex02.dir/ScavTrap.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/wrudy/Desktop/ex03/ScavTrap.cpp > CMakeFiles/ex02.dir/ScavTrap.cpp.i

CMakeFiles/ex02.dir/ScavTrap.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex02.dir/ScavTrap.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/wrudy/Desktop/ex03/ScavTrap.cpp -o CMakeFiles/ex02.dir/ScavTrap.cpp.s

CMakeFiles/ex02.dir/ClapTrap.cpp.o: CMakeFiles/ex02.dir/flags.make
CMakeFiles/ex02.dir/ClapTrap.cpp.o: ../ClapTrap.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/wrudy/Desktop/ex03/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/ex02.dir/ClapTrap.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex02.dir/ClapTrap.cpp.o -c /Users/wrudy/Desktop/ex03/ClapTrap.cpp

CMakeFiles/ex02.dir/ClapTrap.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex02.dir/ClapTrap.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/wrudy/Desktop/ex03/ClapTrap.cpp > CMakeFiles/ex02.dir/ClapTrap.cpp.i

CMakeFiles/ex02.dir/ClapTrap.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex02.dir/ClapTrap.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/wrudy/Desktop/ex03/ClapTrap.cpp -o CMakeFiles/ex02.dir/ClapTrap.cpp.s

CMakeFiles/ex02.dir/NinjaTrap.cpp.o: CMakeFiles/ex02.dir/flags.make
CMakeFiles/ex02.dir/NinjaTrap.cpp.o: ../NinjaTrap.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/wrudy/Desktop/ex03/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/ex02.dir/NinjaTrap.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex02.dir/NinjaTrap.cpp.o -c /Users/wrudy/Desktop/ex03/NinjaTrap.cpp

CMakeFiles/ex02.dir/NinjaTrap.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex02.dir/NinjaTrap.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/wrudy/Desktop/ex03/NinjaTrap.cpp > CMakeFiles/ex02.dir/NinjaTrap.cpp.i

CMakeFiles/ex02.dir/NinjaTrap.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex02.dir/NinjaTrap.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/wrudy/Desktop/ex03/NinjaTrap.cpp -o CMakeFiles/ex02.dir/NinjaTrap.cpp.s

# Object files for target ex02
ex02_OBJECTS = \
"CMakeFiles/ex02.dir/main.cpp.o" \
"CMakeFiles/ex02.dir/FragTrap.cpp.o" \
"CMakeFiles/ex02.dir/ScavTrap.cpp.o" \
"CMakeFiles/ex02.dir/ClapTrap.cpp.o" \
"CMakeFiles/ex02.dir/NinjaTrap.cpp.o"

# External object files for target ex02
ex02_EXTERNAL_OBJECTS =

ex02: CMakeFiles/ex02.dir/main.cpp.o
ex02: CMakeFiles/ex02.dir/FragTrap.cpp.o
ex02: CMakeFiles/ex02.dir/ScavTrap.cpp.o
ex02: CMakeFiles/ex02.dir/ClapTrap.cpp.o
ex02: CMakeFiles/ex02.dir/NinjaTrap.cpp.o
ex02: CMakeFiles/ex02.dir/build.make
ex02: CMakeFiles/ex02.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/wrudy/Desktop/ex03/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable ex02"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ex02.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ex02.dir/build: ex02

.PHONY : CMakeFiles/ex02.dir/build

CMakeFiles/ex02.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ex02.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ex02.dir/clean

CMakeFiles/ex02.dir/depend:
	cd /Users/wrudy/Desktop/ex03/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/wrudy/Desktop/ex03 /Users/wrudy/Desktop/ex03 /Users/wrudy/Desktop/ex03/cmake-build-debug /Users/wrudy/Desktop/ex03/cmake-build-debug /Users/wrudy/Desktop/ex03/cmake-build-debug/CMakeFiles/ex02.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ex02.dir/depend

