class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < 9; ++i)
        {
            unordered_set<char> has;
            for (int j = 0; j < 9; ++j)
            {
                if (board[i][j] == '.') continue;
                if (has.count(board[i][j])) return false;
                has.insert(board[i][j]);
            }
        }

        for (int j = 0; j < 9; ++j)
        {
            unordered_set<char> has;
            for (int i = 0; i < 9; ++i)
            {
                if (board[i][j] == '.') continue;
                if (has.count(board[i][j])) return false;
                has.insert(board[i][j]);
            }
        }

        for (int i = 0; i < 9; i += 3)
        {
            for (int j = 0; j < 9; j += 3)
            {
                unordered_set<char> has;
                for (int k = i; k < i + 3; ++k)
                {
                    for (int l = j; l < j + 3; ++l)
                    {
                        if (board[k][l] == '.') continue;
                        if (has.count(board[k][l])) return false;
                        has.insert(board[k][l]);
                    }
                }
            }
        }

        return true;
    }
};
