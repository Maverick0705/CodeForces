#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	int n;
	cin >> n;

	unordered_map<string , int> um;
	int max = 0;
	string ans = "";

	for(int i = 0; i< n;i++)
	{
		string s;
		cin >> s;
		um[s]++;

		if(um[s] > max)
		{
			max = um[s];
			ans = s;
		}

	}

	cout << ans ;
    
  return 0;
}