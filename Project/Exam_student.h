#pragma once
#include"person.h"
#include"EXAM.h"
namespace Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Exam_student
	/// </summary>
	public ref class Exam_student : public System::Windows::Forms::Form
	{
	public:
		int j;
		int i = 1;
		int c = 0;
		int t = 0;
		int TAzmoon;
		System::String^ Azmoon;
		__int32 azmoon;

	public:
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label4;



	public:


		   System::String^ pasokh = "";
		

	public:
		Exam_student(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Exam_student(int n)
		{
			InitializeComponent();
			j = n;
			//
			//TODO: Add the constructor code here
			//
		}
		
	private: System::Windows::Forms::Button^ button1;	
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
		   
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Exam_student()
		{
			if (components)
			{
				delete components;
			}
		}

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Exam_student::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(389, 417);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(132, 51);
			this->button1->TabIndex = 18;
			this->button1->Text = L"ادامه";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Exam_student::button1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"B Nazanin", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(292, 339);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(329, 63);
			this->comboBox1->TabIndex = 17;
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(27, 538);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(132, 51);
			this->button5->TabIndex = 16;
			this->button5->Text = L"بازگشت";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Exam_student::button5_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"B Nazanin", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(156, 212);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(632, 71);
			this->label2->TabIndex = 15;
			this->label2->Text = L"لطفا آزمون مورد نظر خود را انتخاب کنید";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"B Nazanin", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(307, 88);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(338, 89);
			this->label1->TabIndex = 14;
			this->label1->Text = L"آزمون های شما";
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(960, 620);
			this->panel1->TabIndex = 19;
			this->panel1->Visible = false;
			this->panel1->Click += gcnew System::EventHandler(this, &Exam_student::button2_Click);
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Exam_student::panel1_Paint);
			// 
			// label8
			// 
			this->label8->BackColor = System::Drawing::Color::LightSlateGray;
			this->label8->Font = (gcnew System::Drawing::Font(L"B Nazanin", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(531, 88);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(310, 71);
			this->label8->TabIndex = 25;
			this->label8->Click += gcnew System::EventHandler(this, &Exam_student::label8_Click_1);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"B Nazanin", 28.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(178)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(256, 88);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(214, 71);
			this->label4->TabIndex = 24;
			this->label4->Text = L"تاریخ آزمون";
			// 
			// label7
			// 
			this->label7->BackColor = System::Drawing::Color::LightSlateGray;
			this->label7->Font = (gcnew System::Drawing::Font(L"B Nazanin", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(531, 269);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(166, 71);
			this->label7->TabIndex = 23;
			this->label7->Click += gcnew System::EventHandler(this, &Exam_student::label7_Click);
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::Color::LightSlateGray;
			this->label6->Font = (gcnew System::Drawing::Font(L"B Nazanin", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(531, 178);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(166, 71);
			this->label6->TabIndex = 22;
			this->label6->Click += gcnew System::EventHandler(this, &Exam_student::label6_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"B Nazanin", 28.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(178)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(260, 269);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(210, 71);
			this->label5->TabIndex = 21;
			this->label5->Text = L"مدت آزمون";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"B Nazanin", 28.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(178)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(167, 178);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(303, 71);
			this->label3->TabIndex = 19;
			this->label3->Text = L"زمان شروع آزمون";
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(51, 538);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(132, 51);
			this->button3->TabIndex = 18;
			this->button3->Text = L"بازگشت";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Exam_student::button3_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 25.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(313, 376);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(319, 88);
			this->button2->TabIndex = 17;
			this->button2->Text = L"شروع آزمون";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Exam_student::button2_Click);
			// 
			// Exam_student
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(960, 620);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Exam_student";
			this->Text = L"Exam_student";
			this->Load += gcnew System::EventHandler(this, &Exam_student::Exam_student_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Exam_student_Load(System::Object^ sender, System::EventArgs^ e) {
		TAzmoon = list::SList[j]->Student::AList.Count;
		for (int i = 1; i <= TAzmoon; i++) {
			comboBox1->Items->Add(L"آزمون " + i);
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (comboBox1->Text == "")
			MessageBox::Show("Please select an exam!");
		else {
			Azmoon = comboBox1->Text;
			Azmoon = Azmoon->Substring(Azmoon->Length - 1);
			azmoon = System::Int32::Parse(Azmoon);
			azmoon--;
			label6->Text = list::SList[j]->Student::AList[azmoon]->start_ah + " : " + list::SList[j]->Student::AList[azmoon]->start_am;
			label7->Text = System::Convert::ToString(list::SList[j]->Student::AList[azmoon]->min) + L" دقیقه";
			label8->Text = list::SList[j]->Student::AList[azmoon]->year + " / " + list::SList[j]->Student::AList[azmoon]->mounth + " / " + list::SList[j]->Student::AList[azmoon]->day;
			panel1->Visible = true;
		}
	}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::Form::Close();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	panel1->Visible = false;
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Azmoon = comboBox1->Text;
	Azmoon = Azmoon->Substring(Azmoon->Length - 1);
	azmoon = System::Int32::Parse(Azmoon);
	azmoon--;
	if (list::SList[j]->Student::AList[azmoon]->count == 1) {
		DateTime dt = DateTime::Now;
		if (dt.Year == list::SList[j]->Student::AList[azmoon]->year && dt.Month == list::SList[j]->Student::AList[azmoon]->mounth && dt.Day == list::SList[j]->Student::AList[azmoon]->day) {
			if (dt.Hour >= list::SList[j]->Student::AList[azmoon]->start_ah) {
				if (dt.Minute >= list::SList[j]->Student::AList[azmoon]->start_am) {
					list::SList[j]->Student::AList[azmoon]->Azmoon_class ::count++;
					this->Hide();
					Project::EXAM^ MAForm = gcnew Project::EXAM(j, azmoon);
					MAForm->ShowDialog();
					this->Show();
				}
			}
		}
	}
	else button2->Enabled = false;
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label8_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
};
}
