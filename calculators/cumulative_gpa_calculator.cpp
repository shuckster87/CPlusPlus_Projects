
/*
   * Purpose: This program's purpose is to calculate the cumulative GPA for a person based on letter grades and credit hours and much more.
   * Author: Ryan Shuck
   * Language: C++ (CLion 2024.1.1 g++ compiler)
   * Date of creation: 8/27/24
   * Date of last revision: 8/27/24
   * Citation of sources: None
   */


//Letter | Percentage Grade | GPA (4.0 Scale)
// A+    |   97-100         |  4.0
// A     |   93-96          |  4.0
// A-    |   90-92          |  3.7
// B+    |   87-89          |  3.3
// B     |   83-86          |  3.0
// B-    |   80-82          |  2.7
// C+    |   77-79          |  2.3
// C     |   73-76          |  2.0
// C-    |   70-72          |  1.7
// D+    |   67-69          |  1.3
// D     |   65-66          |  1.0
// F     |   Below 65       |  0.0

#include <iostream>
#include <string>

double convertGradeToGPAPoints(std::string &grade){
   if(grade == "A+"){
       return 4.0;
   }
   else if(grade == "A"){
       return 4.0;
   }
   else if(grade == "A-"){
       return 3.7;
   }
   else if(grade == "B+") {
       return 3.3;
   }
   else if(grade == "B"){
        return 3.0;
   }
   else if(grade == "B-"){
       return 2.7;
   }
   else if(grade == "C+"){
       return 2.3;
   }
   else if(grade == "C"){
       return 2.0;
   }
   else if(grade == "C-"){
       return 1.7;
   }
   if(grade == "D+"){
       return 1.3;
   }
   else if(grade == "D"){
       return 1.0;
   }
   else if(grade == "F"){
       return 0.0;
   }
   return 0;
}

int main(){
    std::string letter;

    std::cout << "Please enter your letter grade: " << std::endl;
    std::cin >> letter;

    double result = convertGradeToGPAPoints(letter);

    std::cout << "Your letter grade to gpa points is: " << result << std::endl;
}