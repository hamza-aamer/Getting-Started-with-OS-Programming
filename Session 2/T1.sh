#!/bin/bash
clear
marks=0
export marks

echo Enter the marks : 
read marks

case $marks in
	100) echo "Grade is A" ;;
	9?) echo "Grade is A" ;;
	8[0-9]) echo "Grade is B" ;;
	7?) echo "Grade is C" ;;
	6[0-9]) echo "Grade is D" ;;
	*) echo "Grade is F" ;;
esac

