#include <iostream>
using namespace std;
int main(){  int arr[5]={-4,2,3,4,5};
    int n=9;
    int begin=0,end=5,mid=0;
    while(1){
        mid=(begin+end)/2;
     if(begin>end)
     {
         cout<<"not found";
         break;
         
     }
else if(arr[mid]==n)
{
    cout<<"found at"<<mid+1;
    break;
    
}
        else if(arr[mid]>n)
        {
            end=mid-1;
            
        }
        else if(arr[mid]<n)
        {
            begin=mid+1;
            
        }
    }
}
