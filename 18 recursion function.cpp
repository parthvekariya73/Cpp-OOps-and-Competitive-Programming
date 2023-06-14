#include<iostream>
using namespace std;

int fact(int n){
    // base condition
    if(n<=1)
        return 1;
    
    return n * fact(n-1);
}

int fib(int n) {
    // base case
    if(n<2)
        return 1;

    return fib(n-2) + fib(n-1);
}

int main()
{
    cout << "Enter Number : ";
    int a;
    cin >> a;
    // cout << "Factorial of N is " << fact(a) << endl;

    cout << "Fibonacci sequence at Position " << a << " is: " << fib(a) << endl;
    
    return 0;
}