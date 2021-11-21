#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;
		

void	_displayTimesstamp( void ) {
	std::time_t t = std::time(0);
	struct tm * now = localtime( & t );
	std::cout << '[' << (now->tm_year + 1900)
	<< std::setw(2) << std::setfill('0') << (now->tm_mon + 1)
	<< std::setw(2) << std::setfill('0') << now->tm_mday
	<< '_'
	<< std::setw(2) << std::setfill('0') << now->tm_hour
	<< std::setw(2) << std::setfill('0') << now->tm_min
	<< std::setw(2) << std::setfill('0') << now->tm_sec << ']';
}

int  Account::getNbAccounts( void ) {
	return Account::_nbAccounts;
}
int  Account::getTotalAmount( void ) {
	return _totalAmount;
}
int  Account::getNbDeposits( void ) {
	return _totalNbDeposits;		
}
int  Account::getNbWithdrawals( void ) {
	return _totalNbWithdrawals;
}
Account::Account(int initial_deposit) {
	_amount = initial_deposit;
	_accountIndex = _nbAccounts; 
	_totalAmount += initial_deposit;
	_displayTimesstamp();
	std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl; 
	_nbAccounts++;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
}
Account::~Account(void){
	_displayTimesstamp();
	std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl; 
}
void	Account::makeDeposit(int deposit) {
	int tmp = _amount;
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits++;
	_displayTimesstamp();
	std::cout << " index:" << _accountIndex << ";p_amount:" << tmp <<
		";deposit:" << deposit << ";amount:" << _amount<< ";nb_deposits:" << _nbDeposits << std::endl;
	_totalNbDeposits++;
}
bool	Account::makeWithdrawal( int withdrawal ) {
	if (_amount < withdrawal) {
		_displayTimesstamp();
		std::cout << " index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:refused" << std::endl;
		return 0;
	}
	int tmp = _amount;
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	_nbWithdrawals++;
	_displayTimesstamp();
	std::cout << " index:" << _accountIndex << ";p_amount:" << tmp << ";withdrawal:" 
		<< withdrawal << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	_totalNbWithdrawals++;
	return 1;
}
void	Account::displayStatus( void ) const {
	_displayTimesstamp();
	std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";deposits:"
		<< _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;	
}
void Account::displayAccountsInfos( void ) {
	_displayTimesstamp();
	std::cout << " accounts:" << getNbAccounts() << ';'
		<< "total:"<< getTotalAmount() << ';'
		<< "deposits:" << getNbDeposits() << ';'
		<< "withdrawals:" << getNbWithdrawals() << std::endl;
}
