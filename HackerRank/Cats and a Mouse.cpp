#include <iostream>
using namespace std;

int main(){
    int i,totalCases,catA,catB,mouseC;
    cin>>totalCases;
    for(i=0;i<totalCases;i++){
        cin>>catA>>catB>>mouseC;
        if((abs(catA-mouseC))>(abs(catB-mouseC))){
            cout<<"Cat B"<<endl;
        }
        else if((abs(catA-mouseC))<(abs(catB-mouseC))){
            cout<<"Cat A"<<endl;
        }
        else{
            cout<<"Mouse C"<<endl;
        }
    }
    return 0;
}
