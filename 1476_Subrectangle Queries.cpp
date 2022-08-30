class SubrectangleQueries {
public:
    vector<vector<int>>rect;
    SubrectangleQueries(vector<vector<int>>& rectangle) 
    {
        this->rect=rectangle;
    }
    
    void updateSubrectangle(int row1, int col1, int row2, int col2, int newValue) 
    {
        for(int e=row1;e<=row2;e++)
        {
            for(int j=col1;j<=col2;j++)
            {
                this->rect[e][j]=newValue;
            }
        }
    }
    
    int getValue(int row, int col) 
    {
        return this->rect[row][col];
    }
};

/**
 * Your SubrectangleQueries object will be instantiated and called as such:
 * SubrectangleQueries* obj = new SubrectangleQueries(rectangle);
 * obj->updateSubrectangle(row1,col1,row2,col2,newValue);
 * int param_2 = obj->getValue(row,col);
 */
