#include<iostream>
using namespace std;

int main()
{
    int n;
    int a[100][100] {};
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=n-1;j>(n-i-2);j--){
            a[i][j]=1;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]==1){
                cout<<"#";  
            }
            else if(a[i][j]==0){
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
