#include <bits/stdc++.h>
#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string>
using namespace std;

// driver code
int main()
{
	// filestream variable file
	ifstream file;
	string data;
	string filename, line; //	string word, t, q, filename; //string data, int, number, 

	// filename of the file
	filename = "readfile.txt";

	// opening file
	file.open (filename.c_str());//file.open(filename.c_str()); //
	getline (file, line);
	cout << "skipped " << line << endl; // cout << data << endl;

	// extracting words form the file
	while (file >> data) //while (file >> data)
	{
		// displaying content
		// print strings (data) horizontally, each line has target angle, range, and pause time
		getline(file, data);
		cout << data << endl;
	}

	return 0;
}
