#pragma once
#include <vector>
#include "character.h"
namespace ctr_index
{
	class character_index
	{
		std::vector <ctr::character> character_list;
	public:
		void list_characters();
		void add_character(ctr::character ct);
	};
}


