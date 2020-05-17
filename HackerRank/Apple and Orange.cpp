#include <iostream>
#include <vector>
using namespace std;
int main(){
        int houseStart,houseEnd,i;
        cin>>houseStart>>houseEnd;
        
        int applePos,orangePos;
        cin>>applePos>>orangePos;
        
        int totalApples,totalOranges,x;
        cin>>totalApples>>totalOranges;
        
        vector <int> appleDist,orangeDist;
        
        for(i=0;i<totalApples;i++){
            cin>>x;
            appleDist.push_back(applePos+x);
        }
        for(i=0;i<totalOranges;i++){
            cin>>x;
            orangeDist.push_back(orangePos+x);
        }
        int appleCount {0},orangeCount {0};
        for(i=0;i<totalApples;i++){
            if(appleDist.at(i)>=houseStart && appleDist.at(i)<=houseEnd){
                appleCount++;
            }
        }
        for(i=0;i<totalOranges;i++){
            if(orangeDist.at(i)>=houseStart && orangeDist.at(i)<=houseEnd){
                orangeCount++;
            }
        }
        cout<<appleCount<<endl<<orangeCount<<endl;
        return 0;
}
