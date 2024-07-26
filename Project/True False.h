#pragma once
#include"person.h"

namespace Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TrueFalse
	/// </summary>
	public ref class TrueFalse : public System::Windows::Forms::Form
	{
	public:
		int i, j;
		TrueFalse(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		TrueFalse(int n,int m)
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
		~TrueFalse()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox3;
	protected:


	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(TrueFalse::typeid));
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::Color::Transparent;
			this->groupBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->groupBox3->Controls->Add(this->radioButton2);
			this->groupBox3->Controls->Add(this->radioButton1);
			this->groupBox3->Controls->Add(this->textBox11);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"B Nazanin", 28.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(178)));
			this->groupBox3->ForeColor = System::Drawing::Color::White;
			this->groupBox3->Location = System::Drawing::Point(34, 95);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->groupBox3->Size = System::Drawing::Size(887, 337);
			this->groupBox3->TabIndex = 10;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"سوال صحیح/غلط";
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(251, 239);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(115, 75);
			this->radioButton2->TabIndex = 13;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"غلط";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(492, 239);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(150, 75);
			this->radioButton1->TabIndex = 12;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"صحیح";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// textBox11
			// 
			this->textBox11->Font = (gcnew System::Drawing::Font(L"B Nazanin", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->textBox11->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->textBox11->Location = System::Drawing::Point(20, 76);
			this->textBox11->Multiline = true;
			this->textBox11->Name = L"textBox11";
			this->textBox11->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->textBox11->Size = System::Drawing::Size(847, 152);
			this->textBox11->TabIndex = 0;
			this->textBox11->Text = L"صورت سوال";
			this->textBox11->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox11->TextChanged += gcnew System::EventHandler(this, &TrueFalse::textBox11_TextChanged);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Montserrat", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(403, 450);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(113, 78);
			this->button4->TabIndex = 11;
			this->button4->Text = L"ثبت";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->UseWaitCursor = true;
			this->button4->Click += gcnew System::EventHandler(this, &TrueFalse::button4_Click);
			// 
			// TrueFalse
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			//this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(960, 620);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->groupBox3);
			this->Name = L"TrueFalse";
			this->Text = L"TrueFalse";
			this->Load += gcnew System::EventHandler(this, &TrueFalse::TrueFalse_Load);
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void TrueFalse_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		bool n = true;
		if (textBox11->Text == "") MessageBox::Show("Please fill in blank!");
		else {
			Question^ QE = gcnew Question(textBox11->Text,"TF");
			list::ManagerList[i]->Manager::AList[j]->Azmoon_class::QList.Add(QE);
			System::Windows::Forms::Form::Close();
		}
	}
private: System::Void textBox11_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
