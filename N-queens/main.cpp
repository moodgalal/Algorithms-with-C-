#include <iostream>
#define N 4
using namespace std;
bool isAttacked(int a , int b , int arr[N][N])
{
  // First we will check the vertical and horizontal nodes
    for(int i=0; i<N; i++)
    {
          if(arr[i][b] == 1 || arr[a][i] == 1)
            return true;
    }

    for(int i=0; i<N; i++)
    {
      for(int j=0; j<N; j++)
      {
          if(i-j == a-b && arr[i][j] == 1)
            return true;
          if(i+j == a+b && arr[i][j] == 1)
            return true;
      }
    }
    return false;
}

bool NQueens(int board[N][N] ,int col)
{
    if(col >= N)
        return true; // Base case

    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            if(isAttacked(i ,j ,board))
            {
              continue;
            }
            else{
            board[i][j] = 1;
            if (NQueens(board , col+1))   // Solve subproblem
                return true;

             board[i][j] = 0;
                }
        }
    }
    return false;
}
int main()
{

   int chess_board[N][N] = { {0, 0, 0, 0},
                             {0, 0, 0, 0},
                             {0, 0, 0, 0},
                             {0, 0, 0, 0} };

   bool done =  NQueens(chess_board ,0);
   if(done)
   {
       cout<<"YES"<<endl;
       for(int i=0; i<N; i++)
       {
           for(int j=0; j<N; j++)
           {
               cout<<chess_board[i][j]<<" ";
           }
           cout<<endl;
       }
   }
   else
    cout<<"No"<<endl;
    return 0;
}
