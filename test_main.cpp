 ///
 /// @file    test_main.cpp
 /// @author  panjiaming(www.wc.com19941214@gmail.com)
 /// @date    2017-09-28 20:44:43
 ///
 //
#include "Config.h"
#include "Dictionary.h"
#include <iostream>
using namespace std;
int main()
{
	wd::Config config("config");
	wd::Dictionary dic(config);
	cout<<"end"<<endl;
	return 0;

}
