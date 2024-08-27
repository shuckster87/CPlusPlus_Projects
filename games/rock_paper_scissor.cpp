#include <iostream>
#include <cstdlib>
#include <time.h>

int main() {
    srand(time(0));

    std::string input = "";

    std::cout << "Welcome to Rock, Paper, Scissors! A classic game where you and your friend forms one of the three shapes in the game!" << std::endl;
    std::cout << "In this version, you are playing against a computer which is player 2" << std::endl;
    std::cout << "To start the game, Player 1 must enter either rock, paper, or scissor first then the computer will make a decision" << std::endl;
    std::cout << "Enter your move (rock, paper, scissor): " << std::endl;
    std::cin >> input;

    if(input != "rock" || input != "paper" || input != "scissor"){
        std::cout << "I'm sorry but you didn't enter rock, paper, or scissor. Try again!" << std::endl;
        std::cout << "Enter your move: " << std::endl;
        std::cin >> input;
    }

    std::cout << "Player 1 has chosen " << input << "!" << std::endl;

    //Computer's move
    int rand_num = rand() % 3;
    std::string com_move = "";

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
    //Situations if both players pick the same move
    else if((input == "rock" && com_move == "rock") || (input == "paper" && com_move == "paper") || (input == "scissor" && com_move == "scissor")){
        std::cout << "You both picked the same move! Try again!" << std::endl;
    }
}
