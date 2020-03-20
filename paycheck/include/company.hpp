#ifndef COMPANY_HPP
#define COMPANY_HPP
#include<iostream>
#include<string>

class Company{
    protected:
    std::string _com_name;
    std::string _address;
    std::string _branch_name;
    std::string _branch_address;
    std::string _branch_city;
    public:
    Company();
    Company(std::string,std::string,std::string,std::string,std::string);
    std::string get_com_name();
    std::string get_address();
    std::string get_branch_name();
    std::string get_branch_address();
    std::string get_branch_city();
    void set_com_name(std::string com_name);
    void set_address(std::string address);
    void set_branch_name(std::string b_name);
    void set_branch_address(std::string b_address);
    void set_branch_city(std::string b_city);
    void print_comp_info();
    ~Company();
};
#endif // COMPANY_HPP