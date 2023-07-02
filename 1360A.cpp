#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
	int l , b , res = 0 , x , y;
	cin >> l >> b;
	if(l>b)
	{
	x= l;
	y = 2*b;

	if(x < y)
	{
	 	res = y * y;
	}
	else
	{
		res = x *x; 
	}

	cout << res << endl;
	}
	else
	{

	x= 2*l;
	y = b;

	if(x > y)
	{
	 	res = x * x;
	}
	else
	{
		res = y *y; 
	}

	cout << res << endl;
	}	

}
}