#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        int a[n], b[m];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin>>b[i];
        }
        int i = 0, j = 0;
        int si = 0, sj = 0;
        int res = 0;

        while (i < n && j < m)
        {
            if (a[i] < b[j])
            {
                si += a[i];
                i++;
            }
            else if (a[i] > b[j])
            {
                sj += b[j];
                j++;
            }
            else
            {
                res += max(si, sj) + a[i];
                i++, j++;
                si = 0, sj = 0;
            }
        }

        while (i < n)
        {
            si += a[i];
            i++;
        }
        while (j < m)
        {
            sj += b[j];
            j++;
        }

        cout << max(si, sj) + res << endl;
    }
    return 0;
}