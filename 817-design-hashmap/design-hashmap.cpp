class MyHashMap {
public:
    MyHashMap() : a(1000001, -1) {}
    
    void put(int key, int value) {
        a[key] = value;
    }
    
    int get(int key) {
        return a[key];
    }
    
    void remove(int key) {
        a[key] = -1;
    }
    
private:
    std::vector<int> a;
};
