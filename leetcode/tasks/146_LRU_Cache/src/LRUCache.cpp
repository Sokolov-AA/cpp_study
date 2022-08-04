#include "LRUCache.h"

using caches::LRUCache;

LRUCache::LRUCache(int capacity) :
		capacity_(capacity), cache_( { }), hash_( { }) {
}

bool LRUCache::full(){
	return cache_.size() == capacity_;
}

int LRUCache::get(int key) {
	auto hit = hash_.find(key);
	if (hit == hash_.end()) {
		return -1;
	}

	auto eltit = hit->second;
	if (eltit != cache_.begin())
			cache_.splice(cache_.begin(), cache_, eltit, std::next(eltit));

	return eltit->second;
}

void LRUCache::put(int key, int value) {
	auto hit = hash_.find(key);
	if (hit == hash_.end()) {
		if(full()){
			hash_.erase(cache_.back().first);
			cache_.pop_back();
		}

		cache_.push_front(std::pair<int,int>{key, value});
		hash_[key] = cache_.begin();
	} else {
		auto eltit = hit->second;
		if (eltit != cache_.begin())
			cache_.splice(cache_.begin(), cache_, eltit, std::next(eltit));
		*cache_.begin() = std::pair<int,int>{key, value}; 
	}
}
