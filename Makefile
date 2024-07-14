#!/bin/bash

CC=g++
CF=-DDEBUG
DF=-Wall
DEP= const_zero_book.o const_zero_dvd.o const_zero_periodical.o main.o

lib:${DEP}
	${CC} ${CF} ${DF} -o lib ${DEP}

%.o:%.cpp
	${CC} ${CF} ${DF} -c $^ header.h classes.h

clean:
	-rm *.o
	-rm lib
