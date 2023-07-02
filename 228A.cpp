#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	int t,b,c,d;
	cin >> t >> b  >> c >> d;

	int a[4];
	a[0] = t;
	a[1] = b;
	a[2] = c;
	a[3] = d;
	sort(a , a+4);
	int co = 0;
	for(int i= 0 ; i < 3; i++)
	{
		for(int j = i+1; j< 4 ; j++)
		{
			if(a[i] == a[j])
			{
				co++;
				break;
			}
			else break;
		}
	}

	cout << co;

    
  return 0;
}