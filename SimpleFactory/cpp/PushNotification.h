#ifndef PUSH_NOTIFICATION_H
#define PUSH_NOTIFICATION_H

#include "Notification.h"
#include <iostream>
using namespace std;

class PushNotification : public Notification {
  public:
    void send() override {
      cout << "Sending push notification..." << endl;
    }
};

#endif