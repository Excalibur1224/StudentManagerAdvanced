#ifndef _STUDENT_H_
#define _STUDENT_H_
#include <string>
#include <vector>

using namespace std;

class student
{
    private:
    string firstName;
    string lastName;
    vector <double> grades;
    public:
    void setName(string &first, string &last);
    string fullName();
    double getScore();
    void addGrade(int value);
};
#endif
