#include <string>

class Account {
	public:
		void calcuate() { amout += amount * interestRate; }
		static double rate() { return interestRate; }
		static void rate(double newRate) { interestRate = newRate; }

	private:
		std::string owner;
		double amount;
		static double interestRate;
		static constexpr double todayRate = 42.42;
		static double initRate() { return todayRate; }
};

double Account::interestRate = initRate();
