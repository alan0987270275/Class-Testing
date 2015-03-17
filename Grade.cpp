#include<iostream>
#include"Grade.h"
using namespace std;

GradeCalculate::GradeCalculate()
{
	cout << _counter << endl;
	for(int i = 0; i < _counter;i++ )
	{
		_grade[i] = 0.0;
		_credit[i] = 0;
	}
}

GradeCalculate::~GradeCalculate()
{
	cout << "All array were deleted!!" << endl;
	delete[]_grade;
	delete[]_credit;
}

void GradeCalculate::GetCounter()
{
	int counter;
	cout << "Please enter how many course you have:" << endl;
	cin >> counter;
	SetCounter(counter);
}

void GradeCalculate::SetCounter(int counter)
{
	_counter = counter;
	_grade = new double[_counter];
	_credit = new int[_counter];
}

void GradeCalculate::GetScoreCredit()
{
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

void GradeCalculate::Print()
{
	cout << "Your averge score is: " << AvergeScore()<<endl;
}

double GradeCalculate::AvergeScore()
{
	double total=0;
	double creditrtotal = 0;

	for (int i = 0; i < _counter;i++)
	{
		total += (_grade[i]*_credit[i]);
		creditrtotal += _credit[i];
	}

	return (total / creditrtotal);
}
