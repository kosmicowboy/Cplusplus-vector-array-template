//
// Created by Kyle on 2/3/16.
//

#ifndef PROJECT2_DEFINITIONS_H
#define PROJECT2_DEFINITIONS_H

#include <string>
#include <iostream>

using namespace std;

class Employee
{
public:
    Employee();
    Employee(string n, double s);
    void setName(string n);
    string getName() const;
    void setSalary(double s);
    double getSalary() const;
    virtual void print() const;
private:
    string name;
    double salary;
};

class CompareBySalary
{
public:
    bool operator() (const Employee& a, const Employee& b) const;
};

class CompareByName
{
public:
    bool operator()(const Employee& a, const Employee& b) const;
};


#endif //PROJECT2_DEFINITIONS_H
