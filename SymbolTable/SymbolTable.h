#ifndef SymbolTable_H
#define SymbolTable_H

template <typename T>
class SymbolTable
{
private:
    T *table;
public:
    SymbolTable(T,int size);
    ~SymbolTable();
    void put();
    T get();
    void _delete();
    bool contains();
    bool isEmpty();
    int size();
};

#endif