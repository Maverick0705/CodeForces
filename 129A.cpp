#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	int n;
	cin >> n;
	int a[n];
	int sum = 0, ans = 0 , even = 0 , odd = 0 ;
	for(int i = 0; i <n ;i++)
	{
		cin >> a[i];
		sum+= a[i];
	}
	for(int i = 0; i < n ;i++)
	{
		if(a[i] % 2 == 0)
		{
			even++;
		}
		else{
			odd++;
		}
	}

	if(sum % 2 == 0)
	{
		ans = even;
	}
	else
	{
		ans = odd;
	}

	cout << ans << endl;
    
  return 0;
}