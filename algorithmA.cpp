#include "functions.h"

using namespace std;

int functionA(vector<int> multiset, bool doPrint){
    int middleIndex = multiset.size()/2, index=0, deviation=0;
    vector<int> *S1 = new vector<int>;
    vector<int> *S2 = new vector<int>;

    for(index=0; index<middleIndex;index++){
        S1->push_back(multiset[index]);
    }
    for(index; index<multiset.size();index++){
        S2->push_back(multiset[index]);
    }
    deviation = calculateDeviation(*S1,*S2);
    if(doPrint)
        printPartitions(*S1,*S2);
    free(S1);
    free(S2);
    return deviation;
}