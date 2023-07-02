#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin >> n;
        vector <int> v(n);
        set<int>st;
        bool zero = false;
        int non_zero = 0;
        
        for(int i = 0 ;i < n; i++)
        {
            cin >> v[i];
            if(v[i]!= 0)
            {
                non_zero++;
            }
            else
            {
                zero = true;
            }
            st.insert(v[i]);
        }
        if(zero == true)
        {
            cout <<non_zero << endl;
        }
        else
        {
            if(st.size() < v.size())
            {
                cout << v.size() << endl;
            }
            else
            {
                cout << v.size() + 1 << endl;
            }
        }
	}
	return 0;
}
