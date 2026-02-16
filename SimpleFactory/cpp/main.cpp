#include "NotificationFactory.h"

int main() {
    Notification* notification;

    notification = NotificationFactory::createNotification("EMAIL");
    notification->send();

    notification = NotificationFactory::createNotification("SMS");
    notification->send();

    notification = NotificationFactory::createNotification("PUSH");
    notification->send();

    return 0;
}
