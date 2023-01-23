#include "Bureaucrat.hpp"

//				FORM FUNCTIONS

std::string Form::getName() const {
	return name;
}

bool Form::getIsSigned() const {
	return isSigned;
}

int Form::getSigningGrade() const {
	return signingGrade;
}

int Form::getExecutionGrade() const {
	return executionGrade;
}

void Form::beSigned(Bureaucrat &bureaucrat) {
		if (bureaucrat.getGrade() > signingGrade)
			throw GradeTooLowException();
		isSigned = true;
	}

//			OVERLOAD OF << OPERATOR

std::ostream& operator<<(std::ostream& stream, Form const &form) {
	stream << "Form: " << form.name << std::endl;
	stream << "Signed: " << std::boolalpha << form.isSigned << std::endl;
	stream << "Signing Grade: " << form.signingGrade << std::endl;
	stream << "Execution Grade: " << form.executionGrade;
	return stream;
}
