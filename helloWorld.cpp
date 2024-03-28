#include <iostream>

using namespace std;
//Defining the fibonacci function using recursion without memoization
int fib(int n)
{
    if(n <= 1)
        return n;
    return
        fib(n-1) + fib(n-2);
}


int main()
{
    string name = "";
    cout << "Hello there, what is your name ?";
    cin >> name;
    cout << "Hello, " << name << "!Welcome to the Fibonacci series generator\n";
     int num = 0;
    cout << "Enter the number whose Fibonacci series you want to generate: ";
    cin >> num;
    int result = fib(num); //Calling the fib function with the user input
    cout << result  << endl;
    return 0;
}


