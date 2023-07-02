#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	int n , m;
	cin >> n >> m;

	ll ans = 0;
	int initial =1;

	for(int i = 0 ; i < m; i++)
	{
		int present;
		cin >> present;

		if(present >= initial)
		{
			ans += (present - initial);
		}
		else
		{
			ans += n - (initial - present);
		}
		initial = present;
	} 

	cout << ans ;
    
  return 0;
}