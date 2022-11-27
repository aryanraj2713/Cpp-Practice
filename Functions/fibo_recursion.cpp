//Write a C++ program to illustrate the static variable functionality using sum of a Fibonacci series as an example.

#include <bits/stdc++.h>
using namespace std;
 
int fibo(int n)
{
    if (n <= 1)
        return n;
    return fibo(n - 1) + fibo(n - 2);
}
 
int main()
{
    int n = 9;
    cout << fibo(n);
    return 0;
}