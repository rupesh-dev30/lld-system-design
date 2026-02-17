#ifndef WINDOWS_BUTTON_H
#define WINDOWS_BUTTON_H

#include "Button.h"
#include <iostream>
using namespace std;

class WindowsButton : public Button {
public:
    void paint() override {
        cout << "Rendering Windows Button" << endl;
    }
};

#endif
