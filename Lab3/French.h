#pragma once
#include "PolitePerson.h"
class French :
    public PolitePerson
{
public:
    void greeting();
    void farewell();

    French() {};
    ~French() {};
};

