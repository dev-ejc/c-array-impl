#pragma once
#include <stdlib.h>

class Object {
    public:
        size_t hash_;
        Object() {
            hash_ = 0;
        };

        virtual ~Object() {
            delete hash_;
        }

        bool equals(Object *other) {
            return this == other;
        };
        
        size_t hash() {
            if (hash_ == 0) {
                hash_ = hash_me();
                return hash_;
            }
        };

        virtual size_t hash_me() {
            // things that are unsafe
            return reinterpret_cast<size_t>(this);
        };

};