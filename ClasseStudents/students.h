#include<iostream>
#include<string>
#include<time.h>
#include <sstream>

using namespace std;

class Students
{
public:
	typedef struct MyStudent
	{
		string name;
		string lastname;
		string studentNumber;
		float grade;
	}st;
	st t;
	Students(string _name, string _lastname, float _grade);
	~Students() {
		cout << "Destructor called"<<endl;
	};
	
	void setdataStudent(string _name, string _lastname,string _studentNumber, float _grade);
	st  getdateStudent() {
		
		t.name = name;
		t.lastname = lastname;
		t.studentNumber = studentNumber;
		t.grade = grade;
		return t;
	}
	int get_stdcout(){ return stdCount; };
	float get_GPA_students() { return get_GPA_of_students; };

private:
	string name;
	string lastname;
	string studentNumber;
	float grade;
	static int stdCount;
	static float get_GPA_of_students;
};

int Students:: stdCount = 0;
float Students::get_GPA_of_students = 0;
Students::Students(string _name, string _lastname, float _grade=0) {
	srand(time(NULL));
	int number = rand() % 10000;
	stringstream ss, s;
	s << 3;
	ss << number;
	string str = "99";
	str += ss.str();
	str += s.str();
	setdataStudent(_name, _lastname, str, _grade);
	stdCount++;
	float SumGPA = 0;
	SumGPA += _grade;
	get_GPA_of_students = SumGPA / stdCount;
}

void Students::setdataStudent(string _name, string _lastname, string _studentNumber, float _grade)
{
	name = _name;
	lastname = _lastname;
	studentNumber = _studentNumber;
	grade = _grade;
}

