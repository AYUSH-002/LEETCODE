class RandomizedSet {
public:
    unordered_map<int, int> mp;
    vector<int> res;
    RandomizedSet() {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(0);
        std::cout.tie(0); 
    }
    
    bool insert(int val) 
    {
        if(mp.find(val)!=mp.end())
        {
            return false;
        }
        int temp=res.size();
        mp[val]=temp;
        res.push_back(val);
        return true;
    }
    
    bool remove(int val) {
        if(mp.find(val)==mp.end())
        {
            return false;
        }
        int index=mp[val];
        int temp=res.back();
        res[index]=temp;
        res.pop_back();
        mp[temp]=index;
        mp.erase(val);
        return true;
    }
    
    int getRandom() {
        int temp=rand()%res.size();
        return res[temp];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */