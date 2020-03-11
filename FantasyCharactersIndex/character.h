#pragma once
#include <string>
namespace ctr
{
	class character
	{
		std::string name;
		int id;
		int age;
		int iq;
		char gender;
	public:
		void getStats(int index_value);
		void printStats();
	};
}


