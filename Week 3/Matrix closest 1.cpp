class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        queue<pair<pair<int,int>,int>>q;
        vector<vector<int>>vis(n,vector<int>(m,0));
        vector<vector<int>>dis(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==0){
                    q.push({{i,j},0});
                    vis[i][j]=1;
                }else{
                    vis[i][j]=0;
                }
            }
        }
        int delr[]={-1,0,1,0};
        int delc[]={0,1,0,-1};
        while(!q.empty()){
            int row=q.front().first.first;
            int col=q.front().first.second;
            int steps=q.front().second;
            q.pop();
            dis[row][col]=steps;
            for(int i=0;i<4;i++){
                int nr=row+delr[i];
                int nc=col+delc[i];
                if(nr>=0 && nr<n && nc>=0 && nc<m && vis[nr][nc]!=1){
                    q.push({{nr,nc},steps+1});
                    vis[nr][nc]=1;
                }
            }
            
        }
        return dis;
    }
};