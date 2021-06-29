class Solution{
public:
  //clockwise. reverse up down first then do symmetry at diagonal 
  //couterclockwise. reverse left to right then do symmetry
  void rotate(vector<vector<int>>& matrix){
    reverse(matrix.begin(),matrix.end());
    for(int i=0;i<matrix.size();i++){
      for(int j=i+1;j<matrix.size();j++){
        swap(matrix[i][j],matrix[j][i]);
      }
    }
  }
}
