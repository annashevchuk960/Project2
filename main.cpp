#include <iostream>
using namespace std;

int max_number(int a, int b);

int main()
{
    int a, b;
    cout << "Number a: ";
    cin >> a;
    cout << "Number b: ";
    cin >> b;
    int max_num = max_number(a, b);
    cout << "The maximum number is: " << max_num << endl;
    return 0;
}

int max_number(int a, int b)
{
    int result;
    if (a > b)
        result = a;
    else
        result = b;

    return result;
}