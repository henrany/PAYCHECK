#ifndef DEDUCTIONS_HPP
#define DEDUCTIONS_HPP
#include<iostream>
#include<string>
#include<iomanip>

class Deductions{
    protected:
    double _fed_tax;
    double _state_tax;
    double _social_sec_tax;
    double _med_care;
    double _car_insu;
    double _parking;
    double _health_insu;

    public:
    Deductions();
    Deductions(double,double,double,double,double,double,double);
    double get_fed_tax();
    double get_state_tax();
    double get_social_sec_tax();
    double get_med_care();
    double get_car_insu();
    double get_parking();
    double get_health_insu();
    void set_fed_tax(double);
    void set_state_tax(double);
    void set_social_tax(double);
    void set_med_care(double);
    void set_car_insu(double);
    void set_parking(double);
    void set_health_insu(double);
    double tot_deduct();
    void print_dedcu();
    ~Deductions();
};
#endif // DEDUCTIONS_HPP