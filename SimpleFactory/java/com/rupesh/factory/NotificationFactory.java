package com.rupesh.factory;

import com.rupesh.notification.EmailNotification;
import com.rupesh.notification.Notification;
import com.rupesh.notification.PushNotification;
import com.rupesh.notification.SMSNotification;

public class NotificationFactory {

    public static Notification createNotification(String type) {

        if (type.equalsIgnoreCase("EMAIL")) {
            return new EmailNotification();
        }

        else if (type.equalsIgnoreCase("SMS")) {
            return new SMSNotification();
        }

        else if (type.equalsIgnoreCase("PUSH")) {
            return new PushNotification();
        }

        throw new IllegalArgumentException("Invalid notification type");
    }
}
