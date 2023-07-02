#include <iostream>
using namespace std ;
 
int main()
{
    string s ;
    cin >> s ;
    int n = s.size() ;
 
    int pos = s.find('0') ;
    if ( pos == -1 )
        cout << s.substr(1) ;
    else
        cout << s.substr(0, pos)+s.substr(pos+1) ;
 
  }