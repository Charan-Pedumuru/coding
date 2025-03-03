#!/bin/bash

if [ "$#" == "0" ]
 then
  echo pass atleast one argument.
  exit 1
fi

echo Hi $1
echo How are you $2
