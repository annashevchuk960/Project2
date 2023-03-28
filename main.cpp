#include <iostream>

using namespace std;

int number (int n) 
{
    if (n <= 1) 
    {
        return n;
    }
    else {
        return number(n - 1) + number(n - 2);
    }
}

int main() 
{
    int n;
    cout << "Fibonacci: ";
    cin >> n;
    cout << "Fibonacci sequence up to " << n << ": ";
    for (int i = 0; i < n; i++) 
    {
        cout << number(i) << " ";
    }
    cout << endl;
    return 0;
}