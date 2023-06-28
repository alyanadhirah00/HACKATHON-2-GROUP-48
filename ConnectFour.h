#ifndef CONNECTFOUR_H
#define CONNECTFOUR_H

class ConnectFour
{
  private:
    const int ROWS = 6;
    const int COLS = 7;
    char board[ROWS][COLS];
    string player1;
    string player2;
    int score1;
    int score2;

  public:
    bool isBoardFull(char[][]);
    bool isWinningMove(char[][], int, int, char)
    void printBoard(const char[][]);
    void connectFourGame(string&, string&, int&, int&);
};

#endif
