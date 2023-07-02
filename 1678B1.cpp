#include<bits/stdc++.h>
using namespace std;

 int main()
{
	int t;
	cin >> t;

	while(t--)
	{
		int n;
		cin >> n ;
		int count = 0;
		string s;
		cin >> s;

		for(int i = 0 ; i < n-1 ; i=i+2)
		{
			if(s[i] != s[i+1])
			{
				count++;
			}
		}
		cout << count << endl;
	}
}