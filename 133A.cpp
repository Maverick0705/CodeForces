#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int flag = 0;
	int n = s.size();
	for(int i = 0; i < n;i++)
	{
		if(s[i] >= 33 && s[i] <= 126){
		if(s[i] == 'H' || s[i] == 'Q'|| s[i] == '9' ||s[i] == '+')
		{
			flag = 1;
			break;
		}
		}
	}
	if(flag == 1)cout<< "YES" << endl;
	else cout << "NO" << endl;
}