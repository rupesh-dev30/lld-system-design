package com.rupesh.notification;

public class EmailNotification implements Notification {

    @Override
    public void send() {
        System.out.println("Sending EMAIL notification");
    }

}
