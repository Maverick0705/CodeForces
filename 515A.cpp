#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int a , b , c;
	cin >> a >> b >> c;

	if(c >= (abs(a) + abs(b)) && (c - (abs(a) + abs(b)))%2 == 0)
		cout << "Yes";
		else
			cout << "No";
}