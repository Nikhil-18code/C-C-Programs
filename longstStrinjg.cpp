#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, i, position;
    cin >> n;
    int max = 0;
    char a[n][1000];
    for (i = 0; i < n; i++)
    {
      cin >> a[i];
      if (strlen(a[i]) > max)
      {
        max = strlen(a[i]);
        position = i;
      }
    }
    cout << a[position];
  }
  return 0;
}