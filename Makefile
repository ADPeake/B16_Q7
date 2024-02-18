# Makefile for Writing Make Files Example
 
# *****************************************************
# Variables to control Makefile operation
 
CC = g++
CFLAGS = -Wall -g
 
# ****************************************************
# Targets needed to bring the executable up to date
 
main: main.o graph.o
	$(CC) $(CFLAGS) -o main main.o graph.o
 
# The main.o target can be written more simply
 
main.o: main.cpp graph.h 
	$(CC) $(CFLAGS) -c main.cpp
 
 
graph.o: graph.o