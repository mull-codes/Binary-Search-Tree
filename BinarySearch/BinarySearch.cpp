// BinarySearch.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "TreeType.h"

using namespace std;

TreeType myTree;
Contact temp;

void AddContacts();

int main()
{
	int menuChoice = 0;
	string fName, sName;
	int phoneNum;
	char FirstLetter;

	AddContacts();

	do {
		cout << "\n\nWelcome to Binary Tree Search" << endl;
		cout << "\n\n1. Clear the address book." << endl;
		cout << "2. Add new entry." << endl;
		cout << "3. Remove an entry." << endl;
		cout << "4. Search address book by first letter of surname." << endl;
		cout << "5. Search by Surname." << endl;
		cout << "6. Display Tree" << endl;
		cout << "-1 Exit.\n\n" << endl;
		cout << "Enter: ";
		cin >> menuChoice;
		switch (menuChoice)
		{
		case 1:
			myTree.DeleteTree();
			break;
		case 2:
			cout << "\nFirst Name: ";
			cin >> fName;
			cout << "Surname: ";
			cin >> sName;
			cout << "Phone Number: ";
			cin >> phoneNum;

			
			temp.firstName = fName;
			temp.surName = sName;
			temp.phoneNumber = phoneNum;

			myTree.InsertItem(temp);
			break;
		case 3:
			cout << "\nEnter phone number to delete." << endl;
			cout << "Phone Number: ";
			cin >> phoneNum;
			temp.phoneNumber = phoneNum;
			myTree.FindPhone(temp);
			break;
		case 4:
			cout << "\nFirst Char of Surname: ";
			cin >> FirstLetter;
			temp.surName[0] = FirstLetter;
			myTree.SearchFirstChar(temp);
			break;
		case 5:
			cout << "\nEnter Surname: ";
			cin >> sName;
			temp.surName = sName;

			myTree.RetrieveItem(temp);
			break;
		case 6:
			cout << "\n\n*************************************************************************" << endl;
			myTree.Display();
			cout << "*************************************************************************" << endl;
			break;
		case -1:
			exit(0);
		default:
			break;
		}

	} while (menuChoice != -1);
    return 0;
}



void AddContacts() {
	temp.firstName = "Tom";
	temp.surName = "Hayes";
	temp.phoneNumber = 12345;
	myTree.InsertItem(temp);


	temp.firstName = "Mary";
	temp.surName = "Arthur";
	temp.phoneNumber = 56789;
	myTree.InsertItem(temp);


	temp.firstName = "Sarah";
	temp.surName = "Murphy";
	temp.phoneNumber = 11111;
	myTree.InsertItem(temp);

	temp.firstName = "Pat";
	temp.surName = "French";
	temp.phoneNumber = 98765;
	myTree.InsertItem(temp);

	temp.firstName = "Mark";
	temp.surName = "Murphy";
	temp.phoneNumber = 22222;
	myTree.InsertItem(temp);
}