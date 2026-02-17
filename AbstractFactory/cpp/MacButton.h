#ifndef MAC_BUTTON_H
#define MAC_BUTTON_H

#include "Button.h"
#include <iostream>
using namespace std;

class MacButton : public Button {
public:
    void paint() override {
        cout << "Rendering Mac Button" << endl;
    }
};

#endif
