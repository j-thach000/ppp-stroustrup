#include "std_lib_facilities.h"

// detect repeated words 
// demonstrate repeated assignment after initialization
int main()
{
    std::string previous = " "; // initialize variable as white space
    std::string current;        // current word
    while (std::cin >> current) // read a stream of words and prompt for input again after the stream of input is checked
    {                           // loop condition isn't required to be boolean (java)
                                // "The cat cat jumped." is a queue of words to be compared by repeated assignment
        if (previous == current) std::cout << "repeated word: " << current << '\n';
        previous = current;
        // if (current == "exit") return 0; unnecessary, use an end-of-input character Ctrl+Z followed by enter 
    }
    // Test input: She she laughed He He He because what he did did not look very very good good.
    // How many reported words were there? 4
    // Why? He appears twice in a row alongside did and very
    // What is the definition of word used here? Any string separated by white-space
    // What is the definition of repeated word? Any exact matches of string
}