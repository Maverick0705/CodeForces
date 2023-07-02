#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int n = s.size();

	if(n == 1)
	{
		if(s[0] >= 97 )
		{
			s[0] = toupper(s[0]);
			cout << s[0];
		}
		else
		{
			s[0] = tolower(s[0]);
			cout << s[0];
		}
	}
	else
	{
		int c = 0; int flag = 0;
		if(s[0] >= 97 && s[1] <= 90 )
		{
			for(int i = 1; i < n ; i++)
			{
				if(s[i] <= 90)
				{
					c++;
				}
				if(c == n-1)
				{
					flag = 1;
					break;
				}
			}

			if(flag == 1){
			s[0] = toupper(s[0]);
		    for(int i = 1 ; i < n ; i++)
		    {
		    	s[i] = tolower(s[i]);
		    }

		    cout << s << endl;}
		    else
		    {
		    	cout << s ;
		    }
		}
		else
		{
			int flag = 0, c = 0;
			for(int i = 0; i < n;i++)
			{
				if(s[i] <= 90)
				{
					c++;
				}
				if(c == n)
				{
					flag = 1;
					break;
				}
			}
			if(flag == 1)
			{
			  	for(int i =0 ; i < n;i++)
			  	{
			  		s[i] = tolower(s[i]);
			  	}

			  	cout << s << endl;
			}

			else{
			cout << s << endl;
		}
		}
	}
}