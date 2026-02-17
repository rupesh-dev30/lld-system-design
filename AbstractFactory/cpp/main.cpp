#include "WindowsFactory.h"
#include "MacFactory.h"

int main() {

    GUIFactory* factory;

    string os = "Windows"; // change to Mac

    if (os == "Windows") {
        factory = new WindowsFactory();
    } else {
        factory = new MacFactory();
    }

    Button* button = factory->createButton();
    Checkbox* checkbox = factory->createCheckbox();

    button->paint();
    checkbox->paint();

    delete button;
    delete checkbox;
    delete factory;

    return 0;
}
