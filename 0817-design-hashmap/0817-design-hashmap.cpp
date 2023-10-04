class MyHashMap {
public:
int res[1000001];
    MyHashMap() 
    {
        ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);
        memset(res,-1,sizeof(res));
    }
    
    void put(int key, int value) {
        res[key]=value;
    }
    
    int get(int key) {
        if(res[key]==-1) return -1;
        return res[key];
    }
    
    void remove(int key) {
        res[key]=-1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */