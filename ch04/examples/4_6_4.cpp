#include "std_lib_facilities.h"

// text example with vectors
// simple dictionary: list of sorted words
int main()
{
    vector<string> words;
    for (string temp; std::cin >> temp; ) // read whitspace-separated words
        words.push_back(temp);            // put into vector
    std::cout << "Number of words: " << words.size() << '\n';

    sort(words);                          // sort words

    for (int i = 0; i < words.size(); ++i)
        if (i == 0 || words[i-1] != words[i])   // is this a new word? if we've sorted then we'll have all the repeated words grouped
            std::cout << words[i] << '\n';
}