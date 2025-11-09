#include<iostream>
#include "process.h"
using std::cout, std::endl;

void Process::planProcess()
{
    cout << "Process::planProcess()" << endl;
    my_map.mapInfo();
    cout << "Process::planProcess() success" << endl;
}