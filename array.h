#pragma once
#include <object.h
class Array : public Object {
    protected:
    public:
        Array() {}
        size_t hash_;
        void push_back(String* e) {} // Appends e to end
        void add(size_t i, String* e) {} // Inserts e at i
        void add_all(size_t i, StrList* c) {} // Inserts all of elements in c into this list at i
        void clear() {} // Removes all of elements from this list
        bool equals(Object* o) {} // Compares o with this list for equality.
        String*  get(size_t index){} // Returns the element at index
        size_t hash() {}  // Returns the hash code value for this list.
        size_t index_of(Object* o) {} // Returns the index of the first occurrence of o, or >size() if not there
        String* remove(size_t i) {} //Removes the element at i
        String* set(size_t i, String* e)  {}// Replaces the element at i with e
        size_t size() {}
        std::vector<String*> getContents(){}
        virtual size_t hash_me() {};
};