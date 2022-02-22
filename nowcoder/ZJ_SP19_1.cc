#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

int state = 0; // 1
vector<char> stack;
void output(string str) {
    // cout << "I received:" << str << endl;
    for (auto cha : str) {
        if (stack.empty() || stack.back() != cha ) {
            stack.push_back(cha);
            // state = 0;
        } else if (state == 0 && stack.back() == cha) {
            stack.push_back(cha);
            state = 1;
        }
    }
    for (auto cha: stack) {
        cout << cha ;
    }
    cout << endl;
    state = 0;
    stack.clear();
    return;
}

int main(int argc, const char *argv[]){
    ifstream input_file(argv[1]);

    int n;
    string temp;
    getline(input_file, temp);
    n = stoi(temp);
    while (n--) {
        getline(input_file, temp);
        output(temp);
    }
    return 0;
}