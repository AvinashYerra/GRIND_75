class Solution {
public:
void help(int row,int col,vector<vector<int>>& image,int initial,int new_color,vector<vector<int>>&ans){
    int n=image.size();
    int m=image[0].size();  
    ans[row][col]=new_color;
    int delr[]={0,1,0,-1};
    int delc[]={1,0,-1,0};
    for(int i=0;i<4;i++){
        int nr=row+delr[i];
        int nc=col+delc[i];
        if(nr>=0 && nr<n && nc>=0 && nc<m && image[nr][nc]==initial && ans[nr][nc]!=new_color){
            help(nr,nc,image,initial,new_color,ans);
        }
    }
}
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int ic=image[sr][sc];
        vector<vector<int>>ans=image;
        help(sr,sc,image,ic,color,ans);
        return ans;

    }
};