#include<iostream>

using namespace std ;

int main()

{
    int arr[50], i ,pos, n, num ;

    cout<<"Enter the array size: " ;
    cin>> n;

    cout<<"Enter the array elements: " ;
    for(i=0 ; i<n ; i++)
    {
        cin>>arr[i] ;
    }

    cout<<"Enter the given element: " ;
    cin>> num ;

    cout<<"Enter the postion: " ;
    cin>>pos ;

    if(pos<=0 || pos>n)
    {
        cout<<"Invalid Position" ;
    }
    else
    {
        for(i=n-1 ; i>=pos-1 ;i--)
        {
            arr[i+1]=arr[i] ;
        }
        arr[pos-1]=num ;
        n++ ;
    }

    for(i=0 ; i<n ;i++)
    {
        cout<<arr[i]<<" " ;
    }
}
