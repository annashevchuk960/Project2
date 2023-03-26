#include <iostream>
using namespace std;

int factorial(int n);

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int result = factorial(n);
    cout << "Factorial of " << n << " is " << result << endl;
    return 0;
}

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}