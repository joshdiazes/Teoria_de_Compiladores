cmake_minimum_required(VERSION 3.10)
project(UICompiler)

set(CMAKE_CXX_STANDARD 17)

# ANTLR runtime
find_package(Threads REQUIRED)
include_directories(/usr/local/include/antlr4-runtime)
include_directories(${CMAKE_CURRENT_SOURCE_DIR})
link_directories(/usr/local/lib)

add_executable(prog
    Main.cpp
    UIGrammarLexer.cpp
    UIGrammarParser.cpp
    UIGrammarBaseVisitor.cpp
    UIGrammarVisitor.cpp
    UIToJsonVisitor.cpp
    HTMLGenerator.cpp
)

target_link_libraries(prog
    antlr4-runtime
    Threads::Threads
)
