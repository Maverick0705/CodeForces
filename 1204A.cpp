//Right code if constrain is less

#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int bin , dec = 0 ,a , res = 0 , count = 0;
	cin >> bin;
	int i = 0;
	while (bin > 0)
	{
		a = bin%10;
		dec += a * pow(2 ,i);
		i++;
        bin = bin/10;
	}
int j = 0;
while(dec > res)
{
	res = pow(4,j);
	if(res < dec){
	count++;
	j++;}
	else 
		{break;}
}
cout << count ;
}