class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<int> count(10);
        for (int i = 0; i < 9; ++i)
        {
            for (int j = 0; j < 9; ++j)
            {
                if (board[i][j] == '.') continue;
                count[(int)(board[i][j] - '0')]++;
            }
            if (!checkAndSetZero(count)) return false;
        }

        for (int j = 0; j < 9; ++j)
        {
            for (int i = 0; i < 9; ++i)
            {
                if (board[i][j] == '.') continue;
                count[(int)(board[i][j] - '0')]++;
            }
            if (!checkAndSetZero(count)) return false;
        }

        for (int i = 0; i < 9; i += 3)
        {
            for (int j = 0; j < 9; j += 3)
            {
                for (int k = i; k < i + 3; ++k)
                {
                    for (int l = j; l < j + 3; ++l)
                    {
                        if (board[k][l] == '.') continue;
                        count[(int)(board[k][l] - '0')]++;
                    }
                }
                if (!checkAndSetZero(count)) return false;
            }
        }

        return true;
    }

    bool checkAndSetZero(vector<int>& count)
    {
        bool check = true;
        for (int i = 1; i < count.size(); ++i)
        {
            if (count[i] > 1) check = false;
            count[i] = 0;
        }
        return check;
    }
};
