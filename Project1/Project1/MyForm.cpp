#include "MyForm.h"
#include <iostream>
#include <ctime>

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

void main(array< String^>^ argv)
{
	srand(time(0));
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project1::MyForm form;
	Application::Run(% form);
}
