#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	string a , b;
	cin >> a >> b;

	if(a.size() != b.size())
	{
		cout << "NO" << "\n";
		return 0;
	}
	else
	{
		int c = 0, c1 = 0;
		for(int i = 0; i< a.size();i++)
		{
			if(a[i] != b[i])
			{
				c++;
			}
			else if(a[i] == b[i])
			{
				c1++;
			}
			if(c>2)break;
		}

		if(c==2)
		{
			sort(a.begin(), a.end());
			sort(b.begin(), b.end());
			if(a == b)
			{
				cout <<"YES";
			}
			else
			{
				cout <<"NO";
			}
		}
		else if(c1 == a.size()) cout << "YES";
		else cout << "NO";

	}
    
  return 0;
}