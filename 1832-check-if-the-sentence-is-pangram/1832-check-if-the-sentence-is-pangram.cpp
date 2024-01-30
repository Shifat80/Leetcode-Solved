class Solution {
public:
    bool checkIfPangram(string sentence) {
       vector<bool>alpha(26,0);
       for(int i=0;i<sentence.size();i++){
           alpha[sentence[i]-'a']=1;
       } 
       for(int j=0;j<26;j++){
           if(alpha[j]==0){
               return 0;
           }
       }
       return 1;
    }
};