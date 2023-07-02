//Activity Selection
#include<bits/stdc++.h>
using namespace std;

bool cmp(vector<int> a , vector<int> b)
{
    return a[1] < b[1];
}

int main()
{
    int n;
    cin >> n;
    int start , end;
    
    vector<vector<int>> v;
    
    for(int i = 0 ; i < n ; i++)
    {
        cin >> start >> end;
        v.push_back({start, end});
    }
    
    sort(v.begin() , v.end()  , cmp);
    
    
    int current = v[0][1];
    int count = 1;
    cout << v[0][0] << "->" << v[0][1] << endl;
    for(int i = 1 ; i < n ; i++)
    {
        if(v[i][0] >= current)
        {
            
            cout << v[i][0] <<"->" <<v[i][1] << endl;
            current = v[i][1];
            count++;

        }
    }
    
    cout << "No. of activities that can be done: " << count << endl;
}