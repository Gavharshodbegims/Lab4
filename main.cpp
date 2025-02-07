#include <iostream>
using namespace std;
int main() {
    //problem1
    //
    // double number;
    // cout << "Enter a number: ";
    // cin >> number;
    //
    // if (number > 0) {
    //     cout << "The number is positive." << endl;
    // } else if (number < 0) {
    //     cout << "The number is negative." << endl;
    // } else {
    //     cout << "The number is zero." << endl;

    //problem2
    //
    // int x;
    // cout << "Please enter a number: ";
    // cin >> x;
    // if (x % 2 == 0) {
    //     cout << "The number is even." << endl;
    // } else {
    //     cout << "The number is odd." << endl;
    //
    // }

    //problem3,4
    //
    // double x, y, z;
    // cout << "Please enter the first number: " << endl;
    // cin >> x;
    // cout << "Please enter the second number: " << endl;
    // cin >> y;
    // cout << "Please enter the third number: " << endl;
    // cin >> z;
    // if (y==x || y==z) {
    //     cout << "You entered the same number" << endl;
    // }
    // if ((x >= y) && (x >= z)) {
    //     cout << "You entered a greater number as first: " << x << endl;
    // } else if ((y >= x) && (y >= z)) {
    //     cout << "You entered a greater number as second: " << y << endl;
    // } else {
    //     cout << "You entered a greater number as third: " << z << endl;
    // }

    //problem5
    //
    // int year;
    // cout << "Enter days in a year: ";
    // cin >> year;
    // if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0))) {
    //     cout << year << " is a leap year." << endl;
    // } else {
    //     cout << year << " is not a leap year." << endl;
    // }

    //problem6
    //
    // float speed;
    // cout << "Please enter your speed in miles: ";
    // cin >> speed;
    // if (speed < 20) {
    //     cout << "Your speed is too slow";
    // } else if (speed > 80) {
    //     cout << "Your speed is too high";
    // } else {
    //     cout << "Your speed is just right";
    // }

    //problem7
    //
    // float score;
    // cout << "Enter your score: ";
    // cin >> score;
    // if (score >= 50) {
    //     cout << "You pass!";
    // } else {
    //     cout << "You fail!";
    // }

    //problem8
    //
    // int number;
    // cout << "Enter a number: ";
    // cin >> number;
    // if (number >= 0) {
    //     if (number == 0) {
    //         cout << "The number is zero." << endl;
    //     } else {
    //         cout << "The number is positive." << endl;
    //     }
    // } else {
    //     cout << "The number is negative." << endl;
    // }

    //problem9
    //
    // char light;
    // cout << "Enter traffic light signal (g/y/r): ";
    // cin >> light;
    // if (light == 'g') {
    //     cout << "Go!" << endl;
    // } else if (light == 'y') {
    //     cout << "Get ready!" << endl;
    // } else if (light == 'r') {
    //     cout << "Stop" << endl;
    // } else {
    //     cout << "Invalid input!" << endl;
    // }

    //problem10
    //
    // int score;
    // char grade;
    // cout << "Enter the student's score (0-100): ";
    // cin >> score;
    // if (score < 0 || score > 100) {
    //     cout << "Invalid score. Please enter a value between 0 and 100." << endl;
    //     return 1;
    // }
    // switch (score / 10) {
    //     case 10:
    //     case 9:
    //         grade = 'A';
    //     break;
    //     case 8:
    //         grade = 'B';
    //     break;
    //     case 7:
    //         grade = 'C';
    //     break;
    //     case 6:
    //         grade = 'D';
    //     break;
    //     default:
    //         grade = 'F';
    // }
    // cout << "The grade is: " << grade << endl;

    //problem11
    //
    // int num1, num2;
    // cout << "Enter two integers: ";
    // cin >> num1 >> num2;
    // if (num2 == 0) {
    //     cout << "Division by zero is not allowed." << endl;
    // } else {
    //     if (num1 % num2 == 0) {
    //         cout << num1 << " is divisible by " << num2 << endl;
    //     } else {
    //         cout << num1 << " is not divisible by " << num2 << endl;
    //     }
    // }
    //

    //problem12
    //
    // int angle1, angle2, angle3;
    // cout << "Enter three angles of a triangle: ";
    // cin >> angle1 >> angle2 >> angle3;
    // if (angle1 > 0 && angle2 > 0 && angle3 > 0 && (angle1 + angle2 + angle3 == 180)) {
    //     cout << "The given angles can form a triangle." << endl;
    // } else {
    //     cout << "The given angles cannot form a triangle." << endl;
    // }

    //problem13
    //
    // char ch;
    // cout << "Enter a character: ";
    // cin >> ch;
    // if (ch >= 'a' && ch <= 'z') {
    //     cout << "The entered character is lowercase." << endl;
    // } else if (ch >= 'A' && ch <= 'Z') {
    //     cout << "The entered character is uppercase." << endl;
    // } else {
    //     cout << "The entered character is not an alphabet." << endl;
    // }

    //problem14
    //
    // double weight1, price1, weight2, price2;
    // cout << "Enter weight for the first package: ";
    // cin >> weight1;
    // cout << "Enter price for the first package: ";
    // cin >> price1;
    // cout << "Enter weight for the second package: ";
    // cin >> weight2;
    // cout << "Enter price for the second package: ";
    // cin >> price2;
    // double cost1 = price1 / weight1;
    // double cost2 = price2 / weight2;
    // if (cost1 < cost2) {
    //     cout << "The first package has a better price." << endl;
    // } else if (cost1 > cost2) {
    //     cout << "The second package has a better price." << endl;
    // } else {
    //     cout << "Both packages have the same price per unit weight." << endl;
    // }

    //problem15
    // int number;
    // cout << "Enter a three-digit integer: ";
    // cin >> number;
    // if (number < 100 || number > 999) {
    //     cout << "Invalid input! Please enter a three-digit integer." << endl;
    // } else {
    //     int firstDigit = number / 100;
    //     int lastDigit = number % 10;
    //
    //     if (firstDigit == lastDigit) {
    //         cout << number << " is a palindrome number." << endl;
    //     } else {
    //         cout << number << " is not a palindrome number." << endl;
    //     }
    // }

    //problem16
    //
    // double x, y;
    // const double radius = 10.0;
    // cout << "Enter the coordinates of the point (x, y): ";
    // cin >> x >> y;
    // double distance = sqrt(x * x + y * y);
    // if (distance <= radius) {
    //     cout << "The point (" << x << ", " << y << ") is inside the circle." << endl;
    // } else {
    //     cout << "The point (" << x << ", " << y << ") is outside the circle." << endl;
    // }
    //


    //problem17
    double gpa;
    cout << "Enter the student's GPA (0-4.5): ";
    cin >> gpa;

    if (gpa < 0.0 || gpa > 4.5) {
        cout << "Invalid GPA input. Please enter a value between 0 and 4.5." << endl;
        return 1;
    }

    int category = static_cast<int>(gpa * 10);
    switch (category) {
        case 40:
        case 41:
        case 42:
        case 43:
        case 44:
        case 45:
            cout << "Scholarship amount: 80%" << endl;
        break;
        case 35:
        case 36:
        case 37:
        case 38:
        case 39:
            cout << "Scholarship amount: 60%" << endl;
        break;
        case 30:
        case 31:
        case 32:
        case 33:
        case 34:
            cout << "Scholarship amount: 50%" << endl;
        break;
        default:
            cout << "No scholarship." << endl;
    }
    return 0;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.