#ifndef WINDOWS_FACTORY_H
#define WINDOWS_FACTORY_H

#include "GUIFactory.h"
#include "WindowsButton.h"
#include "WindowsCheckbox.h"

class WindowsFactory : public GUIFactory {
public:
    Button* createButton() override {
        return new WindowsButton();
    }

    Checkbox* createCheckbox() override {
        return new WindowsCheckbox();
    }
};

#endif
