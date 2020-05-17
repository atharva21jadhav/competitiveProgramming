#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
        int j,i,x,totalNumbers,max=0,count=0;
        vector <int> myVector;
        cin>>totalNumbers;
        for(i=0;i<totalNumbers;i++){
            cin>>x;
            myVector.push_back(x);
        }
        sort(myVector.begin(),myVector.end());
        for(i=0;i<totalNumbers;i++){
            for(j=i;j<totalNumbers;j++){
                if((abs(myVector.at(i)-myVector.at(j)))<=1){
                    count++;
                }
            }
            if(max<count){
                max=count;
            }
            count=0;
        }
        cout<<max<<endl;
}
