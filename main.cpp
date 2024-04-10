#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

bool isOperator(const string& token){
    if(token == "Insert" || token == "Traverse" || token == "Remove"){
        return true;
    }
    return false;
}

void strip(string& data){
    data.erase(std::remove(data.begin(), data.end(), '\n'), data.end());
    data.erase(std::remove(data.begin(), data.end(), '\r'), data.end());
}

int main() {
    ifstream infile{"input3.txt"};

    string token;

    while(getline(infile,token)){
        strip(token);
        if(isOperator(token)){
            string data;
            getline(infile,data);
            strip(data);
            std::cout << data << '\n';
        }
    }

    return 0;
}
