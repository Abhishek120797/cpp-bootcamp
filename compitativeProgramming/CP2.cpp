#include <iostream>
using namespace std;

int *arrayProduct(int num[], int len)
{
    int *ans = new int[len];
    int *left = new int[len];
    int *right = new int[len];

    left[0] = 1;
    for (int i = 1; i < len; i++)
    {
        left[i] = left[i - 1] * num[i - 1];
    }

    right[len - 1] = 1;
    for (int i = len - 2; i >= 0; i--)
    {
        right[i] = right[i + 1] * num[i + 1];
    }

    for (int i = 0; i < len; i++)
    {
        ans[i] = right[i] * left[i];
    }
    delete[] right;
    delete[] left;

    return ans;
}

int main()
{
    int n;
    cout << "how many number you want to Enter : ";
    cin >> n;
    int *num = new int[n];
    int *ans;
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }

    ans = arrayProduct(num, n);

    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }

    delete[] num;
    delete[] ans;
    return 0;
}