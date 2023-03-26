#include <iostream>
#include <ctime>

using namespace std;

void rectangle(int n, int k);

int main() 
{
    int n, k;
    cout << "Height: ";
    cin >> n;
    cout << "Width: ";
    cin >> k;
    rectangle(n, k);
    return 0;
}

void rectangle(int n, int k) 
{
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < k; j++) 
        {
            cout << "*";
        }
        cout << endl;
    }
}