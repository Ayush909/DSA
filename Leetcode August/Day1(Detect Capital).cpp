class Solution {
public:
    bool detectCapitalUse(string word) {
        int upper = 0, lower = 0;
        
        for(int i=0;i< word.size(); i++){
           if(isupper(word[i])){
               upper++;
           }else{
               lower++;
           } 
        }
        
        if(upper == word.size()){
            return true;
            
        }else if(lower == word.size()){
            return true;
            
        }else if(isupper(word[0]) && upper==1){
            return true;
        }else{
            return false;
        }
            
    }
};