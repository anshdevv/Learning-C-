#include <iostream>
using namespace std;
class emp
{
public:
    string name;

private:
    string com;

protected:
    int age;

    // constructor
public:
    emp(string name, string com, int age)
    {
        name = name;
        com = com;
        age = age;
    }
};
