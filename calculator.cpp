#include <iostream>
#include <cmath>

void basic_math();
void area_math();
void perimeter_math();
int area_circle();
int area_triangle();
int area_rectangle();
int area_square();
int perimeter_circle();
int perimeter_triangle();
int perimeter_rectangle();
int perimeter_square();

int main() {
    int answer;
    std::cout << "Welcome to the Calculator" << std::endl;
    std::cout << "Please enter what you want to do: " << std::endl;
    std::cout << "(1 for Basic Math, 2 for area of a Shape, 3 for perimeter of a shape)" << std::endl;
    std::cin >> answer;

    switch(answer){
        case 1:
            basic_math();
            break;
        case 2:
            area_math();
            break;
        case 3:
            perimeter_math();
            break;
        default:
            std::cerr << "You did not enter any of the options. Try again!" << std::endl;
            exit(EXIT_FAILURE);
    }

    std::cout << "Thank you. Goodbye." << std::endl;
    
    return 0;
}

void basic_math(){
    char oper;
    float num1, num2;
    std::cout << "Welcome to the Basic Math Side of the Calculator." << std::endl;
    std::cout << "Enter an operator you want to do (+, -, *, /): " << std::endl;
    std::cin >> oper;
    std::cout << "Now enter two numbers: " << std::endl;

    switch(oper){
        case '+':
            std::cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        case '-':
            std::cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case '*':
            std::cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;
        case '/':
            std::cout << num1 << " / " << num2 << " = " << num1 / num2;
            break;
        default:
            std::cerr << "Sorry you didn't put down any of the operators. Try again!" << std::endl;
            exit(EXIT_FAILURE);
    }
}

void area_math(){
    int num;
    std::cout << "Welcome to the Area Side of the Calculator." << std::endl;
    std::cout << "Please enter what area you want to solve for: " << std::endl;
    std::cout << "(1 for Circle, 2 for Triangle, 3 for Rectangle, 4 for Square)" << std::endl;
    std::cin >> num;

    switch(num){
        case 1:
            area_circle();
            break;
        case 2:
            area_triangle();
            break;
        case 3:
            area_rectangle();
            break;
        case 4:
            area_square();
            break;
        default:
            std::cerr << "Error! you did not enter 1 - 4. Try again!" << std::endl;
            exit(EXIT_FAILURE);

    }
}

int area_circle(){
    float radius, area;
    std::cout << "Welcome to the Circle Area Side." << std::endl;
    std::cout << "Enter the radius of the circle: " << std::endl;
    std::cin >> radius;

    area = 3.14 * pow(radius, 2);

    std::cout << "The area of the circle is: " << area << std::endl;
    return 0;
}

int area_triangle(){
    float base, height, area;
    std::cout << "Welcome to the Triangle Area Side." << std::endl;
    std::cout << "Enter a value for the base of the triangle: " << std::endl;
    std::cin >> base;
    std::cout << "Enter a value for the height of the triangle: " << std::endl;
    std::cin >> height;

    area = 0.5 * (base * height);

    std::cout << "The area of the triangle is " << area << std::endl;
    return 0;
}

int area_rectangle(){
    float length, width, area;
    std::cout << "Welcome to the Rectangle Area Side." << std::endl;
    std::cout << "Enter a value for the length of the rectangle: " << std::endl;
    std::cin >> length;
    std::cout << "Enter a value for the width of the rectangle: " << std::endl;
    std::cin >> width;

    area = length * width;

    std::cout << "The area of the rectangle is " << area << std::endl;
    return 0;
}

int area_square(){
    float side, area;
    std::cout << "Welcome to the Square Area Side." << std::endl;
    std::cout << "Enter a value for the side of a square: " << std::endl;
    std::cin >> side;

    area = pow(side, 2);

    std::cout << "The area of the square is: " << area << std::endl;
    return 0;
}

void perimeter_math(){
    int num;
    std::cout << "Welcome to the Perimeter Side of the Calculator." << std::endl;
    std::cout << "Enter what perimeter you want to solve for." << std::endl;
    std::cout << "(1 for Circle, 2 for triangle, 3 for rectangle, 4 for square)" << std::endl;
    std::cin >> num;

    switch(num){
        case 1:
            perimeter_circle();
            break;
        case 2:
            perimeter_triangle();
            break;
        case 3:
            perimeter_rectangle();
            break;
        case 4:
            perimeter_square();
            break;
        default:
            std::cerr << "Error! you did not answer 1 - 4. Try again!" << std::endl;
            exit(EXIT_FAILURE);
    }
}

int perimeter_circle(){
    float radius, perimeter;
    std::cout << "Welcome to the Circle Perimeter Side." << std::endl;
    std::cout << "Enter the radius of your circle: " << std::endl;
    std::cin >> radius;

    perimeter = 2.0 * 3.14 * radius;

    std::cout << "The perimeter of the circle is " << perimeter << std::endl;
}

int perimeter_triangle(){
    float a, b, c, perimeter;
    std::cout << "Welcome to the Triangle Perimeter Side." << std::endl;
    std::cout << "Enter the value for the a side of the triangle: " << std::endl;
    std::cin >> a;
    std::cout << "Enter the value for the b side of the triangle: " << std::endl;
    std::cin >> b;
    std::cout << "Enter the value for the c side of the triangle: " << std::endl;
    std::cin >> c;

    perimeter = a + b + c;

    std::cout << "The perimeter of the triangle is " << perimeter << std::endl;
}

int perimeter_rectangle(){
    float length, width, perimeter;
    std::cout << "Welcome to the Rectangle Perimeter Side." << std::endl;
    std::cout << "Enter the value for the length of the rectangle: " << std::endl;
    std::cin >> length;
    std::cout << "Enter the value for the width of the rectangle: " << std::endl;
    std::cin >> width;

    perimeter = 2 * (length + width);

    std::cout << "The perimeter of the rectangle is " << perimeter << std::endl;
}

int perimeter_square(){
    float side, perimeter;
    std::cout << "Welcome to the Square Perimeter Side." << std::endl;
    std::cout << "Enter the value for the side of the circle: " << std::endl;
    std::cin >> side;

    perimeter = 4 * side;

    std::cout << "The perimeter of the square is " << perimeter << std::endl;
}
