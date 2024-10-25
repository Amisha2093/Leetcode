class Solution {
public:
int lastStoneWeight(vector<int>& stones) {
        sort(stones.begin(), stones.end());
        while(stones.size() > 1){
            int stone1 = stones[stones.size()-1], stone2 = stones[stones.size()-2];
            stones.pop_back(); stones.pop_back();
            if(stone1 != stone2) stones.push_back(stone1-stone2);
            sort(stones.begin(),stones.end());
        }
        if(stones.size() == 0) return 0;
        return stones[0];
    }
};
