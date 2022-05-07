
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreation", 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : 
	Form("ShrubberyCreation", 145, 137) , _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy) : 
	Form("ShrubberyCreation", 145, 137)
{
	*this = copy;	
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& copy)
{
	if (this != &copy)
	{
		this->_target = copy._target;
	}
	return (*this);
}

std::string	ShrubberyCreationForm::getTarget() const
{
	return (_target);
}

void		ShrubberyCreationForm::Action() const
{
	std::ofstream	outfile;
	std::string		file;

	file = getTarget().append("_shrubbery");
	outfile.open(file);
	if (outfile.is_open())
	{
		outfile << "              _{\\ _{\\{\\/}/}/}__\n";
		outfile << "             {/{/\\}{/{/\\}(\\}{/\\} _\n";
		outfile << "            {/{/\\}{/{/\\}(_)\\}{/{/\\}  _\n";
		outfile << "         {\\{/(\\}\\}{/{/\\}\\}{/){/\\}\\} /\\}\n";
		outfile << "        {/{/(_)/}{\\{/)\\}{\\(_){/}/}/}/}\n";
		outfile << "       _{\\{/{/{\\{/{/(_)/}/}/}{\\(/}/}/}\n";
		outfile << "      {/{/{\\{\\{\\(/}{\\{\\/}/}{\\}(_){\\/}\\}\n";
		outfile << "      _{\\{/{\\{/(_)\\}/}{/{/{/\\}\\})\\}{/\\}\n";
		outfile << "     {/{/{\\{\\(/}{/{\\{\\{\\/})/}{\\(_)/}/}\\}\n";
		outfile << "      {\\{\\/}(_){\\{\\{\\/}/}(_){\\/}{\\/}/})/}\n";
		outfile << "       {/{\\{\\/}{/{\\{\\{\\/}/}{\\{\\/}/}\\}(_)\n";
		outfile << "      {/{\\{\\/}{/){\\{\\{\\/}/}{\\{\\(/}/}\\}/}\n";
		outfile << "       {/{\\{\\/}(_){\\{\\{\\(/}/}{\\(_)/}/}\\}\n";
		outfile << "         {/({/{\\{/{\\{\\/}(_){\\/}/}\\}/}(\\}\n";
		outfile << "          (_){/{\\/}{\\{\\/}/}{\\{\\)/}/}(_)\n";
		outfile << "            {/{/{\\{\\/}{/{\\{\\{\\(_)/}\n";
		outfile << "             {/{\\{\\{\\/}/}{\\{\\}/}\n";
		outfile << "              {){/ {\\/}{\\/} \\}\\}\n";
		outfile << "              (_)  \\.-'.-/\n";
		outfile << "          __...--- |'-.-'| --...__\n";
		outfile << "   _...--\"   .-'   |'-.-'|  ' -.  \"\"--..__\n";
		outfile << " -\"    ' .  . '    |.'-._| '  . .  '   \n";
		outfile << " .  '-  '    .--'  | '-.'|    .  '  . '\n";
		outfile << "          ' ..     |'-_.-|\n";
		outfile << "  .  '  .       _.-|-._ -|-._  .  '  .\n";
		outfile << "              .'   |'- .-|   '.\n";
		outfile << "  ..-'   ' .  '.   `-._.-`   .'  '  - .\n";
		outfile << "   .-' '        '-._______.-'     '  .\n";
		outfile << "        .      ~,\n";
		outfile << "    .       .        .    ' '-.\n";
		outfile.close();
		std::cout << "File created successfully!!\n";
	}
	else
		std::cout << "Can't open the file, File doesn't exist or permission denied!!\n";
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}