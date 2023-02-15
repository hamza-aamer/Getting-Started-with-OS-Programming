#!/bin/bash
clear

num1=0
export num1
num2=0
export num2
sign="-"
export sign
echo "Enter number 1 : "
read num1
echo "Enter number 2 : "
read num2
echo "Enter sign : "
read sign


echo "Result : "
case $sign in
	"+")./21i0415_Lab2a.sh;;
	"-")./21i0415_Lab2b.sh;;
	"*")./21i0415_Lab2c.sh;;
	"/")./21i0415_Lab2d.sh;;
esac
