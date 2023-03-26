#include <iostream>
using namespace std;

void cube(int n);

int main()
{
    int n;
    cout << "Number in cube: ";
    cin >> n;
    cout << "Cube  " << n << " = ";
    cube(n);
    cout << endl;
    return 0;
}

void cube(int n)
{
    for (int i = 1; i * i * i <= n; i++)
    {
        if (i * i * i == n)
        {
            cout << i << " ";
        }
    }
}