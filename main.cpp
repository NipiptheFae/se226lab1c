#include <iostream>
#include <string>

using namespace std;

int main() {
    string x;
    double y;
    //QUESTION 1///////////////
    std::cout << "What is your name?" << std::endl;
    cin >> x;
    cout << "Hello " << x << "." << endl;

    cout << "What is your Student ID?" << endl;
    cin >> y;
    cout << "Your Student ID is " << y << "." << endl;

    //QUESTION 2/////////////////
    int var1, var2;
    cout << "Enter the first variable." << endl;
    cin >> var1;
    cout << "Enter the second variable." << endl;
    cin >> var2;
    int sum = var1 + var2;
    int diff = var1 - var2;
    int prod = var1 * var2;

    cout << "First variable: " << var1 << endl;
    cout << "Second variable: " << var2 << endl;
    cout << "Sum: " << sum << endl;
    cout << "Difference: " << diff << endl;
    cout << "Multiplication: " << prod << endl;


    //QUESTION 3////////////////
    string name;
    int lab,mt,final;

    std::cout << "What is your name?" << std::endl;
    cin >> name;
    std::cout << "Enter your lab grade" << std::endl;
    cin >> lab;
    std::cout << "Enter your midterm grade" << std::endl;
    cin >> mt;
    std::cout << "Enter your final grade" << std::endl;
    cin >> final;

    int labgrade,mtgrade,finalgrade;
    labgrade = lab * 0.25;
    mtgrade = mt * 0.35;
    finalgrade = final * 0.4;
    int lastscore = labgrade + mtgrade + finalgrade;

    cout << "Name: " << name << endl;
    cout << "Lab: " << lab << endl;
    cout << "Midterm: " << mt << endl;
    cout << "Final: " << final << endl;
    cout << "Last Score: " << lastscore << endl;

    cout << "*\n**\n***\n**\n*" << endl;






    return 0;

}
