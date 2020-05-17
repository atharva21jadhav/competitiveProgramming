#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the squares function below.
int squares(int a, int b) {
    int i;
    float x,y;
    int count=0;
    if(a==b){
        x=sqrt(a);
        if(x==(int)x){
            return 1;
        }
        else{
            return 0;
        }
    }
    else{
        for(i=a;i<=b;i++){
            x=sqrt(i);
            if(x==(int)x){
                break;
            }
            else{
                x=0;
            }
        }
        for(i=b;i>=a;i--){
            y=sqrt(i);
            if(y==(int)y){
                break;
            }
            else{
                y=0;
            }
        }
        if(x==0 && y==0){
            return y-x;
        }
        else{
            return y-x+1;
        }
        
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string ab_temp;
        getline(cin, ab_temp);

        vector<string> ab = split_string(ab_temp);

        int a = stoi(ab[0]);

        int b = stoi(ab[1]);

        int result = squares(a, b);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
