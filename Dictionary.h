 ///
 /// @file    Dictionary.h
 /// @author  panjiaming(www.wc.com19941214@gmail.com)
 /// @date    2017-09-28 22:33:45
 ///
 
#ifndef __WD_DICTIONARY_H__
#define	__WD_DICTIONARY_H__
#include "Config.h"
#include <map>
#include <vector>
#include <set>
#include <string>

using namespace std;
namespace wd
{
class Dictionary
{
	public:
		Dictionary(Config &);
	private:
		map<string,int> _frequencyMap;
		vector<pair<string,int>> _indexVector;
};



}//end of wd



#endif
