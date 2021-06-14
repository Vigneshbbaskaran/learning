# Call By Value	
        * While calling a function, we pass values of variables to it. Such functions are known as “Call By Values”.
        * In this method, the value of each variable in calling function is copied into corresponding dummy variables of the called function.
        * With this method, the changes made to the dummy variables in the called function have no effect on the values of actual variables in the calling function.
        * Thus actual values of a and b remain unchanged even after exchanging the values of x and y.
        * In call by values we cannot alter the values of actual variables through function calls.
        * Values of variables are passes by Simple technique.
        
        
# Call By Reference
        * While calling a function, instead of passing the values of variables, we pass address of variables(location of variables) to the function known as “Call By References.
        * In this method, the address of actual variables in the calling function are copied into the dummy variables of the called function.
        * With this method, using addresses we would have an access to the actual variables and hence we would be able to manipulate them.
        * Thus actual values of a and b get changed after exchanging values of x and y.
        * In call by reference we can alter the values of variables through function calls.
        * Pointer variables are necessary to define to store the address values of variables.
        
# When we use Call By Value	?
        * when there is no need to modify the passing variables. just perform some operation and return single value then we go for Call By Value.
        
# When we use Call By Reference ?
        * when there is need to modify the passing variables. then go for call by reference.
        * if we passing array of elements then we can go Call By Reference, because it holds the base address of array instead of holding the entire array. 