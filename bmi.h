#include<iostream>
#include<string>
using namespace std;
class bmi{
public:
	float bmii();
	string category(float);
	void setheight(int);
	void setweight(int);
	int getheight();
	int getweight(); 
private:
	int height;
	int weight;
	
};
