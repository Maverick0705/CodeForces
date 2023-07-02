#include <iostream>
using namespace std;

#define ll long long

int main() {

  ll count = 0 , n;
  cin >> n;
  ll i ;

  for(i = 1 ; count < n ; i++)
  {
    cout << i+n << " ";
    count++;
  }


  return 0;
}