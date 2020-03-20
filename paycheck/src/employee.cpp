#include"employee.hpp"

Employee::Employee(){
    _emp_name = " ";
    _emp_address = " ";
    _city_state_zip =" ";
    _emp_ssn = " ";
    _emp_status = " ";
    _shift = 0;
}

Employee::Employee(std::string emp_name, std::string emp_address, std::string city,std::string emp_ssn, std::string status, int shift){
    _emp_name = emp_name;
    _emp_address = emp_address;
    _city_state_zip = city;
    _emp_ssn = emp_ssn;
    _emp_status = status;
    _shift = shift;
}

std::string Employee::get_emp_name(){
    return _emp_name;
}

std::string Employee::get_emp_address(){
    return _emp_address;
}

std::string Employee::get_city_state_zip(){
    return _city_state_zip;
}

std::string Employee::get_emp_ssn(){
    return _emp_ssn;
}

std::string Employee::get_emp_status(){
    return _emp_status;
}

int Employee::get_shift(){
    return _shift;
}

void Employee::set_emp_name(std::string emp_name){
    _emp_name = emp_name;
}

void Employee::set_emp_address(std::string address){
    _emp_address = address;
}

void Employee::set_city_state_zip(std::string city){
    _city_state_zip = city;
}

void Employee::set_emp_ssn(std::string ssn){
    _emp_ssn = ssn;
}

void Employee::set_emp_status(std::string status){
    _emp_status = status;
}

void Employee::set_shift(int shift){
    _shift = shift;
}

void Employee::print_emp_info(){
    std::cout<<_emp_name<<std::endl;
    std::cout<<_emp_address<<std::endl;
    std::cout<<_city_state_zip<<std::endl;
}

Employee::~Employee(){}