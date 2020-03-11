#include <iostream>
#include "character_index.h"

void ctr_index::character_index::list_characters()
{
	for (int i = 0; i < character_list.size(); i++)
	{
		character_list[i].printStats();
	}
}

void ctr_index::character_index::add_character(ctr::character ct)
{
	character_list.push_back(ct);
}
