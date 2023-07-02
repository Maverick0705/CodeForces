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
        unordered_map<int,int>um;
        int a[n];
        int ans = 0;
        for(int i = 0 ; i< n;i++)
        {
            cin >> a[i];
        }
        
            bool flag = false;
            for(int i =0; i< n;i++)
            {
                um[a[i]]++;
            }
           for(int i = n-1;i>=0;i--)
           {
                if(a[i] == a[i-1])
                    {um[a[i]]--;}
                
                else if(a[i] > a[i-1])
                    {
                        um.erase(a[i]);
                    }
                    flag = true;
                }
                else
                {
                    break;
                }
           }

           if(flag == true)
           {
                ans = um.size() - 1;
           }
           else
           {
                ans = um.size();
           }
        cout << ans << endl;
    }
}