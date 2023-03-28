#include <iostream>

using namespace std;

int sum_array(int arr[], int n) 
{
    if (n == 0) 
    {
        return 0;
    }
    else 
    {
        return arr[n - 1] + sum_array(arr, n - 1);
    }
}

int main() {
    int arr[] = { 1, 2, 3, 4, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = sum_array(arr, n);
    cout << "Sum of array elements is " << sum << endl;
    return 0;
}