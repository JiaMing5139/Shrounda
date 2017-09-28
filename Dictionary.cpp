 ///
 /// @file    Dictionary.cpp
 /// @author  panjiaming(www.wc.com19941214@gmail.com)
 /// @date    2017-09-28 22:42:51
 ///
#include "Dictionary.h"
#include "Config.h"
#include  <fstream>
#include <iostream>
using namespace std;
namespace wd
{

	Dictionary::Dictionary( Config & config)
	{
		cout<<"star to build dict,reading dic from "<<config.getPath().c_str()<<endl;
		ifstream ifs(config.getPath());
		string text;
		while(ifs>>text)
		{
		cout<<text<<endl;
		}
		cout<<endl;
	}



}//end of wd
