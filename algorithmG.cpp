#include "functions.h"

using namespace std;

int functionG(vector<int> multiset, bool doPrint){
    vector<int> *copiedMultiset = new vector<int>;
    for(int index=0; index<multiset.size();index++){
        copiedMultiset->push_back(multiset[index]);
    }
    sortVectorList(*copiedMultiset,false);
    return functionD(*copiedMultiset, doPrint);
}