#include <iostream>

/*
6. Now change the body of the loop so that it reads just one double each
time around. Define two variables to keep track of which is the smallest
and which is the largest value you have seen so far. Each time through
the loop write out the value entered. If it’s the smallest so far, write the
smallest so far after the number. If it is the largest so far, write the largest
so far after the number.
*/

int main()
{
    double current = 0;
    double smallest = 0;
    double largest = 0;
    
    std::cout << "--------------------------------------------" << '\n'; 

    // reads two integers and determines which is smaller, larger, or if they're equal   
    std::cout << "Input: ";
    while (std::cin >> current)
    {
        std::cout << "--------------------------------------------" << '\n'
                  << "Your input was " << current << ".\n";

        // using selection statements for the logic of smallest and largest value seen so far
        if (smallest == 0 && largest == 0)
        {
            smallest = current;
            largest = current;
            std::cout << "This is the largest value so far.\n";
        }
        if (current > largest) 
        {
            largest = current;
            std::cout << "This is the largest value so far.\n";
        }
        if (current < smallest) 
        {
            smallest = current;
            std::cout << "This is the smallest value so far.\n";
        }
        
                 
        // print whether the value entered was the smallest or largest inputted so far
        

        std::cout << "--------------------------------------------" << '\n'
                  << "Enter '|' at any time to abort the program.\n"
                  << "--------------------------------------------" << '\n';
    }    
}