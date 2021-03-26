#pragma once

class Person
{
	public:
		virtual void display(void);
		//virtual void set_details(string, string);

		Person();
		~Person();

	protected:
		virtual void set_details(string, string);
	
	private:
		string name;
		string address;
};

