#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
    getline(cin, s);

    for(int i = 0 ; i < s.size(); i++)
    {
      if( s[i] == ' '|| s[i] == '\0')
      {
        cout << endl;
      }
      else
      {
      s[i] = towupper(s[i]);
      cout << s[i];
      }
    }
    
}