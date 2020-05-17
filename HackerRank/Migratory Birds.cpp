#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <long int> inputVector;
    long int i,totalElements,x,countArray[5]={0},max=0;
    cin>>totalElements;
    for(i=0;i<totalElements;i++){
        cin>>x;
        inputVector.push_back(x);
    }
    for(i=0;i<totalElements;i++){
        if(inputVector.at(i)==1){
            countArray[0]++;
        }
        else if(inputVector.at(i)==2){
            countArray[1]++;
        }
        else if(inputVector.at(i)==3){
            countArray[2]++;
        }
        else if(inputVector.at(i)==4){
            countArray[3]++;
        }
        else{
            countArray[4]++;
        }
    }
    max=countArray[0];
    for(i=0;i<5;i++){
        if(max<=countArray[i]){
            max=countArray[i];
        }
    }
    for(i=0;i<5;i++){
        if(max==countArray[i]){
            cout<<i+1<<endl;
            break;
        }
    }
    return 0;
}
