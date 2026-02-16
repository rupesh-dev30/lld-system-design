#ifndef NOTIFICATION_FACTORY_H
#define NOTIFICATION_FACTORY_H

#include "EmailNotification.h"
#include "SMSNotification.h"
#include "PushNotification.h"
#include <string>
using namespace std;

class NotificationFactory {
  public:
    static Notification* createNotification(const string& type) {
      if (type == "EMAIL") {
        return new EmailNotification();
      } else if (type == "SMS") {
        return new SMSNotification();
      } else if (type == "PUSH") {
        return new PushNotification();
      } else {
        return nullptr;
      }
    }
};

#endif