#pragma once
#include <iostream>

class Bureaucrat {
	public:
		Bureaucrat();
		Bureaucrat(const std::string & name, int grade);
		Bureaucrat(const Bureaucrat & other);
		~Bureaucrat();
		Bureaucrat &operator=(const Bureaucrat & other);
		int getGrade();
		std::string getName();
		void incrementGrade();
		void decrementGrade();
		class GradeTooHighExp : public std::exception {
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowExp : public std::exception {
			public: 
				virtual const char* what() const throw();
		};
	private:
		int grade;
		const std::string name;
};
std::ostream & operator<<(std::ostream & out, Bureaucrat & bureaucrat);
