#ifndef PAYCHECK_HPP
#define PAYCHECK_HPP
#include"employee.hpp"
#include"deductions.hpp"
#include<iostream>
#include<string>
#include<iomanip>
#include<cmath>

class Paycheck:public Deductions{
    protected:
    double _hours;
    double _overtime;
    double _rate;
    public:
    Paycheck();
    Paycheck(double,double,double);
    double get_hours();
    double get_overtime();
    double get_rate();
    void set_hours(double hours);
    void set_overtime(double overtime);
    void set_rate(double rate);
    double earnings();
    double net_pay();
    void print_paycheck();
    ~Paycheck();
};
#endif