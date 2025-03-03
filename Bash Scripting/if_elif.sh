#!/bin/bash

echo Enter a number:
read num

if [ $num == 0 ]; then
	echo The number is zero
elif [ (($num%2)) == 0 ]; then
	echo The number is even
else
	echo the number is odd
fi
