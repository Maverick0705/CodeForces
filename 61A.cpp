#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	int n;
	cin >> n;
	if (n == 1)
	{
		cout << "-1" << endl;
	}
	else 
	{
		if(n & 1)
		{
			cout << "-1" << endl;
		}
		else{
		for(int i = 1; i<= n; i++)
		{
			if(i & 1) cout << i+1 <<" ";
			else cout <<i-1 << " ";
		}
	}
	}
  return 0;
}