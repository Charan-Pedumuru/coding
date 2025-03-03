#!/bin/bash

if [ "$#" == "0" ]
 then
  echo pass atleast one arguments.
  exit 1
fi

while (( $# ))
 do
  echo input argument is $1
  shift
 done
