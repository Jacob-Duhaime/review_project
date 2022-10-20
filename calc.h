#include <vector>
#include <string>

class Calc{
    private:
        // private parts
        std::string user; // declaring string variable
        std::vector<std::string> users = {"Angel", "Harry", "Jacob", "Nick"}; // list of the users in the dataset
        //int getIndex(); // function to get index of who was chosen

        // {Angel, Harry, Jacob, Nick}
        // Assignments out of 100
        std::vector<double> assignment1 = {35, 80, 100, 100}; // Angel:35, Harry:80, Jacob: 100, Nick: 100
        std::vector<double> assignment2 = {100, 60, 100, 90}; // etc....
        std::vector<double> assignment3 = {70, 85, 100, 85};
        std::vector<double> assignment4 = {80, 20, 100, 65};
        std::vector<double> assignment5 = {60, 20, 100, 65};
        // Labs out of 50
        std::vector<double> labs = {50, 50, 50, 50}; 
        // Term project out of 350
        std::vector<double> term_project = {250, 290, 350, 325};
        // Final exam out of 100
        std::vector<double> final_exam = {30, 70, 100, 60};
        // Review project out of 30
        std::vector<double> review_project = {30, 30, 30, 30}; //grade out of 30
    public:
        // public parts
        Calc(std::string ui_user); // constructer
        double calcGrade(); // function to calculate grade of user selected
};
