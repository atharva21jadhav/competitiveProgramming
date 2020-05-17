#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> inputVector;
    int i,j,totalElements, x, k,count=0;
    cin>>totalElements>>k;
    for(i=0;i<totalElements;i++){
        cin>>x;
        inputVector.push_back(x);
    }    
    for(i=0;i<totalElements-1;i++){
        for(j=i+1;j<totalElements;j++){
            x=(inputVector.at(i)+inputVector.at(j)%k);
            //cout<<inputVector.at(i)<<"+"<<inputVector.at(j)<<"%"<<k<<"="<<x<<"   ";
            if((inputVector.at(i)+inputVector.at(j))%k==0){
                count++;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}
