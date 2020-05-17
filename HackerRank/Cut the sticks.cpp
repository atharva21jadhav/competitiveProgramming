#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> arr,finVector;
    int min=9999,i,n,x,flag=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>x;
        arr.push_back(x);
    }
    for(i=0;i<n;i++){
        if(arr.at(i)<min){
            min=arr.at(i);
        }
    }
    x=0;
    cout<<n<<endl;
    while(flag!=1){
        for(i=0;i<n;i++){
            arr.at(i)=arr.at(i)-min;
            if(arr.at(i)>0){
                x++;
            }
        }
        if(x>0)
            cout<<x<<endl;
        x=0;
        min=9999;
        for(i=0;i<n;i++){
            if(arr.at(i)<min && arr.at(i)>0){
                min=arr.at(i);
            }
        }
        for(i=0;i<n;i++){
            if(arr.at(i)>0){
                flag=0;
                break;
            }
            else{
                flag=1;
            }
        }
    }
    return 0;
}
