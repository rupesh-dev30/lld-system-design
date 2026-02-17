#ifndef MAC_CHECKBOX_H
#define MAC_CHECKBOX_H

#include "Checkbox.h"
#include <iostream>
using namespace std;

class MacCheckbox : public Checkbox {
public:
    void paint() override {
        cout << "Rendering Mac Checkbox" << endl;
    }
};

#endif
