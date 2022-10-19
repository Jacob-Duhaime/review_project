#include <iostream>

//written by Angel and Jacob

int getUser(){
    //This function runs and uses an integer and returns the choice for the member data that you wish to use.
    //This means that if option 1 is member "user", then you will be accessing the data set for "user", which
    //will return the grade for that person as well as a little message for that individual depending on what
    //their estimated calculated grade is.
    int choice;
    std::cout<<"Welcome to Grade calculator!"<<std::endl;
    std::cout<<std::endl;
    std::cout<<std::endl;
    std::cout<<"Which of the following Members do wish to know their grade?"<<std::endl;
    std::cout<<"For Angel, please type in option '1' "<<std::endl;
    std::cout<<"For Jacob, please type in option '2' "<<std::endl;
    std::cout<<"For NAME, please type in option '3' "<<std::endl;
    std::cout<<"For NAME, please type in option '4' "<<std::endl;
    std::cout<<"To stop running the program, please type in option '0' "<<std::endl;
    std::cout<<std::endl;
    std::cout<<"Your Choice = "<<std::endl;
    std::cin>> choice;
    return choice;
}

int main(){
    int choice = getUser();
    if(choice == 0){
        std::cout<<"Thank you! Good Bye!"<<std::endl;
        return 0;
    }

    if(choice == 1){
        std::cout<<"You have selected to access Angel's grades"<<std::endl;
        //call function for Angel's grade that sets the values for his assignments, exams, final project..etc
    }
    
    else if(choice == 2){
        std::cout<<"You have selected to access Jacob's grades"<<std::endl;
        //call function for Angel's grade that sets the values for his assignments, exams, final project..etc
    }
    
    else if(choice == 3){
        std::cout<<"You have selected to access Harrison's grades"<<std::endl;
        //call function for Angel's grade that sets the values for his assignments, exams, final project..etc
    }
    
    else if(choice == 4){
        std::cout<<"You have selected to access Nicholas's grades"<<std::endl;
        //call function for Angel's grade that sets the values for his assignments, exams, final project..etc
    }

    else if (choice > 4 || choice < 0){
        std::cout<<"Invalid choice, please try an integer ranging from 0 - 4"<<std::endl;
        getUser();
    }
}

