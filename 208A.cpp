#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	string s;
	cin >> s;
	string ans = "";
	int c =0 ;
	for(int i = 0 ; i < s.size()  ; )
	{
		if(s[i] == 'W'  && s[i+1] == 'U' && s[i+2] == 'B' && i== 0)
		{
			i+=3;
			c++;
		}
		else if(s[i] == 'W'  && s[i+1] == 'U' && s[i+2] == 'B' && i!= 0)
		{
			i+=3;
			c++;
			if(c == 1)
			ans.push_back(' ');
		}
		else
		{
			ans.push_back(s[i]);
			c = 0;
			i++;
		}
	}

	cout << ans;
  return 0;
}