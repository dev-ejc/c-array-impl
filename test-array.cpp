//lang::CwC

#include "helper.h"
#include "object.h"
#include "string.h"
#include "array.h"


void test0() {
    Object* o1 = new Object();
    Object* o2 = new Object();
    Array* a1 = new Array();
    Array* a2 = new Array(2);

    check_expect(a1->size() == 0);
    check_expect(a2->size() == 2);

    check_expect(!(a1->equals(a2)));
    check_expect(!(a2->equals(a1)));

    check_expect(a1->get(0) == nullptr);
    check_expect(a2->get(1) == nullptr);

    check_expect(a2->set(0, o1) == nullptr);
    check_expect(a2->set(1, o1) == nullptr);
    check_expect(a2->set(1, o2)->equals(o1));
    check_expect(a2->size() == 2);

    check_expect(a2->get(0)->equals(o1));
    check_expect(a2->get(1)->equals(o2));
    check_expect(a2->size() == 2);

    check_expect(a2->pop_back()->equals(o2));
    check_expect(a2->pop_back()->equals(o1));
    check_expect(a2->size() == 0);

    check_expect(a1->equals(a2));
    check_expect(a2->equals(a1));

    delete a2;

    check_expect(a1->size() == 0);
    a1->push_back(o1);
    check_expect(a1->get(0)->equals(o1));
    check_expect(a1->size() == 1);
    a1->push_back(o2);
    check_expect(a1->size() == 2);
    check_expect(a1->get(1)->equals(o2));

    a1->clear();

    check_expect(o1 == nullptr);
    check_expect(o2 == nullptr);

    Object* o3 = new Object();
    Object* o4 = new Object();
    a1->push_back(o3);
    a1->push_back(o4);

    check_expect(a1->get(0)->equals(o3));
    check_expect(a1->get(1)->equals(o4));

    delete a1;

    check_expect(o3 == nullptr);
    check_expect(o4 == nullptr);
}

void test1() {
    String* s1 = new String("C++");
    String* s2 = new String("makes me sad :(");
    Array* a1 = new Array();
    Array* a2 = new Array(2);

    check_expect(a1->size() == 0);
    check_expect(a2->size() == 2);

    check_expect(!(a1->equals(a2)));
    check_expect(!(a2->equals(a1)));

    check_expect(a1->get(0) == nullptr);
    check_expect(a2->get(1) == nullptr);

    check_expect(a2->set(0, s1) == nullptr);
    check_expect(a2->set(1, s1) == nullptr);
    check_expect(a2->set(1, s2)->equals(s1));
    check_expect(a2->size() == 2);

    check_expect(a2->get(0)->equals(s1));
    check_expect(a2->get(1)->equals(s2));
    check_expect(a2->size() == 2);

    check_expect(a2->pop_back()->equals(s2));
    check_expect(a2->pop_back()->equals(s1));
    check_expect(a2->size() == 0);

    check_expect(a1->equals(a2));
    check_expect(a2->equals(a1));

    delete a2;

    check_expect(a1->size() == 0);
    a1->push_back(s1);
    check_expect(a1->get(0)->equals(s1));
    check_expect(a1->size() == 1);
    a1->push_back(s2);
    check_expect(a1->size() == 2);
    check_expect(a1->get(1)->equals(s2));

    a1->clear();

    check_expect(s1 == nullptr);
    check_expect(s2 == nullptr);

    String* s3 = new String();
    String* s4 = new String();
    a1->push_back(o3);
    a1->push_back(o4);

    check_expect(a1->get(0)->equals(s3));
    check_expect(a1->get(1)->equals(s4));

    delete a1;

    check_expect(s3 == nullptr);
    check_expect(s4 == nullptr);
}

int main(void) {
    test0();
    test1();
    return 0;
}
