#include <iostream>
#include "IntLinkList.h"
#include "HashMap.h"
#include "Algorithms.h"
using std::cout;

int main()
{  
	HashMap<int> mapping;



	mapping.put(1, 75);

	std::cout << mapping.read(1) << std::endl;

	while (true){}
}