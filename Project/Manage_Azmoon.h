#pragma once
#include"person.h"
#include"Manage_Azmoon2.h"

namespace Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	/// <summary>
	/// Summary for Manage_Azmoon
	/// </summary>
	public ref class Manage_Azmoon : public System::Windows::Forms::Form
	{
		
	public:
		int TAzmoon;
	private: System::Windows::Forms::Button^ button1;
	public:
		int j;
		Manage_Azmoon(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Manage_Azmoon(int n,int m)
		{
			InitializeComponent();
			j = n;
			TAzmoon = m;
			//
			//TODO: Add the constructor code here
			//
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Manage_Azmoon()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::ComboBox^ comboBox1;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Manage_Azmoon::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"B Nazanin", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(323, 77);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(314, 89);
			this->label1->TabIndex = 5;
			this->label1->Text = L"مدیریت آزمون";
			this->label1->Click += gcnew System::EventHandler(this, &Manage_Azmoon::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"B Nazanin", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(172, 201);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(632, 71);
			this->label2->TabIndex = 8;
			this->label2->Text = L"لطفا آزمون مورد نظر خود را انتخاب کنید";
			this->label2->Click += gcnew System::EventHandler(this, &Manage_Azmoon::label2_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(43, 527);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(132, 51);
			this->button5->TabIndex = 11;
			this->button5->Text = L"بازگشت";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Manage_Azmoon::button5_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"B Nazanin", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(308, 328);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(329, 63);
			this->comboBox1->TabIndex = 12;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Manage_Azmoon::comboBox1_SelectedIndexChanged);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(405, 406);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(132, 51);
			this->button1->TabIndex = 13;
			this->button1->Text = L"ادامه";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Manage_Azmoon::button1_Click);
			// 
			// Manage_Azmoon
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::Color::Black;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(960, 620);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Manage_Azmoon";
			this->Text = L"Manage_Azmoon";
			this->Load += gcnew System::EventHandler(this, &Manage_Azmoon::Manage_Azmoon_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Manage_Azmoon_Load(System::Object^ sender, System::EventArgs^ e) {
		for (int i = 1; i <= TAzmoon; i++) {
			comboBox1->Items->Add(L"آزمون " + i);
		}
	}
	private: System::Void ButtonList_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::Form::Close();
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (comboBox1->Text == "") 
		MessageBox::Show("Please select an exam!");
	else {
		this->Hide();
		Project::Manage_Azmoon2^ MAForm = gcnew Project::Manage_Azmoon2(j,comboBox1->Text);
		MAForm->ShowDialog();
		this->Show();
	}
}
};
}
