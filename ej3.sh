#!/bin/bash

if ["$#" -ne "$1"]; then
	echo "argumentos incorrectos"
	
	exit 1;
fi

find.-name "*$1*" -type d
