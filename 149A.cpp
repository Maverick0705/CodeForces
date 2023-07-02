#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	int k;
	cin >> k;
	int a[12];
	for(int i = 0 ;i < 12; i++)
	{
		cin >> a[i];
	}

	sort(a , a+12);
	int c  = 0 ,sum = 0 , flag = 0;
	for(int i = 11; i>= 0; i--)
	{

		sum+= a[i];
		if( k == 0)
		{
			break;
		}
		c++;
		if(sum >= k )
		{
			break;
		}
		if(sum < k && i == 0)
			flag = 1;
	}
	if (flag == 0)
	cout << c;
	else 
		cout << "-1" << endl;
    
  return 0;
}