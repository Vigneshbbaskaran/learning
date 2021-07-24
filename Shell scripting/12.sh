#!/bin/sh

read var
temp=1

if [ $var -eq 0 ]
then
	echo "1"
	exit 0
fi

while  [ $var -ne 0 ] 
do
	temp=$(($var\*$temp))
	var=$(($var-1))
done

echo $temp

