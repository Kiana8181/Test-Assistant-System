#pragma once
#include"Exam_student.h"
#include"person.h"
#include"Score.h"
namespace Project{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for student_main
	/// </summary>
	public ref class student_main : public System::Windows::Forms::Form
	{
		static System::Collections::Generic::List<Button^> ButtonList;
	public:
		int j;
		int TAzmoon;
		student_main(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		student_main(int n)
		{
			InitializeComponent();
			j = n;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~student_main()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button5;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(student_main::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(112, 202);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(317, 82);
			this->button1->TabIndex = 1;
			this->button1->Text = L"آزمون های شما";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &student_main::button1_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(112, 301);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(317, 82);
			this->button3->TabIndex = 3;
			this->button3->Text = L"نمرات";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &student_main::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"B Nazanin", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(346, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(263, 89);
			this->label1->TabIndex = 4;
			this->label1->Text = L"پنل دانشجو";
			this->label1->Click += gcnew System::EventHandler(this, &student_main::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"B Nazanin", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(644, 132);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(181, 89);
			this->label2->TabIndex = 12;
			this->label2->Text = L"گروه ها";
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(39, 510);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(132, 51);
			this->button5->TabIndex = 13;
			this->button5->Text = L"بازگشت";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &student_main::button5_Click);
			// 
			// student_main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(960, 620);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Name = L"student_main";
			this->Text = L"student_main";
			this->Load += gcnew System::EventHandler(this, &student_main::student_main_Load);
			this->Click += gcnew System::EventHandler(this, &student_main::ButtonList_Click);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void student_main_Load(System::Object^ sender, System::EventArgs^ e) {
		if (list::SList[j]->Student::AList.Count != 0) {
			for (int i = 0; i < list::SList[j]->Student::AList.Count; i++) {
				ButtonList.Add(gcnew Button());
				int m = 197;
				this->ButtonList[i]->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->ButtonList[i]->Location = System::Drawing::Point(440, m + ((i * 82) + (6 * i)));
				this->ButtonList[i]->Name = L"ButtonList";
				this->ButtonList[i]->Size = System::Drawing::Size(232, 82);
				this->ButtonList[i]->TabIndex = 13;
				this->ButtonList[i]->Text = L"آزمون " + (i + 1);
				this->ButtonList[i]->UseVisualStyleBackColor = true;
				this->ButtonList[i]->Click += gcnew System::EventHandler(this, &student_main::ButtonList_Click);
				this->Controls->Add(ButtonList[i]);
				this->Update();
			}
		}
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::Form::Close();
}
private: System::Void ButtonList_Click(System::Object^ sender, System::EventArgs^ e) {
	TAzmoon = list::SList[j]->Student::AList.Count;
	this->Hide();
	Project::Score^ MAForm = gcnew Project::Score(j);
	MAForm->ShowDialog();
	this->Show();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	Project::Exam_student^ MAForm = gcnew Project::Exam_student(j);
	MAForm->ShowDialog();
	this->Show();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	Project::Score^ MAForm = gcnew Project::Score(j);
	MAForm->ShowDialog();
	this->Show();
}
};
}
