#include <iostream>
using namespace std;

int number(int num);

int main()
{
    int num;
    cout << "Number a: ";
    cin >> num;
    int result = number(num);
    cout << "Number " << num << " is " << (result ? "true" : "false") << endl;
    return 0;
}

int number(int num)
{
    if (num > 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}