#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;
void main(cli::array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	WorldeSol::MainForm form;
	Application::Run(% form);
}

