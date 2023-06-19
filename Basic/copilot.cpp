//factorial of a number
#include <iostream>
using namespace std;
int main()
{
int n, i;
long fact = 1;
cout << "Enter a positive integer: ";
cin >> n;
for(i = 1; i <= n; ++i)
{
fact *= i;
}
cout << "Factorial of " << n << " = " << fact;
return 0;
}
