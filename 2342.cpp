#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	string s;
	cin >> s;
	string s2 = "";

	for(int i = 0; i < s.size() ; i++)
	{
		if(s[i] == '.')
		{
			s2.push_back('0');
		}
		else if(s[i] == '-' && s[i+1] == '-')
		{
			s2.push_back('2');
			i++;
		}
		else
		{
			s2.push_back('1');
			i++;
		}
	}

	cout << s2 << endl;
    
  return 0;
}