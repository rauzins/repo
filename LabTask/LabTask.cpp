// Lab.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const char sentinel = '#';

int main()
{
	// Task 1: Sentinel While Loop

	cout << "---------------------------" << endl;
	cout << "Task 1: Sentinel While Loop" << endl;
	cout << "---------------------------" << endl;
	cout << "Opening a file to read..." << endl;
	cout << endl;

	//Declare file name variable
	string inFileName1;

	// Ask user to enter input file name
	cout << "Please enter the name of the file you want to read: ";
	cin >> inFileName1;
	cout << endl;

	// Declare stream variable
	ifstream input;

	// Open input file and set parameter not to skip whitespaces
	input.open(inFileName1);
	input >> noskipws;

	// Check if the file is found
	if (!input) {
		cout << "Unable to open input file." << endl;
		return 0;
	}
	else cout << "Contents of " << inFileName1 << " follow..." << endl; 

	cout << endl;

	// Print characters using sentinel while loop
	char temp1{};

	while (temp1 != sentinel)
	{
		input >> temp1;
		if (temp1 != sentinel)
		{
			cout << temp1;
		}
		else
		{
			cout << endl;
		}
	}

	// Close file
	input.close();

	cout << endl;
	cout << "End of Task 1" << endl;
	cout << "-------------" << endl;
	cout << endl;

	// End of Task 1

	// Task 2: Decrypt a file
	cout << "----------------------" << endl;
	cout << "Task 2: Decrypt a file" << endl;
	cout << "----------------------" << endl;
	cout << "Opening a file to decrypt..." << endl;
	cout << endl;

	// Declare stream variables
	ifstream inFile;
	ofstream outFile;

	// Declare file name variables
	string inFileName2;
	string outFileName2;

	// Ask user to enter input file name
	cout << "Please enter the name of the file you want to decrypt: ";
	cin >> inFileName2;
	cout << endl;

	// Declare decription key variable
	int key;

	// Ask user for encryption key  
	cout << "Do you know the secret key? Hint: it is a very Merry number." << endl;
	cout << "Please enter the secret key now: ";
	cin >> key;
	cout << endl;

	// Open the input file
	inFile.open(inFileName2);

	// Check if the file is found
	if (!inFile) {
		cout << "Unable to open input file." << endl;
		return 0;
	}
	else cout << inFileName2 << " is being decrypted..." << endl;

	cout << endl;

	// Ask user for output file name
	cout << "Opening output file to store decrypted message..." << endl;
	cout << "Please enter the file name: ";
	cin >> outFileName2;
	cout << endl;

	outFile.open(outFileName2);

	// Implement message decryption with Caesar shift encryption using EOF while loop
	char temp2{};
	while (!inFile.eof())
	{
		inFile >> temp2;
		outFile << char(int(temp2) - key);
	}

	cout << endl;
	cout << "The decrypted message can be found in: " << outFileName2 << endl;

	// Close files
	inFile.close();
	outFile.close();

	cout << endl;
	cout << "End of Task 2";
	cout << endl;
	cout << "-------------";
	cout << endl;
	cout << endl;

	// End of Task 2

	cout << "End of Program. Good Bye.";
	return 0;
}
