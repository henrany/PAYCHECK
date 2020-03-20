#include "company.hpp"

Company::Company(){
    _com_name = " ";
    _address = " ";
    _branch_address = " ";
    _branch_name = " ";
    _branch_city = " ";
}

Company::Company(std::string com_name,std::string address,std::string b_name,std::string b_address,std::string b_city){
    _com_name = com_name;
    _address = address;
    _branch_name = b_name;
    _branch_address = b_address;
    _branch_city = b_city;
}

std::string Company::get_com_name(){
    return _com_name;
}

std::string Company::get_address(){
    return _address;
}

std::string Company::get_branch_name(){
    return _branch_name;
}

std::string Company::get_branch_address(){
    return _branch_address;
}

std::string Company::get_branch_city(){
    return _branch_city;
}

void Company::set_com_name(std::string com_name){
    _com_name = com_name;
}

void Company::set_address(std::string address){
    _address = address;
}

void Company::set_branch_name(std::string b_name){
    _branch_name = b_name;
}

void Company::set_branch_address(std::string b_address){
    _branch_address = b_address;
}

void Company::set_branch_city(std::string b_city){
    _branch_city = b_city;
}
void Company::print_comp_info(){
    std::cout<<_com_name<<", ";
    std::cout<<_address<<std::endl;
}

Company::~Company(){};