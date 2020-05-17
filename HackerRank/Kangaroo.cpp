#include <iostream>
using namespace std;

int main(){
    int kangaroo1,jump1,kangaroo2,jump2,i=0,minpos,maxpos,minjump,maxjump,minKangarooPos,maxKangarooPos,flag=0;
    cin>>kangaroo1>>jump1>>kangaroo2>>jump2;
    if((kangaroo1<=kangaroo2 && jump1<jump2) || (kangaroo2<=kangaroo1 && jump2<jump1)){
        flag=0;
    }
    else{
        minpos=min(kangaroo1,kangaroo2);
        if(minpos==kangaroo1){
            minjump=jump1;
            maxjump=jump2;
            maxpos=kangaroo2;
        }
        else{
            minjump=jump2;
            maxjump=jump1;
            maxpos=kangaroo1;
        }
        while(1){
            minKangarooPos=minpos+i*minjump;
            maxKangarooPos=maxpos+i*maxjump;
            if(minKangarooPos==maxKangarooPos){
                flag=1;
                break;
            }
            else if(minKangarooPos>maxKangarooPos){
                flag=0;
                break;
            }
            i++;
        }
    }
    if(flag==0){
        //cout<<i<<endl;
        cout<<"NO"<<endl;
    }
    else{
        //cout<<i<<endl;
        cout<<"YES"<<endl;
    }
}
    
