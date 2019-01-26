#include <bits/stdc++.h>
#include <algorithm>
#define ll long long
using namespace std;

string str , cpy1,cpy2 ;

int main()
{
    cin >> str ;

    cpy1 = str ;
    reverse( str.begin() , str.end() );
    cpy2 = str ;

    cout << cpy1 << cpy2 ;

    return 0;
}
