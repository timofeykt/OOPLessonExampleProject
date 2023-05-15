#pragma once
#include "main.h"
class Doctor
{

private:
	string name;
	string surname;
	int age;
	int experience;
	string skill;

public:

	Doctor();
	Doctor(string n, string sname, int a, int experisnse, string skill);
	Doctor(string n, string sname);

	~Doctor();

	string get_name();
	void set_name(string n);
	string get_surname();
	void set_surname(string n);
	int get_age();
	void set_age(int a);
	float get_experience();
	void set_experience(float mark);

	string get_skill();
	string convert_to_string();

};

