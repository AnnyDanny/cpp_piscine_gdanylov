#ifndef Array_HPP_
#define Array_HPP_

template <class T>
class Array {
  public:
    Array();

    void push(const T &e);
    int size();
    void erase(int ind);
    T &operator[](int ind);

  private:
    int _size;
    int _cur;
    T *_arr;
};

template <class T>
Array<T>::Array() : _size(10), _cur(0), _arr(new T[_size]) {
}

template <class T>
void Array<T>::push(const T &e) {
    if (_cur >= _size) {
        _size += 10;
        T *newArr = new T[_size];
        for (int i = 0; i < _cur; i++) {
            newArr[i] = _arr[i];
        }
        T *tmp = _arr;
        _arr = newArr;
        delete[] tmp;
    }
    _arr[_cur] = e;
    _cur++;
}

template <class T>
int Array<T>::size() {
    return _cur;
}

template <class T>
void Array<T>::erase(int ind) {
    if (ind >= _cur || ind < 0) {
        return;
    }
    _cur--;
    for (int i = ind; i < _cur; i++) {
        _arr[i] = _arr[i + 1];
    }
}

template <class T>
T &Array<T>::operator[](int ind) {
    return _arr[ind];
}

#endif  // Array_HPP_
