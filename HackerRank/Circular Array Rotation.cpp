#include <iostream>
using namespace std;
 
int main(){
    int arr1[100000],arr2[100000], totalElements, rotations, totalQueries,i,j;
    cin>>totalElements>>rotations>>totalQueries;
    rotations= rotations%totalElements;
    for(i=0;i<totalElements;i++){
        cin>>arr1[i];
    }
    for(i=rotations;i<totalElements;i++){
        arr2[i]= arr1[i-rotations];
    }
    j=totalElements-1;
    for(i=rotations-1;i>=0;i--){
        arr2[i] = arr1[j];
        j--;
    }
    
    for(i=0;i<totalQueries;i++){
        cin>>j;
        cout<<arr2[j]<<endl;
    }
    return 0;
}
