#include "calc.h"
#include <vector>

Calc::Calc(std::string ui_user){
    this-> user = ui_user; // when the user inputs a string into constructer it gets stored into the data structure 'calc'
}

double Calc::calcGrade(){ // function to calculate grade of selected user
    int index;
    for (int i = 0; i < 4; i++){ // 4 iterations because of 4 users
        if (users[i] == user){ //if the user is equal to user of i then return the index of said user
            index = i;
        }
    }
    double assignment_total = 0;
    assignment_total = assignment1[index] + assignment2[index] + assignment3[index] + assignment4[index] + assignment5[index]; //summation of all assignments
    double point_total = assignment_total + labs[index] + term_project[index] + final_exam[index] + review_project[index]; // summation of all possible points
    double final_grade = (point_total / (500 + 50 + 350 + 100)); // an algorithm to determine the final grade by dividing total points by total points possible
    final_grade = (final_grade * 100); // * 100 to make the final grade into a 2 digit percent value instead of decimal
    return final_grade;
}
