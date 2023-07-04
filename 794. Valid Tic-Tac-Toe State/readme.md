# 794. Valid Tic-Tac-Toe State
```diff
!Medium
```
Given a Tic-Tac-Toe board as a string array board, return true if and only if it is possible to reach this board position during the course of a valid tic-tac-toe game.

The board is a 3 x 3 array that consists of characters ' ', 'X', and 'O'. The ' ' character represents an empty square.

Here are the rules of Tic-Tac-Toe:

Players take turns placing characters into empty squares ' '.
The first player always places 'X' characters, while the second player always places 'O' characters.
'X' and 'O' characters are always placed into empty squares, never filled ones.
The game ends when there are three of the same (non-empty) character filling any row, column, or diagonal.
The game also ends if all squares are non-empty.
No more moves can be played if the game is over.
 

### Example 1:
![image](https://github.com/0xAQ/Leet-Code-Solutions/assets/88236255/2d5be086-5b12-4325-92d4-a11a5493b8e5)
```
Input: board = ["O  ","   ","   "]
Output: false
Explanation: The first player always plays "X".
```
### Example 2:
![image](https://github.com/0xAQ/Leet-Code-Solutions/assets/88236255/617c57a2-66f2-418c-aa5f-87b383ccc38b)
```
Input: board = ["XOX"," X ","   "]
Output: false
Explanation: Players take turns making moves.
```
### Example 3:
![image](https://github.com/0xAQ/Leet-Code-Solutions/assets/88236255/0343ad3f-0481-4f9c-acd1-364ad4d95a2a)
```
Input: board = ["XOX","O O","XOX"]
Output: true
```
