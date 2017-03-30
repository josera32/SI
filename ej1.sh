#!/bin/bash

 read x
  case $x in
     1)
        date
     ;;
     2)
        ls
     ;;
     3)
        cal -y
     ;;
     4)
        gedit
     ;;
     5)
        exit 1
     ;;
     *)
        echo "no existe esa opcion"
     ;;
  esac
