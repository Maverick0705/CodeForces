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
		int count = 1 , ans = 1;
		int j = 2;
		while(1)
            {
                if(j%2 == 0 || j%3 == 0 || j%5 == 0)
                {
                    count++;
                    if(count == n)
                    {
                        ans = j;
                        break;
                    }
                    else
                    {
                    	j++;
                    }
                }
            }

		cout << ans << endl;
	}
}