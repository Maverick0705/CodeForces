#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int a[n];
		 int b[n];
		 for(int i = 0 ; i <n ; i++)
		 {
		 	cin >> a[i];
		 }
		 for(int i = 0 ; i <n ; i++)
		 {
		 	cin >> b[i];
		 }

		 int ans = 0 , c = 0;

		 for(int i =0; i < n; i++)
		 {
		 	ans = max(ans , a[i] - b[i]);
		 }

		 for(int i =0; i < n; i++)
		 {
		 	a[i] = max(0, a[i] - ans);
		 }
		 
		 for(int i = 0; i < n; i++)
		 {
		 	if(a[i] != b[i])
		 	{
		 		c++;
		 		break;
		 	}	
		 }
		 if(c > 0)
		 {
		 	cout << "NO" << endl;
		 }
		 else
		 {
			cout <<"YES" << endl;
		 }
	}
}