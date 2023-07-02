#include<bits/stdc++.h>
using namespace std;

void solve(int a[] , int n , int b[] , int m)
{
    set<int> s;
    for(int i = 0 ; i < n ; i++)
    {
        s.insert(a[i]);
    }

    cout << "Duplicates are: " << endl;
    for(int i = 0 ; i < n ; i++)
    {
        if(s.find(b[i]) != s.end())
        {
            cout << b[i] << " ";
        }
    }

    
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n ; i++)
    {
        cin >> a[i];
    }
    int m;
    cin >> m;
    int b[m];
    for(int i = 0; i < n ; i++)
    {
        cin >> b[i];
    }

    solve(a, n , b , m);
}