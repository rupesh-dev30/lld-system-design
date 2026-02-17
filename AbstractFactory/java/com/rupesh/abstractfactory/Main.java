package com.rupesh.abstractfactory;

public class Main {

    public static void main(String[] args) {

        GUIFactory factory;

        String os = "Windows"; // change to Mac

        if (os.equals("Windows")) {
            factory = new WindowsFactory();
        } else {
            factory = new MacFactory();
        }

        Button button = factory.createButton();
        Checkbox checkbox = factory.createCheckbox();

        button.paint();
        checkbox.paint();

    }

}
