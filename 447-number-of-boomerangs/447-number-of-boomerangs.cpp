class Solution {
public:
    int numberOfBoomerangs(vector<vector<int>>& points) {
        map<int,int>m;
        int ans=0;
        for(int i=0;i<points.size();i++)
        {
            for(int j=0;j<points.size();j++)
            {
                if(i==j) continue;
                
                else
                {
                    m[((points[i][0]-points[j][0])*(points[i][0]-points[j][0]) + (points[i][1]-points[j][1])*(points[i][1]-points[j][1]))]++;
                }
                
            }
            for(auto x:m)
           {
            int t=x.second;
            ans+=t*(t-1);
           }
            m.clear();
        }
        
        return ans;
    }
};