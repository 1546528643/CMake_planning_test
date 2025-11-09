#include<iostream>
#include "pnc_map.h"
#include "process.h"
using std::cout, std::endl;

int main(){

    cout << "planning_map::main()" << endl;
    Process pro;
    pro.planProcess();
    cout << "planning_map::main() success" << endl;

    return 0;
}