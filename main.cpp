#include <iostream>
#include <string>
using namespace std;

int main() {
  cout << " Hello there and welcome to my first c++ project!" << endl;
  // Variable Declarations(typically use lowercase letters):
    int phone, cellPhone, tellerPhone, cellularPhone;
    phone = 9878;
    cellPhone = 10;
    tellerPhone = 2;
    cellularPhone = 5;
    cout << phone << endl;
    cout << "************************************************************************************"<< endl;

  // Using arithmetic expressions:
    cout << phone / tellerPhone << endl;
    cout << cellularPhone + tellerPhone << endl;
    cout << tellerPhone * 20 + cellPhone << endl;

   int tv_hori, tv_verti;
    cout << "Enter the dimensions of your television, and you will get your total below" << endl;
    cout << "Horizontal dimension: ";
    cin >> tv_hori;
    cout << endl;
    cout << "Vertical dimension: ";
    cin >> tv_verti;
    cout << endl;
    cout << "Your dimension is " << tv_hori * tv_verti;
    cout << endl;

    cout << "65 + 29 = "<< 65 + 29 << endl;
    cout << "2345 / 4 + 67 - 43= " << 2345 / 4 + 67 - 43 << endl;

    cout << "************************************************************************************"<< endl;

    cout << "static_cast<int>(7.9) = " << static_cast<int>(7.9) << endl;
    cout << "static_cast<double>(78) = " << static_cast<double>(78) << endl;
    cout << "static_cast<char>(56) = " << static_cast<char>(56) << endl;
    cout << "static_cast<int>('G') = " << static_cast<int>('G') << endl;

  cout << "************************************************************************************"<< endl;
    const int GRAPES = 50;
    const double GRAP = 50.9;
    cout << "************************************************************************************"<< endl;

    // input statement - cin>>
    string halogen, hydrogen;
    int calcium;
    cout << "Enter your name below."<<endl;
    cout << "Name = ";
    cin >> halogen;
    cout << endl;
    cout << "Enter your surname below."<<endl;
    cout << "Surname = ";
    cin >> hydrogen;
    cout << endl;
    cout << "Enter your age below."<<endl;
    cout << "Age = ";
    cin >> calcium;
    cout << endl;
    cout << "The values you entered are " <<"Name =" << halogen << " " << "Surname = " << hydrogen <<" "<< "Age = "<< calcium << endl;
  
    const double PI = 3.141592654;    
    int radius;
    cout << "The following program outputs the area of a circle." << endl;
    cout << "Please enter the radius of the circle below" << endl;
    cout << "Radius = ";
    cin >> radius;
    cout << endl;
    cout << "The area of the circle is = " << PI * radius * radius << endl;

    double number5;
    cout << "The following program returns the decimal you enter to the next whole number integer" << endl;
    cout << "Enter any decimal number below" << endl;
    cin >> number5;
    cout << static_cast<int>(number5);
    cout << "************************************************************************************"<< endl;

    // Escape sequences
    cout << "Practicing newline character: "<< "I love you by the \n way , you know that"<< endl;
    cout << "Practicing tab character: " << "You know that you are \t wonderful right \n";
    cout << "Practicing Single quotation: " << "She said, \'My name is Bella\' " << endl;
    cout << "************************************************************************************"<< endl;

    //compound assignment statements
    //variable = variable * (expression); as variable *= expression;
    int innit;
    innit = 10;
    /*innit = innit * 40 can be as:*/
    innit *= 40;
    cout << innit << endl;
    int annit;
    annit = 30;
    /*annit = annit + 54 can be as:*/
    annit += 54;
    cout << annit << endl;

    cout << "************************************************************************************"<< endl;

    int feet, inches;
    cout << "This program converts your lengths expressed in feet and inches to centimeters \nEnter your feet"
         << "length." << "\n Feet = ";
    cin >> feet;
    cout << "Enter your inches length." << "\n Inches = ";
    cin >> inches;
    cout << endl;
    cout << "Your values converted are:" << endl << "Feet in cm = "
         << feet * 30.48 << endl << "Inches in cm = "
         << inches *2.54 << endl;
    cout << endl;
    cout << "EXERCISE 2:" << endl;

    double deci_1, deci_2, deci_3, deci_4, deci_5;
    cout << "Please enter 5 decimal numbers below." << endl;
    cout << "Decimal 1 = ";
    cin >> deci_1;
    cout << endl;
    cout << "Decimal 2 = ";
    cin >> deci_2;
    cout << endl;
    cout << "Decimal 3 = ";
    cin >> deci_3;
    cout << endl;
    cout << "Decimal 4 = ";
    cin >> deci_4;
    cout << endl;
    cout << "Decimal 5 = ";
    cin >> deci_5;
    cout << endl;
    cout << "The numbers that you entered are "
         << deci_1 <<" " << deci_2 <<" " << deci_3 <<" "<<  deci_4<<" " << deci_5 << endl;
    cout << "The numbers that you entered converted into the nearest integer are:  ";
    cout << deci_1 << " = ";
    cout << static_cast<int>(deci_1) << " ";
    cout << deci_2 << " = ";
    cout << static_cast<int>(deci_2) << " ";
    cout << deci_3 << " = ";
    cout << static_cast<int>(deci_3) << " ";
    cout << deci_4 << " = ";
    cout << static_cast<int>(deci_4) << " ";
    cout << deci_5 << " = ";
    cout << static_cast<int>(deci_5) << " ";

    cout << "************************************************************************************"<< endl;

    // Movie ticket layout: output presentation:

    cout << "_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_" << endl;
    cout << endl;
    cout << setw(55) << setfill(' ') << "Movie Tickets Sale and Donation to Charity" << endl;
    cout << endl;
    cout << "MOVIE NAME: ";
    cout << setw(45) << right << setfill('.') << "Journey to Mars" << endl;
    cout << "Number of tickets sold: ";
    cout << setw(22) << right << setfill('.') << 2650 << endl;
    cout << "Gross Amount ";
    cout << setw(30) << right << setfill('.') << "$" << setprecision(2) << fixed << 9150.00 << endl;
    cout << "Percentage of Gross Amount Donated:" << setprecision(2) << 10.00 << "%" << endl;
    cout << "AmountDonated: ";
    cout << setw(28) << right << setfill('.') << "$" << setprecision(2) << fixed << 915.00 << endl;
    cout << "NetSale: ";
    cout << setw(34) << right << setfill('.') << "$" << setprecision(2) << fixed << 8235.00 << endl;
    cout << endl;
    cout << "_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_" << endl;

    cout << "************************************************************************************"<< endl;

    double weight;
    cout << "Program used to convert from kg to pounds: " << endl;  // Program used to convert from kg to pounds
    cout << "Please enter your weight in kilograms below" << endl;
    cin.clear();
    cin.ignore(1000, '\n');
    cout << "Weight in kilograms : " ;
    cin >> weight;
    cout << "kg" << endl;
    cout << "Your weight in kilograms : " << setprecision(2) << fixed << showpoint << weight << " " << "kg" << endl;
    double pounds = weight * 2.2;
    cout << "Your weight in pounds : " << setprecision(2) << fixed << showpoint << pounds << " " << "ibs" << endl;

    cout << "************************************************************************************"<< endl;

     int firstNum, secondNum;          // loops
    cout << "Please enter two integers below(Note: The first integer must be less than the second integer:" << endl;
    cout << "integer 1 - ";
    cin >> firstNum;
    cout << "integer 2 - ";
    cin >> secondNum;
    cout << "Program outputs all odd numbers between first integer and second integer: "<< endl;
    while(firstNum <= secondNum)
    {
        if(firstNum % 2 != 0)
        {
            cout << firstNum << " ";
        }
        firstNum++;
    }


   return 0;

}
