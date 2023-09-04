#include <iostream>

using namespace std;

int peakMountainIndex(int *arr, int len)
{
    int midIndex;
    int left = 0;
    int right = len - 1;
    while (left < right)
    {
        midIndex = left + (right - left) / 2;
        if (arr[midIndex] > arr[midIndex - 1] && arr[midIndex] > arr[midIndex + 1])
            return midIndex;
        else
        {
            if (arr[midIndex - 1] > arr[midIndex])
                right = midIndex - 1;
            else
                left = midIndex + 1;
        }
    }
    return left;
}

int main()
{
    int pickIndex;
    int len;

    cout << "how many number you want to Enter : ";
    cin >> len;

    cout << "Enter " << len << " element of the array : ";
    int *num = new int[len];
    for (int i = 0; i < len; i++)
        cin >> num[i];

    pickIndex = peakMountainIndex(num, len);
    cout << "The peak index in mountain array is :" << pickIndex;
    delete[] num;
    return 0;
}
