/*
	Name: Miguel Juarez
	Date: 10/04/2022
	Class: CIS 160 Fundamentals of Computer Science I
	Project Name: PCCC Tuition Billing
	Description: Computerized billing system that displays student information and calculate the student's bill
*/

//Preprocessor directives needed for program
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

//COST is the cost per credit and FEE is semester fee added on to the bill
const float COST = 155.95, FEE = 45.95;

int main()
{
	string name; //holds full name of the student
	int ID; //holds ID number of the student
	float credits; //holds number of credits that the student is taking in the current semester
	float charges; //holds the cost of total number of credits
	float total; //holds total amount of credits with fees added on
	string dash; //dash is used to print multiple dashes(-) for separation and formatting
	dash.assign(75, '-');

	//Receives input of user for student's full name, ID, and number of credits
	cout << "Please enter full name here: ";
	getline(cin, name);
	cout << "\nPlease enter student ID here: ";
	cin >> ID;
	cout << "\nPlease enter number of credits for current semester(ex: 00.0): ";
	cin >> credits;

	//calculations done for total cost of credits and total charges for the semester
	charges = credits * COST;
	total = charges + FEE;

	//Bill to display student pricing information in the format of an invoice
	cout << "\n\n\t\tPASSAIC COUNTY COMMUNITY COLLEGE" << endl;
	cout << "\nName: " << name << "\t\t\tID#: " << ID << endl;
	cout << fixed << showpoint << setprecision(1); //displays number of credits with only one number after the decimal
	cout << "Number of Credits: " << credits << "\t\t\tCost Per Credit: $" << setprecision(2) << COST << endl; //displays prices for the rest of the program with two numbers after the decimal
	cout << dash;
	cout << "\n\t\tCredit Charges: \t$" << charges << endl;
	cout << "\t\tSemester Fees:  \t$" << FEE << endl;
	cout << dash;
	cout << "\n\tTotal Charges for the Semster:\t$" << total << endl;
	cout << "\n\t\t" << name << ", Enjoy Your Semester\n\n\n";
	cin.get();

	return 0;
}