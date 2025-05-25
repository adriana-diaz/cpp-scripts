#include <iostream>

int main() {
    // Switch statement example
    // This program will ask the user to enter a month number (1-12)
    //int month;
    //std::cout << "Enter a month (1-12): ";
    //std::cin >> month;

   //switch(month) {
        //case 1: std::cout << "It's January"; break;
        //case 2: std::cout << "It's February"; break;
        //case 3: std::cout << "It's March"; break;
       // case 4: std::cout << "It's April"; break;
        //case 5: std::cout << "It's May"; break;
       // case 6: std::cout << "It's June"; break;
       // case 7: std::cout << "It's July"; break;
      //  case 8: std::cout << "It's August"; break;
       // case 9: std::cout << "It's September"; break;
       // case 10: std::cout << "It's October"; break;
       // case 11: std::cout << "It's November"; break;
       // case 12: std::cout << "It's December"; break;
       // default: std::cout << "Invalid month entered!"; break; //not matching any case
    //}

   // return 0;  

    // Switch statement with char
    // This program will ask the user to enter a grade (A, B, C, D, F)
    char grade;
    std::cout << "Enter your grade (A, B, C, D, F): ";
    std::cin >> grade;

    switch(grade) {
        case 'A': std::cout << "Excellent!"; break;
        case 'B': std::cout << "Good job!"; break;
        case 'C': std::cout << "You passed!"; break;
        case 'D': std::cout << "Better luck next time!"; break;
        case 'F': std::cout << "Failed!"; break;
        default: std::cout << "Invalid grade entered!"; break; //not matching any case
    }

    return 0;
}              