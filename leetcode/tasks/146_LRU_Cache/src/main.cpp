#include "LRUCache.h"

#include <iostream>

int main(int argc, char *argv[]) {
	using caches::LRUCache;

	LRUCache* obj = new LRUCache(2);
	obj->put(1, 2);
	obj->put(2, 3);
	obj->put(1, 4);
	int g1 = obj->get(1);
	std::cout << (g1 == 4 ? "Ok" : "Error") << "\n";
	return 0;
}
