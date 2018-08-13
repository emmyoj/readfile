/*
 * Created by Emily Ojeda, 08/13/18. 
 * To be used on the rate table for calibrating ground based magnetometer's as part of research conducted by the University of Michigan's Space Research Department.
 * This program reads data from readfile.txt. 
 * The data in the file can be edited by the user, and it is used by the main program to set values of target angle, range of error, and pause time between each test. 
 * The data is then sent to the main program (motor) using the int system(command) command. 
 */
#include <bits/stdc++.h>
#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string>
using namespace std;

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
	
	// filename of the file
	filename = "readfile.txt";
	exec_file = " ./motor ";
	
	// opening file
	file.open (filename.c_str());//file.open(filename.c_str()); //
	getline (file, line);
	cout << "skipped " << line << endl; // cout << data << endl;
	
	// extracting words form the file
	while (file >> data) //while (file >> data)
	{
		command = data + " ";
	
		if ((i % 3) ==0)
			cout << exec_file << " ";
		cout << command;
		
		if ((i % 3) == 2)
		// displaying content
		// print strings (data) horizontally, each line has target angle, range, and pause time
			cout << endl;
		i++;
//	system (command.c_str());
	}
	//system (command.c_str());
	cout <<"\n";
	//system (command.c_str());
	return 0;
	system (command.c_str());
	cout << system(command.c_str());
}
