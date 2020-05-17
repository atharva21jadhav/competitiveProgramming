#include <bits/stdc++.h>

using namespace std;

unsigned long int int_length(unsigned long int n){
    unsigned long int i=0;
    while(n>0){
        i++;
        n/=10;
    }
    return i;
}

// Complete the kaprekarNumbers function below.
void kaprekarNumbers(unsigned long int p,unsigned long int q) {
    unsigned long int i,sqr,int_len,p1,p2;
    bool flag=false;
    for(i=p;i<=q;i++){
        sqr=i*i;
        int_len=int_length(sqr);
        if(int_len%2==0){
            p1=sqr/(pow(10,(int_len/2)));
            p2=fmod(sqr,(pow(10,(int_len/2))));
        }
        else{
            p1=sqr/(pow(10,(int_len/2)+1));
            p2=fmod(sqr,(pow(10,(int_len/2)+1)));
        }
        //cout<<p1<<"\t"<<p2<<"\t"<<(p1+p2)<<endl;
        if(i==(p1+p2) && i!=10 && i!=100 && i!=1000 && i!=10000){
            flag=true;
            cout<<i<<" ";
        }
    }
    if(!flag){
        cout<<"INVALID RANGE"<<endl;
    }
}

int main()
{
    long int p;
    cin >> p;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    kaprekarNumbers(p, q);

    return 0;
}
