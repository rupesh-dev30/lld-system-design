#ifndef SMS_NOTIFICATION_H
#define SMS_NOTIFICATION_H

#include "Notification.h"
#include <iostream>
using namespace std;

class SMSNotification : public Notification {
  public:
    void send() override {
      cout << "Sending SMS notification..." << endl;
    }
};

#endif