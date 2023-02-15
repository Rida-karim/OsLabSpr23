echo "First var is: " $1
echo "Second var is :" $2
echo "Third var is: " $3
if [[ $1 < $2 && $1 < $3 ]]; then echo "$1 is the smallest number. ";
fi
if [[ $2 < $1 && $2 < $3 ]]; then echo "$2 is the smallest number. ";
fi
if [[ $3 < $2 && $3 < $1 ]]; then echo "$3 is the smallest number. ";
fi
