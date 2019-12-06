#include "student.h"

void student::setName(string &first, string &last)
{
    firstName = first;
    lastName = last;
}
string student::fullName()
{
    string fullName;
    fullName = firstName;
    fullName.append(" ");
    fullName.append(lastName);
    return fullName;
}
double student::getScore()
{
    double grade = 0;
    double count = 0;
    double average = 0;

    for(int i=0;i<grades.size();i++)
    {
        grade += grades.at(i);
        count ++;
    }

    if(count == 0)
    {
        average = 0;
    }
    else
    {
    average = grade/count;
    }
    return average;
}
void student::addGrade(int value)
{
    grades.push_back(value);
}
