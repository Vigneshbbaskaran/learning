#!/bin/sh


# Reverse numbers

read num
echo "Given number    = $num"
echo -n "Reversed number = "
while [ $num -ne 0 ]
do

	echo -n "$(($num%10))"
	num=$(($num/10))     	
#	echo "$num"	
done
echo ""
