#include <iostream>
#include "TicTacToe.h"
using namespace std;

int main()
{

    TicTacToe gameboard;
    cout << "1 for versus computer OR 2 for Two Player" << endl;
    int result;
    cin >> result;
    while(result < 1 || result > 2)
    {
        cout << "Try again" << endl;
        cout << "1 for versus computer OR 2 for Two Player" << endl;
        cin >> result;
    }
    switch(result)
    {
    case 1:
    cout << "1 for X or 2 for O" << endl;
    int choice;
    cin >> choice;

    char computer;
    if(choice == 1)
        computer = 'O';
    else
        computer = 'X';

    while(!gameboard.isDone())
    {

        if(gameboard.getCurrentPlayer() != computer)
        {
            gameboard.print();

            int row;
            int col;

            cout << gameboard.getCurrentPlayer() << "'s turn" << endl;
            cout << "Pick a spot ex) row: 1 col: 1" << endl;

            cout << "row: ";
            cin >> row;

            cout << "col: ";
            cin >> col;
            cout << endl;

            while(!gameboard.isValidMove(row, col))
            {
                cout << "Try again" << endl;
                gameboard.print();

                cout << "Pick a spot ex) row: 1 col: 1" << endl;

                cout << "row: ";
                cin >> row;

                cout << "col: ";
                cin >> col;
                cout << endl;

        }
            gameboard.makeMove(row,col);
        }
        else{
            cout << gameboard.getCurrentPlayer() << " made a move" << endl;
            gameboard.makeAutoMove();
            }
    }
        break;

    case 2:
    while(!gameboard.isDone())
    {
        int row;
        int col;
        gameboard.print();

        cout << gameboard.getCurrentPlayer() << "'s turn" << endl;
        cout << "Pick a spot ex) row: 1 col: 1" << endl;

        cout << "row: ";
        cin >> row;

        cout << "col: ";
        cin >> col;
        cout << endl;

        while(!gameboard.isValidMove(row, col))
        {
            cout << "Try again" << endl;
            gameboard.print();

            cout << "Pick a spot ex) row: 1 col: 1" << endl;

            cout << "row: ";
            cin >> row;

            cout << "col: ";
            cin >> col;
            cout << endl;
        }

        gameboard.makeMove(row, col);

    }
    }
    gameboard.print();
    if(gameboard.getWinner() == '-')
        cout << "No winner" << endl;
    else{
    cout << gameboard.getWinner() <<"'s the winner!" << endl;
    }
}
