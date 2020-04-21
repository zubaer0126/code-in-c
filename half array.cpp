#include<iostream>

using namespace std;

int main()

{
    int n, i, a[10], temp ;

    cin>>n ;

    for(i=0 ; i<n ; i++)
    {
        cin>>a[i] ;
    }

    for(i=0 ; i<n/2 ; i++)
    {
        cout<<a[i]<<" ";
        temp= i ;
    }
    cout<<"\n" ;
    for(i=temp+1 ; i<n ; i++)
    {
        cout<<a[i]<<" ";
    }

}
