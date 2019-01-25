#include <bits/stdc++.h>
#define ll long long
#define lp(i,n) for(int i=0 ; i<n ;++i)
using namespace std;
bool fnd(char c);


bool f=1;
string str;
ll n;
int main()
{
	
	cin >> n;
	while (n--){
		f=1;
		cin >> str ;
		int l = str.length();
		l--;
		int i =0;
		while (i <= l ){
			if ( !(str[i] == str[l] && fnd(str[i]) ))
			{
			  f =0;break;
			  
			} 
		  i++;
		  l--; 
		 
		}
		cout << ( (f) ? "yes\n":"no\n" ) ; 	
	
	}
	return 0;
}

bool fnd(char c)
{
	if ( c== 'A' || c == 'H' || c == 'V' || c == 'W' || c == 'I' || c == 'O' || c == 'U' || c == 'M' || 
		c == 'T' || c == 'X' || c == 'Y'  )
		return 1 ;
	else
		return 0;
}
