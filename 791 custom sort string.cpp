class Solution {
public:
    string customSortString(string order, string s) {
        int i = 0,count = 0;
        for (int i=0; i<order.length(); i++) {
            char a = order[i];
            for (int j=0; j<s.length(); j++) {
                if (a==s[j]) 
                    swap (s[count++],s[j]);
            }
        }
        return s;
    }
};
