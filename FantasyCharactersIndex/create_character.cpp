#include <iostream>
#include <string>
#include "character.h"
#include "character_index.h"

using namespace std;
using namespace ctr;

int main() {
	ctr_index::character_index index;
	bool flag = true;
	int count = 0;
	while (flag)
	{
		char i;
		cout << "Would you like to create a character? (y/n):" << endl;
		cin >> i;
		if (i == 'y')
		{
			character temp;
			temp.getStats(count);
			index.add_character(temp);
		}
		else
		{
			flag = false;
		}
		count++;
	}
	cout << "List of characters:" << endl;
	index.list_characters();
}
