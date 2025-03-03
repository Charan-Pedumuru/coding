#!/bin/bash

while getopts ":xy:z" option;
do
 case $option in
 x)
  echo received x
  ;;
 y)
  echo received y
  ;;
 z)
  echo received z
  ;;
  *)
  echo invalid option
  ;;
esac
done
