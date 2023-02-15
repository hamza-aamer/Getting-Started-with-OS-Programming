#!/bin/bash
# my first script
clear
touch file1.txt
ls -l | head -n 20 > file1.txt
sort file1.txt
mkdir new_folder
mv file1.txt ./new_folder/file1.txt
cat ./new_folder/file1.txt
mv ./new_folder/file1.txt file1.txt
touch file2.txt
touch file3.txt
ls -l > file2.txt
#printing line 4-5 total lines 10
head -n -5 file2.txt|tail -n 2  > file3.txt
rm file2.txt
