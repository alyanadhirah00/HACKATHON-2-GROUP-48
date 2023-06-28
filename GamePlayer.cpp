#include <iostream>
#include <fstream>
using namespace std;

void GamePlayer :: updatePlayerScore(Player*& head, const string& name, int score) {
    Player* current = head;
    while (current != nullptr) {
        if (current->name == name) {
            current->score += score;
            return;
        }
        current = current->next;
    }

    // Player not found, create a new node
    Player* newPlayer = new Player;
    newPlayer->name = name;
    newPlayer->score = score;
    newPlayer->next = nullptr;

    // Insert the new node at the end of the list
    if (head == nullptr) {
        head = newPlayer;
    } else {
        current = head;
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
            outputFile << current->name << " = " << current->score << endl;
            current = current->next;
        }
        outputFile.close();
        cout << "Player data saved to file." << endl;
    } else {
        cout << "Unable to open file for writing." << endl;
    }
}

void readPlayerDataFromFile(const string& filename) {
    ifstream inputFile(filename);

    if (inputFile.is_open()) {
        string line;
        while (getline(inputFile, line)) {
            cout << line << endl;
        }
        inputFile.close();
    } else {
    	cout << "Unable to open file: " << filename << endl;
    	cout << "There is no data yet.\n";
    	cout << "Play a game to get your name on the Scoreboard!\n";
        
    }
}
