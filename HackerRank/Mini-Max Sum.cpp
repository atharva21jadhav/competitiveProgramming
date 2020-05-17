#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector <int> inputVector {};
    long long int x,smallSum=0,bigSum=0;
    for(int i=0;i<5;i++){
        cin>>x;
        inputVector.push_back(x);
    }
    sort(inputVector.begin(), inputVector.end());
    for(int i=0;i<4;i++){
        smallSum=smallSum+inputVector.at(i);
    }
    for(int i=1;i<5;i++){
        bigSum=bigSum+inputVector.at(i);
    }
    cout<<smallSum<<" "<<bigSum;
    return 0;
}
