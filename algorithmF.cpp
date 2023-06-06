#include "functions.h"

using namespace std;

int functionF(vector<int> multiset, bool doPrint){
    vector<int> *copiedMultiset = new vector<int>;
    for(int index=0; index<multiset.size();index++){
        copiedMultiset->push_back(multiset[index]);
    }
    sortVectorList(*copiedMultiset,true);
    return functionD(*copiedMultiset, doPrint);
}