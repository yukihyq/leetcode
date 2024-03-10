// https://leetcode.cn/problems/three-steps-problem-lcci/

class Solution {
public:
    int waysToStep(int n) {
        // int a[1000001] = {1};
        vector<int> a = {1};
        a.resize(1000001);
        for (int i=0;i<=n;i++) {
            a[i+1] = (a[i] + a[i+1]) % 1000000007;
            a[i+2] = (a[i] + a[i+2]) % 1000000007;
            a[i+3] = (a[i] + a[i+3]) % 1000000007;
        }
        return a[n] % 1000000007;
    }
};
