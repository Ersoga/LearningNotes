//********* date:2018.9.29
//********* from:netwoek
//********* author:LiuMin
#include<iostream>
using namespace std;

class Solution {
public:
    int trailingZeroes(int n) {
        cout<<n<<"->"<<n/5<<endl;
        return n == 0 ? 0 : n/5 + trailingZeroes(n/5);
    }
};

int stringToInteger(string input) {
    return stoi(input);
}

int main() {
    string line;
    while (getline(cin, line)) {
        int n = stringToInteger(line);
        
        int ret = Solution().trailingZeroes(n);

        string out = to_string(ret);
        cout << out << endl;
    }
    return 0;
}
