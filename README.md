# Assignment 3
### [arrays and strings assignment 3 pdf](https://github.com/AviRahimov/C_EX3/files/10334910/10.pdf)

### By Avi Rahimov and Avichay mezin 
#
## Description:
This assignment include's two parts:\
the first one is about insertion sort with pointers in C language, the second part is about Strings in C.
## Insrtion sort explanation
Insertion sort is a sorting algorithm in which the elements are transferred one at a time to the right position. \
In other words, an insertion sort helps in building the final sorted list, one item at a time, with the movement of higher-ranked elements. \
An insertion sort has the benefits of simplicity and low overhead. \
his worst running time is O(n^2).\
\
in this assignment we need to write two functions(methods) for implementing the insertion sort.\
**note:** in this assignment we have to use an aritmethic of pointers and not an arrays spelling.
## shift_element:
- this function gets a pointer to an array and a number i .
- the function moves the i first elements in the array, a one step right.
## insertion sort:
- this function gets a pointer to an array and also a number (call len), that number is the array lentgh.
- this method should sort the array from little to bigger .
## Part 2- Strings:
### part 2 deal with strings in c language.
in this part we needs to write function that gets a string and text (using txt file)\
and do one from 2 different things:
- print all the lines in the text where's our string found in them.
- print all the words in the text that are similar to the string until one letter is omitted from the word.
#### we got 6 functions that doing this two things:
- *int getline(char s[])* --> this function get string (char by char) and save it in s.\
the function return the number of chars which was actually absorbed.
- *int getword(char w[])* --> same as getline but return the number of chars tht was absorb in a single word.
- *int substring( char * str1, char * str2)* --> check if str2 contained str1. return 1 for yes and 0 for no.
- *int similar (char *s, char *t, int n)* --> cheack if we can get string t from string s by omitting n chars.
- *void print_lines(char * str)* --> print the lines which our string found in them.
- *void print_similar_words(char * str)* --> print the words that similar to our string by omitting maximum one char from the words in the text.









