#ifndef EMPLOYEE_HPP
#define EMPLOYEE_HPP
#include<iostream>
#include<string>

class Employee{
    protected:
    std::string _emp_name;
    std::string _emp_address;
    std::string _city_state_zip;
    std::string _emp_ssn;
    std::string _emp_status;
    int _shift;
    public:
    Employee();
    Employee(std::string,std::string,std::string,std::string, std::string,int);
    std::string get_emp_name();
    std::string get_emp_address();
    std::string get_city_state_zip();
    std::string get_emp_ssn();
    std::string get_emp_status();
    int get_shift();
    void set_emp_name(std::string emp_name);
    void set_emp_address(std::string address);
    void set_city_state_zip(std::string city);
    void set_emp_ssn(std::string ssn);
    void set_emp_status(std::string status);
    void set_shift(int shift);
    void print_emp_info();
    ~Employee();
};
#endif // EMPLOYEE_HPP