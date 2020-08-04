class Solution {
public:
    bool isPalindrome(string s) {
        //convert string into lowercase first
        transform(s.begin(),s.end(),s.begin(),::tolower);
        int left = 0, right = s.length()-1;
        
        while(left <= right){
            if( !((s[left] >= 48 && s[left] <=57) || (s[left] >= 'a' && s[left] <= 'z'))   ){
                left++;
            }else if( !((s[right] >= 48 && s[right] <=57) || (s[right] >= 'a' && s[right] <= 'z')) ){
                right--;
            }else if( s[left] == s[right]){
                left++;
                right--;
            }else{
                return false;
            }
            
            
        }
        
        return true;
    }
};