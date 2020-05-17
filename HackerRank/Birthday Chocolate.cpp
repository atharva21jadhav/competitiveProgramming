#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> elementVector;
    int i,j,totalElements,elementValue,birthDate,birthMonth,count=0,sum=0;
    cin>>totalElements;
    for(i=0;i<totalElements;i++){
        cin>>elementValue;
        elementVector.push_back(elementValue);
    }
    cin>>birthDate>>birthMonth;
    for(i=0;i<=(totalElements-birthMonth);i++){
        for(j=i;j<(i+birthMonth);j++){
            sum=sum+elementVector.at(j);
        }
        if(sum==birthDate){
                count++;
            }
        sum=0;
    }
    cout<<count<<endl;
    return 0;
}
