#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the acmTeam function below.
vector<int> acmTeam(vector<string> topic,int n,int m) {
        vector <int> countVector,output;
        int count=0,max_count=0,max_str=0,i,j,k;
        //cout<<m<<endl;
        for(i=0;i<n-1;i++){
            for(j=i+1;j<n;j++){
                for(k=0;k<m;k++){
                    if(topic[i][k]+topic[j][k]>=97){
                        count++;
                    }
                }
                if(max_count<count){
                    max_count=count;
                }
                countVector.push_back(count);
                count=0;
            }
        }
        for(i=0;i<countVector.size();i++){
            if(countVector.at(i)==max_count){
                max_str++;
            }
        }
        cout<<max_count<<"\t"<<max_str<<endl;
        output.push_back(max_count);
        output.push_back(max_str);
        return output;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string nm_temp;
    getline(cin, nm_temp);

    vector<string> nm = split_string(nm_temp);

    int n = stoi(nm[0]);

    int m = stoi(nm[1]);

    vector<string> topic(n);

    for (int i = 0; i < n; i++) {
        string topic_item;
        getline(cin, topic_item);

        topic[i] = topic_item;
    }

    vector<int> result = acmTeam(topic,n,m);

    for (int i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

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
