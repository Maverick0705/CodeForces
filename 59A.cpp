#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;
	char ch;
	int small = 0 , capital = 0;
	for(int i = 0 ; i < s.size(); i++)
	{
		if(s[i] >= 97)
		{
			small++;
		}
		else
		{
			capital++;
		}
	}

	if((capital < small) || (capital == small))
	{
		for(int i = 0 ; i < s.size(); i++)
		{
			ch= tolower(s[i]);
			cout << ch ;
	    }
	}
	else
	{
		for(int i = 0 ; i < s.size(); i++)
		{
			ch = toupper(s[i]);
			cout <<  ch ;
		}
	}
}