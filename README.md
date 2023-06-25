# HACKATHON-2-
## GAME DESCRIPTION
The game is a two-player collaborative adventure that challenges players to work together and pass three rooms by guessing numbers within specified ranges. Each room is represented by a node in a dynamic linked list. If the players guess the correct number, they trigger a bomb and move to the next room. Upon passing all the rooms, the players move on to the Connect Four stage. They play against each other in a classic Connect Four game. The player who wins in this Connect Four game is declared the winner of this game. The Connect Four game serves as the final decider of the winner in case both players complete the adventure.
## GAME FEATURES

## HOW TO PLAY THIS GAME
In this game, there are three rooms that the players have to pass before the final game which is Connect Four. For each room, both players have to communicate and strategize to come up with a joint guess within the specified range. There is a bomb in each room, if the players guess correctly, they will trigger the bomb and the room will be destroyed so the players have to move to the next room.
1.	The game starts with two players collaborating to guess the number in Room 1, which ranges from 1 to 10.
2.	If the players guess correctly, a bomb is triggered, and they move to Room 2 and Room 1 will be destroyed. Room 2 has a number range of 1 to 50.
3.	Players repeat the guessing process in Room 2, aiming to trigger the bomb, destroyed Room 2, and progress to Room 3, which has a number range of 50 to 100.
4.	Upon successfully completing Room 3 together, the players enter the Connect Four finale.
5.	They play Connect Four against each other, and the winner of this game determines the ultimate winner of this game.

## OBJECT-ORIENTED CONCEPTS USED TO DEVELOP THIS GAME
In this game, we used three different class which is Player, Guessing and ConnectFour. The member for player class is name of the player and the previous score, the member of guessing is linked list and random number. 

## ROLE OF LINKED LISTS/ STACKS/QUEUES IN THIS GAME
In this game, the linked list data structure plays a crucial role in managing the rooms and facilitating the progression of the players. The dynamic linked list is used to represent three rooms in the game. Each node in the linked list corresponds to a room and stores the necessary information for that room. The node contains the range of numbers for each room. As the players passes the rooms, nodes are deleted from the linked lists. The linked list data structure provides an efficient way to manage and organize the game's levels in a logical sequence. The linked list structure helps maintain the sequential order of the levels. The players can only move forward from one rooms to the next, as dictated by the linked list. The linked list also allows for easy tracking of the players' progress. By keeping track of the current level based on the active node in the linked list, the game can determine the players' current position in the adventure. The game considers all levels completed and the adventure finished when the linked list becomes empty. At this point, the players move on to the Connect Four finale.

## SCREENSHOTS OF THE GAME 

## LINK TO THE GAME DEMO VIDEO
