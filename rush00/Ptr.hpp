#ifndef Ptr_HPP_
#define Ptr_HPP_

#include <cstddef>

template <class T>
class Ptr {
  public:
    Ptr();
    Ptr(T *ptr);
    Ptr(const Ptr &);
    ~Ptr();
    Ptr<T> &operator=(const Ptr<T> &rhs);
    T *operator->();
    T &operator*();

  private:
    void decrease();
    T *_ptr;
    int *_counter;
};

template <class T>
Ptr<T>::Ptr() : _ptr(nullptr), _counter(nullptr) {
}

template <class T>
Ptr<T>::Ptr(T *ptr) : _ptr(ptr), _counter(new int) {
    *_counter = 1;
}

template <class T>
Ptr<T>::~Ptr() {
    decrease();
}

template <class T>
Ptr<T>::Ptr(const Ptr &rhs) : _ptr(rhs._ptr), _counter(rhs._counter) {
    if (*_counter) {
        *_counter += 1;
    }
}

template <class T>
Ptr<T> &Ptr<T>::operator=(const Ptr<T> &rhs) {
    if (_ptr != rhs._ptr) {
        decrease();
        _ptr = rhs._ptr;
        _counter = rhs._counter;
        if (_counter) {
            *_counter += 1;
        }
    }

    return *this;
}

template <class T>
void Ptr<T>::decrease() {
    if (_counter) {
        *_counter -= 1;
        if (*_counter == 0) {
            if (_ptr) {
                delete _ptr;
            }
            delete _counter;
        }
    }
}

template <class T>
T *Ptr<T>::operator->() {
    return _ptr;
}

template <class T>
T &Ptr<T>::operator*() {
    return *_ptr;
}

#endif  // Ptr_HPP_