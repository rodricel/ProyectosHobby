#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;
void main() {
	Application::EnableVisualStyles();
	Application::Run(gcnew(payday2level::MyForm));
}