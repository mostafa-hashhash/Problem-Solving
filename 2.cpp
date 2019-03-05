#include <iostream> 
#include <set> 
using namespace std ;

  set <char> cs ;

int func(int x)
{
	if( x ==1|| x==0)
		return 1;
		
	return x*func(x-1) ;
}

int main()
{
	string s ;
	cin >> s;
	
	for(unsigned int i=0; i<s.length() ;++i)
		cs.insert(s[i]) ;
		
	cout << func(cs.size()) ;
	
	return 0;
}
