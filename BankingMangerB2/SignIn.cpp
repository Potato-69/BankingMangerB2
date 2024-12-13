#include "SignIn.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main() {

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	BankingMangerB2::SignIn form;


	Application::Run(% form);
}
