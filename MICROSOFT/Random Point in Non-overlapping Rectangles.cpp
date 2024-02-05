class Solution {
private:
    vector<vector<int>> rects;
public:
    Solution(vector<vector<int>>& rec) {
        rects = rec;
    }
    
    vector<int> pick() {
        long long totalPoints = 0;
        vector<int> selectedRect;
        
        for (auto &rect:rects)
        {
            long long width = (long long)(rect[2] - rect[0] + 1);
            long long height = (long long)(rect[3] - rect[1] + 1);
            totalPoints += width * height;
            
            if (rand() % totalPoints < width*height) {
                selectedRect = rect;
            }
        }
        
        int x = rand() % (selectedRect[2] - selectedRect[0] + 1) + selectedRect[0];
        int y = rand() % (selectedRect[3] - selectedRect[1] + 1) + selectedRect[1];
        
        return {x, y};
    }
};
