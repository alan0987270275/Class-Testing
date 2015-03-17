#ifndef Grade_H
#define Grade_H

class GradeCalculate
{
public:
	GradeCalculate();//Consturcter
	~GradeCalculate();//Destructer
	void GetCounter();//The fuction for user to input the data
	void SetCounter(int counter=0);//The function for seting the data
	void GetScoreCredit();//The fuction for user to input the data
	void Print();//Print out the result
	

private:
	int _counter; //The amount of course
	double *_grade;//The data of user's score by using pointer 
	int *_credit;//The dara of user's credit by using pointer 
	double AvergeScore();// The function to calculate the average
};
#endif