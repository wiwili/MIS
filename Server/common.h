#ifndef COMMON_H_
#define COMMON_H_


#include <iostream>
#include <fstream>
#include <string>
#include <strings.h>
#include <vector>
#include <cmath>
#include <algorithm>
#include <typeinfo>
#include <cstdint>
#include <array>
#include <iterator>
#include <map>
#include <sstream>
#include <cstdlib>
#include <sstream>
#include <stdlib.h> 
#include <cstring>
#include <thread>
#include <chrono> 
#include <cstdio>

using namespace std;


struct ignorecase { 
    bool operator() (const std::string& lhs, const std::string& rhs) const {
        return strcasecmp(lhs.c_str(), rhs.c_str()) < 0;
    }
};

#endif // COMMON_H_
