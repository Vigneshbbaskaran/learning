#!/bin/sh

echo "Enter Text"
read text
echo ""

echo "blink"
echo "\t\033[5m$text\033[0m"

echo "Underline"
echo "\t\033[4m$text\033[0m"

echo "color"
echo "\t\033[0;35m$text\033[0m"


