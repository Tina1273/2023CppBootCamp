#ifndef SHAREPTR_H
#define SHAREPTR_H

template<class T>
class shareptr
{
private:
    T*ptr=nullptr;

public:
    shareptr(T*ptr)
    {
    }
    ~shareptr(){ delete(ptr);}

    T*operator->(){return ptr;}
};

#endif // SHAREPTR_H
