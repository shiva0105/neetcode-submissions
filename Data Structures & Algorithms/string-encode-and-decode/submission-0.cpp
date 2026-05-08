class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded = "";
        for(string& str : strs){
            encoded = encoded + to_string(str.size()) + "#" + str;
        }
        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> decoded;
        string num = "";
        for(int i = 0; i < s.size(); i++){
            if(s[i] != '#'){
                num.push_back(s[i]);
            }
            else{
                int len = stoi(num);
                num = "";
                decoded.push_back(s.substr(i+1, len));
                i = i + len;
            }
        }
        return decoded;
    }
};
