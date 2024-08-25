class Solution {
public:
    string nearestPalindromic(string n) {
        int len = n.size();
        if (len == 1) return to_string(stoll(n) - 1);

        vector<long long> candidates;
        
        candidates.push_back(pow(10, len - 1) - 1);
        candidates.push_back(pow(10, len) + 1);

        long long prefix = stoll(n.substr(0, (len + 1) / 2));
        
        for (long long i = -1; i <= 1; i++) {
            string p = to_string(prefix + i);
            string palin = p + string(p.rbegin() + (len % 2), p.rend());
            candidates.push_back(stoll(palin));
        }
        
        long long original = stoll(n), nearest = -1;
        for (long long candidate : candidates) {
            if (candidate == original) continue;
            if (nearest == -1 || abs(candidate - original) < abs(nearest - original) || 
                (abs(candidate - original) == abs(nearest - original) && candidate < nearest)) {
                nearest = candidate;
            }
        }

        return to_string(nearest);
    }
};
