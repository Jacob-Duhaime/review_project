#include <iostream>
#include <string>
#include <algorithm>
#include "calc.h"

int main(){
    std::string choice;

    std::cout << "Welcome to the CSC 212 Grade Calculator" << std::endl;
    std::cout << "Which user would you like to calculate the grade for?" << std::endl;
    std::cin >> choice;
    std::vector<std::string> userlist = {"Harry", "Jacob", "Nick", "Angel"};

    choice[0] = toupper(choice[0]);
    while ((choice != userlist[0]) && (choice != userlist[1]) && (choice != userlist[2]) && (choice != userlist[3])){
        std::cout << "Sorry! That is not a valid user, please try again." << std::endl;
        std::cin >> choice;
    }

    Calc userChoice(choice);
    double user_grade;

    user_grade = userChoice.calcGrade();

    std::cout << "Your current grade is " << user_grade << "%" << std::endl;
    if (user_grade >= 70){
        std::cout << "You are doing great!" << std::endl;
    }
    else if (user_grade >= 50){
        std::cout << "There is still hope for you" << std::endl;
    }
    else if (user_grade < 50){
        std::cout << "There is no hope for you..." << std::endl;
    }

    return 0;
}
