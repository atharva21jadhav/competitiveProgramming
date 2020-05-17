#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector <int> hurdleVector;
    int x,i,totalHurdles,danJump,max;
    cin>>totalHurdles>>danJump;
    for(i=0;i<totalHurdles;i++){
        cin>>x;
        hurdleVector.push_back(x);
    }
    max=hurdleVector.at(0);
    for(i=0;i<totalHurdles;i++){
        if(max<hurdleVector.at(i)){
            max=hurdleVector.at(i);
        }
    }
    if(danJump>max){
        cout<<"0\n";
    }
    else{
        cout<<max-danJump<<"\n";
    }
    
    return 0;
}
