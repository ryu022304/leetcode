#include <string>
#include <algorithm>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        string str = to_string(x);
        string str_rev = str;
        bool res_flag = false;
        std::reverse(str_rev.begin(), str_rev.end());
        if(str == str_rev){
            res_flag = true;
        }
        return res_flag;
    }
};