#include<iostream>

using namespace std;

int main()

{
    int arr[50], i, n, pos, size, item ;
    cout<<"Enter the Size of array: " ;
    cin>> n;

    cout<<"Enter the array Elements: " ;
    for(i=0 ;i<n ;i++)
    {
        cin>>arr[i] ;
    }

    cout<<"Enter the delete position: " ;
    cin>> pos ;

    if(pos<0 || pos>size)
    {
        cout<<"Invalid Position" ;
    }
    else
    {
        item=arr[pos-1] ;

        for(i=pos-1 ; i<size-1 ;i++)
        {
            arr[i]=arr[i+1]  ;
        }
        size-- ;

        cout<<"Array after deleteion: " ;
        for(i=0 ; i<n-1 ;i++)
        {
            cout<<arr[i]<<" " ;
        }

    }
 return 0 ;
}
