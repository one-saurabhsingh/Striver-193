class Solution
{
public:
    // GENERATE ROW
    vector<int> generateRow(int row)
    {
        long long ans = 1;   // Can't take default as zero as it will not generate any ans then
        vector<int> ansRow;  // will store answer Row in a vector
        ansRow.push_back(1); // to keep initial value or 1st value of triangle as 1.
        for (int col = 1; col < row; col++)
        {
            ans = ans * (row - col); // generating the row using NcR formula.
            ans = ans / (col);
            ansRow.push_back(ans);
        }
        return ansRow;
    }
    // GENERATE TRAINAGLE NOW
    vector<vector<int>> generate(int row)
    {
        vector<vector<int>> ans;
        for (int i = 1; i <= row; i++)
        {
            ans.push_back(generateRow(i)); // after generating row, using for loop we can generate
                                           // every column.
        }
        return ans;
    }
};