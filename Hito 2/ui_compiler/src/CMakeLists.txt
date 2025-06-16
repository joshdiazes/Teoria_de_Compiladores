cmake_minimum_required(VERSION 3.10)
project(UICompiler)

set(CMAKE_CXX_STANDARD 17)

# ANTLR runtime
find_package(Threads REQUIRED)
include_directories(/usr/local/include/antlr4-runtime)
link_directories(/usr/local/lib)

add_executable(prog
    Main.cpp
    UIGrammarLexer.cpp
    UIGrammarParser.cpp
    UIGrammarBaseVisitor.cpp
    UIGrammarVisitor.cpp
)

target_link_libraries(prog
    antlr4-runtime
    Threads::Threads
)
