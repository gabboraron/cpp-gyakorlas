#ifndef arrapp_H
#include <algorithm>
#include <list>
#include <vector>
#include <array>

template<typename T>
class array_appender {
public:
    array_appender(T* array, size_t size) {
        append(array, size);
    }

    void append(T* array, size_t size) {
        for( int idx = 0; idx < size; ++idx)
        //for(auto it = array.begin(); it != array.end(); ++it)
        {
            //std::cout << "value of array: " << array[idx] << std::endl;
            //std::cout << "value of array: " << it << std::endl;
            data.push_back(array[idx]);
            //data.push_back(it);
        }
    }

    T at(size_t index) const {
        return data[index];
    }

    size_t size() {
        return data.size();
    }

    const size_t size() const {
        return data.size();
    }

private:
    std::vector<T> data;
};

/*
template <typename T>
T const& array_appender (std::vector <T const&> v, T const& size) {
   std::vector<T*> vec [size]= {};
    for( int idx = 0; idx < size; ++idx)
    {
        std::cout << "value of v: " << v[idx] << std::endl;
        vec.add(v[idx]);
    }
   return vec;
}*/


//template<class T>
//class {
//
//};
#endif // arrapp_H
