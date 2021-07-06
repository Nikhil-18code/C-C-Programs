#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    string str1;
    cin >> str1;
    string str2;
    cin >> str2;
    int i, j;

    for (i = 0; i < str1.length(); i++)
    {
      for (j = 0; j < str2.length(); j++)
      {
        if (str1[i] == str2[j])
          str1.erase(str1.begin() + i);
      }
    }
    cout << str1 << endl;
  }
  return 0;
}
