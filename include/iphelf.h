#ifndef IPHELF_H
#define IPHELF_H

#include <memory>

using std::shared_ptr;
template<class T> using P = shared_ptr<T>;
using std::make_shared;
#define mP make_shared
using std::dynamic_pointer_cast;
#define castP dynamic_pointer_cast

template<class V>
V enums() {
    V _enums;
    typedef typename V::value_type T;
    for (int i = 0, up = int(T::Undefined); i < up; i++)
        _enums.push_back(T(i));
    return _enums;
}

template <typename T> using In = T;
template <typename T> using Out = T;

#endif //IPHELF_H
