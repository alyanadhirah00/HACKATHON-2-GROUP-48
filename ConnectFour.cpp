#include <iostream>
using namespace std;

bool ConnectFour :: isBoardFull(char board[ROWS][COLS])
{
  for (int col = 0; col < COLS; col++) 
  {
      if (board[ROWS - 1][col] == ' ')
          return false;
  }
    	return true;
}

bool ConnectFour :: isWinningMove(char board[ROWS][COLS], int row, int col, char player)
{
// Check horizontal
    int count = 0;
    for (int c = 0; c < COLS; c++) {
        if (board[row][c] == player) {
            count++;
            if (count == 4)
              return true;
        } else {
            count = 0;
        }
    }

    	// Check vertical
    	count = 0;
    	for (int r = 0; r < ROWS; r++) {
        	if (board[r][col] == player) {
            	count++;
            	if (count == 4)
                	return true;
        	} else {
            	count = 0;
        	}
    	}

    	// Check diagonal (top-left to bottom-right)
    	int startRow = row - min(row, col);
    	int startCol = col - min(row, col);
    	count = 0;
    	for (int r = startRow, c = startCol; r < ROWS && c < COLS; r++, c++) {
        	if (board[r][c] == player) {
            	count++;
            	if (count == 4)
                	return true;
        	} else {
            	count = 0;
        	}
    	}

    	// Check diagonal (top-right to bottom-left)
    	startRow = row - min(row, COLS - 1 - col);
    	startCol = col + min(row, COLS - 1 - col);
    	count = 0;
    	for (int r = startRow, c = startCol; r < ROWS && c >= 0; r++, c--) {
        	if (board[r][c] == player) {
            	count++;
            	if (count == 4)
                	return true;
        	} else {
            	count = 0;
        	}
    	}

    	return false;
} 


void ConnectFour :: printBoard(const char board[ROWS][COLS]) 
{
    cout << endl;
    for (int r = 0; r < ROWS; r++) {
        for (int c = 0; c < COLS; c++) {
            cout << board[r][c] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void ConnectFour :: connectFourGame(string& player1, string& player2, int& score1, int& score2)
{
    char board[ROWS][COLS];
    for (int r = 0; r < ROWS; r++) {
        for (int c = 0; c < COLS; c++) {
            board[r][c] = ' ';
        }
    }

    bool player1Turn = true;
    bool gameEnd = false;

    while (!gameEnd) {
      printBoard(board);

      int col;
      if (player1Turn) {
          cout << player1 << "'s turn (X)";
          cout << "\nSelect column to drop your piece (1-7): ";

          cin >> col;
      } else {
          cout << player2 << "'s turn (O): ";
          cout << "\nSelect column to drop your piece (1-7): ";

          cin >> col;
      }

      col--;

      // Check if the selected column is valid
      if (col < 0 || col >= COLS || board[0][col] != ' ') {
          cout << "Invalid move! Try again." << endl;
          continue;
      }

      // Find the first available row in the selected column
      int row;
      for (row = ROWS - 1; row >= 0; row--) {
          if (board[row][col] == ' ')
              break;
      }

      // Make the move
      char player = player1Turn ? 'X' : 'O';
      board[row][col] = player;
      cout << endl; // to leave a blank line

      // Check for a winning move
      if (isWinningMove(board, row, col, player)) {
          printBoard(board);
          if (player1Turn) {
            cout << "Congratulations!" << endl;
            cout << player1 << " wins!" << endl;
            score1 += 10;
            score2 -= 1;
          } 
          else {
            cout << "Congratulations!" << endl;
            cout << player2 << " wins!" << endl;
            score2 += 10;
            score1 -= 1;
          }
          gameEnd = true;
        	} else if (isBoardFull(board)) {
            	printBoard(board);
            	cout << "It's a draw!" << endl;
            	gameEnd = true;
        	} else {
            	player1Turn = !player1Turn;
        	}
    	}
}
