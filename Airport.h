#ifndef AIRPORT_H
#define AIRPORT_H
#include <string>

class Airport
{
    public:
        std::string getName();
        std::string getCountry();
        int getTerNum();
        int getRunNum();
        int setName(std::string sName);
        int setCountry(std::string sCountry);
        int setTerNum(int sTerNum);
        int setRunNum(int sRunNum);
        Airport();
        Airport(std::string sName="default", std::string sCountry="default", int sTerNum=0, int sRunNum=0): name(sName), country(sCountry), terminalNum(sTerNum), runwayNum(sRunNum){}
        Airport(const Airport &tmp);
        Airport &operator=(const Airport &e);
        int operator<(const Airport &tmp) const;
        ~Airport();
    protected:
        std::string name;
        std::string country;
        int terminalNum;
        int runwayNum;
};

#endif // AIRPORT_H
