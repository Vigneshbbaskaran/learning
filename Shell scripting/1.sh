#!/bin/sh

if [ $# -eq 2 ]
then
	echo "Sum:$(($1 + $2))"
else
	echo "ARGUMENT ERROR!!"
	echo "<shell script name> <arg1> <arg2>"
fi

