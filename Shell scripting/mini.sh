#!/bin/sh


echo "Os name              : `uname -s`\n"
echo "Architecture version : `uname -m`\n"
echo "Kernel version       : `uname -r`\n"

echo -n "Internet status      : "
ping -c 1 www.google.com > /dev/null 2> /dev/null
if [ $? -eq 0 ]
then
	echo "Working\n"
else
	echo "Not Working\n"
	
fi

echo "IP Address           : `hostname -i`\n"
echo "Memory status\n"
free
echo "\nUptime                : `uptime -s`\n"

