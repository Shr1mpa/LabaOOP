#include "MainForm.h"

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <Windows.h>
#include <sstream>
#include <msclr/marshal_cppstd.h>





using namespace std;

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Data::OleDb;


[STAThreadAttribute]

int main(cli::array<String^>^ args) {


	Application::SetCompatibleTextRenderingDefault(false);
	//Application::EnableVisualStyles();
	/*Application::Run(gcnew MainForm);*/
	WinFormsOOP1::MainForm form;
	Application::Run(% form);
	OleDbConnection^ con = gcnew OleDbConnection("Microsoft.ACE.OLEDB.12.0; Data Source=dbus1.mdb");
	OleDbCommand^ cmd = gcnew OleDbCommand();
	OleDbDataAdapter^ da = gcnew OleDbDataAdapter();
	return 0;
}

