#include <iostream>

using namespace std;

void printArray(int* arr, int n){
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}

int partition(int* arr, int s, int e){
    int pivot=arr[s];
    
    int i=s+1,count=0;
    while(i<=e){
        if(pivot>arr[i])
            count++;
        i++;
    }
    int pivotInd=s+count;
    swap(arr[s],arr[pivotInd]);
    
    i=s;
    int j=e;
    while(i<pivotInd and j>pivotInd){
        while(arr[i]<pivot)
            i++;
        while(arr[j]>pivot)
            j--;
        if(i<pivotInd and j>pivotInd)
            swap(arr[i++],arr[j--]);
    }
    return pivotInd;
    
}
void quicksort(int*arr,int s,int e){
    if(s>=e)
        return;
    int p=partition(arr,s,e);
    quicksort(arr,s,p-1);
    quicksort(arr,p+1,e);   
}
int main()
{
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    quicksort(arr,0,n-1);
    printArray(arr,n);
    return 0;
}
