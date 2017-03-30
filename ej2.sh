#!/bin/bash

if [$# -ne $1]; then
	echo "argumentos incorrectos"
	
	exit 1;
fi

if [ $(whoami) == "$1" ]; then
	echo "si eres tu tio"
fi
