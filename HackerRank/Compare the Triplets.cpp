#include<iostream>
#include<vector>
using namespace std;
void accept(vector <int> acceptScore){
    int scoreObtained;
    for(int i=0;i<3;i++){
        cin>>scoreObtained;
        acceptScore.push_back(scoreObtained);
    }
}

void compareScores(vector <int> AliceScore,vector <int> BobScore){
    int finalOutput[2]={0};
    for(int i=0;i<3;i++){
        if(AliceScore.at(i) > BobScore.at(i)){
            finalOutput[0]=finalOutput[0]+1;
        }
        else if(AliceScore.at(i) < BobScore.at(i)){
            finalOutput[1]=finalOutput[1]+1;
        }
        else    continue;
    }
    for(int i=0;i<2;i++){
        cout<<finalOutput[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    vector <int> AliceScore;
    vector <int> BobScore;
    //accept(AliceScore);
    //accept(BobScore);
    
    int scoreObtained;
    for(int i=0;i<3;i++){
        cin>>scoreObtained;
        AliceScore.push_back(scoreObtained);
    }
    for(int i=0;i<3;i++){
        cin>>scoreObtained;
        BobScore.push_back(scoreObtained);
    }
    compareScores(AliceScore, BobScore);
    cout<<endl;
    return 0;
}
