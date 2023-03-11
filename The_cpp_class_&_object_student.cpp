#include <iostream>
using namespace std;

class student {
public:
	string name;
	int RollNo;
	string grade;
  };

int main()
{
	student s1;
	s1.name = "Revanth";
	s1.RollNo = 10;
	s1.grade = "a";

	cout <<"Student name:"<< s1.name<<endl;
	cout <<"Student RollNo:"<< s1.RollNo<<endl;
	cout <<"Student grade:"<< s1.grade<<endl;

	return 0;
}
