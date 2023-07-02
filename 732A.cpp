#include<bits/stdc++.h>
using namespace std;



int main()
{
    int k , r , x;
    cin >> k >> r;

    int i = 1;

    while ( i > 0)
    {
    	if((k*i) % 10 == r || (k*i) % 10 == 0)
    	{
    		x = i;
    		break;
    	}
    	else
    	{
    		i++;
    	}
    }
    cout << x;

}