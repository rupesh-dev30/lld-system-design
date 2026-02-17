#ifndef MAC_FACTORY_H
#define MAC_FACTORY_H

#include "GUIFactory.h"
#include "MacButton.h"
#include "MacCheckbox.h"

class MacFactory : public GUIFactory {
public:
    Button* createButton() override {
        return new MacButton();
    }

    Checkbox* createCheckbox() override {
        return new MacCheckbox();
    }
};

#endif
