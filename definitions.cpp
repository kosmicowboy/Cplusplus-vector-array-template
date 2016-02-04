//
// Created by Kyle on 2/3/16.
//

#include "definitions.h"


Employee::Employee()
{
    name = "none";
    salary = 0;
}

Employee::Employee(string n, double s)
{
    name = n;
    salary = s;
}

void Employee::setName(string n)
{
    name  = n;
}

string Employee::getName() const
{
    return name;
}

void Employee::setSalary(double s)
{
    salary = s;
}

double Employee::getSalary() const
{
    return salary;
}

void Employee::print() const
{
    cout << "name = " << name << "\n";
    cout << "salary = $" << salary << "\n";
}

