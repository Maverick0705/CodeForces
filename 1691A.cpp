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
        int arr[n] , count1 = 0 , count2 = 0;
        for(int i = 0 ; i < n ; i++)
        {
            cin >> arr[i];
        }
        for(int i = 0 ; i< n ; i++)
        {
            if(arr[i] %2 == 0)
            {
                count1++;
            }
            else
            {
                count2++;
            }
        }
        if(count1 >= count2)
        {
            cout << count2 << endl;
        }
        else
        {
            cout << count1 << endl;
        }
    }

}