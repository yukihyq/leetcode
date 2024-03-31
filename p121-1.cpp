// https://leetcode.cn/problems/er-wei-shu-zu-zhong-de-cha-zhao-lcof/submissions/518798742/

class Solution {
public:
    bool findTargetIn2DPlants(vector<vector<int>>& plants, int target) {
        for (int i=0;i<plants.size();i++) {
            for (int j=0;j<plants[0].size();j++) {
                if (plants[i][j] == target) {
                    return true;
                }
            }
        }
        return false;
    }
};
