#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
    int inputArray[100][100];
    int n,x,ld=0,rd=0;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>x;
            inputArray[i][j]=x;
        }
    }
    for(int i=0;i<n;i++){
        ld=ld+inputArray[i][i];
    }
    int k=n-1;
    for(int i=0;i<n;i++){
        rd=rd+inputArray[i][k];
        k--;
    }
    cout<<abs(ld-rd)<<endl;
    return 0;
}
