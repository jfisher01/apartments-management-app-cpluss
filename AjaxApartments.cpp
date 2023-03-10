#include "AjaxApartments.h"

#include <string>
#include <iostream>
#include <fstream>
#include <array>
#include <cstring>
#include<map>
#include <stack>


using namespace std;

//Default constructor for residential bills
AjaxApartments::AjaxApartments() {

	houseRent = houseRent;
	energyBill = energyBill;
	internetBill = internetBill;
	tvStreamingBill = tvStreamingBill;
	garbageBill = garbageBill;

}

//Parametric constructor for Ajax Apartment residential bills
AjaxApartments::AjaxApartments(float houseRent, float energyBill, float internetBill, float tvStreamingBill, float garbageBill) {

	energyBill = energyBill;
	internetBill = internetBill;
	tvStreamingBill = tvStreamingBill;
	garbageBill = garbageBill;


}

//This function gets house bills for residents
float AjaxApartments::getHouseRent() {

	cout << "Your house rent is: $950" << endl;
	return houseRent;
}

//This function sets residents house bill
void AjaxApartments::setHouseRent(float houseRent) {

	houseRent = houseRent;
}

//This function gets energy bill for the residents
float AjaxApartments::getEnergyBill() {

	char user;
	float energyCharge;
	float fixedCharge = 10;
	float electricityDuty = 15;

	float no = 0;

	cout << "You want to see this month's bill?" << endl;
	cout << "Enter y for yes and n for no" << endl;

	cin >> user;

	if (user == 'y' || user == 'Y') {

		cout << "Enter amount on your meter charge" << endl;

		cin >> energyCharge;

		cout << "Fixed charge = $10 \n";
		cout << "Electricity duty = $15\n";
		double totalBill = energyCharge + fixedCharge + electricityDuty;
		cout << "Total bill =  $" << energyCharge + fixedCharge + electricityDuty << endl;
		return totalBill;
	}

	else {

		return no;
	}


}

//This function sets eneery bill for the residents
void AjaxApartments::setEnergyBill(float energyBill) {

	energyBill = energyBill;

}

//This function gets internet bills for the residents
float AjaxApartments::getInternetBill() {

	cout << "Your monthly bill is $85" << endl;

	return internetBill;

}

//This function sets internet bill for the residents
void AjaxApartments::setInternetBill(float internetBill) {

	internetBill = internetBill;
}

//This function gets Tv bills for the residents
float AjaxApartments::getTvStreamingBill() {

	cout << "Your monthly Tv subscription is $90 " << endl;
	return tvStreamingBill;

}

//This function sets Tv bill for the residents
void AjaxApartments::setTvStreamingBill(float tvStreamingBill) {

	tvStreamingBill = tvStreamingBill;
}

//This function gets garbage bill for the residents
float AjaxApartments::getGarbageBill() {

	cout << "Your montly garbage bill is $60" << endl;
	return garbageBill;

}

//This function sets garbage bill for the residents
void AjaxApartments::setGarbageBill(float garbageBill) {

	garbageBill = garbageBill;
}


//This function displays Ajax Apartments office information
void AjaxApartments::ajaxOfficeInfo() {

	cout << "Ajax Apartments Office Location\n" <<
			"3001 Dunge Street, House 34, Bismarck, ND, USA\n" <<
			"Office number : 701 555 4489 \n" <<
			"Office number : 701 555 0009 - help line and maintenance\n" <<
			"Office email : staff@ajax.com\n" <<
			"For Emergency : 911\n" << endl;

}


//This function displays Apartments details
void AjaxApartments::apartmentDetails() {

	cout << "These apartments have the following facilities:\n"<< 
			"2 standard bedrooms\n"<<
			"1 sittingroom\n"<<
			"2 kitchens & 2 toilets\n" <<
			"1 balcony \n"<<
			"2 air conditioners & other comfort machines\n" << endl;

}

//This function displays Ajax apartment management team
void AjaxApartments::viewManagementTeam() {

	//Telephone help lines
	cout << "Welcome to Ajax apartment complex"<< endl;
	cout << "No spacing between phone numbers!" << endl;
	cout << "For emergency call 911\n" <<
			"For help call 701-555-0009 our helpline\n" << endl;

	//Management team information
	cout << "Our Management team members are: \n";
	cout << "Apartments Manager - Henry Karson \n" <<
			"Office Manager - Kristi Gozz\n" <<
			"Customer Service - Nancy Henderson\n" <<
			"Maintenance Manager - Thomas Cruz\n" << endl;

}


//This function calls Ajax apartments help line and 911
void AjaxApartments::callAjaxPhone() {

	string yourPhoneNumber;

	cout << "Ajax help line ! \n" <<
			"Please enter  a phone number\n";
	cout << "No spacing between phone numbers!" << endl;

	//Method call for Afax office info
	ajaxOfficeInfo();

	//Enter office phone number or 911
	cin >> yourPhoneNumber;

	if (yourPhoneNumber == "911") {
		cout << "Help is here\n";

		//Method call for incedent report function
		residentsIncedentReport();
		cout << "We have disparched out 911 team to your location" << endl;
	}
	else if (yourPhoneNumber == "7015550009") {

		//Method call for incedent report function
		residentsIncedentReport();
	}

	else if (yourPhoneNumber == "7015554489") {
		cout << "Prospective new residents, please drop your information here" << endl;

		//Method call for new resident registration function
		newResidentRegistration();
	}

	else
		cout << "Invalid entry! Please enter the right information" << endl;


}


//Function definition for registration of new residents
void AjaxApartments::newResidentRegistration() {

	string residentInfo[8];

	cout << "Please enter your first name, last name, sex, age,\n" <<
			"marital status(single or married), family size, phone number, move - in date\n";

	//For - loop to accept inputs from residents
	for (int i = 0; i < 8; i++) {
		cin >> residentInfo[i];

	}

	cout << "Here are your information :" << endl;

	//For - loop to display entered information from residents
	for (string a : residentInfo) {

		cout << a << "   ";
	}

	cout << "\nThank you for the submission\n" << endl;
};


//This function shows residents valid access id cards
void AjaxApartments::viewAccessIdCard() {

	//Staff accessing the authentic access ID cards given to residents for access into the apartments
	string residentIdCard[11] = { " ajax3401"," ajax3402"," ajax3403"," ajax3404", " ajax3405",
								  " ajax3406"," ajax3407"," ajax3408"," ajax3409"," ajax3410","ajax3400" };

	cout << " Here are valid Access id cards " << endl;

	for (int i = 0; i < 11; i++) {

		cout << residentIdCard[i] << endl;

	}

};


//This function checks access ID cards before granting residents access into the apartments
void  AjaxApartments::checkEntranceIdCard() {

	string userInput;
	int i = 0;

	//Checks residents valid access ids before entrance into the apartments 
	string residentIdCard[11] = { "ajax3401","ajax3402","ajax3403","ajax3404", "ajax3405",
								 "ajax3406","ajax3407","ajax3408","ajax3409","ajax3410","ajax3400" };

	cout << "Insert your card number to enter the aparment" << endl;

	//Inserting residents card numbers for validation
	cin >> userInput;

	while (i < 11) {

		if (userInput == residentIdCard[i]) {
			cout << "Access granted !" << endl;
			break;
		}

		i++;
	}

	if (userInput != residentIdCard[i]) {

		cout << "Invalid ID! Access is denied!" << endl;

	}
	i++;

}

//This function allows staff to view valid residents access ID cards
void AjaxApartments::viewResidentsAccessID() {

	string staffId;
	string accessId = "staffaj719";

	cout << "Enter your staff access id" << endl;
	cin >> staffId;

	if (staffId == accessId) {
		viewAccessIdCard();
	}

	else {
		cout << "You entered invalid staff access id numbers" << endl;
	}

}

//This function searches for resident by apartment number
void AjaxApartments::findResidents() {

	//Residents and their apartment numbers
	multimap <int, string>residents;

	residents.insert(pair<int, string>(1,  "Jane    Dune"));
	residents.insert(pair<int, string>(2,  "Mark    Kris"));
	residents.insert(pair<int, string>(3,  "John    Dewey"));
	residents.insert(pair<int, string>(4,  "Richard Bronx"));
	residents.insert(pair<int, string>(5,  "Rose    Dune"));
	residents.insert(pair<int, string>(6,  "Peter   Pan"));
	residents.insert(pair<int, string>(7,  "UJ      Fisher"));
	residents.insert(pair<int, string>(8,  "Joe     Tad"));
	residents.insert(pair<int, string>(9,  "Monica  Jackson"));
	residents.insert(pair<int, string>(10, "Donald  Moore"));
	residents.insert(pair<int, string>(11, "Jullien Wimpeg"));
	residents.insert(pair<int, string>(12, "Rose    Miller"));
	residents.insert(pair<int, string>(13, "Ann     Parker"));
	residents.insert(pair<int, string>(14, "Morgan  Craig"));
	residents.insert(pair<int, string>(15, "Chad    Wideel"));
	residents.insert(pair<int, string>(16, "Dick    Pane"));
	residents.insert(pair<int, string>(17, "Mcdee   Fox"));
	residents.insert(pair<int, string>(18, "James   Dicey"));
	residents.insert(pair<int, string>(19, "Henry   Karter"));
	residents.insert(pair<int, string>(20, "Mark    Dude"));

	//Method call to show resident menu items
	showResidentsMenu();

	int userInput;
	int aptNumber;
	string residentFullName;

	//Searching for residents using their apartment numbers
	cin >> userInput;

	if (userInput == 1) {
	jump:
		for (auto pair : residents) {

			cout << pair.first << "  -  " << pair.second << endl;

		}

		cout << "\n";
		cout << "Ajax apartment has total of " << residents.size() << " residents" << endl;

	}

	else if (userInput == 2) {

		cout << "Enter resident's apartment number" << endl;
		cin >> aptNumber;

		if (aptNumber < residents.size() && aptNumber > 0) {
			auto itr = residents.find(aptNumber);
			cout << itr->first << "  -  " << itr->second << endl;
		}
		else {
			cout << "Invalid entry! Your entry is out of range" << endl;
		}

	}
	//Deletes resident in the selected apartment
	else if (userInput == 3) {
		cout << "Enter apart number of moved resident " << endl;
		cin >> aptNumber;
		residents.erase(aptNumber);
		showResidentsMenu();
		goto jump;
	}
	//Adds a new resident
	else if (userInput == 4) {
		string firstName, lastName;

		cout << "Add a new resident's apartment number and full name" << endl;
		cin >> aptNumber >> firstName >> lastName;

		residentFullName = firstName + "  " + lastName;
		residents.insert(pair<int, string>(aptNumber, residentFullName));
		showResidentsMenu();
		goto jump;

	}
	else if (userInput == 5) {
		cout << "You are exiting the program" << endl;
		exit(0);
	}
	else {
		cout << "Invalid entry !" << endl;
	}

}


//Function definition for making incedent report
void AjaxApartments::residentsIncedentReport() {

	string report[7];
	int i = 0;
	string response;

	cout << "Are you 18 years and above ?\n"<<
			"Enter Yes or No" << endl;

	cin >> response;

	if (response == "yes" || response == "Yes") {

		cout << "Please be very brief" << endl;

		cout << "Please enter your full name, incident's location,\n"<<
				"people involved, what happened, date, time \n" << endl;

		for (int i = 0; i < 7; i++) {
			getline(cin, report[i]);

		}

		cout << "Here are your information :" << endl;

		for (string a : report) {

			cout << a << "  ";

		}
	}
	else {
		cout << " You must be 18 years and above to make this report " << endl;

	}
}


//This function perfomrs residents account transactions
void AjaxApartments::accountTransactions() {

	int option;
	double balance = 0;

	do {

		//This shows account menu
		showAccountsMenu();

		cout << "Option: ";

		cin >> option;

		system("cls");

		switch (option) {

			//This shows balance
		case 1:
			cout << "Balance is: " << balance << " $" << endl;
			break;

			//Pay your bill
		case 2:
			cout << "Pay your bill or house rent: ";
			double depositAmount;
			cin >> depositAmount;
			balance += depositAmount;
			break;

			//Withdraw your money back
		case 3:
			cout << "Want your money back? Withdraw amount: ";
			double withdrawAmount;
			cin >> withdrawAmount;

			if (withdrawAmount <= balance)
				balance -= withdrawAmount;

			else
				cout << "Not enough oney" << endl;
			break;

		default:
			cout << "Invalid entry" << endl;
		}


	} while (option != 4);
	cout << "You are exiting this option!\n" << "Press enter" << endl;


	system("pause>0");

}



//This function plays even and odd number game in the recreation center
void AjaxApartments::isOddOrEvenNumber() {
	int number;

	cout << "Enter a number" << endl;
	cin >> number;

	if (number <= 0) {
		cout << "Invlid number" << endl;
	}

	else if (number % 2 == 0) {
		cout << "This is even number" << endl;

	}

	else {
		cout << "This is odd number " << endl;

	}

}



//Use calculator
void AjaxApartments::useCalculator() {

	int num1;
	int num2;
	int selection;

	do {
		cout << "Enter two numbers" << endl;
		cin >> num1 >> num2;

		calculatorMenu();

		cin >> selection;

		switch (selection) {

		case 1:  cout << "Anser is :  " << num1 + num2 << endl;
			break;

		case 2:  cout << "Anser is :  " << num1 - num2 << endl;
			break;

		case 3:  cout << "Anser is :  " << num1 * num2 << endl;
			break;

		case 4:  cout << "Anser is :  " << num1 / num2 << endl;
			break;

		case 5:  cout << "Anser is :  " << pow(num1, num2) << endl;
			break;

		case 6:  cout << " Squar root of num1 = " << sqrt(num1) << " : Squar root of num2 = " << sqrt(num2) << endl;
			break;

		default:
			cout << "Please select a valid operation " << endl;
			break;

		}

	} while (selection != 7);
	cout << "You are exiting this option!\n" << "Press enter" << endl;

	system("pause>0");
}



//Function definition for temperature conversion
void AjaxApartments::tempConversion() {

	float frht;
	float celsius;
	int option;

	do {
		cout << "\n";
		cout << "Which temperature conversion do you want ?" << endl;
		cout << "1 to convert to Fahrenheit\n" << "2. to conver to Celsius\n" << "3. to exit\n" << endl;

		cin >> option;

		if (option == 1) {
			cout << "Enter Celsius temperature" << endl;
			cin >> celsius;
			frht = (celsius * 9 / 5) + 32;
			cout << "Fahrenheit temperature is : " << frht << endl;
		}
		else if (option == 2) {
			cout << "Enter Fahrenheit temperature" << endl;
			cin >> frht;
			celsius = (frht - 32) * 5 / 9;
			cout << "Celsius temperature is : " << celsius << endl;
		}

		else if (option == 3) {
			cout << "You exited the program" << endl;
			exit(0);
		}

		else {
			cout << "Wrong input ..." << endl;

		}
	} while (option != 3);
	cout << "You are exiting this option!\n" << "Press enter" << endl;

	system("pause>0");
}


//Function definition for viewing Ajax system menu
void AjaxApartments::showSystemenu() {
	cout << "MENU OPTIONS FOR AJAX APARTMENTS INC." << endl;
	cout << "1.  See office information\n" << "2.  See apartments details at Ajax Apartments\n" <<
			"3.  See management team\n" << "4.  Call help line\n" << "5.  New resident registration\n" <<
			"6.  Enter apartment with your entrance ID Card\n" << "7.  Find residents\n" << "8.  Make incedent report\n" <<
			"9.  Accounts information & transactions\n" << "10. Use calculator\n" << "11. Temperature conversion \n" <<
			"12. Even and odd number game\n" << "13. Buy Coke or water from vending machine\n" << "14. Check electricity bill\n" <<
			"15. Check your Internet bill\n" << "16. Check your tv subscription bill\n" << "17. Check your garbage bill\n" <<
			"18. Check house rent\n" << "19. View residents Access ID \n" << "20. Exit program" << endl;
}


//Function definition for viewing Ajax office menu
void AjaxApartments::showOfficeMenu() {
	cout << "1.  See office information\n" << "2.  See apartments details at Ajax Apartments\n" <<
			"3.  See management team\n" << "4.  Call help line\n" << "5.  New resident registration\n" <<
			"6.  Enter apartment with your entrance ID Card" << "7.  Find residents\n" <<
			"8.  Make incedent report\n" << "9.  Accounts information & transactions\n" <<
			"10. Use calculator\n" << endl;

}


//Function definition for viewing residents menu
void AjaxApartments::showResidentsMenu() {

	cout << "1. to see all residents" << endl;
	cout << "2. to find a resident" << endl;
	cout << "3. to delete a resident" << endl;
	cout << "4. to add new resident " << endl;
	cout << "5. Exit\n" << endl;

}


//Function definition for viewing accounts menu
void AjaxApartments::showAccountsMenu() {

	cout << "1. Check balance" << endl;
	cout << "2. Deposit" << endl;
	cout << "3. Withdraw" << endl;
	cout << "4. Exit" << endl;

}


//Function definition for viewing calculator menu
void AjaxApartments::calculatorMenu() {

	cout << "Select operation" << endl;
	cout << "1. Addition \n" << "2. Subtraction \n" <<
			"3. Multiplication \n" << "4. Division \n" <<
			"5. Exponent \n" << "6. Squaroot \n" <<
			"7. to exit " << endl;
}



//Function definition for purchasing items from vending machine 
void AjaxApartments::purchaseStoreItem() {

	cout << "Enter 1. for Diet Coke\n" << "2. for Regular  Code\n" <<
			"3. for Bottled Water\n" << "0. to exit" << endl;

	int pick;
	cin >> pick;

	int itemQuantity = 0;
	float payment = 0;
	float balance = 0;

	do {

		if (pick == 1 || pick == 2) {
			cout << "How many cokes do you want ? $2 each " << endl;
			cin >> itemQuantity;

			cout << "Total price = $ " << itemQuantity * 2 << endl;
			cout << "Please enter payment amount" << endl;
			cin >> payment;

			if (payment < itemQuantity * 2) {
				cout << "Please complete your payment" << endl;
				break;
			}
			else if (payment > itemQuantity) {

				balance = payment - itemQuantity * 2;
				cout << "Here is your balance : $" << balance << " Thank you!" << endl;
				break;
			}

			else {
				cout << "Payment received! Thank you!" << endl;
				break;
			}
		}


		else if (pick == 3)
		{
			cout << "How many bottled water do you want ? $2.50 each" << endl;

			cin >> itemQuantity;

			cout << "Total price = $ " << itemQuantity * 2.5 << endl;

			cout << "Please enter payment amount" << endl;
			cin >> payment;

			if (payment < itemQuantity * 2.5) {
				cout << "Please complete your payment" << endl;
			}

			else if (payment > itemQuantity) {

				balance = payment - itemQuantity * 2.5;
				cout << "Here is your balance : $" << balance << " Thank you!" << endl;
				break;
			}
			else
			{
				cout << "Payment received! Thank you!" << endl;
				break;
			}
		}


		else
		{
			cout << "Invalid entry" << endl;
			break;

		}

	} while (pick != 0);
	cout << "You are exiting this option!\n" << "Press enter" << endl;

	system("pause>0");

}



//Function definition for the main Ajax management system application
void AjaxApartments::AjaxManagementSystem() {

	int option;

	do {

		cout << "\nPlease choose an option\n" << endl;
		showSystemenu();

		cin >> option;

		switch (option) {
		case 1:
				ajaxOfficeInfo();
				break;

		case 2:	system("cls");
				apartmentDetails();
				break;

		case 3:	system("cls");
				viewManagementTeam();
			break;

		case 4:	system("cls");
				cout << "Please enter a phone number" << endl;
				callAjaxPhone();
			break;

		case 5:	system("cls");
				newResidentRegistration();
			break;

		case 6:	system("cls");
				checkEntranceIdCard();
			break;

		case 7:	system("cls");
				findResidents();
			break;

		case 8:	system("cls");
				residentsIncedentReport();
			break;

		case 9:	system("cls");
				accountTransactions();
			break;

		case 10: system("cls");
				useCalculator();
			break;

		case 11:system("cls");
				tempConversion();
			break;

		case 12:system("cls");
				isOddOrEvenNumber();
			break;

		case 13: system("cls");
				purchaseStoreItem();
			break;

		case 14:system("cls");
				getEnergyBill();
			break;

		case 15:system("cls");
				getInternetBill();
			break;

		case 16:system("cls");
				getTvStreamingBill();
			break;

		case 17:	getGarbageBill();
			break;

		case 18:	system("cls");
					getHouseRent();
			break;

		case 19: system("cls");
				viewResidentsAccessID();
			break;

		default:	
				cout << "Invalid entry " << endl;
			break;

		}

	} while (option >= 1 && option <= 19);

	cout << "You are exiting this option!\n" << "Press enter" << endl;

	system("pause>0");
}









