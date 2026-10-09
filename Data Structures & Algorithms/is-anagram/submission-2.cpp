class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
            return false;
        /*unordered_map<char,int> seen1,seen2;*/
        int freq[26]={0};
        for(int i=0;i<s.size();i++)
        {
            /*seen1[s[i]]++;
            seen2[t[i]]++;*/
            freq[s[i]-'a']++;
            freq[t[i]-'a']--;
        }
        for(int j=0;j<26;j++)
        {
            if(freq[j]!=0)
                return false;
        }
        return true;
    }
};
