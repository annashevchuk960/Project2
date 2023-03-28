#include <iostream>

using namespace std;

double step(double a, int n) 
{
    if (n == 0) 
    {
        return 1;
    }
    else if (n % 2 == 0) 
    {
        return step(a * a, n / 2);
    }
    else 
    {
        return step(a * a, (n - 1) / 2) * a;
    }
}

int main() 
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int a;
    cout << "Enter a step: ";
    cin >> a;
    double result = step(a, n);
    cout << a << " raised to the power of " << n << " is " << result << endl;
    return 0;
}
