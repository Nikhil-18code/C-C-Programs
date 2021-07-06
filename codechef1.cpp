#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    long int n, m, k, count = 0;
    cin >> n >> m >> k;
    long int t[k], q[n], sum[n] = {0};

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            cin >> t[j];
        }
        cin >> q[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            sum[i] = sum[i] + t[j];
        }
    }
    for (int p = 0; p < n; p++)
    {
        if (sum[p] >= m)
        {
            for (int x = 0; x < n; x++)
            {
                if (q[x] <= 10)
                    count++;
                else
                    continue;
            }
        }
        else
            continue;

    }
       cout<<count;     
    return 0;
}
