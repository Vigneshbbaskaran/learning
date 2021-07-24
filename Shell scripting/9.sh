#!/bin/sh


for i in *
do	
	#echo $i
	if [ -d $i ]
	then 
		echo "dir"
	elif [ -f $i ]
	then
		wc -l $i
	fi
done

