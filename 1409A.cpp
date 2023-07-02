#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long int a , b ,d, n , k = 0;
		cin >> a >> b;
		if(a == b)
		{
		  k = 0;
		}
		else if(a > b)
		{
			n = a - b;
			d = n/10;
			if(n%10 != 0){
			k = d+1;}
			else{
				k = d;
			}
		}
		else
		{
			n = b-a; 
			d = n /10;
			k = d+1;
			if(n%10 != 0){
			k = d+1;}
			else{
				k = d;
			}
		}
	

      cout << k << endl;


	}
}