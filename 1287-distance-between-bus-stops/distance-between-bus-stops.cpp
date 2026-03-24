class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        if (start > destination) swap(start, destination);
        int total = 0, path = 0;
        for (int i = 0; i < distance.size(); ++i) {
            total += distance[i];
            if (i >= start && i < destination) path += distance[i];
        }
        return min(path, total - path);
    }
};
