#! /bin/sh

echo $FT_NBR1 + $FT_NBR2 | tr '\\' '1' | tr '\"' '2' | tr "\'?!mrdoc" "03401234" | xargs echo "obase-13; ibase-5;" | bc | tr '0123456789ABC' 'gtaio luSnemf'
