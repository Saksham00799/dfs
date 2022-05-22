
#include <iostream>

using namespace std;

int main()
{
    int m1,m2,n1,n2;
    cout<<"enter rows and columns for matrix 1"<<endl;
    cin>>m1>>n1;
    cout<<"enter rows and columns for matrix 2"<<endl;
    cin>>m2>>n2;
    
    int first[m1][n1],second[m2][n2], res[m1][n1];
    if(n1==m2){
        cout<<"enter elements of first matrix";
        for(int i=0;i<m1;i++)
            for(int j=0;j<n1;j++)
                cin>>first[i][j];
        
        cout<<"enter elements of second matrix";
        for(int i=0;i<m2;i++)
            for(int j=0;j<n2;j++)
                cin>>second[i][j];
        
        for(int i=0;i<m1;i++){
            for(int j=0;j<n2;j++){
                int sum=0;
                for(int k=0;k<n1;k++)
                    sum+=first[i][k]*second[k][j];
                res[i][j]=sum;
            }
        }
        
        for(int i=0;i<m1;i++){
            for(int j=0;j<n2;j++){
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }
        
    }
    else{
        cout<<"matrix can't be multiplied";
    }
    
    
    return 0;
}

