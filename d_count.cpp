#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

//functions
void count_d(std::string word, std::vector<std::string> &d, std::vector<std::string> &o);
void displayDlist(std::vector<std::string> &dl);
void displayOlist(std::vector<std::string> &ol);

int main() {

/*
  * Purpose: This program's purpose is to query the user for a filename then the program reads in the file and
  *          separates the words that start with d and D into a list and the other characters into another list.
  *          The program then displays each of the lists alphabetized and shows how many times the word was counted.
  * Author: Ryan Shuck
  * Language: C++ (CLion 2022.3.2 g++ compiler)
  * Identifiers: filename, file, word, d_list, o_list, key
  * Dependent Subunits: None
  * Date of creation: 4/13/23
  * Date of last revision: 4/14/23
  * Citation of sources: None
*/

    std::string filename;
    std::cout << "Enter a name of a file: " << std::endl;
    std::cin >> filename;

    std::cout << " " << std::endl;

    //vectors for the d list and other characters list
    std::vector<std::string> d_list;
    std::vector<std::string> o_list;

    std::ifstream file;

    file.open(filename);                                //opening file

    if(!file.is_open()){
        std::cout << "file not open" << std::endl;     //checking to see if the file didn't open
    }

    if(file.is_open()){
        std::string word;
        while(file >> word){
            count_d(word, d_list, o_list);                  //calling count_d function to sort out words
        }
        std::cout << "D List: " << std::endl;               //displaying D List
        displayDlist(d_list);

        std::cout << " " << std::endl;

        file.close();
    }

    char key;

    std::cout << "Press enter the 'e' key to show the other list" << std::endl;      //asking the user to enter e key
    std::cin >> key;                                                                 // to go to next list

    std::cout << " " << std::endl;

    if(key == 'e'){                                        //checking to see if user entered 'e'
        std::cout << "Other List: " << std::endl;          //prints out the other list if user entered e
        displayOlist(o_list);
    }
    else{
        std::cout << "You did not enter the RIGHT KEY!!! Try again!" << std::endl;
    }

    return 0;
}

void count_d(std::string word, std::vector<std::string> &d, std::vector<std::string> &o){
/*
  * Purpose: This function's purpose is to look at the 0th element of each word of the string which is the first letter.
     *       If the letter is d or D then it's stored into the d_list vector and if the letter is not d or D then it's
     *       stored into the o_list vector.
  * Author: Ryan Shuck
  * Language: C++ (CLion 2022.3.2 g++ compiler)
  * Identifiers: none
  * Dependent Subunits: word, d, o
  * Date of creation: 4/13/23
  * Date of last revision: 4/14/23
  * Citation of sources: None
*/

    if(word[0] == 'd' || word[0] == 'D'){              //checking to see if the first letter is equal to 'd' or 'D'
        d.push_back(word);                             //store into d vector if it is equal to 'd'
    }
    else{
        o.push_back(word);                             //store into o vector if it is not equal to 'd'
    }

}

void displayDlist(std::vector<std::string> &dl){

/*
  * Purpose: This function's purpose is to alphabetize each of the words that is stored into the d list vector and
     *       count how many times that the word has appeared on the file. The function then prints out the d list
     *       alphabetized and counted.
  * Author: Ryan Shuck
  * Language: C++ (CLion 2022.3.2 g++ compiler)
  * Identifiers: d_count, d_min
  * Dependent Subunits: dl
  * Date of creation: 4/13/23
  * Date of last revision: 4/14/23
  * Citation of sources: None
*/
    int d_count;
    std::basic_string<char> d_min;
    for(int i = 0; i < dl.size(); i++) {
        std::sort(dl.begin(), dl.end());                              //sorting out d list alphabetically
        while(!dl.empty()){
           d_min = *min_element(dl.begin(), dl.end());                //starting at first element of d vector
           d_count = std::count(dl.begin(), dl.end(), d_min);         //count how many times a word has popped up
           std::cout << d_min << ": " << d_count << std::endl;
           dl.erase(std::remove(dl.begin(), dl.end(), d_min), dl.end());    //erases the duplicate word if it is counted
        }
    }


}

void displayOlist(std::vector<std::string> &ol){
/*
  * Purpose: This function's purpose is to alphabetize each of the words that is stored into the other list vector and
     *       count how many times that the word has appeared on the file. The function then prints out the other list
     *       alphabetized and counted.
  * Author: Ryan Shuck
  * Language: C++ (CLion 2022.3.2 g++ compiler)
  * Identifiers: o_count, o_min
  * Dependent Subunits: ol
  * Date of creation: 4/13/23
  * Date of last revision: 4/14/23
  * Citation of sources: None
*/

    int o_count;
    std::basic_string<char> o_min;
    for(int i = 0; i < ol.size(); i++){
        std::sort(ol.begin(), ol.end());                                //sorting out other list alphabetically
        while(!ol.empty()){
            o_min = *min_element(ol.begin(), ol.end());                 //starting at first word of the other vector
            o_count = std::count(ol.begin(), ol.end(), o_min);          //counting how many times the word has popped up
            std::cout << o_min << ": " << o_count << std::endl;
            ol.erase(std::remove(ol.begin(), ol.end(), o_min), ol.end());   //erases duplicates if word has been counted
        }
    }
}



