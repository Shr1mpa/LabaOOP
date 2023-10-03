#pragma once
#include "Country.h"
#include "Tour.h"
#include "Tourist.h"
#include "TourAgency.h"
#include <msclr/marshal_cppstd.h>
#include <Windows.h>
namespace WinFormsOOP1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	using namespace System::Windows::Forms;
	using namespace System::Runtime::InteropServices;

	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			SetConsoleCP(1251);
			SetConsoleOutputCP(1251);
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;

	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(56, 160);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(117, 64);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Турист";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(226, 165);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(131, 54);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Турагенція";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(100, 6);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(100, 48);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 3;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(100, 97);
			this->textBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 4;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(100, 145);
			this->textBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 5;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(100, 194);
			this->textBox5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 22);
			this->textBox5->TabIndex = 6;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(5, 10);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 16);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Ім\'я";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(5, 55);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(69, 16);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Прізвище";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(5, 105);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(26, 16);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Вік";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(5, 150);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(58, 16);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Бюджет";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(5, 203);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(92, 16);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Страхування";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button3->Location = System::Drawing::Point(244, 12);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(211, 32);
			this->button3->TabIndex = 12;
			this->button3->Text = L"Переглянути доступні тури";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MainForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button4->Location = System::Drawing::Point(244, 63);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(181, 33);
			this->button4->TabIndex = 13;
			this->button4->Text = L"Забронювати подорож";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MainForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button5->Location = System::Drawing::Point(244, 106);
			this->button5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(236, 33);
			this->button5->TabIndex = 14;
			this->button5->Text = L"Зателефонувати турагенству";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MainForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button6->Location = System::Drawing::Point(244, 150);
			this->button6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(223, 31);
			this->button6->TabIndex = 15;
			this->button6->Text = L"Повернутись до вибору класу";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MainForm::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::PapayaWhip;
			this->button7->Location = System::Drawing::Point(28, 6);
			this->button7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(211, 33);
			this->button7->TabIndex = 16;
			this->button7->Text = L"Перевірити клієнта в базі";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MainForm::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::PapayaWhip;
			this->button8->Location = System::Drawing::Point(28, 46);
			this->button8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(133, 34);
			this->button8->TabIndex = 17;
			this->button8->Text = L"Додати тур";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MainForm::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::PapayaWhip;
			this->button9->Location = System::Drawing::Point(28, 85);
			this->button9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(211, 37);
			this->button9->TabIndex = 18;
			this->button9->Text = L"Переглянути доступні тури";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MainForm::button9_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::PapayaWhip;
			this->button11->Location = System::Drawing::Point(28, 132);
			this->button11->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(267, 36);
			this->button11->TabIndex = 20;
			this->button11->Text = L"Переглянути список клієнтів";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MainForm::button11_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::PapayaWhip;
			this->button12->Location = System::Drawing::Point(28, 184);
			this->button12->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(267, 33);
			this->button12->TabIndex = 21;
			this->button12->Text = L"Повернутись до вибору класу";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MainForm::button12_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(69, 38);
			this->textBox6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(144, 22);
			this->textBox6->TabIndex = 22;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(69, 85);
			this->textBox7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(144, 22);
			this->textBox7->TabIndex = 23;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(349, 38);
			this->textBox8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(144, 22);
			this->textBox8->TabIndex = 24;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(349, 80);
			this->textBox9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(144, 22);
			this->textBox9->TabIndex = 25;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(349, 127);
			this->textBox10->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(144, 22);
			this->textBox10->TabIndex = 26;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(349, 165);
			this->textBox11->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(144, 22);
			this->textBox11->TabIndex = 27;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(349, 206);
			this->textBox12->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(144, 22);
			this->textBox12->TabIndex = 28;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(20, 44);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(49, 16);
			this->label6->TabIndex = 29;
			this->label6->Text = L"Назва";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(20, 91);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(35, 16);
			this->label7->TabIndex = 30;
			this->label7->Text = L"Ціна";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(245, 41);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(94, 16);
			this->label8->TabIndex = 31;
			this->label8->Text = L"Назва країни";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(245, 89);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(62, 16);
			this->label9->TabIndex = 32;
			this->label9->Text = L"Столиця";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(245, 126);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(42, 16);
			this->label10->TabIndex = 33;
			this->label10->Text = L"Мова";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(245, 171);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(79, 16);
			this->label11->TabIndex = 34;
			this->label11->Text = L"Населення";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(245, 213);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(57, 16);
			this->label12->TabIndex = 35;
			this->label12->Text = L"Валюта";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button15);
			this->panel1->Controls->Add(this->button13);
			this->panel1->Controls->Add(this->textBox6);
			this->panel1->Controls->Add(this->label12);
			this->panel1->Controls->Add(this->textBox7);
			this->panel1->Controls->Add(this->label11);
			this->panel1->Controls->Add(this->textBox8);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->textBox9);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->textBox10);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->textBox11);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->textBox12);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Location = System::Drawing::Point(13, 30);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(495, 330);
			this->panel1->TabIndex = 36;
			this->panel1->Visible = false;
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(24, 289);
			this->button15->Margin = System::Windows::Forms::Padding(4);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(100, 28);
			this->button15->TabIndex = 37;
			this->button15->Text = L"Назад";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MainForm::button15_Click);
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->label15);
			this->panel3->Controls->Add(this->button14);
			this->panel3->Controls->Add(this->label13);
			this->panel3->Controls->Add(this->button3);
			this->panel3->Controls->Add(this->button4);
			this->panel3->Controls->Add(this->button5);
			this->panel3->Controls->Add(this->button6);
			this->panel3->Controls->Add(this->label5);
			this->panel3->Controls->Add(this->textBox1);
			this->panel3->Controls->Add(this->label4);
			this->panel3->Controls->Add(this->textBox2);
			this->panel3->Controls->Add(this->label3);
			this->panel3->Controls->Add(this->textBox3);
			this->panel3->Controls->Add(this->textBox13);
			this->panel3->Controls->Add(this->textBox4);
			this->panel3->Controls->Add(this->label2);
			this->panel3->Controls->Add(this->textBox5);
			this->panel3->Controls->Add(this->label1);
			this->panel3->Location = System::Drawing::Point(13, 30);
			this->panel3->Margin = System::Windows::Forms::Padding(4);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(735, 382);
			this->panel3->TabIndex = 39;
			this->panel3->Visible = false;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::panel3_Paint);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->Location = System::Drawing::Point(45, 260);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(92, 29);
			this->label15->TabIndex = 40;
			this->label15->Text = L"label15";
			this->label15->Visible = false;
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(544, 68);
			this->button14->Margin = System::Windows::Forms::Padding(4);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(149, 28);
			this->button14->TabIndex = 39;
			this->button14->Text = L"Зарезервувати";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Visible = false;
			this->button14->Click += gcnew System::EventHandler(this, &MainForm::button14_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(293, 345);
			this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(93, 29);
			this->label13->TabIndex = 38;
			this->label13->Text = L"Турист";
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(529, 20);
			this->textBox13->Margin = System::Windows::Forms::Padding(4);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(188, 22);
			this->textBox13->TabIndex = 37;
			this->textBox13->Visible = false;
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(233, 289);
			this->button13->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(77, 33);
			this->button13->TabIndex = 36;
			this->button13->Text = L"Додати";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MainForm::button13_Click);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->label17);
			this->panel2->Controls->Add(this->label16);
			this->panel2->Controls->Add(this->button16);
			this->panel2->Controls->Add(this->textBox15);
			this->panel2->Controls->Add(this->textBox14);
			this->panel2->Controls->Add(this->label14);
			this->panel2->Controls->Add(this->button7);
			this->panel2->Controls->Add(this->button8);
			this->panel2->Controls->Add(this->button12);
			this->panel2->Controls->Add(this->button9);
			this->panel2->Controls->Add(this->button11);
			this->panel2->Location = System::Drawing::Point(13, 30);
			this->panel2->Margin = System::Windows::Forms::Padding(4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(531, 325);
			this->panel2->TabIndex = 38;
			this->panel2->Visible = false;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::panel2_Paint);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(290, 58);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(29, 16);
			this->label17->TabIndex = 27;
			this->label17->Text = L"Ім\'я";
			this->label17->Visible = false;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(290, 23);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(69, 16);
			this->label16->TabIndex = 26;
			this->label16->Text = L"Прізвище";
			this->label16->Visible = false;
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(382, 102);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(75, 23);
			this->button16->TabIndex = 25;
			this->button16->Text = L"Перевірити";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Visible = false;
			this->button16->Click += gcnew System::EventHandler(this, &MainForm::button16_Click);
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(365, 58);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(119, 22);
			this->textBox15->TabIndex = 24;
			this->textBox15->Visible = false;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(365, 20);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(119, 22);
			this->textBox14->TabIndex = 23;
			this->textBox14->Visible = false;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(109, 274);
			this->label14->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(142, 29);
			this->label14->TabIndex = 22;
			this->label14->Text = L"Турагенція";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(801, 34);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(419, 429);
			this->richTextBox1->TabIndex = 40;
			this->richTextBox1->Text = L"";
			this->richTextBox1->Visible = false;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1277, 609);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}

#pragma endregion
		TourAgency* agency = new TourAgency("Amazing tours", "+12345678");
		void DisplayToursInRichTextBox(std::vector<Tour>& tours, System::Windows::Forms::RichTextBox^ richTextBox) {
			for (auto& tour : tours) {
				

				richTextBox->AppendText("Назва туру: " + gcnew String(tour.getName().c_str()) + "\n");
				richTextBox->AppendText("Ціна: " + gcnew String(std::to_string(tour.getPrice()).c_str()) + "\n");
				richTextBox->AppendText("Назва країни: " + gcnew String(tour.getCountry().getName().c_str()) + "\n");
				richTextBox->AppendText("Столиця: " + gcnew String(tour.getCountry().getCapital().c_str()) + "\n");
				richTextBox->AppendText("Мова: " + gcnew String(tour.getCountry().getLanguage().c_str()) + "\n");
				richTextBox->AppendText("Населення: " + gcnew String(std::to_string(tour.getCountry().getPopulation()).c_str()) + "\n");
				richTextBox->AppendText("Валюта: " + gcnew String(tour.getCountry().getCurrency().c_str()) + "\n");

				
				richTextBox->AppendText("\n"); 
			}
		}

		void showTourist() {
			button1->Hide();
			button2->Hide();
			panel3->Show();

		}
		void showAgency() {
			button1->Hide();
			button2->Hide();
			panel1->Hide();
			panel2->Show();
			

		}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		showTourist();

	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	showAgency();
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	panel1->Show();
	panel2->Hide();
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox6->Clear();
	textBox7->Clear();
	textBox8->Clear();
	textBox9->Clear();
	textBox10->Clear();
	textBox11->Clear();
	textBox12->Clear();
	System::String^ textBoxValue = textBox8->Text;
	System::String^ textBoxValue2 = textBox9->Text;
	System::String^ textBoxValue3 = textBox10->Text;
	System::String^ textBoxValue5 = textBox12->Text;
	System::String^ textBoxValue6 = textBox6->Text;
	System::String^ textBoxValue7 = textBox7->Text;

	// Перевірка, чи не є поля порожніми
	if (String::IsNullOrEmpty(textBoxValue) || String::IsNullOrEmpty(textBoxValue2) ||
		String::IsNullOrEmpty(textBoxValue3) || String::IsNullOrEmpty(textBoxValue5) ||
		String::IsNullOrEmpty(textBoxValue6) || String::IsNullOrEmpty(textBoxValue7)) {
		std::cerr << "Один або декілька полів порожні." << std::endl;
		return;
	}

	// Конвертація до std::string
	string countryName = msclr::interop::marshal_as<std::string>(textBoxValue);
	string capital = msclr::interop::marshal_as<std::string>(textBoxValue2);
	string language = msclr::interop::marshal_as<std::string>(textBoxValue3);
	string currency = msclr::interop::marshal_as<std::string>(textBoxValue5);
	string tourName = msclr::interop::marshal_as<std::string>(textBoxValue6);

	// Конвертація до числових типів
	double population;
	double price;

	try {
		population = System::Convert::ToDouble(textBox11->Text);
		
		price = System::Convert::ToDouble(textBoxValue7);
	}
	catch (System::FormatException^ e) {
		std::cerr << "Помилка конвертації: " << msclr::interop::marshal_as<std::string>(e->Message) << std::endl;
		return;
	}

	// Створення об'єкта Country
	Country country(countryName, capital, language, population, currency);

	// Створення об'єкта Tour
	Tour* tour = new Tour(tourName, price, country);

	// Виклик методу для додавання туру до JS (припустимо, що такий метод існує)
	agency->addTourToJs(tour);
	MessageBox::Show("Успішно додано до файлу");
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox13->Show();
	button14->Show();
	
	
}
private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}

private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	label15->Hide();
	button3->Enabled = true;
	richTextBox1->Clear();
	richTextBox1->Hide();
	panel3->Hide();
	button1->Show();
	button2->Show();
	textBox13->Hide();
	textBox13->Clear();
	button14->Hide();
	
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	button9->Enabled = true;
	richTextBox1->Clear();
	richTextBox1->Hide();
	
	button1->Show();
	button2->Show();
	
	
	panel2->Hide();
	panel1->Hide();
	button1->Show();
	button2->Show();
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	std::ifstream inputFile("tours.json");
	json toursJson;
	inputFile >> toursJson;
	System::String^ textBoxValue13 = textBox13->Text;
	string userEnteredTour = msclr::interop::marshal_as<std::string>(textBoxValue13);
	System::String^ textBoxNew1 = textBox1->Text;
	System::String^ textBoxNew2 = textBox2->Text;
	System::String^ textBoxNew3 = textBox3->Text;
	System::String^ textBoxNew4 = textBox4->Text;
	System::String^ textBoxNew5 = textBox5->Text;
	if (!System::String::IsNullOrWhiteSpace(textBoxNew1) &&
		!System::String::IsNullOrWhiteSpace(textBoxNew2) &&
		!System::String::IsNullOrWhiteSpace(textBoxNew3) &&
		!System::String::IsNullOrWhiteSpace(textBoxNew4) &&
		!System::String::IsNullOrWhiteSpace(textBoxNew5)) {
		bool tourFound = false;
		string name = msclr::interop::marshal_as<std::string>(textBoxNew1);
		string surname = msclr::interop::marshal_as<std::string>(textBoxNew2);
		int age = System::Convert::ToInt32(textBoxNew3);
		double budget = System::Convert::ToDouble(textBoxNew4);
		double Insuarence = System::Convert::ToInt32(textBoxNew5);
		bool insuarence_new = static_cast<bool>(Insuarence);
		Tourist* tourist = new Tourist(name, surname, age, budget, insuarence_new);
		for (const auto& tourData : toursJson)
		{
			if (tourData["tourName"] == userEnteredTour)
			{
				tourFound = true;

				Country country(
					tourData["country"]["name"],
					tourData["country"]["capital"],
					tourData["country"]["language"],
					tourData["country"]["population"],
					tourData["country"]["currency"]);

				double price = tourData["price"];

				Tour* tour = new Tour(userEnteredTour, price, country);
				agency->reserveTourJs(tourist, tour, price);
				
				break;
			}
		}

		if (!tourFound)
		{
			MessageBox::Show("Тур не знайдено");
		}
		
	}
	else {
		MessageBox::Show("Заповніть поля");
	}

	
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	panel1->Hide();
	panel2->Show();
}
private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		button3->Enabled = false;

		richTextBox1->Show();
		std::vector<Tour> tours = Tour::ReadAllToursFromJsonFile();
		DisplayToursInRichTextBox(tours, richTextBox1);
	}
	catch (const std::exception& e) {
		MessageBox::Show(gcnew String(e.what()));
	}



}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		button9->Enabled = false;

		richTextBox1->Show();
		std::vector<Tour> tours = Tour::ReadAllToursFromJsonFile();
		DisplayToursInRichTextBox(tours, richTextBox1);
	}
	catch (const std::exception& e) {
		MessageBox::Show(gcnew String(e.what()));
	}

}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox1->Clear();
	richTextBox1->Show();
	vector<string> usr;
	usr=agency->loadUsersFromJson("user_tour.json");
	for (auto& element : usr) {
		richTextBox1->Text += gcnew String(element.c_str());
	}
	
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	label15->Show();
	label15->Text = gcnew System::String(("Ви здійснили номер за викликом " + agency->getNumber()).c_str());
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox1->Clear();
	button16->Show();
	textBox15->Show();
	textBox14->Show();
	label16->Show();
	label17->Show();
	
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox1->Show();
	vector<Tourist> usr;
	usr = agency->loadUsersFromJsonTourist("user_tour.json");
	System::String^ textBoxNew1 = textBox15->Text;
	System::String^ textBoxNew2 = textBox14->Text;
	string name = msclr::interop::marshal_as<std::string>(textBoxNew1);
	string surname = msclr::interop::marshal_as<std::string>(textBoxNew2);
	for (auto& element : usr) {
		if (name == element.getFirstName() && surname == element.getLastName()) {
			string userinFile = "Name: " + element.getFirstName() + "\nSurname: " + element.getLastName() + "\nAge: " + std::to_string(element.getAge()) + "\nBudget: " + std::to_string(element.getBudget()) + "\nInsurance: " + (element.getIsuarence() ? "true" : "false") + "\n\n";
			richTextBox1->Text += gcnew String(userinFile.c_str());
		}


	}
}
};
}
