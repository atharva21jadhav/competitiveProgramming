#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,x,i,j;
    vector <int> inputVector;
    cin>>n;
    for(i=0;i<n;++i){
        cin>>x;
        inputVector.push_back(x);
    }
    for(i=1;i<=n;i++){
        for(x=0;x<n;x++){
            if(i==inputVector.at(x)){
                for(j=0;j<n;j++){
                    if(inputVector.at(j)==(x+1)){
                        cout<<j+1<<"\n";
                        break;
                    }
                }
            }
        }
    }
    return 0;
}
