#include <iostream>
#include <fstream>
using namespace std;

void GamePlayer :: storePlayerData(Player*& head, string name, int score) {
  Player* newPlayer = new Player;
  newPlayer->name = name;
  newPlayer->score = score;
  newPlayer->next = nullptr;

  if (head == nullptr) {
      head = newPlayer;
  } else {
      Player* current = head;
      while (current->next != nullptr) {
    	    current = current->next;
    	}
    	current->next = newPlayer;
  }
}

// Store Player Data in Text File
void GamePlayer :: storePlayerDataInFile(Player* head) {
    ofstream outputFile("player_data.txt");

    if (outputFile.is_open()) {
        Player* current = head;
        while (current != nullptr) {
            outputFile << current->name << " " << current->score << endl;
            current = current->next;
        }
        outputFile.close();
        cout << "Player data saved to file." << endl;
    } else {
        cout << "Unable to open file for writing." << endl;
    }
}

void GamePlayer :: readPlayerDataFromFile(const string& filename) {
    ifstream inputFile(filename);

    if (inputFile.is_open()) {
        string line;
        while (getline(inputFile, line)) {
            cout << line << endl;
        }
        inputFile.close();
    } else {
        cout << "Unable to open file: " << filename << endl;
    }
}
