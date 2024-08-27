#include <iostream>
#include <cstdlib>
#include <time.h>

   /*
   * Purpose: This program's purpose is to replicate Rock, Paper, Scissors game where you can play with either 1 or 2 players. If you choose 1 player then you will be played against a computer and if you choose 2 players then you will be played against another player. You can play either mode as many times as you want as long as you say "yes" or "no" when it asks you if you want to play again.
   * Author: Ryan Shuck
   * Language: C++ (CLion 2024.1.1 g++ compiler)
   * Date of creation: 4/26/24
   * Date of last revision: 4/27/24
   * Citation of sources: None
   */

//Functions
void play_game();
void vs_com();
void vs_player();
void play_again();

void play_game(){
    int num_players;

    std::cout << "Welcome to Rock, Paper, Scissors! A classic game where you and your friend forms one of the three shapes in the game!" << std::endl;
    std::cout << "Enter how many players are playing (1 or 2): " << std::endl;
    std::cin >> num_players;

    if(num_players != 1 && num_players != 2){
        std::cout << "I'm sorry but you didn't enter 1 or 2. Try again!" << std::endl;
        std::cout << "Enter how many players are playing (1 or 2): " << std::endl;
        std::cin >> num_players;
    }

    if(num_players == 1){
        vs_com();
    }
    else{
        vs_player();
    }
}

void vs_com(){
    //Vs Computer Mode
    srand(time(0));

    std::string input;

    std::cout << "You typed in one player." << std::endl;
    std::cout << "In this version, you are playing against a computer which is player 2." << std::endl;
    std::cout << "To start the game, Player 1 must enter either rock, paper, or scissor first then the computer will make a decision." << std::endl;
    std::cout << "Enter your move (rock, paper, scissor): " << std::endl;
    std::cin >> input;

    if(input != "rock" && input != "paper" && input != "scissor"){
        std::cout << "I'm sorry but you didn't enter rock, paper, or scissor. Try again!" << std::endl;
        std::cout << "Enter your move: " << std::endl;
        std::cin >> input;
    }

    std::cout << "Player 1 has chosen " << input << "!" << std::endl;

    //Computer's move
    int rand_num = rand() % 3;
    std::string com_move;

    switch(rand_num){
        case 0:
            com_move = "rock";
            std::cout << "Computer has chosen " << com_move << "!" << std::endl;
            break;
        case 1:
            com_move = "paper";
            std::cout << "Computer has chosen " << com_move << "!" << std::endl;
            break;
        case 2:
            com_move = "scissor";
            std::cout << "Computer has chosen " << com_move << "!" << std::endl;
            break;
    }

    //Player 1 Win Situations
    if(input == "rock" && com_move == "scissor"){
        std::cout << "Rock beats Scissor! Player 1 wins!" << std::endl;
    }
    else if(input == "paper" && com_move == "rock"){
        std::cout << "Paper beats Rock! Player 1 wins!" << std::endl;
    }
    else if(input == "scissor" && com_move == "paper"){
        std::cout << "Scissor beats Paper! Player 1 wins!" << std::endl;
    }
    //Computer Win Situations
    else if(input == "scissor" && com_move == "rock"){
        std::cout << "Rock beats Scissor! Computer wins!" << std::endl;
    }
    else if(input == "rock" && com_move == "paper"){
        std::cout << "Paper beats Rock! Computer wins!" << std::endl;
    }
    else if(input == "paper" && com_move == "scissor"){
        std::cout << "Scissor beats Paper! Computer wins!" << std::endl;
    }
    //Situations if both the player and computer pick the same move
    else if((input == "rock" && com_move == "rock") || (input == "paper" && com_move == "paper") || (input == "scissor" && com_move == "scissor")){
        std::cout << "You both picked the same move! Try again!" << std::endl;
    }

    play_again();
}

void vs_player(){
    //Vs Player Mode
    std::string move_1;
    std::string move_2;

    std::cout << "You entered two players." << std::endl;
    std::cout << "In this version, you are playing against another player which could be your friend or anyone." << std::endl;
    std::cout << "To start the game, Player 1 must enter either rock, paper, or scissor first then Player 2 will must enter rock, paper, or scissor." << std::endl;
    std::cout << "Enter your move Player 1 (rock, paper, scissor): " << std::endl;
    std::cin >> move_1;

    if(move_1 != "rock" && move_1 != "paper" && move_1 != "scissor"){
        std::cout << "I'm sorry but you didn't enter rock, paper, or scissor. Try again!" << std::endl;
        std::cout << "Enter your move Player 1: " << std::endl;
        std::cin >> move_1;
    }

    std::cout << "Enter your move Player 2 (rock, paper, scissor): " << std::endl;
    std::cin >> move_2;

    if(move_2 != "rock" && move_2 != "paper" && move_2 != "scissor"){
        std::cout << "I'm sorry but you didn't enter rock, paper, or scissor. Try again!" << std::endl;
        std::cout << "Enter your move Player 2: " << std::endl;
        std::cin >> move_2;
    }

    std::cout << "Player 1 has chosen " << move_1 << "!" << std::endl;
    std::cout << "Player 2 has chosen " << move_2 << "!" << std::endl;

    //Player 1 Win Situations
    if(move_1 == "rock" && move_2 == "scissor"){
        std::cout << "Rock beats Scissor! Player 1 wins!" << std::endl;
    }
    else if(move_1 == "paper" && move_2 == "rock"){
        std::cout << "Paper beats Rock! Player 1 wins!" << std::endl;
    }
    else if(move_1 == "scissor" && move_2 == "paper"){
        std::cout << "Scissor beats Paper! Player 1 wins!" << std::endl;
    }
    //Player 2 Win Situations
    else if(move_1 == "scissor" && move_2 == "rock"){
        std::cout << "Rock beats Scissor! Player 2 wins!" << std::endl;
    }
    else if(move_1 == "rock" && move_2 == "paper"){
        std::cout << "Paper beats Rock! Player 2 wins!" << std::endl;
    }
    else if(move_1 == "paper" && move_2 == "scissor"){
        std::cout << "Scissor beats Paper! Player 2 wins!" << std::endl;
    }
    //Situations if both players pick the same move
    else if((move_1 == "rock" && move_2 == "rock") || (move_1 == "paper" && move_2 == "paper") || (move_1 == "scissor" && move_2 == "scissor")){
        std::cout << "You both picked the same move! Try again!" << std::endl;
    }

    play_again();
}

void play_again(){
    //Play again
    std::string play_again;

    std::cout << "Did you want to play again? (Enter yes or no)" << std::endl;
    std::cin >> play_again;

    if(play_again != "yes" && play_again != "no"){
        std::cout << "I'm sorry but you didn't enter yes or no. Try again!" << std::endl;
        std::cout << "Enter yes or no: " << std::endl;
        std::cin >> play_again;
    }

    if(play_again == "yes"){
        play_game();
    }
}

//Driver function
int main() {
    play_game();
}

