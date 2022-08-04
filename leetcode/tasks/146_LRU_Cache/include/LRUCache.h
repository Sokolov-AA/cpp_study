#ifndef LRU_Cache_H_
#define LRU_Cache_H_
#include <iostream>

#include <unordered_map>
#include <list>
#include <utility>

namespace caches {

class LRUCache {
	int capacity_;

	std::list<std::pair<int, int>> cache_;
	std::unordered_map<int, std::list<std::pair<int, int>>::iterator> hash_;

	bool full();
public:
	LRUCache(int capacity);
	int get(int key);
	void put(int key, int value);
};

}


#endif
