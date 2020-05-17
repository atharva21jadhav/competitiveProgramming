#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> socksVector;
    int j,i,x,totalSocks,totalPairs=0;
    cin>>totalSocks;
    for(i=0;i<totalSocks;i++){
        cin>>x;
        socksVector.push_back(x);
    }
    for(i=0;i<(totalSocks-1);i++){
        if(socksVector.at(i)>=0){
            for(j=i+1;j<totalSocks;j++){
                if(socksVector.at(i)==socksVector.at(j)){
                    socksVector[i]=socksVector[j]=-1;
                }
            }
        }
    }
    for(x=0;x<totalSocks;x++){
        if(socksVector.at(x)==-1){
            totalPairs++;
        }
    }
    cout<<(totalPairs/2)<<endl;
    return 0;
}
