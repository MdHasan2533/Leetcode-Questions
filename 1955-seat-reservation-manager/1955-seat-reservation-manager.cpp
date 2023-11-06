class SeatManager {
public:
    bitset<100000> track;
    SeatManager(int n) {
        track.set();
    }
    
    int reserve() {
        int pos = track._Find_first();
        track.reset(pos);
        return pos + 1;
    }
    
    void unreserve(int seatNumber) {
        track.set(seatNumber - 1);
    }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */