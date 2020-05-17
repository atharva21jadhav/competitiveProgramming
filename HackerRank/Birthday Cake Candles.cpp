#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector <long long int> inputVector {};
    long long int count=0;
    long long int x,n, greatestNo;
    cin>>n;
    for(long long int i=0;i<n;i++){
        cin>>x;
        inputVector.push_back(x);
    }
    sort(inputVector.begin(), inputVector.end(),greater<long long int>());
    greatestNo=inputVector.at(0);
    //cout<<greatestNo;
    for(long long int i=0;i<n;i++){
        if(greatestNo==inputVector.at(i)){
            count=count+1;
        }
        else{
        break;
        }
    }
    cout<<count<<endl;
    return 0;
}
