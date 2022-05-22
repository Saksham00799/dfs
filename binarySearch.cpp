#include <iostream>

using namespace std;
bool binarySearch(int arr[],int n,int key){
    int s=0,e=n-1;
    
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==key)
            return true;
        else if(arr[mid]<key)
            s=mid+1;
        else
            e=mid-1;
    }
    return false; 
}

int main()
{
    int n=5;
    int arr[5]={1,2,3,4,5};
    if(binarySearch(arr,5,1))
        cout<<"found";
    else
        cout<<"not found";
    
    return 0;
}

