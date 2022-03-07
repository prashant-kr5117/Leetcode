// class Solution {
// public:
//     void visit(vector<vector<char>> &grid ,int i,int j,char& island ,char& v){
//         if(i>=grid.size() || j>=grid.size()|| grid[i][j]!=island) return ;
//         grid[i][j]=v;
//         visit(grid,i,j-1,island,v);
//         visit(grid,i-1,j,island,v);
//         visit(grid,i,j+1,island,v);
//         visit(grid,i+1,j,island,v);
//     }
    
//     int numIslands(vector<vector<char>>& grid) {
//         char island='1',water='0',visited='x';
//         int count=0;
//         for(int i=0;i<grid.size();i++){
//             for(int j=0;j<grid.size();j++){
//                 if(grid[i][j]==water || grid[i][j]==visited)   continue;
//                 visit(grid,i,j,island,visited);
//                 count++;
//             }
//         }
//     return count;
//     }
// };

class Solution {
    void helper(vector<vector<char>>& grid,int i,int j,int row,int col){
		//base cases for the edge of the matrix . . .
        if(i<0 or i>=row or j<0 or j>=col or grid[i][j] != '1') return;
		
		//else do this operation . . .
        grid[i][j] = '2';
		
		//call the function recursively
        helper(grid,i+1,j,row,col);
        helper(grid,i,j-1,row,col);
        helper(grid,i,j+1,row,col);
        helper(grid,i-1,j,row,col);
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        
        int count = 0;
        
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
				//condition to call the helper function . . . and only for this condition the time complexcity is not O(m*n)
                if(grid[i][j] == '1'){
                    helper(grid,i,j,row,col);
                    count++;
                }
            }
        }
        return count;
    }
};