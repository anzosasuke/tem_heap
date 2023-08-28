#!/bin/sh

for i in *.c
do
	gcc $i io.o -o ${i%.c} -DINCLUDEMAIN -I ../../../testcasesupport/

done

for i in *.cpp
do
	g++ $i io.o -o ${i%.cpp}  -I ../../../testcasesupport/ -DINCLUDEMAIN
done
