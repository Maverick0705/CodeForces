#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<int,int>> v;
    for(int i = 0; i < n; i++)
    {
        int x , y;
        cin >> x >> y;
        v.push_back(make_pair(x , y));
    }
    int ans = 0;
    for(int i = 0; i < n;i++)
    {   
        int c = 0;
        for(int j = 0 ; j <n ;j++)
        {
            if(v[j].first > v[i].first  && v[j].second == v[i].second)
            {
                c++;
            }
            if(v[j].first < v[i].first  && v[j].second == v[i].second)
            {
                c++;
            }
            if(v[j].first == v[i].first  && v[j].second < v[i].second)
            {
                c++;
            }
            if(v[j].first == v[i].first  && v[j].second > v[i].second)
            {
                c++;
            }
            if(c == 4)
            {
                ans++;
            }
        }
    }
    cout << ans << endl;
}