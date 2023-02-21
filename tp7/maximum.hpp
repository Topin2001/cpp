#ifndef __MAXIMUM_HPP__
#define __MAXIMUM_HPP__

template<typename T>
const T& maximum(const T& a,const T & b) {
    return ((a > b) ? a : b);
}


#endif