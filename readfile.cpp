#include <bits/stdc++.h>
#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string>
using namespace std;

// driver code
int main()
{
	int i = 0;
	// filestream variable file
	ifstream file;
	string data;
	string filename;
	string line;
	string exec_file;
	string command;
	//	string word, t, q, filename; //string data, int, number, 

	// filename of the file
	filename = "readfile.txt";
	exec_file = "./motor";
	// opening file
	file.open (filename.c_str());//file.open(filename.c_str()); //
	getline (file, line);
	cout << "skipped " << line << endl; // cout << data << endl;
	// extracting words form the file
	cout << exec_file << endl;
	while (file >> data) //while (file >> data)
	{
		if ((i % 3) ==0)
			cout <<exec_file<< " ";
		cout << data << " ";
		if ((i % 3) == 2)
		// displaying content
			// print strings (data) horizontally, each line has target angle, range, and pause time
			cout <<endl;
		i++;
		//store printed values into string variable "command", print "command"

	}
	//cout << data <<endl;
	cout <<"\n";
	return 0;
}
