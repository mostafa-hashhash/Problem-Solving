#include <iostream>
using namespace std ;

string str ;
int v[3] ;
int main()
{
   for(int k=0 ; k<3 ; k++)
    {
        cin >> str ;
        if ( str[1] == '>' ) v[str[0]-'A']++ ;
        else v[str[2]-'A']++ ;
    }

    if ( v[0] == v[1] || v[1] == v[2] || v[0] == v[2]){

        cout << "Impossible";
        return 0;
    }

    for(int i=0 ; i<3 ; ++i)
    {
        for(int j=0 ; j<3 ; ++j)
        {
            if( i == v[j] ) cout << char('A'+j)  ;
        }
    }
    return 0 ;

}
