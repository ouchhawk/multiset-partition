#include "functions.h"

using namespace std;

int functionD(vector<int> multiset, bool doPrint){
    int deviation=0, sum1=0, sum2=0;
    vector<int> *S1 = new vector<int>;
    vector<int> *S2 = new vector<int>;
    vector<int> *copiedMultiset = new vector<int>;
    for(int index=0; index<multiset.size();index++){
        copiedMultiset->push_back(multiset[index]);
    }
    S1->push_back(copiedMultiset->at(0));
    sum1+=copiedMultiset->at(0);
    S2->push_back(copiedMultiset->at(1));
    sum2+=copiedMultiset->at(1);
    for(int index=2; index<copiedMultiset->size();index++){
        if(sum1 < sum2){
            S1->push_back(copiedMultiset->at(index));
            sum1+=copiedMultiset->at(index);
        }
        else{
            S2->push_back(copiedMultiset->at(index));
            sum2+=copiedMultiset->at(index);
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