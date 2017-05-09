#include "Airport.h"

Airport::Airport()
{
    //ctor
}

Airport::Airport(const Airport &tmp)
{
    this->name=tmp.name;
    this->country=tmp.country;
    this->terminalNum=tmp.terminalNum;
    this->runwayNum=tmp.runwayNum;
}

Airport& Airport::operator=(const Airport &e)
{
    this->name=e.name;
    this->country=e.country;
    this->terminalNum=e.terminalNum;
    this->runwayNum=e.runwayNum;
    return *this;
}

int Airport::operator<(const Airport &tmp) const
{
    if(this->terminalNum < tmp.terminalNum) return 1;
    if(this->runwayNum < tmp.runwayNum) return 1;
    return 0;
}

std::string Airport::getName()
{
    return this->name;
}

std::string Airport::getCountry()
{
    return this->country;
}

int Airport::getTerNum()
{
    return this->terminalNum;
}

int Airport::getRunNum()
{
    return this->runwayNum;
}

int Airport::setName(std::string sName)
{
    this->name=sName;
    return 1;
}

int Airport::setCountry(std::string sCountry)
{
    this->country=sCountry;
    return 1;
}

int Airport::setTerNum(int sTerNum)
{
    this->terminalNum=sTerNum;
    return 1;
}

int Airport::setRunNum(int sRunNum)
{
    this->runwayNum=sRunNum;
    return 1;
}

Airport::~Airport()
{
    //dtor
}
