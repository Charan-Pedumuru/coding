#!/bin/bash

read c

case $c in
	"1")
	echo Selected 1st case
	;;
	"2")
	echo Selected 2nd case
	;;
	*)
	echo Please choose correct case
	;;
esac
