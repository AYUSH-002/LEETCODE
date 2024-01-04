class Solution {
public:
    int minOperations(string s) {
        auto count_changes = [](char start_char, const string& str) {
        int changes = 0;
        for (char c : str) {
            if (c != start_char) {
                changes++;
            }
            start_char = (start_char == '0') ? '1' : '0';
        }
        return changes;
    };

    int changes_starting_zero = count_changes('0', s);
    int changes_starting_one = count_changes('1', s);

    return min(changes_starting_zero, changes_starting_one);
    }
};
