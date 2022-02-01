#include "Bureaucrat.hpp"

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat() : name("noname") {
	grade = 111;
}
Bureaucrat::Bureaucrat(const Bureaucrat & other) {
	*this = other;
}

Bureaucrat::Bureaucrat(const std::string & name, int grade) : name(name){
	if (grade > 150)
		throw GradeTooHighExp();
	else if (grade < 1)
		throw GradeTooLowExp();
	this->grade = grade;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
	this->grade = other.grade;
	return *this;
}

int Bureaucrat::getGrade() {
	return grade;
}

std::string Bureaucrat::getName() {
	return name;
}

void	Bureaucrat::incrementGrade() {
	if (grade == 149)
		throw GradeTooHighExp();
	grade++;
}

void	Bureaucrat::decrementGrade() {
	if (grade == 1)
		throw GradeTooLowExp();
	grade--;
}

const char* Bureaucrat::GradeTooHighExp::what() const throw() {
	return "grade is too high";
}

const char* Bureaucrat::GradeTooLowExp::what() const throw() {
	return "grade is too low";
}

std::ostream & operator<<(std::ostream & out, Bureaucrat & bureaucrat) {
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".";
	return out;
}
