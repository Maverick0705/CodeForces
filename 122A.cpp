#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int flag = 0;
	for(int  i = 0; i < s.size() ; i++)
	{
		if((s[i] == '7') || (s[i] == '4'))
		{
		    continue;
		}
		else{	flag = 1;
			break;}
	}
	int n;
	n = stoi(s);

	if(flag == 1)
	{
		if(n % 4 == 0 || n% 7 == 0)
		{
			cout << "Yes" << endl;
		}
		else
		{
			cout << "No" << endl;
		}
	}
	else
	{
		cout <<"Yes" << endl;
	}
}