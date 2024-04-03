#include <iostream>

void printconcentricsquare(std::string &word, int k) {
    /*
    * Purpose: This function's purpose is to print out the concentric square recursively given a string by the user
    * Author: Ryan Shuck
    * Language: C++ (CLion 2022.3.2 g++ compiler)
    * Identifiers: count, num, word_copy
    * Dependent Subunits: word, k
    * Date of creation: 3/30/23
    * Date of last revision: 4/1/23
    * Citation of sources: None
    */

    int count = 0;                    //counter for how many times the recursive function was called

    if (count == k) {                               //base statement if the line is at the middle
        for (int i = word.length(); i > 0; i--) {
            std::cout <<  word[i];                  //middle row of square
        }
        std::cout << word << std::endl;
        return;
    }
    std::string word_copy;
    int num = word.length() - k;        //calculating the difference between the string length in main and
                                        //the string length of the reference string
    for (int m = num; m > 0; m--) {
        word_copy = word_copy + word[k + m];         //adding the character of word[k+m] to the new string
    }
    for (int p = 0; p <= k; p++) {
        word_copy = word_copy + word[k];             //adding the character of word[k] to the new string
    }
    std::cout << word_copy;                                       //middle top of square
    for (int o = word_copy.length() - 2; o > 0; o--) {
        std::cout << word_copy[o];                                //top right of square
    }
    std::cout << std::endl;

    printconcentricsquare(word, k - 1);                           //recursion function

    std::cout << word_copy;                                      //middle bottom of square
    for (int y = word_copy.length() - 2; y > 0; y--) {
        std::cout << word_copy[y];                               //bottom right of square
    }
    std::cout << std::endl;

    count++;
}

int main() {

    /*
     * Purpose: This program's purpose is to ask a user for a string for recursion. The program then calls the
                 printconcentricsquare function to make a concentric square recursively based on the users input
     * Author: Ryan Shuck
     * Language: C++ (CLion 2022.3.2 g++ compiler)
     * Identifiers: word, k
     * Dependent Subunits: none
     * Date of creation: 3/30/23
     * Date of last revision: 4/1/23
     * Citation of sources: None

*/

    std::cout << "Please enter a word for recursion" << std::endl;         //asking user for a word
    std::string word;
    std::cin >> word;                                                      //taking in input from user

    int k = word.length();

    printconcentricsquare(word, k);                                   //calling in the printconcentricsquare function

    return 0;

}
