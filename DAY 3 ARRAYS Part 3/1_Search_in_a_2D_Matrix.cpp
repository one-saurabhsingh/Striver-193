class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        //<-------------- BRUTE FORCE ----------------->

        // int row = matrix.size();
        // int col = matrix[0].size();
        // for(int i =0; i< row; i++){
        //     for(int j=0; j <col; j++){
        //         if(matrix[i][j] == target){
        //             return true;
        //         }
        //     }
        // }
        // return false;

        //<-------------- OPTIMAL APPROACH ------------>
        
        int row = matrix.size();
        int col = matrix[0].size();
        int low = 0, high = row * col - 1;
        while (low <= high)
        {
            int mid = high + (low - high) / 2;
            int rowNew = mid / col;
            int colNew = mid % col;
            if (matrix[rowNew][colNew] == target)
            {
                return true;
            }
            else if (matrix[rowNew][colNew] < target)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        return false;
    }
};