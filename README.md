# HACKATHON 2: WHAT IS THE GAME?
## GAME DESCRIPTION
The game is a two-player collaborative adventure that challenges players to work together and pass three rooms by guessing numbers within specified ranges. Each room is represented by a node in a dynamic linked list. If the players guess the correct number, they trigger a bomb that will destroy the room and then move to the next room. Upon passing all the rooms, the players move on to the Final Stage called the Final Destination. In this stage,they play against each other in the classic Four-In-A-Row or also known as the Connect Four game. The player who wins in this Connect Four game is declared the winner of this game. The Connect Four game serves as the final decider of the winner in case both players complete the adventure.
## GAME FEATURES
CHALLENGING GAMEPLAY:
This game test the players' ability to guess numbers within specified ranges. As the level goes up, the range becomes larger to make it more challenging. In the last part, the games becomes more challenging where the players have to play the Connect Four Game.

MULTIPLAYER MODE:
In the collaborative mode, this game offers competitive mulitplayer mode where the players have to compete against each other n the final part of the game which is the Connect Four game.

WINNING DETERMINATION:
The winner of the overall game is determined by the Connect Four game.
If the Connect Four game ends in a draw, the game is considered a draw.

PLAYER INTERACTION:
The game requires two players to collaborate to pass levels and compete in Connect Four.
Players take turns guessing numbers for each level.
In the Connect Four game, players alternate turns to drop put their piece (X or O) onto the board.

## HOW TO PLAY THIS GAME
In this game, there are three rooms that the players have to pass before the final game which is Connect Four. For each room, both players have to communicate and strategize to come up with a joint guess within the specified range. There is a bomb in each room, if the players guess correctly, they will trigger the bomb and the room will be destroyed so the players have to move to the next room.
1.	The game starts with two players collaborating to guess the number in Room 1, which ranges from 1 to 10.
2.	If the players guess correctly, a bomb is triggered, and they move to Room 2 and Room 1 will be destroyed. Room 2 has a number range of 1 to 50.
3.	Players repeat the guessing process in Room 2, aiming to trigger the bomb, destroyed Room 2, and progress to Room 3, which has a number range of 50 to 100.
4.	Upon successfully completing Room 3 together, the players enter the Connect Four finale.
5.	They play Connect Four against each other, and the winner of this game determines the ultimate winner of this game.

## OBJECT-ORIENTED CONCEPTS USED TO DEVELOP THIS GAME
In this game, there are three classes which is GamePlayer, GuessingGame and ConnectFour.

Disclaimer:
We have developed the classes but were unable to allow the classes to communicate properly. Please refer to the file named "WhatIsTheGame_Prototype" to play the game.

## ROLE OF LINKED LISTS/ STACKS/QUEUES IN THIS GAME
In this game, the linked list data structure plays a crucial role in managing the rooms and facilitating the progression of the players. The dynamic linked list is used to represent three rooms in the game. Each node in the linked list corresponds to a room and stores the necessary information for that room. The node contains the range of numbers for each room. As the players passes the rooms, nodes are deleted from the linked lists. The linked list data structure provides an efficient way to manage and organize the game's levels in a logical sequence. The linked list structure helps maintain the sequential order of the levels. The players can only move forward from one rooms to the next, as dictated by the linked list. The linked list also allows for easy tracking of the players' progress. By keeping track of the current level based on the active node in the linked list, the game can determine the players' current position in the adventure. The game considers all levels completed and the adventure finished when the linked list becomes empty. At this point, the players move on to the Connect Four finale.

## SCREENSHOTS OF THE GAME 
1. The main menu display of the program
   ![image](https://github.com/alyanadhirah00/HACKATHON-2-GROUP-48/assets/117891942/d9c1e4ee-5f3e-4e8e-9af6-36646695af1c)

2. Choose option number 1

    ![image](https://github.com/alyanadhirah00/HACKATHON-2-GROUP-48/assets/117891942/726d6929-e5ec-4e17-be4e-8840e1a4426f)

4. Choose option number 2
![image](https://github.com/alyanadhirah00/HACKATHON-2-GROUP-48/assets/117891942/80ee5395-cf8a-4e37-b3fd-41bed591034c)

5. Choose option number 3
   ![Screenshot 2023-06-28 235901](https://github.com/alyanadhirah00/HACKATHON-2-GROUP-48/assets/117891942/a8eae52e-2c52-4895-adb1-6df2a1ea3544)

5. Choose option number 4
![Screenshot 2023-06-28 235935](https://github.com/alyanadhirah00/HACKATHON-2-GROUP-48/assets/117891942/a846b57c-8cb8-4c5a-b355-e443d5025b0e)


6. Input Validation feature in the Random Number Guessing Game

![image](https://github.com/alyanadhirah00/HACKATHON-2-GROUP-48/assets/121533158/39f546a7-6f4b-4ba1-b4d0-9096787f6ccf)


7. Winning State of the game in Final Destination (Connect Four)

Diagonal Win

![Diagonal win](https://github.com/alyanadhirah00/HACKATHON-2-GROUP-48/assets/121533158/9d0262af-a34a-4fc2-b360-36ecfd603bf1)


Horizontal Win

![image](https://github.com/alyanadhirah00/HACKATHON-2-GROUP-48/assets/121533158/f6a54b0c-ea68-47f0-9fe6-e8ffd850d9a9)


Vertical Win

![Vertical win](https://github.com/alyanadhirah00/HACKATHON-2-GROUP-48/assets/121533158/08ab5367-f3db-41b1-9d9f-b2607be7f925)



8. Text file that stores historical data (Name and Scores of players of the previous game)

<img width="423" alt="image" src="https://github.com/alyanadhirah00/HACKATHON-2-GROUP-48/assets/121533158/011779c8-77fc-42c6-b5b7-2617c423e488">

















## LINK TO THE GAME DEMO VIDEO

https://youtu.be/nbeHiO-yMm4
