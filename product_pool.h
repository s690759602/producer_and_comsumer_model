//
// Created by 伍志强 on 2022/9/7.
//

#ifndef PRODUCER_CONSUMER_PRODUCT_POOL_H
#define PRODUCER_CONSUMER_PRODUCT_POOL_H

#include <memory>
template<typename T,size_t SIZE>
class product_pool {
private:
    std::atomic<std::size_t> _semaphore;
    std::array<T,SIZE> _pool;
public:
    explicit product_pool();
    void produce(const T&& product);
    T&& consume();

};



template<typename T, size_t SIZE>
product_pool<T, SIZE>::product_pool(size_t size) {

}


#endif //PRODUCER_CONSUMER_PRODUCT_POOL_H
