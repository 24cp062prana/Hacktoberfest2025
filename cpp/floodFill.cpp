class Solution {
public:
    
    void helper(vector<vector<int>>& image, int sr, int sc,int oldcolor, int color){

        int m = image.size();
        int n = image[0].size();
        if(sr <0 || sc < 0 || sr >= m|| sc>= n){
         return;
        }
        if(image[sr][sc] != oldcolor){
           return ;
        }
         image[sr][sc] = color;
        helper(image,sr-1,sc,oldcolor,color);
        helper(image,sr+1,sc,oldcolor,color);
        helper(image,sr,sc-1,oldcolor,color);
        helper(image,sr,sc+1,oldcolor,color);

    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
       int oldcolor = image[sr][sc];
       if(oldcolor == color){
        return image;
       }
       helper(image,sr,sc,oldcolor,color);
        return image;
    }
   
};
