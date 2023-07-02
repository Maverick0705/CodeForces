#include<bits/stdc++.h>
using namespace std;

int calc_max_occurence(string s , int k)
{
	int  count = 0;
	for(int i = 0 ; i < k ; i++)
	{
		if(s[i] == 'B')
		{
			count++;
		}
	}
	return count;
}
int main()
{
	int t;
	cin >> t;

	while(t--)
	{
		int n , k , ans;
		cin >> n >> k;

		string s;
		cin >> s;

		int m = calc_max_occurence(s , k);
		if(m < k)
		{
			ans  = k - m ;
			cout << ans << endl;

		}
		else
		{
			cout << "0" << endl;
		}
	}
}