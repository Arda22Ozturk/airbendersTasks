#include <iostream>

int main(){

    double t; 
    std::cout << "Type a time(seconds) value: "; // Type a time variable and press enter
    std::cin >> t; // Get user input from the keyboard and uses it as time
    std::cout << "Your inputted time is: " << t << std::endl; // Display the inputted time value
    double g = 9.80665;
    double distance = g*(t*t)/2;
    std::cout << "Calculated distance in meters is: " << distance << std::endl;

}
