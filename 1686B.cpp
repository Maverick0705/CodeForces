#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n , x;
        cin >> n;

        vector<int> v(n);

        
        for(int i = 0 ; i < n ; i++)
        {
            cin >> x;
            v[i] = x;
        }
        if(n==1)
        {
            cout << "0" << endl;
            continue;
        }

        int count = 0;
        int i = 1;

        while(i < n)
        {
            int j = i;

            while(j < n && v[j] >= v[j-1])j++;
            if( j >= n) break;
            count++;
            i = j+2; 
        }
        cout << count << endl;
    }
    return 0;
}




