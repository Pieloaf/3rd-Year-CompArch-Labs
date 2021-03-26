#pragma once

class Student : public Person
{
	public:
		void set_id(int);
		void print_id(void);
		void display(void);
		void set_details(string, string, int);

		Student();
		~Student();
	private:
		int id;
};

