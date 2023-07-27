#!/bin/bash

# Request the user to enter the filename
read -p "Enter the filename: " var

# Format the file using sed and indent
sed 's/^[ \t]*//; s/[ \t]*$//' "$var" | indent -kr -bl -bli0 && sed -i -e 's/^[[:space:]]*//' -e 's/[[:space:]]*$//' -e '/^$/d' "$var"
