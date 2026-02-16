package com.rupesh.main;

import com.rupesh.factory.NotificationFactory;
import com.rupesh.notification.Notification;

public class Main {

    public static void main(String[] args) {

        Notification email = NotificationFactory.createNotification("EMAIL");
        email.send();

        Notification sms = NotificationFactory.createNotification("SMS");
        sms.send();

        Notification push = NotificationFactory.createNotification("PUSH");
        push.send();

    }

}
