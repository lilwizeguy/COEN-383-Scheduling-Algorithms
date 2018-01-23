//
// Carlos Rivera
// rand.h
//
// Interface for processes information generation

#ifndef TOOLS_H
#define TOOLS_H

#include "process.h"
#include <vector>

using namespace std;

namespace generate {


	vector<Process *> generateProcessList();
	Process *generateNewProcess();
    

    float arrivalTime();
    float runTime();
    int priority();

}

#endif /* TOOLS_H */
