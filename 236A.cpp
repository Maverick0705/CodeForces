#include<bits/stdc++.h>
using namespace std;

int main()
{
	string str;
	int count = 1;

	cin >> str;

    sort(str.begin(), str.end());
    for(int i = 0 ; i < str.size() - 1 ; i++)
    {
        if(str[i] != str[i+ 1])
        {
            count ++;
        }
    }
    
    if(count % 2 != 0)
    {
        cout << "IGNORE HIM!";
    }
    else
    {
        cout << "CHAT WITH HER!";
    }

}