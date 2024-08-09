// Problem link: 
// https://leetcode.com/problems/n-queens/ 

class Solution {
public: 
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> allBoards;
        vector<string> board(n, string(n, '.'));

        helper(board, allBoards, 0, n);
        return allBoards;
    }

    void helper(vector<string> &board, vector<vector<string>> &allBoards, int col, int n) {
        if(col == n) {
            saveBoard(board, allBoards, n);
            return;
        }

        for(int row=0; row<n; row++) {
            if(isSafe(row, col, board, n)) {
                board[row][col] = 'Q';
                helper(board, allBoards, col+1, n);

                board[row][col] = '.';
            }
        }
    }

    bool isSafe(int row, int col, vector<string> &board, int n) {
        for(int j=0; j<col; j++) {
            if(board[row][j] == 'Q') {
                return false;
            }
        }
        
        int r=row;
        for(int c=col; c>=0 && r>=0; c--, r--) {
            if(board[r][c] == 'Q') {
                return false;
            }
        }
 
        r = row;
        for(int c=col; c>=0 && r<n; r++, c--) {
            if(board[r][c] == 'Q') {
                return false; 
            }
        } 
        return true; 
    }

    void saveBoard(vector<string> &board, vector<vector<string>> &allBoards, int n) {
        allBoards.push_back(board);
    }
};