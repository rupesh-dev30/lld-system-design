#ifndef NOTIFICATION_H
#define NOTIFICATION_H

class Notification {
  public:
    virtual void send() = 0;
    virtual ~Notification() = default;
};

#endif