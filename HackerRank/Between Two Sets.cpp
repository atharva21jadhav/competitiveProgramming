#include <iostream>
#include <vector>
using namespace std;

int maxValue(vector <int> a,int n){
    int i=0,maxval;
    maxval=a.at(i);
    for(i=0;i<n;i++){
        if(maxval<=a.at(i)){
            maxval=a.at(i);
        }
    }
    return maxval;
}

int minValue(vector <int> a,int n){
    int i=0,minval;
    minval=a.at(i);
    for(i=0;i<n;i++){
        if(minval>=a.at(i)){
            minval=a.at(i);
        }
    }
    return minval;
}


int main(){
    vector <int> vector1,vector2;
    int flag=0,i,x,maxvector1, minvector2,numberVector1,numberVector2,count=0,j;
    cin>>numberVector1>>numberVector2;
    for(i=0;i<numberVector1;i++){
        cin>>x;
        vector1.push_back(x);
    }
    for(i=0;i<numberVector2;i++){
        cin>>x;
        vector2.push_back(x);
    }

    maxvector1= maxValue(vector1,numberVector1);
    minvector2= minValue(vector2,numberVector2);
    for(i=maxvector1;i<=minvector2;i++){
        for(j=0;j<numberVector1;j++){
            if(i%vector1.at(j)==0){
                    flag=1;
            }
            else{
                flag=0;
                break;
            }
        }
        if(flag==1){
            for(j=0;j<numberVector2;j++){
                if(vector2.at(j)%i==0){
                    flag=1;
                }
                else{
                    flag=0;
                    break;
                }
            }
        }
        else{
            flag=0;
        }
        if(flag==1){
            count++;
        }
    }
    cout<<count<<endl;
}
