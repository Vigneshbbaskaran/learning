# Advance C

# Pointers
1. Write a program to print the address of a variable , its value ,its size, try different executions and note the address printed. Assign the address of the variable to a pointer variable.Print the size of pointer and its indirected value (apply * operator).
2. Write a program to add two variables using thier pointers indirection.
3. Write a program to take input for two character variables using pointers and find out which character has higher ascii value.
4. Declare 3 integer variables. Declare an integer pointer. Assign the address of each variable to the pointer in succession and print the value of the variable using indirection operator on the pointer.
5. Declare 3 pointer variables of integer type, and an integer variable. Assign the address of integer variable to the 3 pointers. Print the variable value using indirection on each pointer variable. Change the variable value directly and check the values of each of the pointers using indirection. Change the variable value , using each pointer and print the variable value and indirected values of all pointers every time you change.
6. declare different pointers with different data types. Print the sizes of the pointer variables using sizeof operator. Why do u think all of them are giving same size irrespective of the data type ?
7. Write a program to find the biggest of three numbers using pointers that point to those numbers.
8. Take three input integers x,y and z. Write a program to rotate their values such that, x has the value of y, y has the value of z and z has the value of x. Do this using pointers that point to x,y and z.
9. Declare an integer array of size 10 and initialize it to some values. Print the addresses of each element of the array using a pointer. using indirection operator , print the value stored in each element of the array.

# Pointers Call by Value and Reference
1. Write a program to swap two numbers using Call by Value and Call by Reference.
2. Note down the differences between Call by Value and Call by Reference and when to use what.
3. Write a function that can rotate the values of three variables. print the results in main function.
4. Write a function that can take two integers as input, and gives 5 outputs : addition, subtraction, multiplication, quotient and reminder of those two numbers. Print the outputs in the main function.
5. Write a function that communicates with main using a single static variable without taking any input arguments.
Everytime function returns something using the static variable,after using it, main sends another input using the same variable and calls the function again.
<pre>
eg., print the square of each number of an array :
for each number of the array :
    call the function
    main gets the static variable address as return value from function.
    main puts the array element in static variable.
in the function :
    create static variable.
    if static variable value is not zero, print its square.
    function sends static variable address back to main.
</pre>
6. Write two source files, main.c and swap.c. The main function initializes a two-element array of ints, and then calls the swap function to swap the pair.

# Strings Pointer Argument
1. Write a function that takes a string as an input, and count the number of words in the string, and returns the number,
2. Write a function that takes a string as input, and determines whether the string is a palindrome or not, returns 1 or 0.
3. Write a function to replace a given character by another character in a string. The function takes one string, and 2 characters as input.
4. Write a program to display the word expansion of a number.

    Eg., 
    Input : 789
    Output : Seven Eight Nine

5. Write a trim() function,that will remove the leading and trailing spaces from a string.

    Eg.,    
    Input : "    str  str   "  
    Output : "str str  

6. Write a function called strstr that takes 2 strings as input, finds the first occurrence of second string, in the first string, and returns the index from where it starts in the first string. If the string is not found, returns -1.

    Eg.,     
    Kernel Masters  
    Mast  
    output : 7  

7. Write a program similar to strlen.
8. Write a program similar to strcpy.
9. Write a program similar to strcat.
10. Write a program similar to strrev.
11. Write a program similar to strupr.
12. Write a program similar to strlwr.
13. Write a program similar to strcmp.
14. Write a program similar to strchr.

# 2D Arrays
1. Declare a two dimensional array of elements for sales details of a store, for each item sold by sales man. Take the sales values as input and print the array in matrix form.
<pre>
    Find out and print the following :
    1.Total sales by each sales man
    2.Total sales for a item
    3.Total sales
</pre>
2. Declare a two dimensional array of elements and write a function to take it as argument and print its transpose.
<pre>
eg., if the matrix is:      1 3
                                4 5
                                7 8<br>
its transpose should be :   1 4 7
                                3 5 8
</pre>
3. Write a program  for matrix addition and subtraction.
4. Write a program  for matrix multiplication.
5. Write a function to search for an element in a two dimentional array, and return its position - as row and column numbers(2 return values). Print the indexes in a message like below, with appropriate subscripts:
The item you were searching for was found in 3nd row, 2nd column.
6. Declare a two dimensional array of characters, read names from the user and print them back using nested loops, character by character.


# Sorting
1. Perform Bubble Sort.
2. Perform Bubble Sort on names.
3. Perform Bubble Sort on character pointers that are pointing to strings on read-only memory.
4. Perform bubble sort on command line arguments. Sort every argument according to their alphabetical order.



