#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s1,s2;
	cin >> s1 >> s2;
	int c1= 0 , c2 = 0;

	for(int i = 0 ; i < s1.size() ; i++)
	{
		
		if (abs(char(s1[i]) - char(s2[i])) == 32  || abs(char(s1[i]) - char(s2[i])) == 0 )
		{
			continue;
		}
		else if(abs(char(s1[i]) - char(s2[i])) > 32 || abs(char(s1[i]) - char(s2[i])) > 0) 
		{
			c1++;
			break;
		}
		else if(abs(char(s1[i]) - char(s2[i])) < 32 || abs(char(s1[i]) - char(s2[i])) < 0)
		{
			c2++;
			break;
		}
	}
    
	if(c1 == 1)
	{
		cout << "1" << endl;
	}
	else if(c2 == 1)
	{
		cout << "-1" << endl;
	}
	else
	{
		cout << "0" << endl;
	}
}