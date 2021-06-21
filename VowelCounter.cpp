// VowelCounter.cpp : Counts the numbers of vowels in a file.
//

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

const string FileName = "const.html"; // establishes my only constant which is the file name		
									  // I worked with a text file at first and the counts were different
									  // Could you tell me why that is?
									  // Only a coincidence that is it named const.html 
									  // I did that so the user didn't have to type the long name

int main(int argc, char* argv[])
{

		
	/// I'll be honest I played around with just this next block for an hour. 
	/// I don't know why it works, but it does. 
	/// The part I had toruble with was placing the string between the filled characters.
	/// If you could tell me what I did wrong here it would be great. Thanks in advance
	
	cout << setw(74) << setfill('*') << "*" << endl;
	cout << setfill('*') << setw(19) << ""; 
	cout << " Welcome to my Letter Count Program ";
	cout << setfill('*') << setw(19) << "" << endl;
	cout << setw(74) << setfill('*') << "*" << endl;

	// The executable name and at least one argument?
	if (argc < 2)
	{
		cout << "Error with input agrs.." << endl;
		system("pause");
		return 1;
	}

	int acount = 0, ucount = 0, ocount = 0, ecount = 0, icount = 0, xcount = 0, ycount = 0, zcount =0; // initiates all of my variables for the counts

	ifstream inFile;
	inFile.open(FileName);
	if (!inFile)
	{
		cout << "Error with file name.." << endl;
		system("pause");
		return -1;
	}
	else
	{
		cout << endl;
		cout << "Analyzing file \'" + FileName + "\'..." << endl;
		cout << endl;
	}

	char ch;
	while (!inFile.eof() && inFile >> ch) // This is copied straight from your video on chapter 5, I don't understand what that last expression is for
	{
		if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'x' || ch == 'y' || ch == 'z')
		{
			
			if (ch == 'a')
			{
				acount++;
			}
			if (ch == 'e')								///		I really tried to think of a quicker way to check for capitals	
			{											///		I thought about changing the characters to lowercase first before couting	
				ecount++;								///		I figured it would be just the same amount of work in the end though
			}			
			if (ch == 'i')
			{
				icount++;
			}
			if (ch == 'o')
			{
				ocount++;
			}
			if (ch == 'u')
			{
				ucount++;
			}
			if (ch == 'x')
			{
				xcount++;
			}
			if (ch == 'y')
			{
				ycount++;
			}
			if (ch == 'z')
			{
				zcount++;
			}

		}

		if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'X' || ch == 'Y' || ch == 'Z')
		{
			if (ch == 'A')
			{
				acount++;
			}
			if (ch == 'E')
			{
				ecount++;
			}
			if (ch == 'I')
			{
				icount++;
			}
			if (ch == 'O')
			{
				ocount++;
			}
			if (ch == 'U')
			{
				ucount++;
			}
			if (ch == 'X')
			{
				xcount++;
			}
			if (ch == 'Y')
			{
				ycount++;
			}
			if (ch == 'Z')
			{
				zcount++;
			}
		}
		

	}
	
	cout << "The number of A's: "  << right << setw(40) << setfill('.') << + acount << endl;
	cout << "The number of E's: " << right << setw(40) << setfill('.') << +ecount << endl;
	cout << "The number of I's: " << right << setw(40) << setfill('.') << +icount << endl;
	cout << "The number of O's: " << right << setw(40) << setfill('.') << +ocount << endl;
	cout << "The number of U's: " << right << setw(40) << setfill('.') << +ucount << endl;
	cout << "The number of X's: " << right << setw(40) << setfill('.') << +xcount << endl;
	cout << "The number of Y's: " << right << setw(40) << setfill('.') << +ycount << endl;
	cout << "The number of Z's: " << right << setw(40) << setfill('.') << +zcount << endl;
	cout << "The number of vowels: " << right << setw(40) << setfill('.') << (acount + ecount + icount + ocount + ucount) << endl;
	system("pause");


	inFile.close();

	return 0;
}
