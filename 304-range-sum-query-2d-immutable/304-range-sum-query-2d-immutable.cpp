class NumMatrix {
public:
    vector<vector<int> > m;
    NumMatrix(vector<vector<int>>& matrix) {
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=1;j<matrix[0].size();j++)
                matrix[i][j] += matrix[i][j-1];       
        }
        m = matrix;
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int sum = 0;
        for(int i=row1;i<=row2;i++)
        {
            if(col1>0)
                sum += m[i][col2] - m[i][col1-1];
            else
                sum += m[i][col2];
        }
        return sum;
    }
};

