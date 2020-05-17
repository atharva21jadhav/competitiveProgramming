#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int total_queries,total_elements,flag=0,output_array[10];
    long long int comparison_factor,x;
    long long int sum_check;
    vector <long long int> A,B;
    cin>>total_queries;
    for(int i=0;i<total_queries;i++){
        cin>>total_elements>>comparison_factor;
        for(int j=0;j<total_elements;j++){
            cin>>x;
            A.push_back(x);
        }
        for(int j=0;j<total_elements;j++){
            cin>>x;
            B.push_back(x);
        }
        sort(A.begin(),A.end());
        sort(B.begin(),B.end(),greater <long long int> ());
        for(int j=0;j<total_elements;j++){
            sum_check=A.at(j)+B.at(j);
            if(sum_check>=comparison_factor){
                flag=1;
            }
            else{
                flag=0;
                break;
            }
        }
        if(flag==1){
            output_array[i]=1;
        }
        else if(flag==0){
            output_array[i]=0;
        }
        A.clear();
        B.clear();
    }
    for(int i=0;i<total_queries;i++){
        if(output_array[i]==1){
            cout<<"YES"<<endl;
        }
        else if(output_array[i]==0){
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
