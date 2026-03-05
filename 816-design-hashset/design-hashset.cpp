class MyHashSet {
public:
    MyHashSet() : a(1000001, false) {}
    
    void add(int key) {
        a[key] = true;
    }
    
    void remove(int key) {
        a[key] = false;
    }
    
    bool contains(int key) {
        return a[key];
    }
    
private:
    std::vector<bool> a;
};
