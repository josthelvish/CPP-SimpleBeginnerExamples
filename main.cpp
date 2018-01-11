/**
 * @header NA
 *
 * @brief The project's main class.
 *
 * @author jkalitas 2017
 *
 * */

#include <iostream>
#include "Example.h"
#include "MemoryManagement/MemoryManagement.h"

/**
 * Create a Memory Management example Object.
 */
void memoryManagementExample(){
        Example *memoryManagement{};
        memoryManagement = new MemoryManagement{};
        delete(memoryManagement);
}

/**
 * A menu with all the examples.
 */
void displayMenu(){
    std::cout << "##############"<<std::endl;
    std::cout << "#     MENU    "<<std::endl;
    std::cout << "##############"<<std::endl;
    std::cout << "#     0) QUIT"<<std::endl;
    std::cout << "#     1) MEMORY MANAGEMENT"<<std::endl;
    std::cout << "#     2) REFERENCE TYPES"<<std::endl;
    std::cout << std::endl;
    std::cerr << "Please Select an Option"<<std::endl;
}


/**
 * The main function to the project.
 *
 * @return int with exiting code.
 */
int main() {
    bool quitSelected = false;

    do{
        displayMenu();
        //The user input for option selection
        unsigned short menuOption;
        std::cin >> menuOption;

        switch (menuOption){
            case 0:
                std::cout << std::endl;
                std::cerr << "Leaving the program"<<std::endl;
                std::cout << std::endl;
                quitSelected = true;
                break;
            case 1:
                memoryManagementExample();
                break;
            case 2:
                break;
            default:
                std::cout << std::endl;
                std::cout << "Please choose an available option on the menu, or zero if you want to quit"<<std::endl;
                std::cout << std::endl;
                break;

        }
    }while (!quitSelected);

    return 0;
}