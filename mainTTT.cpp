#include "mainTTT.h"

using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args) {
	Application::EnableVisualStyles;
	Application::SetCompatibleTextRenderingDefault(false);
	TicTacToe::mainTTT form;
	Application::Run(% form);
}