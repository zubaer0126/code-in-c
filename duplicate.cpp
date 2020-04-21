#include<iostream>

using namespace std;

int main()
{
    int i, n, a[10], x, count=0 ;

    cin>> n ;

    for(i=0 ;i<n ; i++)
    {
        cin>>a[i] ;
    }

    cout<<"Enter the given number: " ;
    cin>> x;

    for(i=0 ; i<n ; i++)
    {
        if (a[i]==x)
        {
            count++ ;
        }
    }

    if(count==2)
    {
        cout<<"The number is duplicate" ;
    }

    else
    {
        cout<<"The number is not duplicate" ;
    }
}
