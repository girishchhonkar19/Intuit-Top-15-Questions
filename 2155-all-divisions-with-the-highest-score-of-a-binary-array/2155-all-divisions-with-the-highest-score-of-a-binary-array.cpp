class Solution {
public:
    
        
     vector<int> maxScoreIndices(vector<int>& A) {
        int N = A.size(), mx = 0;
        vector<int> sum(N + 1, 0), ans;
        for (int i = 0; i < N; ++i) sum[i + 1] = sum[i] + A[i];
        for (int i = 0; i <= N; ++i) {
            int score = i - sum[i] + sum[N] - sum[i];
            if (score > mx) {
                ans = {i};
                mx = score;
            } else if (score == mx) ans.push_back(i);
        }
        return ans;
    }
    };