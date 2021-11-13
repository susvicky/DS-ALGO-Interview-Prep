#include<bits/stdc++.h>
using namespace std;
#define n 4
bool is_safe(int board[n][n],int r,int c)
{
    int x = r;
    int y = c;
    
    while(x>=0 && y>=0)
    {
        if(board[x][y]==1)
        {
            return false;
        }
        x--;
        y--;
    }
    
    x = r;
    y = c;
    
    while(x>=0 && y<n)
    {
        if(board[x][y]==1)
        {
            return false;
        }
        x--;
        y++;
    }
    //check upward
    for(int i=0;i<r;i++)
    {
        if(board[i][c]==1)
        {
            return false;
        }
    }
    
    return true;
    
}

bool n_queen(int board[n][n],int row)
{
    //Base case
    if(row==n)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(board[i][j]==1)
                {
                    cout<<'Q'<<" ";
                }
                else
                {
                    cout<<'_'<<" ";
                }
            }
            cout<<"\n";
        }
        cout<<"\n\n";
        return true;
    }
    
    //recursive case
    for(int col=0;col<n;col++)
    {
        if(is_safe(board,row,col))
        {
            board[row][col] = 1;
            if(n_queen(board,row+1))
            {
                return true;
            }
            //backtrack
            else
            {
                board[row][col] = 0;
            }
            
        }
    }
    return false;
}



int main()
{
    int board[n][n] = {0};
    
    n_queen(board,0);
    return 0;
    
}
