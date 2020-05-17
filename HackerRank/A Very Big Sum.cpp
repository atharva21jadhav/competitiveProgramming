#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector <int> inputVector;
    int n,i, inputElement;
    long long int sum=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>inputElement;
        inputVector.push_back(inputElement);
    }
    for(i=0;i<n;i++){
        sum=sum+ inputVector.at(i);
    }
    cout<<sum;
    return 0;
}
