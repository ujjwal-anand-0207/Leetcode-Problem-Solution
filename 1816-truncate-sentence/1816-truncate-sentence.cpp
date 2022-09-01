class Solution {
public:
    string truncateSentence(string s, int k) {
        string asn="";
        stringstream ss(s);
        string word;
        while(k>0 && ss>>word)
        {
            asn+=word;
            asn+=" ";
            k--;
        }
        return asn.substr(0,asn.length()-1);
    }
};