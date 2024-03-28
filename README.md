**--Definining the Fibonacci function usung the recursion algorithm without memoization--**
The code snippet wriiten was based on the observation that the fibonacci of the values 0 and 1 were equal to 0 and 1 respectively. For that reason, we founf it fit and logical to define them.
For the remaining values however, we wrote our code snippet based on the general rule of the fibonacci sequence showing that the fibonacci of a given value is equal to the fibonacci of the  the two values before it given by 
  f(n-1) + f(n-2);
Based on this rule written in our recursive function, we are going to have this line of code repeat until we reach the final value of 1 and 0.
However, it is noticed from the recursion tree that values that have already been calculated are being repeated. This therefore causes the program to run slower for larger values.
The solution to this is to implement memoization into the recursive function to prevent the calculation of already calculated values

**--Inmplementing Memoiszation Into The  Recursive Function--**
In the recursive function, we defined an array that will contain the already calculated values of the Fibonacci sequence.
In the code , we further went on to implement the functionality, where every element in the array that has not been calculated will
 have a value of  -1;
 By control flow, if the value of the given number in that array is not equal to -1, then it means it has a value which has been stored as its Fibonacci value
 Otherwise, the fibonacci value of that number has not beenn calculated . Hence it is calculated and stored
 This will prevent the recalculation of already calculated values thereby reducing the time complexity of the program
