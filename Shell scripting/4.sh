#!/bin/sh

if [ $# -eq 0 ]
then
	echo "<shell script name> <arg1>"
	exit 1
fi

if [ -f $1 ]
then
	echo "File exist"
else
	echo "File not exist"
fi
