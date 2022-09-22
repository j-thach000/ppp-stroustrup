// Mistakes
1. Forgetting intended \n characters when moving down a line
2. Incorrectly tracing literals in "" as being mathematically evaluated
3. In boolean, values other than 0 become 1
4. Not thoroughly checking meaning of messages in GitHub before acting (no newline at end of file) resulting in duplicate pull request


// Deriving Knowledge
0. Hardware
- RAM is the computer's capacity to hold short-term single pieces of data, values
- RAM can be thought of as numbered mailboxes that hold data while the program is running
- C++ accesses memory indirectly through objects which we name, variables (objects assigned a location in memory)
- Variables have an identifier (name), data type, and value

1. Elements of Programming
    - Data Types (leads to dealing with assignment and variables)
    - Conditionals (control flow)
    - Loops (iterative statements)
    - Arrays (most basic way to hold data)
    - Input + Output
2. Functions

// Insight
- If you can't teach something then you probably defaulted to memorization and repetition.
- Programs are just collections of instructions that manipulate data for a certain result
- As C++ is so vast, it's important to focus on what is possible vs memorizing how to do it
- Defining a variable is naming some region of memory and reserving it for a value
- Assignment is giving a value to a variable
- An uninitialized variable has no value
- Initialization is defining and assigning the variable at the same time (via copy =, or brace {})
- = is considered the assignment operator
- C++ doesn't automatically initialize variables to certain value (like 0) and instead the default value is whatever value that memory address had (could just be random garbage which causes undefined behavior)
- Instantiating is creating a new instance of an object, different from initializing a variable

// Pedagogy (learncpp)
- Manually type out each example, thinking about what each line contributes to the program
- Fix your own bugs and learn to use a debugger
- Experiment and play with examples to develop intuition of what breaks and works.
- Write short programs using recently learned concepts.

// Pedagogy (Saad)
- Introduce a fundamental concept
- Show an example with application and motivation
- Practice on exercises with incremental difficulty

// Pedagogy (PPP Stroustrup)
- blue = key concepts and techniques
- green = advice
- red = warning
- Introduce a tool with a simple concept (what does the tool do)
- Introduce more complex programs using the tool (solving problems with the tool without fighting against it)

// PPP Header
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

// Programming Languages
- Machine (directly understood by CPU, seen as 0s and 1s)
- High-level (has to be translated for the machine, addresses readability and portability)

// Compiling Process 
1. Write source code with a high-level language
2. Translate the source with a compiler
3. Produces machine code files

// Linking Process
1. Gather all object files and library files
2. Check for cross-file dependencies
3. Produce executable

// Philosophy of C++ \
"Trust the programmer" which results in a high degree of freedom (for better or worse)

// C++ Development 
1. Define the problem to solve
2. Design a solution
3. Write a program that implements the solution
4. [Compile the program, producing object files](https://www.learncpp.com/images/CppTutorial/Chapter0/CompileSource-min.png?ezimgfmt=rs:421x161/rscb2/ng:webp/ngcb2)
5. [Link object files*](https://www.learncpp.com/images/CppTutorial/Chapter0/LinkingObjects-min.png?ezimgfmt=rs:441x271/rscb2/ng:webp/ngcb2)
6. Test program
7. Debug (return to step 4 afterwards) \
*link object and library files together > check cross-file dependencies > combine files into a single executable

// Program Structure
- statements (an instruction for the computer)
    - return (lets the program know it's ended)
- functions (a named collection of instructions that execute sequentially)


// C++ Libraries (code others have written, precompiled for reuse in other programs)
1. iostream (read keyboard input and output text)

// C++ Syntax
- std::cin.get(); // get one more char from the user
- std::cout << ""; // print text, "character output", only prints the number and not unnecessary trailing 0s
- std::cin >> ; // scans for the first inputs that match the variable's data type
- /* */ // multi-line comment
- std::endl // creates a newline character, typically preceded by <<
- \" \" to escape a quote inside a string literal
- >> // extraction operator
- << // insertion operator, no need for \n after it since the user's enter press moves to a new line 


// Errors
1. Compile/Syntax (violated grammar rules of the language)
2. Run-time (error during execution)
3. Logic (program functions but produces an unintended result)

// Bad Practices
1. https://stackoverflow.com/questions/1452721/why-is-using-namespace-std-considered-bad-practice

// Best Practices (learncpp)
1. Create a new project for each new program written (Visual Studio)
2. Use the debug configuration until ready to release the program
3. Disable compiler extensions to remain compliant with C++ standards
4. Resolve all warnings as they come up
5. [Turn warning levels up to max as learning](https://www.learncpp.com/cpp-tutorial/configuring-your-compiler-warning-and-error-levels/)
6. Treat warnings as errors
7. Write comments liberally, as if explaining the program to someone who has no idea what the code does. Also, don't assumme you'll remember.
8. Prefer \n over std::endl when outputting text to console (easier to embed into text and read quickly)
9. Favor brace initialization (ex: int a {5}) to disallow narrowing conversion
10. Initialize variables upon creation 
11. Lines no longer than 80 chars
12. Use the IDE's automatic formatting
13. Avoid situations that can cause undefined behavior, such as uninitialized variables 

// Style
1. If a line is split and includes an operator, the operator should go onto the next line
2. Align comments and values for easier reading

// Comments
1. What (outside): describe what the library, function, or program does as a general overview
2. How (inside): describe how the library, function, or program will accomplish its goal 
3. Why (inside): describe why the statement is doing something (ex: explain magic numbers in a formula)
*the general idea is to explain "what" for groups of statements and "why" for individual statements

// Initialization
1. Copy =
2. Direct ()
3. Brace {}

// Data Types
1. integer - just use copy assignment
2. double - favor brace initialization to avoid narrowing conversion
3. boolean - 0 is false and anything else is 1
4. char - number range of -127 to 127

// Rules (learncpp)
1. All functions must have a main function. When the program runs, all the statements in main execute in sequential order.

// Visual Studio Project Settings
1. Keep build configuration in debug until ready to release
2. [Compiler extensions](https://www.learncpp.com/cpp-tutorial/configuring-your-compiler-compiler-extensions/)
3. [Warning levels](https://www.learncpp.com/cpp-tutorial/configuring-your-compiler-warning-and-error-levels/)
4. [Language standard](https://www.learncpp.com/cpp-tutorial/configuring-your-compiler-choosing-a-language-standard/)

// Visual Studio Code
- [Setting compiler flags](https://stackoverflow.com/questions/57173093/how-to-include-compiler-flags-in-visual-studio-code)

// g++ flags \
1. "-pedantic-errors",
2. "-Wall",
3. "-Weffc++",
4. "-Wextra",
5. "-Wsign-conversion",
6. "-Werror"

// Miscellaneous
1. [Why does the main function have return type integer?](https://stackoverflow.com/questions/204476/what-should-main-return-in-c-and-c)
2. [Capturing key presses without affecting the console?](https://stackoverflow.com/questions/421860/capture-characters-from-standard-input-without-waiting-for-enter-to-be-pressed)
3. [How do I generate a random number?](https://stackoverflow.com/questions/13445688/how-to-generate-a-random-number-in-c)
4. [Handling pull requests for small typos in a repository](https://softwareengineering.stackexchange.com/questions/419025/should-i-submit-a-pull-request-to-correct-minor-typos-in-a-readme-file)
5. [Creating pull requests](https://docs.github.com/en/pull-requests/collaborating-with-pull-requests/proposing-changes-to-your-work-with-pull-requests/creating-a-pull-request)
6. [An interview with Bjarne Stroustrup 4/22 - Time Spent on Learning Math](https://evrone.com/bjarne-stroustrup-interview)