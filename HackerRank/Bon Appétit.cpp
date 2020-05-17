#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> inputVector;
    int i,x,totalElements,k,bill,sum=0;
    cin>>totalElements>>k;
    for(i=0;i<totalElements;i++){
        cin>>x;
        inputVector.push_back(x);
    }
    cin>>bill;
    for(i=0;i<totalElements;i++){
        sum=sum+inputVector.at(i);
    }
    //cout<<sum;
    if((sum/2)==bill){
        sum=(sum-inputVector.at(k))/2;
        cout<<(bill-sum);
    }
    else{
        cout<<"Bon Appetit"<<endl;
    }
    return 0;
}
