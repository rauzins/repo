// Lab.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const string directory = ""; // "D:\\StudyC\\Lab\\Lab 8\\";
const char sentinel = '#';



int main()
{
	/*Task 1: Sentinel While Loop*/
	cout << "-------------" << endl;
	cout << "Task 1: Sentinel While Loop" << endl;
	cout << endl;

	string fileName1;
	cout << "Please enter the name of the file you want to read: ";
	cin >> fileName1;
	cout << endl;

	// Declare input stream
	ifstream input(directory + fileName1);

	input >> noskipws;

	if (!input) {
		cout << "Unable to open input file. Exiting." << endl;
		return 0;
	}
	else cout << "File opened to read..." << endl;

	cout << endl;

	char temp{};

	while (temp != sentinel)
	{
		input >> temp;
		if (temp != sentinel)
		{
			cout << temp;
		}
		else
		{
			cout << endl;
		}
	}

	// close the input file
	input.close();

	cout << endl;
	cout << "End of Task 1" << endl;
	cout << "-------------" << endl;
	cout << endl;

	/*End of Task 1*/

	/*Task 2: Decrypt a file*/

	//Declare stream variables
	ifstream inFile;
	ofstream outFile;

	cout << "-------------" << endl;
	cout << "Task 2: Decrypt a file" << endl;
	cout << endl;

	string inFileName;
	string outFileName;

	cout << "Please enter the name of the file you want to decrypt: ";
	cin >> inFileName;
	cout << endl;

	// open the input file
	inFile.open(directory + inFileName);

	//inFile.open(directory + fileName2);

	if (!inFile) {
		cout << "Unable to open input file. Exiting." << endl;
		return 0;
	}
	else cout << "File opened to read..." << endl;

	int key;

	// ask user for encryption key  
	cout << "Do you know the secret key? Hint: it is a very Merry number." << endl;
	cout << "Please enter the secret key now: ";
	cin >> key;
	cout << endl;

	cout << "Please enter the file name to store the decrypted message: ";
	cin >> outFileName;
	cout << endl;

	outFile.open(directory + outFileName);

	char c{};
	while (!inFile.eof())
	{
		inFile >> c;
		cout << char(int(c) - key);
		outFile << char(int(c) - key);

	}

	// close filese
	inFile.close();
	outFile.close();

	cout << endl;
	cout << "End of Task 2";
	cout << endl;
	cout << "-------------";
	cout << endl;
	cout << endl;

	/*End of Task 2*/

	return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
