#include <iostream>

std::string playerChoice();
std::string computerchoice();

int main(){
    std::string player;
    std::string computer;
    std::string winner;
    std::cout << "<--------- Rock, Paper Scissors --------->" << '\n';
    player = playerChoice();
    std::cout << "<----Status---->" << "\nPlayer: " << player << "\nComputer: " << "NULL" << "\nWinner: " << "NULL" << "\n<-------------->" << '\n';
    computer = computerchoice();
    std::cout << "<----Status---->" << "\nPlayer: " << player << "\nComputer: " << computer << "\nWinner: " << winner << "\n<-------------->" << '\n';





    std::cout << "<---------------------------------------->" << '\n';
    return 0;
}
std::string playerChoice(){
    char player;
    std::cout << "Enter a option\nr - rock\np - paper\ns - scissors" << '\n';
    std::cout << "Player:";
    std::cin >> player;
    switch(player){
        case 'r':
            return "rock";
        case 'p':
            return "paper";
        case 's':
            return "scissors";
        default:
            return "0";
    }
}
std::string computerchoice(){
    int computer;
    srand(time(NULL));
    computer = rand() % 3 + 1;
    switch(computer){
        case 1:
            return "rock";
        case 2:
            return "paper";
        case 3:
            return "scissors";
        default:
            return "0";
    }


}
void evaluate(){
    NULL;
}