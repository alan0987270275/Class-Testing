#include<iostream>
#include"Grade.h"
using namespace std;

GradeCalculate::GradeCalculate()//Consturcter
{  //Initialize the array
	cout << "Create object";
	for(int i = 0; i < _counter;i++ )
	{
		_grade[i] = 0.0;
		_credit[i] = 0;
	}


}

GradeCalculate::~GradeCalculate()//Destructer
{
	cout << "All array were deleted!!" << endl;
	delete[]_grade;
	delete[]_credit;
}

void GradeCalculate::GetCounter()//The fuction for user to input the data
{
	int counter;//Get the amount of course to put into the array
	cout << "Please enter how many course you have:" << endl;
	cin >> counter;
	SetCounter(counter);//The function for seting the data
}

void GradeCalculate::SetCounter(int counter)//The function for seting the data
{  //using Dynamical Memory Allocation
	_counter = counter; 
	_grade = new double[_counter];
	_credit = new int[_counter];
}

void GradeCalculate::GetScoreCredit()//The fuction for user to input the data
{	//user intput data
	int credit;
	double score;
	for (int i = 0; i < _counter;i++)
	{
		cout << "Please enter your credit: ";
		cin >> credit;
		cout << "Please enter your score: ";
		cin >> score;
		_credit[i] = credit;
		_grade[i] = score;
	}
}

void GradeCalculate::Print()//Print out the result
{
	cout << "Your averge score is: " << AvergeScore()<<endl;
}

double GradeCalculate::AvergeScore()
{
	double total=0;
	double creditrtotal = 0;

	for (int i = 0; i < _counter;i++)
	{
		total += (_grade[i]*_credit[i]);//Calculate the total of score
		creditrtotal += _credit[i];//Calculate the total of credit
	}

	return (total / creditrtotal);// return the average
}
