#include <iostream>
using namespace std;

// //Defining the fibonacci function with recursion without memoization
// int Fib(int n)
// {
//     if(n<=1)
//     {
//         return n;
//     }
//     else{
//         return Fib(n-1)+Fib(n-2);
//     }
// }
//Defining the Fibonacci function with recursion with memoization
//Defining an array to store already calculated values
int F[51];//the number in thos array defines the maximum vlaue for whose Fibonacci digit we can find 
int Fib(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        //once the value has already been calculated, it is returned from the array
        if(F[n] != -1)
        {
            return F[n];
        }
        //Otherwise it is calculated and stored in the array
        F[n] = Fib(n-1)+ Fib(n-2);
        return F[n];
    }
}
int main()
{
    for( int i=0;i<51;i++)
    {
        F[i]= -1;
    }
     int n;
     string name;
        cout << "Hello there, what is your name ?" << endl;
        cin  >> name;
    cout << "Hello, " << name << " !" << endl << "Welcome to my Fibonacci series  generator" << endl;
        cout << "Please enter the value whose Fibonacci number you would want to generate" << endl;
     cin  >> n;
     cout << "The fibonacci value of " << n << " is "  << Fib(n) << endl;
     return 0;
}