#include <iostream>
#include "AutoControl.h"

int main(){
    SSModel testmodel;
    float x[6] =  {1, 2, 3, 4, 5, 6};
    testmodel.AssignX(x);
    return 0;
}