# Makefile for RPiTestProgram


hello:  hello.cpp
	g++ hello.cpp -o hello -pthread -lgtest_main -lgtest

