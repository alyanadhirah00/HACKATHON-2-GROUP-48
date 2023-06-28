#ifndef GUESSINGGAME_H
#define GUESSINGGAME_H

class GuessingGame
{
  private:
    struct Node
    {
      int range;
      Node* next;
    };
  public:
    void guessingGame(int, Node*&);    
};

#endif
