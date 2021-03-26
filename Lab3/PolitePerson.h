#pragma once
#define interface class
#define Pure =0

interface PolitePerson
{
public:
	virtual void greeting() Pure;
	virtual void farewell() Pure;
};

