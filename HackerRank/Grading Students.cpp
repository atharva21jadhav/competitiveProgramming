#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector <int> scoreVector;
    int totalStudents,score,scoreMod;
    cin>>totalStudents;
    for(int i=0;i<totalStudents;i++){
        cin>>score;
        if(score>=38){
            scoreMod=score%5;
            if(scoreMod<3){
                scoreVector.push_back(score);
            }
            else{
                score= score+(5-scoreMod);
                scoreVector.push_back(score);
            }
        }
        else{
            scoreVector.push_back(score);
        }
    }
    for(int i=0;i<totalStudents;i++){
        cout<<scoreVector.at(i)<<endl;
    }
    return 0;
}
