#!/bin/bash

# Request the user to enter the filename
read -p "Enter the filename: " filename

# Use sed to find 'return 0' and replace it with 'return (0)'
sed -i 's/return 0/return (0)/g' "$filename"

# Format the file using sed and indent
sed 's/^[ \t]*//; s/[ \t]*$//' "$filename" | indent -kr -bl -bli0 && sed -i -e 's/^[[:space:]]*//' -e 's/[[:space:]]*$//' -e '/^$/d' "$filename"
