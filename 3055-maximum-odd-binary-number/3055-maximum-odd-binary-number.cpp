class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int a=count(s.begin(), s.end(), '1');
        int b=count(s.begin(), s.end(), '0');
        return string(a - 1, '1') + string(b, '0') + string(1, '1');

    }
};