#ifndef SETS_H
#define SETS_H

#include <string>

namespace set {
    // Length of each array
    const int GAMMA_LENGTH = 26;
    const int DELTA_LENGTH = 1;
    const int PHI_LENGTH = 1;
    const int SIGMA_LENGTH = GAMMA_LENGTH + DELTA_LENGTH + PHI_LENGTH;

    // Set of lower-case Roman letters
    std::string GAMMA[GAMMA_LENGTH] = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"};

    // Set of a period
    std::string DELTA[DELTA_LENGTH] = {"."};

    // Set of an at symbol
    std::string PHI[PHI_LENGTH] = {"@"};

    // Set of all available letters
    std::string SIGMA[SIGMA_LENGTH];
}
#endif
