#include <bits/stdc++.h>
using namespace std;
void sort(int *a, int n, int i, int j)
{
    //base case
    if (i == j)
    {
        return;
    }
    //recursive case
    if (a[i] > a[i + 1])
    {
        swap(a[i], a[i + 1]);
    }

    sort(a, n, i + 1, j);

    sort(a, n, 0, j - 1);
}
int main()
{
    int n;
    cin >> n;
    int a[100];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, n, 0, n - 1);

    for (int i = 0; i < n; i++)
    {   
        cout << a[i]<<" ";
    }
    return 0;
}