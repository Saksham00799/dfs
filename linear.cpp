#include <iostream>

using namespace std;
bool linearSearch(int arr[],int n,int key){
    for(int i=0;i<n;i++)
        if(arr[i]==key)
            return true;
    return false; 
}

int main()
{
    int n=5;
    int arr[5]={1,2,3,4,5};
    if(linearSearch(arr,5,06))
        cout<<"found";
    else
        cout<<"not found";
    
    return 0;
}
