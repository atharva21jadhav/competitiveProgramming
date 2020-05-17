#include <iostream>
#include <vector>
using namespace std;

int main(){
    long int i,totalElements,sum=0,count=0,initalSum=0;
    vector <char> inputString;
    char x;
    int flag=0;
    cin>>totalElements;
    for(i=0;i<totalElements;i++){
        cin>>x;
        inputString.push_back(x);
    }
    for(i=0;i<totalElements;i++){
        initalSum=sum;
        if(inputString.at(i)=='U'){
            sum++;
        }
        else{
            sum--;
        }
        
        if(initalSum<0 && sum>=0){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}
