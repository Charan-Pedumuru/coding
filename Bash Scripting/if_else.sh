#!/bin/bash

echo Enter your age:
read age

if [ "$age" -ge 18 ]; then
	echo you are an adult
else
	echo you are younger
fi
