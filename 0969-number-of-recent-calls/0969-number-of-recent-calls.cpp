class RecentCounter {
public:
    queue<int> pings;
    RecentCounter() {
        
    }
    
    int ping(int t) {
        int limit = t - 3000;
        pings.push(t);
        while (pings.front() < limit) {
            pings.pop();
        }
        return pings.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */