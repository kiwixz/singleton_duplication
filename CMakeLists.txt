cmake_minimum_required(VERSION 3.12)

project("test" CXX)
add_library("a" SHARED "src/liba.cpp")
add_library("b" SHARED "src/libb.cpp")
add_executable("test" "src/main.cpp")
target_link_libraries("test" "a" "b")

if (EXPORT_IMPORT)
    target_compile_definitions(a PRIVATE DLL_EXPORT)
    target_compile_definitions(b PRIVATE DLL_EXPORT)
    target_compile_definitions(test PRIVATE DLL_IMPORT)
endif ()
