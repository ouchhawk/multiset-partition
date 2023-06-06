#include <iostream>
#include<cmath>
#include "functions.h"

using namespace std;

int printPartitions(vector<int>& S1,vector<int>& S2){
    cout << "S1:{";
    for(int i=0; i<S1.size();i++){
        cout << S1.at(i) << ",";
    }
    cout << "}" << endl;

    cout << "S2:{";
    for(int i=0; i<S2.size();i++){
        cout << S2.at(i) << ",";
    }
    cout << "}" << endl << endl;
}

int calculateDeviation(vector<int>& S1,vector<int>& S2){
    int sumS1=0, sumS2=0;
    for(int i=0;i<S1.size();i++){
        sumS1+=S1[i];
    }
    for(int i=0;i<S2.size();i++){
        sumS2+=S2[i];
    }
    return abs(sumS1-sumS2);
}

int generateRandomNumberInRange(int startingNumber, int endingNumber){
    int randomNumber = startingNumber + (rand() % (endingNumber-startingNumber));
    return randomNumber;
}

bool doesInclude(vector<int>& list, int item){
    for(int i=0; i<list.size(); i++){
        if(list[i] == item){
            return true;
        }
    }
    return false;
}

void sortVectorList(vector<int>& list, bool isAscending){
    int listSize = list.size(), headIndex=0, i=0, indexToExchange=0, cache=0;

    for(i=0; i< listSize; i++){
        indexToExchange = i;
        cache=list[i];
        for(int j=i; j< listSize; j++){
            if(list[j]<list[indexToExchange] && isAscending){
                indexToExchange=j;
            }
            else if (list[j]>list[indexToExchange] && !isAscending){
                indexToExchange=j;
            }
        }
        cache=list[headIndex];
        list[headIndex]=list[indexToExchange];
        list[indexToExchange]=cache;
        headIndex++;
    }
}

vector<int>& createCardinalitySet(int size){
    int startingNumber = 0, endingNumber = size*100, randomNumber=0;
    vector<int> *cardinalitySet = new vector<int>;

    while(cardinalitySet->size()<size){
        randomNumber= generateRandomNumberInRange(startingNumber,endingNumber);
        if(!doesInclude(*cardinalitySet, randomNumber)){
            cardinalitySet->push_back(randomNumber);
        }
    }
    return *cardinalitySet;
}

vector<int>& populateMultiSet(vector<int> cardinalitySet, int count){
    int randomIndex=0;
    vector<int> *multiset = new vector<int>;

    for(int i=0; i<count; i++){
        randomIndex = generateRandomNumberInRange(0,cardinalitySet.size());
        multiset->push_back(cardinalitySet[randomIndex]);
    }
    return *multiset;
}

long sumList(vector<int> list){
    long summation=0;
    for(int i=0; i<list.size();i++){
        summation+=list.at(i);
    }
    return summation;
}

vector<int> getDifference(vector<int> multiset, vector<int> otherList){
    bool doSkip=false;
    vector<int> S2 = vector<int>();

    for(int i=0; i<multiset.size();i++){
        doSkip= false;
        for(int j=0; j<otherList.size(); j++){
            if(multiset.at(i)==otherList.at(j)){
                doSkip=true;
                break;
            }
        }
        if(doSkip){
            continue;
        } else{
            S2.push_back(multiset.at(i));
        }
    }
    return S2;

}