#include<iostream>
#include<string>
#include"bmi.h"
using namespace std;
void bmi::setheight(int n){
height =n;
}
void bmi::setweight(int n){
weight=n;
}
int bmi::getheight(){
return height;
}
int bmi::getweight(){
return weight;
}


float bmi::bmii()
{
	getheight();
	getweight();
	float value;
	value=(float)weight/(((float)height/100)*((float)height/100));
	return value;
}

string bmi::category(float value)
{
	if(value<15)
	{
		return "Very severely underweight";
	}
        if(15<=value && value<16)
        {
                return "Severely underweight";
        }
        if(16<=value && value<18.5)
        {
                return "Underweight";
        }
        if(18.5<=value && value<25)
        {
                return "Normal";
        }
        if(25<=value && value<30)
        {
                return "Overweight";
        }
        if(30<=value && value<35)
        {
                return "Obese Class I (Moderately obese)";
        }
        if(35<=value && value<40)
        {
                return "Obese Class II (Severely obese)";
        }
        if(value>=40)
        {
                return "Obese Class III (Very severely obese)";
        }
}

