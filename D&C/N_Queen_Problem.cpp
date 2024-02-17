#include<iostream>
#include<vector>
using namespace std;

void printSolution(vector<vector<char>>& board, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    cout<<endl;
    
}

bool isSafe(int row, int col, vector<vector<char>>& board, int n)
{
    // check karna hai ki current cell [row][col] pr
    // queen rakh sakta hoo ya nahi
    int i = row, j = col;

    // check row first
    while (j >= 0)
    {
        if (board[i][j] == 'Q')
        {
            return false;
        }
        j--;
    }

    // check upper left diagonal
    i = row, j = col;
    while (i >= 0 && j >= 0)
    {
        if (board[i][j] == 'Q')
        {
            return false;
        }
        i--;
        j--;
    }

    // check bottom left diagonal
    i = row, j = col;
    while (i < n && j >= 0)
    {
        if (board[i][j] == 'Q')
        {
            return false;
        }
        i++;
        j--;
    }

    // kahi par bhi position na mile to iska matlab ye position safe hai
    // true return kar do
    return true;
}

void solve(vector<vector<char>>& board, int col, int n)
{
    // base case
    if (col >= n)
    {
        printSolution(board, n);
        return;
    }

    // Recursion to solve
    for (int row = 0; row < n; row++)
    {
        if (isSafe(row, col, board, n))
        {
            // Place the queen
            board[row][col] = 'Q';
            // Recursion for the next column
            solve(board, col + 1, n);
            // Backtracking
            board[row][col] = '-';
        }
    }
}

int main()
{
    int n = 9;
    vector<vector<char>> board(n, vector<char>(n, '-'));
    int col = 0;
    solve(board, col, n);
    return 0;
}
