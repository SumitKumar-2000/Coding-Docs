#include <iostream>
using namespace std;
int binarysearch(int a[],int s, int e, int key)
{
    // basecase
    if (s > e)
        return -1;

    // recursive case
    int m = (s+e)/2;
    if (key == a[m])
        return m;
    else if (key > a[m])
    {
        binarysearch(a,m + 1, e, key);
    }
    else
        binarysearch(a,s, m - 1, key);
}
int main()
{
    int n, key;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> key;
    int ans = binarysearch(a,0, n-1, key);
    if ( ans == -1)
        cout << "key not found";
    else
        cout << "key found at "<<ans<<endl;
    return 0;
}