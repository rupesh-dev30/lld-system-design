#ifndef EMAIL_NOTIFICATION_H
#define EMAIL_NOTIFICATION_H

#include "Notification.h"
#include <iostream>
using namespace std;

class EmailNotification : public Notification {
  public:
    void send() override {
      cout << "Sending email notification..." << endl;
    }
};

#endif