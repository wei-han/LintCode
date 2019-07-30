class Solution {
public:
    /**
     * @param s: a string which consists of lowercase or uppercase letters
     * @return: the length of the longest palindromes that can be built
     */
    int longestPalindrome(string &s) {
        if(s.empty()) return 0;
        int result = 0;
        int nums[128] = {0};
        for(int number : s){
            nums[number]++;
        }
        
        bool odd = false;
        
        for(int num: nums){
            if(num%2==0){
                result += num;
            }else{
                odd = true;
                result += num-1;
            }
        }
        
        if(odd){
            result++;
        }
        
        return result;
        // write your code here
    }
};

class Solution {
public:
    /**
     * @param s: a string which consists of lowercase or uppercase letters
     * @return: the length of the longest palindromes that can be built
     */
    int longestPalindrome(string &s) {
        int result = 0;
        if(s.empty()) return result;
        
        bool nums[128] = {false};
        
        for(int c: s){
            nums[c] = !nums[c];
            if(!nums[c]) {
                result+=2;
            }
        }
        for(bool flag: nums){
            if(flag) {
                result++;
                break;
            }
        }
        
        return result;
        // write your code here
    }
};
