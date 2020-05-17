#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int inputVector[1000];
    int n,x,pCount=0,nCount=0,zCount=0;
    float pfrac,nfrac, zfrac;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        inputVector[i]=x;
    }
    for(int i=0;i<n;i++){
        if(inputVector[i]>0){
            pCount++;
        }    
            
        else if(inputVector[i]<0){
            nCount++;
        }    
        else{
            zCount++;
        }    
    }
    //cout<<pCount<<nCount<<zCount;
    pfrac=(double)pCount/n;
    nfrac=(double)nCount/n;
    zfrac=  (double)zCount/n;
    cout<<pfrac<<endl<<nfrac<<endl<<zfrac<<endl;
    return 0;
}
