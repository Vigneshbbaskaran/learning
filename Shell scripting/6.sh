#!/bin/sh
if [ $# -ne 2 ]
then
	echo "ERROR"
	echo "<script name> <start line no> <ending line no>"
	exit 1
fi
if [ $1 -gt $2 ]
then
	echo "enter proper start line no"
	exit 1
fi

echo "ENTER FILE NAME"
read file
head -$2 $file | tail -$(($2-$1))






