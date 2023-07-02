#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	int n;
	cin >> n;

	int a[n];
	for(int i =0 ; i < n;i++)
	{
		cin >> a[i];
	}

	int counter = 1 , maxi = 1;
	sort(a,a+n);

	for(int i = 1; i< n; i++)
	{
		if(a[i] == a[i-1])
		{
			counter++;
			if(counter > maxi)
			{
				maxi = counter;
			}
		}
		else{
			counter = 1;
		}
	}

	if(maxi <= (n+1)/2)
	{
		cout << "YES";
	}
	else{cout << "NO";}
    
  return 0;
}