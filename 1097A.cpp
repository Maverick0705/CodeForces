#include<bits/stdc++.h>
using namespace std;

int main()
{
    bool b1 = false;
	
	string str1 ,stra , strb, strc, strd, stre;
    cin >> str1;
    cin >> stra >> strb>> strc>> strd>> stre;

    if(str1[0] == stra[0] || str1[1] == stra[1])
    {
       b1 = true;
    }
    else if(str1[0] == strb[0] || str1[1] == strb[1])
    {
       b1 = true;
    }
    else if(str1[0] == strc[0] || str1[1] == strc[1])
    {
       b1 = true;
    }
    else if(str1[0] == strd[0] || str1[1] == strd[1])
    {
       b1 = true;
    }
    else if(str1[0] == stre[0] || str1[1] == stre[1])
    {
       b1 = true;
    }

    if(b1)
    {
       cout << "YES";
    }
    else
    {
    cout << "NO";
    }

}