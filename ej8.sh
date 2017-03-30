#!/bin/bash

if ["$#" -ne "$1"]; then
	echo "argumentos incorrectos"
	
	exit 1;
fi
	
	hipotenusa=sqrt(($1 * $1) + ($2 * $2))
	echo $hipotenusa
