#ifndef TICTACTOE_H
#define TICTACTOE_H
class TicTacToe
{
private:
    char currentPlayer;
    char board[3][3] = {{'_','_','_'}, {'_','_','_'}, {'_','_','_'}};

public:
    /*
     * Constructor for TicTacToe
     * initializes currentPlayer and board
     */
    TicTacToe();
    /*
     * returns true if someone has one or no more moves available, false otherwise
     */
    bool isDone();
    /*
     * prints current state of TicTacToe board
     */
    void print();
    /*
     * returns currentPlayer
     */
    char getCurrentPlayer();
    /*
     * returns winner X/O, or no winner '-'
     */
    char getWinner();
    /*
     * checks for a valid spot on board and/or if available
     * returns true if available
     */
    bool isValidMove(int row, int col);
    /*
     * changes char in gameboard for position to currentPlayer
     */
    void makeMove(int row, int col);
    /*
     * randomly selects an available position on the board
     */
    void makeAutoMove();

};

#endif // TICTACTOE_H
