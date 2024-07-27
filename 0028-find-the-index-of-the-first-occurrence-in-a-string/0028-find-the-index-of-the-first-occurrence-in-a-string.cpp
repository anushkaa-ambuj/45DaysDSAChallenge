class Solution {
public:
    int strStr(string haystack, string needle) {
        if (haystack.size()<needle.size()){
            return -1;
        }
        else if (haystack==needle){
            return 0;
        }
        
        string s="";
        for (int i=0;i<haystack.size()-needle.size()+1;i++){
            for (int j=i;j<i+needle.size();j++){
                s += haystack[j];
            }
            cout<<s<<endl;
            
            if (s == needle){
                return i;
            }
            s = "";
            
        }
        
        return -1;
    }
};