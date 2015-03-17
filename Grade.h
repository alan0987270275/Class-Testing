#ifndef Grade_H
#define Grade_H

class GradeCalculate
{
public:
	GradeCalculate();
	~GradeCalculate();
	void GetCounter();
	void SetCounter(int counter=0);
	void GetScoreCredit();
	void Print();
	

private:
	int _counter;
	double *_grade;
	int *_credit;
	double AvergeScore();
};
#endif