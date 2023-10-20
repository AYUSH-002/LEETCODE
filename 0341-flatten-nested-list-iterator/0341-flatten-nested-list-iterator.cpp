/**
 * // This is the interface that allows for creating nested lists.
 * // You should not implement it, or speculate about its implementation
 * class NestedInteger {
 *   public:
 *     // Return true if this NestedInteger holds a single integer, rather than a nested list.
 *     bool isInteger() const;
 *
 *     // Return the single integer that this NestedInteger holds, if it holds a single integer
 *     // The result is undefined if this NestedInteger holds a nested list
 *     int getInteger() const;
 *
 *     // Return the nested list that this NestedInteger holds, if it holds a nested list
 *     // The result is undefined if this NestedInteger holds a single integer
 *     const vector<NestedInteger> &getList() const;
 * };
 */
static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class NestedIterator
{
    vector<int> res;
    int currIndex = 0;
    void result(vector<NestedInteger> &currIndexentList)
    {
        for (int i = 0; i < currIndexentList.size(); i++)
        {
            if (currIndexentList[i].isInteger())
            {
                res.push_back(currIndexentList[i].getInteger());
            }
            else
            {
                result(currIndexentList[i].getList());
            }
        }
    }
public:
    NestedIterator(vector<NestedInteger> &nestedList)
    {
        result(nestedList);
    }
    int next()
    {
        return res[currIndex++];
    }
    bool hasNext()
    {
        return currIndex < res.size();
    }
};

/**
 * Your NestedIterator object will be instantiated and called as such:
 * NestedIterator i(nestedList);
 * while (i.hasNext()) cout << i.next();
 */