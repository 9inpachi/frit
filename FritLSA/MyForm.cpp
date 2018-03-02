/*
Local Search Application with GUI
Visual C++ Project by Fawad Ali (9inpachi)
Made Opensource by me :)
Enjoy
*/
#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;

int main(array<String^>^ args){
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	FritLSA::MyForm form;
	Application::Run(%form);
}