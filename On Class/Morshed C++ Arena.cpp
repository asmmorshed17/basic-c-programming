#include<iostream>
using namespace std ;
int main()
{
    int n,X=0 ;
    string operation ;
    cin>>n ;

    for(int i=0;i<n;i++)
    {
        cin>> operation ;
        if(operation.find("++")!=string::npos)
        {
            X ++ ;
        }
        else
        {
            X-- ;
        }
    }
    cout<<X <<endl ;
    return 0;
}
