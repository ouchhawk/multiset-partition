#include "functions.h"

void compareWithExample(){
    srand ( time(0) );
    vector<int> cardinalitySet = createCardinalitySet(4);
    vector<int> *multiset = new vector<int>;

    multiset->push_back(314);
    multiset->push_back(10);
    multiset->push_back(425);
    multiset->push_back(202);
    multiset->push_back(22);
    multiset->push_back(54);
    multiset->push_back(198);
    multiset->push_back(101);

    std::cout << "After function A: " << endl;
    functionA(*multiset, true);
    std::cout << "After function B: " << std::endl;
    functionB(*multiset, true);
    std::cout << "After function C: " << std::endl;
    functionC(*multiset, true);
    std::cout << "After function D: " << std::endl;
    functionD(*multiset, true);
    std::cout << "After function E: " << std::endl;
    functionE(*multiset, true);
    std::cout << "After function F: " << std::endl;
    functionF(*multiset, true);
    std::cout << "After function G: " << std::endl;
    functionG(*multiset, true);
    std::cout << "After function H: " << std::endl;
    functionH(*multiset, true);
}