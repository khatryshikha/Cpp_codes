#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    stringstream ss(str);
    vector<int> vec;
    string num;

    while(std::getline(ss, num, ',')) {
        int num_dec = std::stoi(num);
        vec.push_back(num_dec);
    }
    return vec;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}