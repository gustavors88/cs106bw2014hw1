/*
 * =====================================================================================
 *
 *       Filename:  life.cpp
 *
 *    Description:  The main file for the hw1 of stanford cs106b course
 *
 *        Version:  0.1
 *        Created:  02/02/2014 03:22:52 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Li Xiang 
 *         Email:   rayclover@gmail.com
 *
 * =====================================================================================
 */
#include <cctype>
#include <cmath>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include "lib/StanfordCPPLib/grid.h"
#include "lib/StanfordCPPLib/filelib.h"
using namespace std;

int main() {
	cout << "Welcome to the CS 106B Game of Life," << endl;
	cout << "a simulation of the lifecycle of a bacterial colony." << endl;
	cout << "Cells (X) live and die by the following rules:" << endl;
	cout << "- A cell with 1 or fewer neighbors dies" << endl;
	cout << "- Locations with 2 neighbors remain stable." << endl;
	cout << "- Locations with 3 neighbors will create life." << endl;
	cout << "- A cell with 4 or more neighbors dies." << endl;
	cout << endl;

	/* Handle input file stream */
	ifstream stream;
	if (openFile(stream, "./res/fish.txt")) {
		cout << "Success!" << endl;
	} else {
		cout << "Cannot open file" << endl;
	}
	return 0;
}
