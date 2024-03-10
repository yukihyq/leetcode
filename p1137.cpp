// https://leetcode.cn/problems/n-th-tribonacci-number/submissions/510113357/

class Solution {
public:
    int tribonacci(int n) {
        long long a[38] = {0, 1, 1};
        for (int i=3;i<=37;i++) {
            a[i] = a[i-3] + a[i-2] + a[i-1];
        }
        return a[n];
    }
};
