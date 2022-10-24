#include <iostream>
#include <string>
#include <algorithm>
#include "calc.h"
// calls the needed function and the calculation function

int main(){
    std::string choice;
    // initializes choice  

    std::cout << "Welcome to the CSC 212 Grade Calculator" << std::endl;
    std::cout << "Which user would you like to calculate the grade for?" << std::endl;
    // output to the title and the info needed to get a input.
    
    std::cin >> choice;
    std::vector<std::string> userlist = {"Harry", "Jacob", "Nick", "Angel"};
    // choose a user and check if they are in the vector of users 

    choice[0] = toupper(choice[0]);
    //makes sure that the fisrt letter in the choice is uppercase so that the formating is right.
    
    while ((choice != userlist[0]) && (choice != userlist[1]) && (choice != userlist[2]) && (choice != userlist[3])){
        std::cout << "Sorry! That is not a valid user, please try again." << std::endl;
        std::cin >> choice;
    }
    //If the choice isnt in the user list retry to get choice.
    
    Calc userChoice(choice);
    //calling the constuctor for user choice.
    double user_grade;
    // initiation of user grade variable.

    user_grade = userChoice.calcGrade();
    // set user grade to the calulated grade output from the class

    std::cout << "Your current grade is " << user_grade << "%" << std::endl;
    if (user_grade >= 70){
        std::cout << "You are doing great!" << std::endl;
    }
    // shows the output if you are passing
    else if (user_grade >= 60){
        std::cout << "There is still hope for you" << std::endl;
    }
    //shows the output if you arnt passing but not compleatly failing
    else if (user_grade < 60){
        std::cout << "There is no hope for you... :(" << std::endl;
    }
    //shows the output if you are failing and below a 60

    return 0;
    // exits the main program
}
