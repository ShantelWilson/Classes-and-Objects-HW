

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream fin;
	ofstream fout;

	float test1;
	float test2;
	float test3;

	string firstname;
	string lastname; 

	fin.open("in.txt");
	fout.open("out.txt");

	while (! fin.eof())
	{
		fin >> firstname;
		fin >> lastname;
		fin >> test1;
		fin >> test2;
		fin >> test3;

	}
	
	float testAvg = (test1 + test2 + test3) / 3;

	fout << lastname << "The average score is " << testAvg << endl;


	fin.close();
	fout.close();

	return 0;
}

