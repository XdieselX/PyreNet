//
// Created by Poppro on 12/3/2019.
//

#include "Step.h"

const double Step::activate(double input) {
    return (input >= 0) ? 1 : 0;
}
