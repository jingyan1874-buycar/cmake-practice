#include <iostream>
#include "family.pb.h"

int main()
{
    myhome::Family fa;

    fa.set_id(1);
    fa.set_name("mm");
    fa.set_age(22);
    fa.set_sex("male");
    fa.set_status("hus");
    fa.set_phone("13");

    std::cout << "id: " << fa.id() << " , name: " << fa.name() 
              << ", sex: " << fa.sex() << ", age: " << fa.age() 
              << ", status: " << fa.status() << ", phone: " << fa.phone()
              << " ."<< std::endl;

    return 0;
}