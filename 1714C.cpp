#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int a = 9;
		int b;
		cin >> b;
		int ans = 0;
		std::vector<int> v;
		while(b)
		{
			if(b > a)
			{
				v.push_back(a);
				b -= a;
				a--;
			}

			else 
			{
				v.push_back(b);
				break;
			}
		}

		/*for(int i = 0; i < v.size(); i++)
		{
			cout << v[i] << " ";
		}
		cout << endl;*/

		for( int i = v.size() - 1 ; i >= 0 ; i--)
		{
			ans = (ans * 10)+v[i];
		}
		cout << ans << endl;
	}

}