#include <iostream>
using namespace std;

int main()
{
    int arr[] = {4, 2, 9, 1, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    int minIndex = 0, maxIndex = 0;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[minIndex])
            minIndex = i;
        if (arr[i] > arr[maxIndex])
            maxIndex = i;
    }

    // Swap min and max
    swap(arr[minIndex], arr[maxIndex]);

    // Print updated array
    cout << "Array after swapping min and max: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
