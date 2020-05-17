#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> vector1;
    int totalElements,i,minScoreCount=0,maxScoreCount=0;
    long int scores,minimum,maximum;
    cin>>totalElements;
    for(i=0;i<totalElements;i++){
        cin>>scores;
        vector1.push_back(scores);
    }
    minimum=maximum=vector1.at(0);
    for(i=1;i<totalElements;i++){
        if(vector1.at(i) > maximum){
            maximum=vector1.at(i);
            maxScoreCount++;
        }
        else if(vector1.at(i) < minimum){
            minimum=vector1.at(i);
            minScoreCount++;
        }
    }
    
    cout<<maxScoreCount<<" "<<minScoreCount<<endl;
}
