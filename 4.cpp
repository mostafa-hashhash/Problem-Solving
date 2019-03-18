

#include <bits/stdc++.h> 
using namespace std ;

char arr[100000] ;
int freq[26];
pair <int,int> p[26];
int main()
{
	int n;
	cin >> n ;
	
	for(int i=0 ; i<n ; ++i)
	{
		cin >> arr[i];
		freq[arr[i]-'a']++ ;
	}
	
	//sort(freq,freq+26);
	int c=0;
	for(int i=0 ; i<26 ; ++i)
	{	if( freq[i] != 0 )
		{	
			p[i].second = i ;
			p[i].first = freq[i] ;
			c++;
		}
	}
		sort(p,p+26);
		
		for(int i=0 ; i<c ; ++i)
			cout << char(p[i++].second+97) ; 
		
	return 0;
}
