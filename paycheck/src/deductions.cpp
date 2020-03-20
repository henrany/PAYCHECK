#include"deductions.hpp"

Deductions::Deductions(){
    _fed_tax = 0.0;
    _state_tax = 0.0;
    _social_sec_tax = 0.0;
    _med_care = 0.0;
    _car_insu = 0.0;
    _parking = 0.0;
    _health_insu = 0.0;
}

Deductions::Deductions(double fed,double state,double social,double med,double car,double park,double health){
    _fed_tax = fed;
    _state_tax = state;
    _social_sec_tax = social;
    _med_care = med;
    _car_insu = car;
    _parking = park;
    _health_insu = health;
}

double Deductions::get_fed_tax(){
    return _fed_tax;
}

double Deductions::get_state_tax(){
    return _state_tax;
}

double Deductions::get_social_sec_tax(){
    return _social_sec_tax;
}

double Deductions::get_med_care(){
    return _med_care;
}

double Deductions::get_car_insu(){
    return _car_insu;
}

double Deductions::get_parking(){
    return _parking;
}

double Deductions::get_health_insu(){
    return _health_insu;
}

void Deductions::set_fed_tax(double fed_tax){
    _fed_tax = fed_tax;
}

void Deductions::set_state_tax(double state_tax){
    _state_tax = state_tax;
}

void Deductions::set_social_tax(double social){
    _social_sec_tax = social;
}

void Deductions::set_med_care(double med){
    _med_care = med;
}

void Deductions::set_car_insu(double car){
    _car_insu = car;
}

void Deductions::set_parking(double park){
    _parking = park;
}

void Deductions::set_health_insu(double health){
    _health_insu = health;
}

double Deductions::tot_deduct(){
    double total;
    total = _fed_tax + _state_tax + _social_sec_tax + _med_care + _car_insu + _parking + _health_insu;
    return total;
}

void Deductions::print_dedcu(){
    std::cout << std::fixed << std::showpoint;
    std::cout << std::setprecision(2);
    std::cout<<"_____________________________"<<std::endl;
    std::cout<<"| Required Deductions "<<std::endl;
    std::cout<<"_____________________________"<<std::endl;
    std::cout<<"| Federal income tax  | "<<std::setw(5)<<_fed_tax <<std::endl;
    std::cout<<"| State income Tax    | "<<std::setw(5)<<_state_tax<<std::endl;
    std::cout<<"| Social security Tax | "<<std::setw(5)<<_social_sec_tax<<std::endl;
    std::cout<<"| Medicare            | "<<std::setw(5)<<_med_care<<std::endl;
    std::cout<<"_____________________________"<<std::endl;
    std::cout<<"| Other Deductions "<<std::endl;
    std::cout<<"_____________________________"<<std::endl;
    std::cout<<"| Car Insurance       | "<<std::setw(5)<<_car_insu <<std::endl;
    std::cout<<"| Parking             | "<<std::setw(5)<<_parking <<std::endl;
    std::cout<<"| Health Insurance    | "<<std::setw(5)<<_health_insu <<std::endl;
    std::cout<<"_____________________________"<<std::endl;
}

Deductions::~Deductions(){}