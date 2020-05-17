#include <bits/stdc++.h> 
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);  

    long int budget,x;
    long long int max=-1,sum=0;
    long int totalKeyboards,totalUSBs,i,j;
    vector <long int> keyboardVector;
    vector <long int> USBvector;
    cin>>budget>>totalKeyboards>>totalUSBs;
    for(i=0;i<totalKeyboards;i++){
        cin>>x;
        keyboardVector.push_back(x);
    }
    for(i=0;i<totalUSBs;i++){
        cin>>x;
        USBvector.push_back(x);
    }
    for(i=0;i<totalKeyboards;i++){
        for(j=0;j<totalUSBs;j++){
            sum=keyboardVector.at(i)+USBvector.at(j);
            if(sum<=budget && sum>max){
                max=sum;
            }
        }
    }
    cout<<max<<endl;
    return 0;
}//374623
