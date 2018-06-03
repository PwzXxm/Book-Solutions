#include <string>

class Account {
public:
    void calc() { amount += amount * interestRate; }
    static double rate() { return interestRate; }
    static void rate(double);

private:
    std::string owner;
    double amount;
    static double interestRate;
    static constexpr int period = 30;
    double daily_tbl[period];
    static double initRate(double);
};

double Account::interestRate = initRate(4.03f);
