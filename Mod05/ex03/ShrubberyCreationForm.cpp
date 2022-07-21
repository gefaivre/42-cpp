#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <iostream>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137)
{
	std::cout << "ShrubberyCreationForm Default Constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : Form("ShrubberyCreationForm", 145, 137)
{
	std::cout << "ShrubberyCreationForm Constructor called" << std::endl;

	this->target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm Destructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &p)
{
	std::cout << "ShrubberyCreationForm Copy Constructor called" << std::endl;
	*this = p;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	this->gradeForSign = other.gradeForSign;
	this->gradeForExec = other.gradeForExec;
	this->isSigned = other.isSigned;
	return (*this);
}

void ShrubberyCreationForm::FormFunction() const
{
	std::string name;

	name = this->target + "_shrubbery";

	std::ofstream outfile(name.c_str());

	outfile << "             _{\\ _{\\{\\/}/}/}__\n\
            {/{/\\}{/{/\\}(\\}{/\\} _\n\
           {/{/\\}{/{/\\}(_)\\}{/{/\\}  _\n\
        {\\{/(\\}\\}{/{/\\}\\}{/){/\\}\\} /\\}\n\
       {/{/(_)/}{\\{/)\\}{\\(_){/}/}/}/}\n\
      _{\\{/{/{\\{/{/(_)/}/}/}{\\(/}/}/}\n\
     {/{/{\\{\\{\\(/}{\\{\\/}/}{\\}(_){\\/}\\}\n\
     _{\\{/{\\{/(_)\\}/}{/{/{/\\}\\})\\}{/\\}\n\
    {/{/{\\{\\(/}{/{\\{\\{\\/})/}{\\(_)/}/}\\}\n\
     {\\{\\/}(_){\\{\\{\\/}/}(_){\\/}{\\/}/})/}\n\
      {/{\\{\\/}{/{\\{\\{\\/}/}{\\{\\/}/}\\}(_)\n\
     {/{\\{\\/}{/){\\{\\{\\/}/}{\\{\\(/}/}\\}/}\n\
      {/{\\{\\/}(_){\\{\\{\\(/}/}{\\(_)/}/}\\}\n\
        {/({/{\\{/{\\{\\/}(_){\\/}/}\\}/}(\\}\n\
         (_){/{\\/}{\\{\\/}/}{\\{\\)/}/}(_)\n\
           {/{/{\\{\\/}{/{\\{\\{\\(_)/}\n\
            {/{\\{\\{\\/}/}{\\{\\}/}\n\
             {){/ {\\/}{\\/} \\}\\}\n\
             (_)  \\.-'.-/\n\
         __...--- |'-.-'| --...__\n\
  _...--    .    |'-.-'|  ' -.    --..__\n\
-       .  .      |.'-._| '  . .  '   \n\
.  '-  '    .--'  | '-.'|    .  '  . '\n\
         ' ..     |'-_.-|\n\
 .  '  .       _.-|-._ -|-._  .  '  .\n\
             .'   |'- .-|   '.\n\
 ..-'   ' .  '.   `-._.-    .'  '  - .\n\
  .-' '        '-._______.-'     '  .\n\
       .      ~,\n\
   .       .   |\\   .    ' '-.\n\
   ___________/  \\____________\n\
  /  Why is it, when you want \\\n\
 |  something, it is so damn   |\n\
 |    much work to get it?     |\n\
  \\___________________________/" << std::endl;

	outfile.close();
}
