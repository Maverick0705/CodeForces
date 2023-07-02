#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;

	int count = 0 , c1 = 0;

	for(int i = 0 ; i < s.size()-1 ; i++)
	{
		if(s[i] == s[i+1])
		{
			count++;
			if(count == 6)
			{
				c1++;
				break;
			}
		}
		else
		{
			count = 0;
		}
	}

	if(c1 == 1)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}

}