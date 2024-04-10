class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        int N = deck.size();
        vector<int> result(N);
        bool skip = false;
        int i = 0;
        int j = 0;
        sort(deck.begin(), deck.end());
        while (i < N) {
            if (result[j] == 0) {
                if (!skip) {
                    result[j] = deck[i];
                    i++;
                }
                skip = !skip;
            }
            j = (j + 1) % N;
        }
        return result;
    }
};