#include "TicTacToe.h"

#include <iostream>
#include<random>

TicTacToe::TicTacToe()
{
    currentPlayer = 'X';
}
void TicTacToe::print()
{
    std::cout << "  " << 1 << " " << 2 << " " << 3 << std::endl;
    for(int row = 0; row < 3; row++)
    {
        std::cout << row + 1 << " ";
        for(int col = 0; col < 3; col++)
        {
            std::cout << board[row][col] << " ";
        }
        std::cout << std::endl;
    }
}

char TicTacToe::getCurrentPlayer()
{
    return currentPlayer;
}
bool TicTacToe::isDone()
{
    bool done = true;

    for(int row = 0; row < 3; row++)
    {
        for(int col = 0; col < 3; col++)
        {
            if(board[row][col] == '_' ){
                done = false;
            break;
            }
        }
    }
    if(board[1][1] == 'X')
    {
        if(board[0][0] == 'X' && board[2][2] == 'X')
        {
            return true;
        }
        else if(board[1][0] == 'X' && board[1][2] == 'X')
        {
            return true;
        }
        else if(board[2][0] == 'X' && board[0][2] == 'X')
        {
            return true;
        }
        else if(board[0][1] == 'X' && board[2][1] == 'X')
        {
            return true;
        }
    }
    if(board[0][0] == 'X')
    {
        if(board[0][1] == 'X' && board[0][2] == 'X')
        {
            return true;
        }
        else if(board[1][0] == 'X' && board[2][0] == 'X')
        {
            return true;
        }
    }
    if(board[0][2] == 'X')
    {
        if(board[1][2] == 'X' && board[2][2] == 'X')
        {
            return true;
        }
    }
    if(board[2][0] == 'X')
    {
        if(board[2][1] == 'X' && board[2][2] == 'X')
        {
            return true;
        }
    }

    if(board[1][1] == 'O')
    {
        if(board[0][0] == 'O' && board[2][2] == 'O')
        {
            return true;
        }
        else if(board[1][0] == 'O' && board[1][2] == 'O')
        {
            return true;
        }
        else if(board[2][0] == 'O' && board[0][2] == 'O')
        {
            return true;
        }
        else if(board[0][1] == 'O' && board[2][1] == 'O')
        {
            return true;
        }
    }
    if(board[0][0] == 'O')
    {
        if(board[0][1] == 'O' && board[0][2] == 'O')
        {
            return true;
        }
        else if(board[1][0] == 'O' && board[2][0] == 'O')
        {
            return true;
        }
    }
    if(board[0][2] == 'O')
    {
        if(board[1][2] == 'O' && board[2][2] == 'O')
        {
            return true;
        }
    }
    if(board[2][0] == 'O')
    {
        if(board[2][1] == 'O' && board[2][2] == 'O')
        {
            return true;
        }
    }

    return done;
}
char TicTacToe::getWinner()
{
    if(board[1][1] == 'X')
    {
        if(board[0][0] == 'X' && board[2][2] == 'X')
        {
            return 'X';
        }
        else if(board[1][0] == 'X' && board[1][2] == 'X')
        {
            return 'X';
        }
        else if(board[2][0] == 'X' && board[0][2] == 'X')
        {
            return 'X';
        }
        else if(board[0][1] == 'X' && board[2][1] == 'X')
        {
            return 'X';
        }
    }
    if(board[0][0] == 'X')
    {
        if(board[0][1] == 'X' && board[0][2] == 'X')
        {
            return 'X';
        }
        else if(board[1][0] == 'X' && board[2][0] == 'X')
        {
            return 'X';
        }
    }
    if(board[0][2] == 'X')
    {
        if(board[1][2] == 'X' && board[2][2] == 'X')
        {
            return 'X';
        }
    }
    if(board[2][0] == 'X')
    {
        if(board[2][1] == 'X' && board[2][2] == 'X')
        {
            return 'X';
        }
    }

    if(board[1][1] == 'O')
    {
        if(board[0][0] == 'O' && board[2][2] == 'O')
        {
            return 'O';
        }
        else if(board[1][0] == 'O' && board[1][2] == 'O')
        {
            return 'O';
        }
        else if(board[2][0] == 'O' && board[0][2] == 'O')
        {
            return 'O';
        }
        else if(board[0][1] == 'O' && board[2][1] == 'O')
        {
            return 'O';
        }
    }
    if(board[0][0] == 'O')
    {
        if(board[0][1] == 'O' && board[0][2] == 'O')
        {
            return 'O';
        }
        else if(board[1][0] == 'O' && board[2][0] == 'O')
        {
            return 'O';
        }
    }
    if(board[0][2] == 'O')
    {
        if(board[1][2] == 'O' && board[2][2] == 'O')
        {
            return 'O';
        }
    }
    if(board[2][0] == 'O')
    {
        if(board[2][1] == 'O' && board[2][2] == 'O')
        {
            return 'O';
        }
    }

    return '-';
}

bool TicTacToe::isValidMove(int row, int col)
{
    //correct input
    row = row - 1;
    col = col - 1;

    if(row < 0 || row > 2)
        return false;
    if(col < 0 || row > 2)
        return false;
    if(board[row][col] != '_')
    {
        return false;
    }

    return true;
}
void TicTacToe::makeMove(int row, int col)
{
    //correct input
    row = row - 1;
    col = col - 1;

        board[row][col] = currentPlayer;

        if(currentPlayer == 'X')
            currentPlayer = 'O';
        else
            currentPlayer = 'X';
}
void TicTacToe::makeAutoMove()
{
    //dummy input
    int row = -1;
    int col = -1;

    while(!isValidMove(row, col))
    {
        row = rand() % 3;
        col = rand() % 3;
    }

    makeMove(row, col);
}
