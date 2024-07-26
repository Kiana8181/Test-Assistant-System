#pragma once
#include"person.h"
#include<string>
namespace Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for expositive
	/// </summary>
	public ref class expositive : public System::Windows::Forms::Form
	{
	public:
		int j,i;

	public:
		expositive(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		expositive(int n, int m)
		{
			InitializeComponent();
			i = n;
			j = m;
			//
			//TODO: Add the constructor code here
			//
		}

		   

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~expositive()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button4;

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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"B Nazanin", 28.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(178)));
			this->groupBox1->ForeColor = System::Drawing::Color::White;
			this->groupBox1->Location = System::Drawing::Point(35, 56);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->groupBox1->Size = System::Drawing::Size(887, 349);
			this->groupBox1->TabIndex = 7;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"سوال تشریحی";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &expositive::groupBox1_Enter);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"B Nazanin", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->textBox1->Location = System::Drawing::Point(20, 76);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(847, 250);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"صورت سوال";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &expositive::textBox1_TextChanged);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Montserrat", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(404, 446);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(136, 78);
			this->button4->TabIndex = 13;
			this->button4->Text = L"ثبت";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->UseWaitCursor = true;
			this->button4->Click += gcnew System::EventHandler(this, &expositive::button4_Click);
			// 
			// expositive
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(960, 620);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->groupBox1);
			this->Name = L"expositive";
			this->Text = L"expositive";
			this->Load += gcnew System::EventHandler(this, &expositive::expositive_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void expositive_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		if(textBox1->Text=="") MessageBox::Show("Please fill in blank!");
		else {
			Question^ QE = gcnew Question(textBox1->Text,"TA");
			list::ManagerList[i]->Manager::AList[j]->Azmoon_class::QList.Add(QE);
			System::Windows::Forms::Form::Close();
		}
	}
private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
