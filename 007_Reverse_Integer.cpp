#include <string>
#include <algorithm>
using namespace std;
class Solution {
public:
    int reverse(int x) {
        string str = to_string(x);
        if(str[0] == '-'){
            str.erase(str.begin());
            std::reverse(str.begin(), str.end());
            str = '-'+str;
        }
        else{
            std::reverse(str.begin(), str.end());
        }
        
        try{
            return std::stoi(str);
        }
        catch(exception e){
            return 0;
        }
        
    }
};