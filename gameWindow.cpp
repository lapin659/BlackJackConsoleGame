#include "gameWindow.h"

using namespace System;
using namespace System::Windows::Forms;



[STAThread]

void main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	blackJack::gameWindow window;
	Application::Run(% window);




}