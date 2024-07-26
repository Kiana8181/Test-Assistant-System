#pragma once
#include<string>
#include"Azmoon_class.h"
public ref class personinfo{
public:
	System::String^ name;
	System::String^ last_name;
	System::String^ user_name;
	System::String^ password;

	personinfo() {}
	~personinfo() {}
};

public ref class Question {
public:
	System::String^ problem;
	System::String^ num1;
	System::String^ num2;
	System::String^ num3;
	System::String^ num4;
	System::String^ which;
	System::String^ answer=" ";
	double score=0;

	Question(System::String^ p, System::String^ n1, System::String^ n2, System::String^ n3, System::String^ n4, System::String^ n) {
		problem = p;
		num1 = n1;
		num2 = n2;
		num3 = n3;
		num4 = n4;
		which = n;
	}
	Question(System::String^ p, System::String^ n) {
		problem = p;
		which = n;
	}
	~Question() {}
};

public ref class Student_A:public personinfo {
public:
	System::String^ student_number;
	double score_T=-1;
	Student_A(System::String^ n, System::String^ ln, System::String^ stn) {
		name = n;
		last_name = ln;
		student_number = stn;
	}
	~Student_A() {}
};

public ref class Azmoon_class {
public:
	int first = 0;
	int Time = 0;
	int year, mounth, day, year2, mounth2, day2, min, start_am, start_ah, end_ah, end_am;
	int count = 1;
	double score_t = -1;
	int shenase = 0;
	int num = 1;
	 System::Collections::Generic::List<Student_A^> SAList;
	Azmoon_class() {
	}
	 System::Collections::Generic::List<Question^> QList;
	~Azmoon_class(){}
};

public ref class Manager :public personinfo{
public:
	 System::Collections::Generic::List<Azmoon_class^> AList;
	Manager(System::String^ n, System::String^ ln, System::String^ un, System::String^ pass) {
		name = n;
		last_name = ln;
		user_name = un;
		password = pass;
	}
	~Manager() {}
};

public ref class Student :public personinfo {
public:
	 System::Collections::Generic::List<Azmoon_class^> AList;
	System::String^ student_number;
	Student(System::String^ n, System::String^ ln, System::String^ us, System::String^ stn, System::String^ pass) {
		name = n;
		last_name = ln;
		user_name = us;
		student_number = stn;
		password = pass;
	}
	~Student() {}

};

public ref class list {
public:
	static System::Collections::Generic::List<Manager^> ManagerList;
	static System::Collections::Generic::List<Student^> SList;
};

