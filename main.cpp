#include <iostream>
using namespace std;
int number(int n);
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int result = number(n);
    cout << "Number " << n << " is " << (result ? "simple" : "not simple") << endl;
    return 0;
}

int number(int n)
{
    {
        for (int i = 2; i <= n / 2; ++i) 
        {
            if (n % i == 0) 
            {
                return false;
            }
        }

        return true;
    }
}