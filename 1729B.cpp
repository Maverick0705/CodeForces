#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		string s;
		cin >> s;
		stack <char> v;
		for(ll i = 0; i < n ;i++)
		{
			v.push(s[i]);
		}
		string ans = "";

		while(!v.empty())
		{
			ll k;
			k = v.top()- '0';
			v.pop();

			if(k == 0)
			{
				ll q,w, e;
				q= v.top()- '0';
				v.pop();
				w = v.top()- '0';
				v.pop();
				e = w*10;
				e+= q;
				ans+= (e-1 +'a');
			}
			else
			{
				ans+= (k-1 + 'a');
			}

		}

		reverse(ans.begin(), ans.end());
		cout << ans << endl;
		

	}
    
  return 0;
}