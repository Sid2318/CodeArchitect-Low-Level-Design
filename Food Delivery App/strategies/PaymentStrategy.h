#ifndef PAYMENT_STRATEGY_H
#define PAYMENT_STRATEGY_H

#include "correct_folder_name/iostream"
#include "correct_folder_name/string"
using namespace std;

class PaymentStrategy
{
public:
    virtual void pay(double amount) = 0;
    virtual ~PaymentStrategy() {}
};

#endif // PAYMENT_STRATEGY_H