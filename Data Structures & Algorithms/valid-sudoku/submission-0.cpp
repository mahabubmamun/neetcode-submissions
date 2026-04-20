class Solution {
public:
    bool hasDuplicate(vector<int> &nums)
    {
        unordered_set<int>st;
        for(int x : nums)
        {
            if(st.count(x))
            {
                return true;
            }
            st.insert(x);

        }
        return false;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<vector<int>>vec;
        vector<int>temp;

        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                // vector<int>temp;
                if(board[i][j] != '.')
                {
                    int temp_val = board[i][j] - '0';
                    temp.push_back(temp_val);
                }
            }
            vec.push_back(temp);
            temp.clear();
        }
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                // vector<int>temp;
                if(board[j][i] != '.')
                {
                    int temp_val = board[j][i] - '0';
                    temp.push_back(temp_val);
                }
            }
            vec.push_back(temp);
            temp.clear();
        }

        for(int rowval=0;rowval<9;rowval+=3)
        {
            for(int colval=0;colval<9;colval+=3)
            {
                // vector<int>temp;
                for(int i=0;i<3;i++)
                {
                    for(int j=0;j<3;j++)
                    {
                        int row = rowval+i;
                        int col = colval+j;
                        if(board[row][col] != '.')
                        {
                            int temp_val = board[row][col] - '0';
                            temp.push_back(temp_val);
                        }
                            // int temp_val = board[row][col] - '0';
                            // temp.push_back(temp_val);
                    }
                }
                vec.push_back(temp);
                temp.clear();
            }
        }

        for(int i=0;i<27;i++)
        {
            if(hasDuplicate(vec[i]))
            {
                return false;
            }
        }

        
        return true;
    }
};
