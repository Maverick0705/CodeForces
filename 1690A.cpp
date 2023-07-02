#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n ;
		cin >> n;
		int h2 , h1 , h3;

		if(n%3 == 0)
		{
			h2= n/3;
			h1 = (n/3) + 1;
			h3 = (n/3) - 1;
		}

		else if( n%3 == 1)
		{
			h2 = n/3;
			h1 = (n/2) + 1+ 1;
			h3 = (n/2) - 1;
		}
		else if(n%3 == 2)
		{
			h1 = (n/3) + 2;
			h2 = (n/3) + 1;
			h3 = (n/3) - 1
		}

		cout << h2 <<" " << h1 << " " << h3 << endl;
	}
}