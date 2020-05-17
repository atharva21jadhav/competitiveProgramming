#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n) {
    long int i,count=0,total;
    for(i=0;i<s.length();i++){
        if(s.at(i)=='a'){
            count++;
        }
    }
    total=count*(n/s.length());
    for(i=0;i<(n%s.length());i++){
        if(s.at(i)=='a'){
            total++;
        }
    }
    return total;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}
