#include "SymbolTable.h"
template <typename T>
SymbolTable<T>::SymbolTable(T,int size){
    *table = new T[size];
};

template <typename T>
SymbolTable<T>::~SymbolTable(){
    delete [] table;
}

template <typename T>
void SymbolTable<T>::put(){

}

template <typename T>
T SymbolTable<T>::get(){

}

template <typename T>
void SymbolTable<T>::_delete(){

}

template <typename T>
bool SymbolTable<T>::contains(){

}

template <typename T>
bool SymbolTable<T>::isEmpty(){

}

template <typename T>
int SymbolTable<T>::size(){

}