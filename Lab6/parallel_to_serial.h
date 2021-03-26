#pragma once
class parallel_to_serial
{
public:
	parallel_to_serial(int n=0);
	~parallel_to_serial() {};
	
	void operator+=(int inc);
	void display();

private:
	char myPort;
};

