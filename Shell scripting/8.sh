#!/bin/sh


for i in *
do
	#echo $i
	if [ -r $i ] | [ -w $i ] | [ -x $i ]
	then
		echo "$i"
	fi
done
