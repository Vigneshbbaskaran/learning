#!/bin/sh

if [ $# -eq 3 ]
then	
	if [ $1 -gt $2 ]
	then
		if [ $1 -gt $3 ]
		then
			echo "$1 is greater"
		else
			echo "$3 is greater"
		fi
	elif [ $2 -gt $3 ]
	then
		echo "$2 is greater"
	else
		echo "$3 is greater"
	fi
else
	echo "ARGUMENT ERROR!!"
	echo "<script name> <arg1> <arg2> <arg3>"
fi

