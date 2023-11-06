static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class SeatManager {
public:
    set<int>unReserved;
    SeatManager(int n) {
        for(int i=1;i<=n;i++)
        {
            unReserved.insert(i);
        }
    }
    
    int reserve() {
        int minSeat=*unReserved.begin();
        unReserved.erase(minSeat);
        return minSeat;
    }
    
    void unreserve(int seatNumber) {
        unReserved.insert(seatNumber);
    }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */