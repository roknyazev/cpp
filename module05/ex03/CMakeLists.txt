cmake_minimum_required(VERSION 3.19)
project(ex03)

set(CMAKE_CXX_STANDARD 98)

add_executable(ex01 main.cpp Form.cpp Form.hpp Bureaucrat.hpp Bureaucrat.cpp ShrubberyCreationForm.cpp ShrubberyCreationForm.hpp RobotomyRequestForm.cpp RobotomyRequestForm.hpp PresidentialPardonForm.cpp PresidentialPardonForm.hpp Intern.cpp Intern.hpp)