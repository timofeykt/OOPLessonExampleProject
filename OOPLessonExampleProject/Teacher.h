#pragma once
#include "main.h"
class Teacher
{
private:
	string name;
	string surname;
	int age;
	int power;


public:

	Teacher();
	Teacher(string n, string sname, int a, int power);
	Teacher(string n, string sname);

	~Teacher();

	string get_name();
	void set_name(string n);
	string get_surname();
	void set_surname(string n);
	int get_age();
	void set_age(int a);
	float get_powerk();
	void set_power(float mark);

	
	string convert_to_string();

};

