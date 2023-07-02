#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        int arr[n];
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        
        sort(arr, arr+n);
        
        int ans = (arr[n-1] - arr[0]) + (arr[n-2] + arr[1]);

        cout << ans << endl;
    }
}