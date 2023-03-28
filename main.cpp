#include <iostream>

using namespace std;

int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}
int main()
{
    int n;
    cout << "Number: ";
    cin >> n;
    cout << "Factorial " << n << ": ";
    for (int i = 0; i <= n; i++)
    {
        cout << factorial(i) << " ";
    }
    cout << endl;
    return 0;
}