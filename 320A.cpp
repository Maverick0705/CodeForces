#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	string s;
	cin >> s;
	bool flag = false;
	if(s[0] == '1')
	{
		for(int i = 0; i < s.size() ; )
		{
			if(s[i] == '1' && s[i+1] == '4' && s[i+2] == '4')
			{
				flag = true;
				i+= 3;
			}
			else if(s[i] == '1' && s[i+1] == '4')
			{
				flag = true;
				i+= 2;
			}
			else if(s[i] == '1')
			{
				flag = true;
				i+= 1;
			}
			else
			{
				flag = false;
				break;
			}
		}

		if(flag== true)
		{
			cout << "YES";
		}
		else
		{
			cout <<"NO";
		}
	}
	else
	{
		cout << "NO";
	}
    
  return 0;
}