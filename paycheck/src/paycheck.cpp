#include"employee.hpp"
#include"deductions.hpp"
#include"paycheck.hpp"

Paycheck::Paycheck():Deductions::Deductions()//_fed_tax,_state_tax,_social_sec_tax,_med_care,_car_insu,_parking,_health_insu)
{
    _hours = 0.0;
    _overtime = 0.0;
    _rate = 0.0;
}

Paycheck::Paycheck(double hours,double overtime,double rate):Deductions::Deductions()//_fed_tax,_state_tax,_social_sec_tax,_med_care,_car_insu,_parking,_health_insu)
{
    _hours = hours;
    _overtime = overtime;
    _rate = rate;
}

double Paycheck::get_hours(){
    return _hours;
}

double Paycheck::get_overtime(){
    return _overtime;
}

double Paycheck::get_rate(){
    return _rate;
}

void Paycheck::set_hours(double hours){
    _hours = hours;
}

void Paycheck::set_overtime(double overtime){
    _overtime = overtime;
}

void Paycheck::set_rate(double rate){
    _rate = rate;
}

double Paycheck::earnings(){
    double total;
    total = (_hours + _overtime) * _rate;
    return total;
}

double Paycheck::net_pay(){
    double pay;
    pay = earnings() - tot_deduct();
    return pay;
}

void Paycheck::print_paycheck(){
    std::cout << std::fixed << std::showpoint;
    std::cout << std::setprecision(2);
    std::cout<<"|____________________________"<<std::endl;
    std::cout<<"| Earnings          | "<<std::endl;
    std::cout<<"|____________________________"<<std::endl;
    std::cout<<"| Hours             | "<<std::setw(5)<<_hours<<std::endl;
    std::cout<<"| overtime          | "<<std::setw(5)<<_overtime<<std::endl;
    std::cout<<"| rate              | "<<std::setw(5)<<_rate<<std::endl;
    std::cout<<"|____________________________"<<std::endl;
    std::cout<<"| Gross pay         | "<<std::setw(5)<<earnings()<<std::endl;
    std::cout<<"_____________________________"<<std::endl;
    std::cout<<"\n";
    std::cout<<"| Net Pay        | "<<std::setw(5)<<net_pay()<<std::endl;
     
}

Paycheck::~Paycheck(){

}