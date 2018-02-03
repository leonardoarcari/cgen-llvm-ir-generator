cmake_minimum_required(VERSION 3.5)
project(arcompact CXX)

# LLVM targets
find_package(LLVM 3.8.1 REQUIRED CONFIG)

message(STATUS "Found LLVM ${LLVM_PACKAGE_VERSION}")
message(STATUS "Using LLVMConfig.cmake in: ${LLVM_DIR}")

include_directories(${LLVM_INCLUDE_DIRS})
add_definitions(${LLVM_DEFINITIONS})

message(STATUS "Including dirs from ${LLVM_INCLUDE_DIRS}")

# LLVM compilation flags
add_compile_options(-g -O3 -gsplit-dwarf -fPIC -fvisibility-inlines-hidden -Wall -W -Wno-unused-parameter -Wwrite-strings -Wcast-qual -Wno-missing-field-initializers -pedantic -Wno-long-long -Wno-maybe-uninitialized -Wdelete-non-virtual-dtor -Wno-comment -std=c++11 -ffunction-sections -fdata-sections -O2 -g -DNDEBUG -D_GNU_SOURCE -D__STDC_CONSTANT_MACROS -D__STDC_FORMAT_MACROS -D__STDC_LIMIT_MACROS)

# Arc700 translator
set(SOURCE_FILES ARCompactArc700Decoder.h ARCompactArc700Decoder.cpp ARCompactArc700Registers.h cgen-ir-common.h)
add_executable(arcompact main.cpp ${SOURCE_FILES})
llvm_map_components_to_libnames(llvm_libs support core irreader)
target_link_libraries(arcompact ${llvm_libs})

# Catch2 test targets
# Prepare "Catch" library for other executables
set(CATCH_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/catch)
add_library(Catch INTERFACE)
target_include_directories(Catch INTERFACE ${CATCH_INCLUDE_DIR})

# Make test executable
set(TEST_SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/arcompact_test.cpp ${CMAKE_CURRENT_SOURCE_DIR}/ARCompactArc700Decoder.cpp)
add_executable(tests ${TEST_SOURCES})
target_link_libraries(tests Catch ${llvm_libs})

# CTest
enable_testing()
add_test(NAME arcompact_test COMMAND tests --success)