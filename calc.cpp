#include "calc.h"
#include <vector>

Calc::Calc(std::string ui_user){
    this-> user = ui_user;
}

double Calc::calcGrade(){
    int index;
    for (int i = 0; i < 4; i++){
        if (users[i] == user){
            index = i;
        }
    }
    double assignment_total = 0;
    assignment_total = assignment1[index] + assignment2[index] + assignment3[index] + assignment4[index] + assignment5[index];
    double point_total = assignment_total + labs[index] + term_project[index] + final_exam[index] + review_project[index];
    double final_grade = (point_total / (500 + 50 + 350 + 100));
    final_grade = (final_grade * 100);
    return final_grade;
}