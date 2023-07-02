#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n , m;
	cin >> n >> m;
	string s;
	cin >> s;


	while(m--)
	{
		int i = 1;
		while(i < n)
		{
		if(s[i-1] == 'B' && s[i] == 'G')
		{
			swap(s[i-1], s[i]);
			i = i+2;
		}
		else
		{
			i++;
		}
	    }
	}
	cout << s << endl;
}