#ifndef RGB_ALGORITHMIC_PROBLEM_INITIALTRIPLESEARCH_H
#define RGB_ALGORITHMIC_PROBLEM_INITIALTRIPLESEARCH_H

#include <vector>
#include <iostream>
#include "rgbAlgorithmUtilites.h"
#include "naiveSorting.h"

using namespace std;


class InitialTripleSearch {

public:
    static Solution sort(const vector<RgbElement> &elements, int maxRgbGroupsAmount);

};


#endif //RGB_ALGORITHMIC_PROBLEM_INITIALTRIPLESEARCH_H
