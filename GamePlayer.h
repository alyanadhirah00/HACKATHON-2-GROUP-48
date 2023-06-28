#ifndef GAMEPLAYER_H
#define GAMEPLAYER_H

class GamePlayer
{
  private:
    int score;
    struct player
    {
      string name;
      int score;
      Player *next;
    };

  public:
    void storePlayerData(Player*&head, string name, int score);
    void storePlayerDataInFile(Player* head);
    void readPlayerDataFromFile(const string& filename);

};

#endif
