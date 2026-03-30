#include <iostream>

template<typename T>

class myVector
{
    T* ptr; 

    size_t vectorSize; // capacity
    size_t vectorElements; // number of stored elements

public:
    myVector()
    {
        ptr = new T[1];
        vectorSize = 1;
        vectorElements = 0;
    }

    ~myVector(){
        delete[] ptr;
    }

    void add(T arg)
    {
        if(vectorSize==vectorElements)
        {
            T* temp = new T[vectorSize+1];

            for(size_t i=0; i<vectorSize; i++)
            {
                temp[i] = ptr[i];
            }

            delete[] ptr;
            vectorSize++;
            ptr = temp;
        }

        ptr[vectorElements] = arg;
        vectorElements++;
    }

    void showAll()
    {
        for(size_t i=0; i<vectorElements; i++)
        {
            std::cout<<ptr[i]<<" ";
        }
    }

    T& firstElement()
    {
        return ptr[0];
    }

    T& lastElement()
    {
        return ptr[vectorElements-1];
    }

    T& element(size_t index)
    {
        return ptr[index];
    }

    template<typename... Args>
    void addMany(T a, Args... args) {
      add(a);
      addMany(args...);
    }
    void addMany(T a) {
      add(a);
    }

    size_t returnSize()
    {
        return vectorElements;
    }


    int lastIndex()
    {
        return vectorElements == 0 ? -1 : (int)(vectorElements-1);
    }

    void resetAll()
    {
        delete[] ptr;
        ptr = new T[1];
        vectorSize = 1;
        vectorElements = 0;
    }

    void removeLast()
    {
        if(vectorElements>0){
            vectorElements--;
            if(vectorSize > 1){
                T* temp = new T[vectorSize-1];
                for(size_t i = 0; i<vectorElements; i++){
                    temp[i] = ptr[i];
                }
                delete[] ptr;
                ptr = temp;
                vectorSize--;
            }
        }
    }

};