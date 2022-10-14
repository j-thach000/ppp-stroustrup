// Studying Algorithm
***do not give 100% coverage to topics first time***
***bulk of learning comes from drill, review, terms, and exercises***
0. Remember to flip back to the chapter and review between any of the steps after 1
1. *QUICKLY* work through chapter while playing around with example code in IDE
2. Create notes to turn into anki cards for recitation
3. [Drill] Complete drill
4. [Terms] Add all terms to glossary file
5. [Review] Answer any relevant review (refer to PPP-guide.pdf for author's answers)
6. [Exercises] Complete any that have a solution from the author AND push the current limit of skill

// Approach
- Recommended 15 hours a week for self study, pacing at 2 chapters a week
- Play around with as many chapter examples as possible
- Note all key concepts and the blue/red/green markers
- Try to bulldoze through chapter examples 

// Book exercise solution ideals (see ref 11 at the bottom)
/*
My ideals for solutions are:
- every program (unless stated otherwise) either produces a correct result or gives a reasonably clear error message.
- no solution gratuitously violates the rules for good programming and design style promoted by the book (even though early solutions obviously can't use significant features only introduced in later chapters).
- a solution does not use facilities not yet presented in the book.
- every program is reasonably (but not verbosely) commented with comments appropriate for somone who has read the book thus far.
- significant design choices are explicitly (if briefly) decribed.
*/

// Practice Problems (cpp-basics-chang)
3_2 - scope of control variable


// Programming Techniques (things learned from author's solutions)
1. [3_6] Create logic that finds your necessary pieces, ex: smallest or largest instead of brute forcing all possible combinations
2. [3_8] If we need to print a result, have a placeholder default for it and only change it with necessary logic, and THEN print with one line
3. [General] Checking Input
    - division by zero
    - nonsensical input
4. [3_10] Have a loop to test programs more quickly even if the exercise doesn't say you need one

// Mistakes
0. Do programming as early as possible in order to avoid lower energy brute force solutions for exercises
1. Forgetting intended \n characters when moving down a line (they represent move to the new line)
2. Incorrectly tracing literals in "" as being mathematically evaluated
3. In boolean, values other than 0 (false) become 1 (true)
4. Not thoroughly checking meaning of messages in GitHub before acting (no newline at end of file) resulting in duplicate pull request
5. Careless mistakes on data entry for print text
6. Incorrectly using the text input process (define string variable, prompt cin, format output)
7. Missing semicolons (they represent the statement is done)
8. Repeatedly using std::cout when text is being outputted in consecutive lines (see drill 3_1 comment 2)
9. Be sure to specify environment setup as well before asking a question online
10. Try compiling and running on windows to see if there's a difference

// Deriving Knowledge
0. Hardware
- RAM is the computer's capacity to hold short-term single pieces of data, values
- RAM can be thought of as numbered mailboxes that hold data while the program is running
- C++ accesses memory indirectly through objects which we name, variables (objects assigned a location in memory)
- Variables have an identifier (name), data type, and value

// Building blocks
1. expressions (produce values)
2. statements
    - selection (choosing which statements to run)
        - what do we want to happen depending on circumstance?
    - iterative (repeating statements)
        - what do we want to happen repeatedly? (body statement)
        - what is the end condition to stop repeating? (termination criteria)
        - how many times have we looped? (control variable)
3. functions (execute a body of statements and expressions)
4. vectors (store values)
    - we'll see more advanced "containers" in ch 20 and 21
    - half-open sequences are used to describe the range of a vector
    - it doesn't need to have its size specified nor is its size fixed

// Insight
- If you can't teach something then you probably defaulted to memorization and repetition.
- Programs are just collections of instructions that manipulate data for a certain result
- As C++ is so vast, it's important to focus on what is possible vs memorizing how to do it
- C++ doesn't automatically initialize variables to certain value (like 0) and instead the default value is whatever value that memory address had (could just be random garbage which causes undefined behavior)
- Instantiating is creating a new instance of an object, different from initializing a variable
- You don’t demonstrate your cleverness by writing the most complex program. 
- Rather, you demonstrate competence by writing the simplest code that does the job.
- Cleaner, explicit code is shorter than messy code
- Constantly think about each new concept being a tool in our portfolio and we have more and more building blocks
- An understanding of ideals and reasons allows you to generalize

// Pedagogy (learncpp)
- Manually type out each example, thinking about what each line contributes to the program
- Fix your own bugs and learn to use a debugger
- Experiment and play with examples to develop intuition of what breaks and works.
- Write short programs using recently learned concepts.

// Pedagogy (PPP Stroustrup)
- pg 94 "If you have the ambition to build something reasonably permanent, you pay attention to matters of code structure and organization
-        along the waym rather than having to come back and learn them after failures."
- blue = key concepts and techniques
- green = advice
- red = warning
- Introduce a tool with a simple concept (what does the tool do)
- Introduce more complex programs using the tool (solving problems with the tool without fighting against it)
- Drills: do every single one ("If you haven't done the drills, you have not "done" the book" - 0.1.2)
- "Try this": complements drills and reinforces the just mentioned concept
- Review Questions: seen as a complement to the exercises to review conceptual information whereas exercises reinforce practical
- Exercises: do enough to push the limit of what you understand as difficult (no expectation to do all of them)


// PPP Misc
- Anything he mentions is "because you'll almost certainly need it" 
- "One sitting" per chapter isn't meant to be taken literally, realistically the drill + review + a few exercises will take a few days
- The language of the book is very understated and things such as "This is often useful" means it's quietly emphasized but extremely important
- "What comes after this book?" - 0.1.3
- don't try to give 100% coverage to a topic the first time around

// PPP Libraries provided by header
#include <iostream> // ch01-3
#include <string>
#include <vector> // ch04
#include <algorithm>
#include <cmath>
- All of these can include member functions which we call with dot notation

// Programming Languages
- Machine (directly understood by CPU, seen as 0s and 1s)
- High-level (has to be translated for the machine, addresses readability and portability)

// Compiling Process 
1. Write source code with a high-level language
2. Translate the source with a compiler
3. Produces machine code files
*there is no guarantee for type safety

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

// PPP Bjarne's Header File (std_lib_facilities.h)
1. Created for QOL while learning the language (don't worry about the libraries and provides us convenient functions)
2. keep_window_open() is called to keep the window open (doesn't work if input buffer not flushed)

// C++ Libraries (code others have written, precompiled for reuse in other programs)
1. iostream (read keyboard input and output text)

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
7. Write comments liberally, as if explaining the program to someone who has no idea what the code does. Also, don't assume you'll remember.
8. Prefer \n over std::endl when outputting text to console (easier to embed into text and read quickly)
9. Favor brace initialization (ex: int a {5}) to disallow narrowing conversion (usually for very important values)
10. Initialize variables upon creation 
11. Lines no longer than 80 chars
12. Use the IDE's automatic formatting
13. Avoid situations that can cause undefined behavior, such as uninitialized variables 
14. Always test for bad input

// Fundamental types
1. int
2. float
3. double
4. bool

// Operators
- ++/-- must be applied to something with a memory address (variables, array elements, etc.)

// Other relevant types
1. string
    - a string read by the >> operator terminates after the first white space 
    - ie it reads a single word and then stops
    - "" is just an empty string, whereas " " technically contains a space

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
3. boolean - values of 0 is false and anything else becomes true truth value
4. char - number range of -127 to 127
- Very rare occasion to not intialize variables with types and value
    - a variable defined just to store user input

// Type Conversions
1. Safe
    - bool to char, int, or double
    - char to int or double
    - int to double**most useful
2. Unsafe


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

// Compiler arguments during setup
- ctrl+shift+p to generate .vscode folder
- compile and then click the gear icon when it asks which compiler to use to generate tasks.json
-  "-std=c++17",
-  "-stdlib=libc++", // not needed for windows setup
-  "${fileDirname}/executables/${fileBasenameNoExtension}" // on macbook

// Clang compiler flags
- "-pedantic-errors",
- "-Wall",
- "-Wextra",
- "-Werror",

// Style (PPP)
1. snake case
2. capital letters for types (OOP)
3. all capitals for macros

// Misc
1. If stuck in a loop of user input, Ctrl+Z creates an end-of-input character which ends the program
2. Variable names must be letters, digits, or underscores and must start with a letter

// git
1. git add . (add all files in directory to staging area)
2. git commit -m "" (commit all staged files with a note)
3. git status (local status of directory and staging area)
4. git pull (download the remote content of the branch from github and update immediately)
5. git fetch (download all commits, files, and compare the version you have with github)
6. git log (check commit history)

// Reference
0. [Approach to teaching Modern C++ Bjarne Stroustrup CppCon 2017](https://www.youtube.com/watch?v=fX2W3nNjJIo)
1. [Why does the main function have return type integer?](https://stackoverflow.com/questions/204476/what-should-main-return-in-c-and-c)
2. [Capturing key presses without affecting the console?](https://stackoverflow.com/questions/421860/capture-characters-from-standard-input-without-waiting-for-enter-to-be-pressed)
3. [How do I generate a random number?](https://stackoverflow.com/questions/13445688/how-to-generate-a-random-number-in-c)
4. [Handling pull requests for small typos in a repository](https://softwareengineering.stackexchange.com/questions/419025/should-i-submit-a-pull-request-to-correct-minor-typos-in-a-readme-file)
5. [Creating pull requests](https://docs.github.com/en/pull-requests/collaborating-with-pull-requests/proposing-changes-to-your-work-with-pull-requests/creating-a-pull-request)
6. [An interview with Bjarne Stroustrup 4/22 - Time Spent on Learning Math](https://evrone.com/bjarne-stroustrup-interview)
7. [Output precision without including a library](https://en.cppreference.com/w/cpp/io/ios_base/precision)
8. [Formatting](https://www.learncpp.com/cpp-tutorial/whitespace-and-basic-formatting/)
9. [Literals with i for clang compiler on Mac](https://www.reddit.com/r/cpp_questions/comments/xy1bj8/comment/irewhmm/?utm_source=share&utm_medium=web2x&context=3)
10. [Why does git say I'm up to date when clearly not](https://stackoverflow.com/questions/27828404/why-does-git-status-show-branch-is-up-to-date-when-changes-exist-upstream)
11. [Book exercise solution ideals](https://www.stroustrup.com/Programming/Solutions/exercise_solutions.html)