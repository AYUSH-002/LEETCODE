class Solution {
public:
    string countOfAtoms(string formula) {
        int n = formula.length();
        stack<pair<string, int>> stk;
        for (int i = 0; i < n; i++) {
            if (isupper(formula[i])) {
                string str = "";
                str += formula[i];
                int j = i + 1;
                int k = i + 1;
                for (j = i + 1; j < n; j++) {
                    if (!islower(formula[j])) {
                        break;
                    }
                    str += formula[j];
                }
                string digits = "";
                for (k = j; k < n; k++) {
                    if (!isdigit(formula[k])) {
                        break;
                    }
                    digits += formula[k];
                }
                if (digits == "") {
                    digits = "1";
                }
                int occ = stoi(digits);
                stk.push({str, occ});
                i = max(k - 1, i);
            } else if (formula[i] == '(') {
                stk.push({"(", -1});
            } else if (formula[i] == ')') {
                int j = i + 1;
                string digits = "";
                for (j = i + 1; j < n; j++) {
                    if (!isdigit(formula[j])) {
                        break;
                    }
                    digits += formula[j];
                }
                if (digits == "") {
                    digits = "1";
                }
                int occ = stoi(digits);
                vector<pair<string, int>> temp;
                pair<string, int> open = {"(", -1};
                while (!stk.empty() && stk.top() != open) {
                    temp.push_back({stk.top().first, stk.top().second * occ});
                    stk.pop();
                }
                stk.pop();

                for (auto &x : temp) {
                    stk.push(x);
                }
                i = j - 1;
            }
        }

        map<string, int> mp;
        while (!stk.empty()) {
            mp[stk.top().first] += (stk.top().second);
            stk.pop();
        }

        string ans = "";
        for (auto &i : mp) {
            if (i.first == "(") {
                continue;
            }
            ans += i.first;
            if (i.second != 1) {
                ans += (to_string(i.second));
            }
        }

        return ans;
    }
};
