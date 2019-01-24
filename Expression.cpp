#include <bits/stdc++.h>

using namespace std;

int a,b,c,f,s,t,r ;

int main() 
{
	cin >> a >> b >> c;
	
	f=max(a*b,a+b);
	s=max(f*c,f+c);
	t=max(b*c,b+c);
	r=max(t*a,t+a);
	
    cout << max(r,s) ;
    
    return 0;
}
