#pragma once
#include<string>
#include"person.h"

namespace Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Manage_Azmoon2
	/// </summary>
	public ref class Manage_Azmoon2 : public System::Windows::Forms::Form
	{
	public:
		int j;
		System::String^ Azmoon;
	private: System::Windows::Forms::Panel^ panel2;
	public:
	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label8;

	public:
		__int32 azmoon;
		Manage_Azmoon2(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Manage_Azmoon2(int m, System::String^ n)
		{
			InitializeComponent();
			j = m;
			Azmoon = n;
			Azmoon = Azmoon->Substring(Azmoon->Length - 1);
			azmoon = System::Int32::Parse(Azmoon);
			azmoon--;

			//
			//TODO: Add the constructor code here
			//
		}























































		

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Manage_Azmoon2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label6;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Manage_Azmoon2::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"B Nazanin", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(313, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(314, 89);
			this->label1->TabIndex = 6;
			this->label1->Text = L"مدیریت آزمون";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(198, 286);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(565, 82);
			this->button2->TabIndex = 9;
			this->button2->Text = L"تعیین زمان برای آزمون";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Manage_Azmoon2::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(163, 180);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(633, 82);
			this->button1->TabIndex = 8;
			this->button1->Text = L"اضافه کردن دانشجویان به آزمون";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Manage_Azmoon2::button1_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(37, 533);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(132, 51);
			this->button5->TabIndex = 12;
			this->button5->Text = L"بازگشت";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Manage_Azmoon2::button5_Click);
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->textBox3);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(960, 620);
			this->panel1->TabIndex = 13;
			this->panel1->Visible = false;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Manage_Azmoon2::panel1_Paint);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(37, 533);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(132, 51);
			this->button4->TabIndex = 26;
			this->button4->Text = L"بازگشت";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Manage_Azmoon2::button4_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"B Nazanin", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(157, 297);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(274, 71);
			this->label6->TabIndex = 25;
			this->label6->Text = L"شماره دانشجویی";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"B Nazanin", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(217, 226);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(214, 71);
			this->label4->TabIndex = 23;
			this->label4->Text = L"نام خانوادگی";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"B Nazanin", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(363, 154);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(68, 71);
			this->label3->TabIndex = 22;
			this->label3->Text = L"نام";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"B Nazanin", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->textBox3->Location = System::Drawing::Point(453, 312);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(300, 52);
			this->textBox3->TabIndex = 21;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &Manage_Azmoon2::textBox3_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"B Nazanin", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->textBox2->Location = System::Drawing::Point(453, 240);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(300, 52);
			this->textBox2->TabIndex = 20;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Manage_Azmoon2::textBox2_TextChanged);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"B Nazanin", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->textBox1->Location = System::Drawing::Point(453, 168);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(300, 52);
			this->textBox1->TabIndex = 19;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(405, 400);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(132, 51);
			this->button3->TabIndex = 15;
			this->button3->Text = L"ثبت";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Manage_Azmoon2::button3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"B Nazanin", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(183, 40);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(598, 89);
			this->label2->TabIndex = 14;
			this->label2->Text = L"اضافه کردن دانشجو به آزمون";
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->textBox4);
			this->panel2->Controls->Add(this->textBox5);
			this->panel2->Controls->Add(this->textBox6);
			this->panel2->Controls->Add(this->label8);
			this->panel2->Controls->Add(this->label35);
			this->panel2->Controls->Add(this->label34);
			this->panel2->Controls->Add(this->textBox13);
			this->panel2->Controls->Add(this->textBox14);
			this->panel2->Controls->Add(this->label33);
			this->panel2->Controls->Add(this->textBox12);
			this->panel2->Controls->Add(this->textBox11);
			this->panel2->Controls->Add(this->label32);
			this->panel2->Controls->Add(this->label31);
			this->panel2->Controls->Add(this->textBox10);
			this->panel2->Controls->Add(this->textBox9);
			this->panel2->Controls->Add(this->textBox8);
			this->panel2->Controls->Add(this->label26);
			this->panel2->Controls->Add(this->label27);
			this->panel2->Controls->Add(this->label28);
			this->panel2->Controls->Add(this->label29);
			this->panel2->Controls->Add(this->button14);
			this->panel2->Controls->Add(this->button15);
			this->panel2->Controls->Add(this->label30);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(960, 620);
			this->panel2->TabIndex = 27;
			this->panel2->Visible = false;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Manage_Azmoon2::panel2_Paint_1);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"B Nazanin", 25.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(178)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(601, 211);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(38, 64);
			this->label5->TabIndex = 68;
			this->label5->Text = L"/";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"B Nazanin", 25.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(178)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(697, 211);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(38, 64);
			this->label7->TabIndex = 67;
			this->label7->Text = L"/";
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"B Nazanin", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->textBox4->Location = System::Drawing::Point(645, 224);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(46, 42);
			this->textBox4->TabIndex = 66;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &Manage_Azmoon2::textBox4_TextChanged);
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"B Nazanin", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->textBox5->Location = System::Drawing::Point(741, 224);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(46, 42);
			this->textBox5->TabIndex = 65;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &Manage_Azmoon2::textBox5_TextChanged);
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"B Nazanin", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->textBox6->Location = System::Drawing::Point(512, 224);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(83, 42);
			this->textBox6->TabIndex = 64;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &Manage_Azmoon2::textBox6_TextChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"B Nazanin", 25.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(178)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(150, 211);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(306, 64);
			this->label8->TabIndex = 63;
			this->label8->Text = L"تاریخ پایان(میلادی)";
			// 
			// label35
			// 
			this->label35->BackColor = System::Drawing::Color::Transparent;
			this->label35->Font = (gcnew System::Drawing::Font(L"B Nazanin", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label35->ForeColor = System::Drawing::Color::White;
			this->label35->Location = System::Drawing::Point(507, 405);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(233, 62);
			this->label35->TabIndex = 62;
			this->label35->Text = L"زمان";
			this->label35->Click += gcnew System::EventHandler(this, &Manage_Azmoon2::label35_Click_1);
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->BackColor = System::Drawing::Color::Transparent;
			this->label34->Font = (gcnew System::Drawing::Font(L"B Nazanin", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label34->ForeColor = System::Drawing::Color::White;
			this->label34->Location = System::Drawing::Point(601, 346);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(36, 64);
			this->label34->TabIndex = 61;
			this->label34->Text = L":";
			// 
			// textBox13
			// 
			this->textBox13->Font = (gcnew System::Drawing::Font(L"B Nazanin", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->textBox13->Location = System::Drawing::Point(643, 356);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(55, 42);
			this->textBox13->TabIndex = 60;
			this->textBox13->TextChanged += gcnew System::EventHandler(this, &Manage_Azmoon2::textBox13_TextChanged_1);
			// 
			// textBox14
			// 
			this->textBox14->Font = (gcnew System::Drawing::Font(L"B Nazanin", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->textBox14->Location = System::Drawing::Point(540, 356);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(55, 42);
			this->textBox14->TabIndex = 59;
			this->textBox14->TextChanged += gcnew System::EventHandler(this, &Manage_Azmoon2::textBox14_TextChanged_1);
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->BackColor = System::Drawing::Color::Transparent;
			this->label33->Font = (gcnew System::Drawing::Font(L"B Nazanin", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label33->ForeColor = System::Drawing::Color::White;
			this->label33->Location = System::Drawing::Point(602, 282);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(36, 64);
			this->label33->TabIndex = 58;
			this->label33->Text = L":";
			// 
			// textBox12
			// 
			this->textBox12->Font = (gcnew System::Drawing::Font(L"B Nazanin", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->textBox12->Location = System::Drawing::Point(644, 292);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(55, 42);
			this->textBox12->TabIndex = 57;
			this->textBox12->TextChanged += gcnew System::EventHandler(this, &Manage_Azmoon2::textBox12_TextChanged_1);
			// 
			// textBox11
			// 
			this->textBox11->Font = (gcnew System::Drawing::Font(L"B Nazanin", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->textBox11->Location = System::Drawing::Point(541, 292);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(55, 42);
			this->textBox11->TabIndex = 56;
			this->textBox11->TextChanged += gcnew System::EventHandler(this, &Manage_Azmoon2::textBox11_TextChanged_1);
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->BackColor = System::Drawing::Color::Transparent;
			this->label32->Font = (gcnew System::Drawing::Font(L"B Nazanin", 25.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(178)));
			this->label32->ForeColor = System::Drawing::Color::White;
			this->label32->Location = System::Drawing::Point(601, 144);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(38, 64);
			this->label32->TabIndex = 55;
			this->label32->Text = L"/";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->BackColor = System::Drawing::Color::Transparent;
			this->label31->Font = (gcnew System::Drawing::Font(L"B Nazanin", 25.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(178)));
			this->label31->ForeColor = System::Drawing::Color::White;
			this->label31->Location = System::Drawing::Point(697, 144);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(38, 64);
			this->label31->TabIndex = 54;
			this->label31->Text = L"/";
			// 
			// textBox10
			// 
			this->textBox10->Font = (gcnew System::Drawing::Font(L"B Nazanin", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->textBox10->Location = System::Drawing::Point(645, 157);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(46, 42);
			this->textBox10->TabIndex = 53;
			this->textBox10->TextChanged += gcnew System::EventHandler(this, &Manage_Azmoon2::textBox10_TextChanged_1);
			// 
			// textBox9
			// 
			this->textBox9->Font = (gcnew System::Drawing::Font(L"B Nazanin", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->textBox9->Location = System::Drawing::Point(741, 157);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(46, 42);
			this->textBox9->TabIndex = 52;
			this->textBox9->TextChanged += gcnew System::EventHandler(this, &Manage_Azmoon2::textBox9_TextChanged_1);
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"B Nazanin", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->textBox8->Location = System::Drawing::Point(512, 157);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(83, 42);
			this->textBox8->TabIndex = 51;
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &Manage_Azmoon2::textBox8_TextChanged_1);
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->BackColor = System::Drawing::Color::Transparent;
			this->label26->Font = (gcnew System::Drawing::Font(L"B Nazanin", 25.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(178)));
			this->label26->ForeColor = System::Drawing::Color::White;
			this->label26->Location = System::Drawing::Point(210, 402);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(264, 64);
			this->label26->TabIndex = 50;
			this->label26->Text = L"مدت زمان آزمون";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->BackColor = System::Drawing::Color::Transparent;
			this->label27->Font = (gcnew System::Drawing::Font(L"B Nazanin", 25.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(178)));
			this->label27->ForeColor = System::Drawing::Color::White;
			this->label27->Location = System::Drawing::Point(284, 339);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(190, 64);
			this->label27->TabIndex = 49;
			this->label27->Text = L"ساعت پایان";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->BackColor = System::Drawing::Color::Transparent;
			this->label28->Font = (gcnew System::Drawing::Font(L"B Nazanin", 25.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(178)));
			this->label28->ForeColor = System::Drawing::Color::White;
			this->label28->Location = System::Drawing::Point(277, 275);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(197, 64);
			this->label28->TabIndex = 48;
			this->label28->Text = L"ساعت شروع";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->BackColor = System::Drawing::Color::Transparent;
			this->label29->Font = (gcnew System::Drawing::Font(L"B Nazanin", 25.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(178)));
			this->label29->ForeColor = System::Drawing::Color::White;
			this->label29->Location = System::Drawing::Point(150, 144);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(324, 64);
			this->label29->TabIndex = 47;
			this->label29->Text = L"تاریخ شروع (میلادی)";
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(24, 547);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(132, 51);
			this->button14->TabIndex = 46;
			this->button14->Text = L"بازگشت";
			this->button14->UseVisualStyleBackColor = true;
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button15->Location = System::Drawing::Point(421, 490);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(132, 51);
			this->button15->TabIndex = 45;
			this->button15->Text = L"ثبت";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &Manage_Azmoon2::button15_Click_1);
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->BackColor = System::Drawing::Color::Transparent;
			this->label30->Font = (gcnew System::Drawing::Font(L"B Nazanin", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label30->ForeColor = System::Drawing::Color::White;
			this->label30->Location = System::Drawing::Point(251, 40);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(486, 89);
			this->label30->TabIndex = 44;
			this->label30->Text = L"تعیین زمان برای آزمون";
			// 
			// Manage_Azmoon2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(960, 620);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"Manage_Azmoon2";
			this->Text = L"Manage_Azmoon2";
			this->Load += gcnew System::EventHandler(this, &Manage_Azmoon2::Manage_Azmoon2_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Manage_Azmoon2_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (list::ManagerList[j]->Manager::AList[azmoon]->first == 0) MessageBox::Show("Please first set the time!");
		else panel1->Visible = true;
	}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::Form::Close();
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "" || textBox2->Text == "" || textBox3->Text == "") MessageBox::Show("Please fill in all blanks!");
	else {
		int i;
		for (i = 0; i < list::SList.Count; i++) 
			if (list::SList[i]->student_number == textBox3->Text) break;
			
		if (i >= list::SList.Count) {
			Student^ item = gcnew Student(textBox1->Text, textBox2->Text, textBox3->Text, textBox3->Text, textBox3->Text);
			list::SList.Add(item);
		}

		Student_A^ SA=gcnew Student_A(textBox1->Text, textBox2->Text, textBox3->Text);
		list::ManagerList[j]->Manager::AList[azmoon]->Azmoon_class::SAList.Add(SA);
		for (int k = 0; k < list::SList.Count; k++) {
			if (list::SList[k]->student_number == textBox3->Text) {
				Azmoon_class^ item = gcnew Azmoon_class();
				item->year = list::ManagerList[j]->Manager::AList[azmoon]->year;
				item->mounth = list::ManagerList[j]->Manager::AList[azmoon]->mounth;
				item->day = list::ManagerList[j]->Manager::AList[azmoon]->day;
				item->year2 = list::ManagerList[j]->Manager::AList[azmoon]->year2;
				item->mounth2 = list::ManagerList[j]->Manager::AList[azmoon]->mounth2;
				item->day2 = list::ManagerList[j]->Manager::AList[azmoon]->day2;
				item->min = list::ManagerList[j]->Manager::AList[azmoon]->min;
				item->start_ah = list::ManagerList[j]->Manager::AList[azmoon]->start_ah;
				item->start_am = list::ManagerList[j]->Manager::AList[azmoon]->start_am;
				item->end_ah = list::ManagerList[j]->Manager::AList[azmoon]->end_ah;
				item->end_am = list::ManagerList[j]->Manager::AList[azmoon]->end_am;
				item->shenase = list::ManagerList[j]->Manager::AList[azmoon]->shenase;
				for (int i = 0; i < list::ManagerList[j]->Manager::AList[azmoon]->Azmoon_class::QList.Count; i++) {
					if (list::ManagerList[j]->Manager::AList[azmoon]->Azmoon_class::QList[i]->which == "TA") {
						Question^ Q = gcnew Question(list::ManagerList[j]->Manager::AList[azmoon]->Azmoon_class::QList[i]->problem, "TA");
						item->QList.Add(Q);
					}
					else if (list::ManagerList[j]->Manager::AList[azmoon]->Azmoon_class::QList[i]->which == "TF") {
						Question^ Q = gcnew Question(list::ManagerList[j]->Manager::AList[azmoon]->Azmoon_class::QList[i]->problem, "TF");
						item->QList.Add(Q);
					}
					else {
						Question^ Q = gcnew Question(list::ManagerList[j]->Manager::AList[azmoon]->Azmoon_class::QList[i]->problem, list::ManagerList[j]->Manager::AList[azmoon]->Azmoon_class::QList[i]->num1, list::ManagerList[j]->Manager::AList[azmoon]->Azmoon_class::QList[i]->num2, list::ManagerList[j]->Manager::AList[azmoon]->Azmoon_class::QList[i]->num3, list::ManagerList[j]->Manager::AList[azmoon]->Azmoon_class::QList[i]->num4, "MC");
						item->QList.Add(Q);
					}
				}
				list::SList[k]->Student::AList.Add(item);
				list::SList[k]->Student::AList[list::SList[k]->Student::AList.Count - 1]->shenase = list::ManagerList[j]->Manager::AList[azmoon]->shenase;
				break;
			}
		}
		
		panel1->Visible = false;
		textBox1->ResetText();
		textBox2->ResetText();
		textBox3->ResetText();
	}
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	panel1->Visible = false;
}
private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	panel2->Visible = false;
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	list::ManagerList[j]->Manager::AList[azmoon]->Time++;
	list::ManagerList[j]->Manager::AList[azmoon]->first++;
	if(list::ManagerList[j]->Manager::AList[azmoon]->Time!=1) MessageBox::Show("You have already set time for this test!");
	else panel2->Visible = true;
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void textBox8_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox10_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox9_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox11_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox12_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox14_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox13_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label35_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button15_Click_1(System::Object^ sender, System::EventArgs^ e) {
	if (textBox11->Text == "" || textBox12->Text == "" || textBox14->Text == "" || textBox13->Text == "" || textBox8->Text == "" || textBox10->Text == "" || textBox9->Text == "" || textBox4->Text == "" || textBox5->Text == "" || textBox6->Text == "") {
		MessageBox::Show("Please fill in all blanks!");
	}
	else {
		int min;
		int y= System::Convert::ToInt32(textBox6->Text) - System::Convert::ToInt32(textBox8->Text);
		int m= System::Convert::ToInt32(textBox4->Text) - System::Convert::ToInt32(textBox10->Text);
		int d= System::Convert::ToInt32(textBox5->Text) - System::Convert::ToInt32(textBox9->Text);
		int min1 = System::Convert::ToInt32(textBox13->Text) - System::Convert::ToInt32(textBox12->Text);
		int min2 = (System::Convert::ToInt32(textBox14->Text) - System::Convert::ToInt32(textBox11->Text));
		min = (y * 525600) + (m * 43200) + (d * 1440) + (min2 * 60) + min1;
		label35->Text = min + L" دقیقه";
		list::ManagerList[j]->Manager::AList[azmoon]->year = System::Convert::ToInt32(textBox8->Text);
		list::ManagerList[j]->Manager::AList[azmoon]->mounth = System::Convert::ToInt32(textBox10->Text);
		list::ManagerList[j]->Manager::AList[azmoon]->day = System::Convert::ToInt32(textBox9->Text);
		list::ManagerList[j]->Manager::AList[azmoon]->year2 = System::Convert::ToInt32(textBox6->Text);
		list::ManagerList[j]->Manager::AList[azmoon]->mounth2 = System::Convert::ToInt32(textBox4->Text);
		list::ManagerList[j]->Manager::AList[azmoon]->day2 = System::Convert::ToInt32(textBox5->Text);
		list::ManagerList[j]->Manager::AList[azmoon]->start_ah = System::Convert::ToInt32(textBox11->Text);
		list::ManagerList[j]->Manager::AList[azmoon]->start_am = System::Convert::ToInt32(textBox12->Text);
		list::ManagerList[j]->Manager::AList[azmoon]->end_ah = System::Convert::ToInt32(textBox14->Text);
		list::ManagerList[j]->Manager::AList[azmoon]->end_am = System::Convert::ToInt32(textBox13->Text);
		list::ManagerList[j]->Manager::AList[azmoon]->min = min;
		panel2->Visible = false;
		textBox8->ResetText();
		textBox9->ResetText();
		textBox10->ResetText();
		textBox11->ResetText();
		textBox12->ResetText();
		textBox13->ResetText();
		textBox14->ResetText();
	}
}
private: System::Void panel2_Paint_1(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
