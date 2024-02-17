#include <iostream>
#include <vector>
using namespace std;
bool isSafe(int x, int y, int row, int col, int maze[][4], vector<vector<bool>> &visited)
{
    if (((x >= 0 && x < row) && (y >= 0 && y < col)) && (maze[x][y] == 1) && (visited[x][y] == false))
    {
        return true;
    }
    else
    {
        return false;
    }
}
void solveMaze(int maze[][4], int row, int col, int i, int j, vector<vector<bool>> &visited, vector<string> &path, string output)
{
    // base case
    if (i == row - 1 && j == col - 1)
    {
        // ans found
        path.push_back(output);
        return;
    }
    // ak case solve karna hai
    //  Down-> i+1,j
    if (isSafe(i + 1, j, row, col, maze, visited))
    {
        visited[i + 1][j] = true;
        // recursive call
        solveMaze(maze, row, col, i + 1, j, visited, path, output + 'D');
        // backtrack
        visited[i + 1][j] = false;
    }
    // Left-> i,j-1
    if (isSafe(i, j - 1, row, col, maze, visited))
    {
        visited[i][j - 1] = true;
        // recursive call
        solveMaze(maze, row, col, i, j - 1, visited, path, output + 'L');
        // backtrack
        visited[i][j - 1] = false;
    }
    // Right-> i,j+1
    if (isSafe(i, j + 1, row, col, maze, visited))
    {
        visited[i][j + 1] = true;
        // recursive call
        solveMaze(maze, row, col, i, j + 1, visited, path, output + 'R');
        // backtrack
        visited[i][j + 1] = false;
    }
    // Up->  i-1,j
    if (isSafe(i - 1, j, row, col, maze, visited))
    {
        visited[i - 1][j] = true;
        // recursive call
        solveMaze(maze, row, col, i - 1, j, visited, path, output + 'U');
        // backtrack
        visited[i - 1][j] = false;
    }
}
int main()
{
    int maze[4][4] = {{1, 0, 0,0},
                      {1, 1, 0,1},
                      {1, 1, 0,0},
                      {0, 1, 1,1}};
    if(maze[0][0]==0)
    {
        cout<<"NO path exist"<<endl;
        return 0;
    }
    int row = 4;
    int col = 4;
    vector<vector<bool>> visited(row, vector<bool>(col, false));
    // src ki value ko mark kardete hai
    visited[0][0] = true;
    vector<string> path;
    string output = "";
    solveMaze(maze, row, col, 0, 0, visited, path, output);
    cout<<"path to reach Destination"<<endl;
    for(auto i:path)
    {
        cout<<i<<" ";
    }
    
    if(path.size()==0)
    {
        cout<<"No Path exist!"<<endl;
    }
    return 0;
}