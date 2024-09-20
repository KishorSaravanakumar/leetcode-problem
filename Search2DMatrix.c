bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target) 
{
    for(int i=0;i<matrixSize;i++)
    {
        for(int j=0;j<*matrixColSize;j++)
        {
            if(matrix[i][j]==target) return true;
            else if(matrix[i][j]>target) return false;
        }
    }
    return false;
}