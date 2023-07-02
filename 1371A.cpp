#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
        int n;
        cin >> n;

       int res;

       if(n% 2 == 0)
       {
          res = n /2;
       }
       else
       {
        res = (n /2) + 1;
       }

       cout << res << endl;
	}
}