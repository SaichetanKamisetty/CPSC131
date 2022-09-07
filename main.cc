#include <iostream>
#include <algorithm>
#include <initializer_list>

#include "vector131.h"


int main() {
    vector131<int> v{3, 4, 5, 6};
    vector131<std::string> v2;

    // Push_Back Method

    v.push_back(3);
    v.push_back(5);
    v.push_back(10);
    v.push_back(4);

    v2.push_back("aaa");
    v2.push_back("bbb");
    v2.push_back("ccc");

    v.elements();
    v2.elements();

    std::cout << std::endl;

    // Push_Front Method

    v.push_front(31);
    v.push_front(34);
    v.push_front(12);

    v2.push_front("ddd");
    v2.push_front("eee");
    v2.push_front("fff");

    v.elements();
    v2.elements();

    std::cout << std::endl;

    // Pop_Back Method

    v.pop_back();
    v.pop_back();
    v.pop_back();

    v2.pop_back();
    v2.pop_back();
    v2.pop_back();

    v.elements();
    v2.elements();

    std::cout << std::endl;

    // Resize Method

    v.resize(3);
    v.resize(15);

    v2.resize(1);
    v2.resize(12);

    v.elements();
    v2.elements();

    std::cout << std::endl;

    // Insert Method

    v.insert(13, 420);
    v2.insert(10, "mark");

    v.elements();
    v2.elements();

    std::cout << std::endl;

    // Clear Method

    v.clear();
    v2.clear();

    v.elements();
    v2.elements();

    return 0;
}
