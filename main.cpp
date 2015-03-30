#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>
#include"bmi.h"

using namespace std;
int main()
{
	int height;
	int weight;
	float value;
	string categ;
	bmi abc;
	ifstream infile("file.in",ios::in);
	ofstream outfile("file.out",ios::out);
	while(infile >> height >> weight)
	{
		if(height==0 && weight==0)
		{
			break;
		}
		abc.setheight(height);
		abc.setweight(weight);
		value=abc.bmii();
		categ=abc.category(value);
		outfile<<value<<"\t"<<categ<<"\n";
	}
return 0;
}
