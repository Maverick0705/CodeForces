#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string s ,s1 ,y ,x, iter;
		cin >> s;
		s1 = s.c_str();
		x = s.c_str();

		iter = "0";
		while(1)
		{
			s = s & iter;
			
			s1 = s1 ^ iter;
			if(s[0] > 0 && s1[0] > 0)
			{
				 y[0] = iter[0];
				 break;
			}
			else
			{
				s[0] = x[0];
				s1[0] = x[0];
			}
			iter++;
		}

		cout << int(y[0]) << endl;

	}

}