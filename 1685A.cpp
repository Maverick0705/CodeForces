#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int f=0;
		vector<int> a(n);
		for(int i = 0; i < n ; i++)
		{
			cin >> a[i];
		}
		if(n % 2 == 1)
		{
			cout <<"NO"<< endl;
			f = 1;
		}
		if(f==0)
		{
		sort(a.begin() , a.end());
		vector<int> b(n);
		int j = 0;
		for(int i = 0 ; i < n ; i= i+2)
		{
			b[i] = a[j];
			j++;
		}
		for(int i = 1 ; i < n ; i = i+2)
		{
			b[i] = a[j];
			j++;
		}
		int c = 0;
		for(int  i= 0 ; i <  n -1; i++)
		{
			if(b[i] == b[i+1])
			{
				c++;
				break;
			}
		}
	
		if(c == 1)
		{
			cout << "NO" << endl;
		}
		else
		{
			cout << "YES" << endl;
			for(auto it: b)
			{
				cout << it <<" " ;
			}
			cout << endl;
		}


		}
	}
}

