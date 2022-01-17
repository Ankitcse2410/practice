#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    unordered_map<string, string> dict;
    int n;
    cin >> n;
    string line;
    getline(cin, line);
    for (int i = 0; i < n; ++i)
    {
        pair<string, string> rec;
        getline(cin, rec.first);
        getline(cin, rec.second);
        dict.insert(rec);
    }
    
    for (getline(cin, line); line != ""; getline(cin, line) )
    {
        auto it = dict.find(line);
        if (it != end(dict))
            cout << it->first << "=" << it->second << "\n";
        else
            cout << "Not found\n";
        line = "";
    }
}

