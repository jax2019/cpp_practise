//
// Created by  on 2020/10/8.
//

#include "JD.h"

JD::JD() {
    rank = 100;
}

JD::JD(int rank) {
    this->rank = rank;
}


void JD::setRank(int rank) {
    this->rank = rank;
}

int JD::getRank() {
    return rank;
}

