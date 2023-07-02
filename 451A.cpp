#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	int n , m;
	cin >> n >> m;

	if(n == 1 || m == 1)
	{
		cout << "Akshat";
		return 0;
	}else
	{
		int mini = min(n,m);
		if(mini %2 == 0)
		{
			cout << "Malvika";
		}
		else
		{
			cout << "Akshat";
		}
	}
    
  return 0;
}