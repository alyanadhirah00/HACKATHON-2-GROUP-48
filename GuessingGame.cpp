#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void GuessingGame :: guessingGame(int range, Node*& currentNode) 
{
    int secretNumber = rand() % range + 1; // randomNumber -> secretNumber
    int guess; 
    bool guessed = false;
    cout << "Guess a number between 1 and " << range << ": ";

   	while (!guessed) 
		{
       	cin >> guess;
    		if(guess>=1 && guess<=range)
			  {
				  if (guess == secretNumber) 
				  {
            	cout << "\nYou found the bomb!" << endl;
            	cout << "RUN FOR YOUR LIFE !!!" << endl;
            	cout << "(The room is destroyed by the BOMB)" << endl;
            	guessed = true;
        	} 
				  else if (guess < secretNumber) 
				  {
           		cout << "Too low. Try again: ";
        	} 
				  else 
				  {
          	cout << "Too high. Try again: ";
        	}	
			  }
		
			  else
			  {
				  cout << "Invalid number. Please try again.";
			  }

    }
    
    cout << endl;

	  // Move to the next node or empty the linked list
	  if (currentNode->next != nullptr) {
    	  Node* temp = currentNode;
    	  currentNode = currentNode->next;
    	  delete temp;
    } else {
        delete currentNode;
        currentNode = nullptr;
    }
}
