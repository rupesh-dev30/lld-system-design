#ifndef GUI_FACTORY_H
#define GUI_FACTORY_H

#include "Button.h"
#include "Checkbox.h"

class GUIFactory {
public:
    virtual Button* createButton() = 0;
    virtual Checkbox* createCheckbox() = 0;
    virtual ~GUIFactory() {}
};

#endif
