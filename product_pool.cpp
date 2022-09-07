//
// Created by 伍志强 on 2022/9/7.
//

#include "product_pool.h"
#include <atomic>

template<typename T, size_t SIZE>
product_pool<T, SIZE>::product_pool(): _pool(std::array<T,SIZE>()), _semaphore(SIZE){}

template<typename T, size_t SIZE>
void product_pool<T, SIZE>::produce(const T &&product) {
    while(true) {
        semaphore = this->_semaphore.fetch_add()
    }
}


template<typename T>
T &&product_pool<T>::consume() {
}
