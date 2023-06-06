#include "functions.h"

using namespace std;

int functionB(vector<int>& multiset, bool doPrint){
    int deviation=0;
    vector<int> *S1 = new vector<int>;
    vector<int> *S2 = new vector<int>;
    vector<int> *copiedMultiset = new vector<int>;

    for(int index=0; index<multiset.size();index++){
        copiedMultiset->push_back(multiset[index]);
    }
    for(int index=0; index<copiedMultiset->size();index++){
        if(index%2 == 0){
            S1->push_back(copiedMultiset->at(index));
        }
        else{
            S2->push_back(copiedMultiset->at(index));
        }
    }
    deviation = calculateDeviation(*S1,*S2);
    if(doPrint)
        printPartitions(*S1,*S2);
    free(S1);
    free(S2);
    free(copiedMultiset);
    return deviation;
}