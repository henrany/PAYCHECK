#include"company.hpp"
#include"employee.hpp"
#include"deductions.hpp"
#include"paycheck.hpp"
#include<iostream>
#include<stdexcept>
#include<string>
#include<vector>
#include<ctime>
#include<chrono>
#include<cstdlib>

std::vector<std::string> ones {"","one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
std::vector<std::string> teens {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen","sixteen", "seventeen", "eighteen", "nineteen"};
std::vector<std::string> tens {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

std::string convert(long int number){
    if (number < 10) {
            return ones[number];
        } else if (number < 20) {
            return teens [number - 10];
        } else if (number < 100) {
            return tens[number / 10] + ((number % 10 != 0) ? " " + convert(number % 10) : "");
        } else if (number < 1000) {
            return convert(number / 100) + " hundred" + ((number % 100 != 0) ? " " + convert(number % 100) : "");
        } else if (number < 1000000) {
            return convert(number / 1000) + " thousand" + ((number % 1000 != 0) ? " " + convert(number % 1000) : "");
        } else if (number < 1000000000) {
            return convert(number / 1000000) + " million" + ((number % 1000000 != 0) ? " " + convert(number % 1000000) : "");
        } else if (number < 1000000000000) {
            return convert(number / 1000000000) + " billion" + ((number % 1000000000 != 0) ? " " + convert(number % 1000000000) : "");
        }
        return "error";
    }

int main(){
    Company company;
    Employee employee;
    //Deductions deductions;
    Paycheck pay;
    std::string comp_name,address,b_name,b_address,b_city;
    std::string emp_name,emp_address,emp_city;
    double fed_tax,state_tax,social_tax,medicare,car_insu,parking,health_insu;
    double hours,overtime,rate;
    std::cout<<"enter the headquarters  name "<<std::endl;
    std::getline(std::cin,comp_name);
    company.set_com_name(comp_name);
    std::cout<<"enter the headquarters  address"<<std::endl;
    std::getline(std::cin,address);
    company.set_address(address);
    std::cout<<"enter the company's branch name"<<std::endl;
    std::getline(std::cin,b_name);
    company.set_branch_name(b_name);
    std::cout<<"enter the company's branch address"<<std::endl;
    std::getline(std::cin,b_address);
    company.set_branch_address(b_address);
    std::cout<<"enter the company's branch city, state,zipcode and country"<<std::endl;
    std::getline(std::cin,b_city);
    company.set_branch_city(b_city);
    std::cout<<"enter employee's name "<<std::endl;
    std::getline(std::cin,emp_name);
    employee.set_emp_name(emp_name);
    std::cout<<"enter employee's address "<<std::endl;
    std::getline(std::cin,emp_address);
    employee.set_emp_address(emp_address);
    std::cout<<"enter employee's city,state,zipcode,country "<<std::endl;
    std::getline(std::cin,emp_city);
    employee.set_city_state_zip(emp_city);
    std::cout<<"enter the federal tax, state tax, SS tax, medicare, car insurance, parking, health insurance"<<std::endl;
    std::cin>>fed_tax>>state_tax>>social_tax>>medicare>>car_insu>>parking>>health_insu;
    pay.set_fed_tax(fed_tax);pay.set_state_tax(state_tax);
    pay.set_social_tax(social_tax);pay.set_med_care(medicare);
    pay.set_car_insu(car_insu);pay.set_parking(parking);
    pay.set_health_insu(health_insu);
    std::cout<<"enter the hours, overtime and rate "<<std::endl;
    std::cin>>hours>>overtime>>rate;
    pay.set_hours(hours);
    pay.set_overtime(overtime);
    pay.set_rate(rate);

    srand(time(NULL));
    int random_number = std::rand();
    auto timenow = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
    company.print_comp_info();
    std::cout<<"\n";
    pay.print_dedcu();
    pay.print_paycheck(); 
    std::cout<<"\n";
    std::cout<<"______________________________________________"<<std::endl;
    std::cout<<company.get_branch_name()<<"                     check number: "<<random_number<<std::endl;
    std::cout<<company.get_branch_address()<<"               Pay Date "<<std::ctime(&timenow)<<std::endl;
    std::cout<<company.get_branch_city()<<std::endl;
    std::cout<<"\n\n";
    std::cout<<"Pay ***"<<convert(pay.net_pay())<<"***"<<pay.net_pay()<<std::endl;
    std::cout<<"\n\n";
    std::cout<<"To the order of "<<std::endl;
    employee.print_emp_info();

    return 0;
}