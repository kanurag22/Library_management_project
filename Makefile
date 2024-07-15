#!/bin/bash

CC=g++
#CF=-DDEBUG
DF=-Wall
DEP= display_book.o show_book.o get_book.o add_book.o lib_main_menu.o const_zero_book.o const_zero_dvd.o const_zero_periodical.o main.o

lib:${DEP}
	${CC} ${CF} ${DF} -o lib ${DEP}

%.o:%.cpp
	${CC} ${CF} ${DF} -c $^ header.h classes.h

clean:
	-rm *.o
	-rm lib
	-rm *.save*
	-rm *.gch*

