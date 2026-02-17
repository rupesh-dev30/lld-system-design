#ifndef WINDOWS_CHECKBOX_H
#define WINDOWS_CHECKBOX_H

#include "Checkbox.h"
#include <iostream>
using namespace std;

class WindowsCheckbox : public Checkbox {
public:
    void paint() override {
        cout << "Rendering Windows Checkbox" << endl;
    }
};

#endif
