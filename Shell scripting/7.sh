#!/bin/sh

if [ $# -ne 1 ]
then 
	echo "<script name> <word>"
	exit 1
fi
grep -v $1 *.sh 


