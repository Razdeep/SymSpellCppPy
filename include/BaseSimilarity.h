//
// Created by vigi99 on 25/09/20.
//

#pragma once

#include "iostream"
#include "Defines.h"

class BaseSimilarity {
public:
    virtual double Similarity(const xstring& string1, const xstring& string2) = 0;

    virtual double Similarity(const xstring& string1, const xstring& string2, double minSimilarity) = 0;
};
