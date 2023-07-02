#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int a , b , c , x , y , n=0 , m =0;
		 cin >> a >> b >> c >> x >> y;
		 if(x>a){m = (x-a);}
		 if(y>b){n = (y-b);}

		 if(c >= m+n)
		 {
			 cout << "YES" << endl;
		 }
		 else
		 {
		 	cout << "NO" << endl;
		 }
	}
}