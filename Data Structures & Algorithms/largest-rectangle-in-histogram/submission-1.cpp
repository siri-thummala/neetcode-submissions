class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<pair<int,int>> stack;
        int max_area = 0;
        for(int i=0;i<heights.size();i++){
            int start = i;
            while(!stack.empty() && heights[i]< stack.top().second){
                int index = stack.top().first;
                int height = stack.top().second;
                max_area=max(height*(i-index),max_area);
                start = index;
                stack.pop();
            }
            stack.push({start,heights[i]});
        }
        while(!stack.empty()){
            int index = stack.top().first;
            int height = stack.top().second;
            max_area = max(max_area,height*(static_cast<int>(heights.size())-index));
            stack.pop();   
        }
        return max_area;

        
    }
};
