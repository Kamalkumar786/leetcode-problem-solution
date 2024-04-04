class Solution {
public:
    bool rotateString(const string a, const string b) {
        for (int i = 0; i < a.size(); ++i) {
            string rotated_a = a.substr(i) + a.substr(0, i);
            if (rotated_a == b) {
                return true;
            }
        }

        return false;
    }
};
