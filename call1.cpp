#include<iostream>
using namespace std;

void Salary_Change(int s)
{
	s = 30000;
	cout<<"Value inside Function "<<s<<endl;
}

int main()
{
	int sal=27000;
	Salary_Change(sal);
	cout<<"Value inside Main "<<sal<<endl;
	return 0;
}
