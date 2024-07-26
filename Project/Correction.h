#pragma once
#include"Correction2.h"
#include"person.h"
namespace Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Correction
	/// </summary>
	public ref class Correction : public System::Windows::Forms::Form
	{
	public:
		int j;
		System::String^ Azmoon;
	private: System::Windows::Forms::Panel^ panel1;
	public:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;

	public:



		   __int32 azmoon;
		Correction(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Correction(int n)
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
		~Correction()
		{
			if (components)
			{
				delete components;
			}
		}
		
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Correction::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(397, 415);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(132, 51);
			this->button1->TabIndex = 18;
			this->button1->Text = L"ادامه";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Correction::button1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"B Nazanin", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(300, 337);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(329, 63);
			this->comboBox1->TabIndex = 17;
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(35, 536);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(132, 51);
			this->button5->TabIndex = 16;
			this->button5->Text = L"بازگشت";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Correction::button5_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"B Nazanin", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(164, 210);
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
			this->label1->Location = System::Drawing::Point(315, 86);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(307, 89);
			this->label1->TabIndex = 14;
			this->label1->Text = L"تصحیح آزمون";
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->comboBox2);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(960, 620);
			this->panel1->TabIndex = 19;
			this->panel1->Visible = false;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Correction::panel1_Paint_1);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(416, 399);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(132, 51);
			this->button2->TabIndex = 23;
			this->button2->Text = L"ادامه";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Correction::button2_Click);
			// 
			// comboBox2
			// 
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"B Nazanin", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(319, 321);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(329, 63);
			this->comboBox2->TabIndex = 22;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &Correction::comboBox2_SelectedIndexChanged);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(54, 520);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(132, 51);
			this->button3->TabIndex = 21;
			this->button3->Text = L"بازگشت";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Correction::button3_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"B Nazanin", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(183, 194);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(650, 71);
			this->label3->TabIndex = 20;
			this->label3->Text = L"لطفا دانشجو مورد نظر خود را انتخاب کنید";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"B Nazanin", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(334, 70);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(307, 89);
			this->label4->TabIndex = 19;
			this->label4->Text = L"تحصیح آزمون";
			// 
			// Correction
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
			this->Name = L"Correction";
			this->Text = L"Correction";
			this->Load += gcnew System::EventHandler(this, &Correction::Correction_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Correction_Load(System::Object^ sender, System::EventArgs^ e) {
		int TAzmoon = list::ManagerList[j]->Manager::AList.Count;
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
			int Tstudent = list::ManagerList[j]->Manager::AList[azmoon]->Azmoon_class::SAList.Count;
			for (int i = 0; i < Tstudent; i++) {
				comboBox2->Items->Add(list::ManagerList[j]->Manager::AList[azmoon]->Azmoon_class::SAList[i]->student_number);
			}
			panel1->Visible = true;
		}
	}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::Form::Close();
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (comboBox2->Text == "")
		MessageBox::Show("Please select an exam!");
	else {
		Azmoon = comboBox1->Text;
		Azmoon = Azmoon->Substring(Azmoon->Length - 1);
		azmoon = System::Int32::Parse(Azmoon);
		azmoon--;
		int shenase = list::ManagerList[j]->Manager::AList[azmoon]->shenase;
		int i;
		for (i = 0; i < list::list::ManagerList[j]->Manager::AList[azmoon]->Azmoon_class::SAList.Count; i++) {
			if (list::ManagerList[j]->Manager::AList[azmoon]->Azmoon_class::SAList[i]->student_number == comboBox2->Text) break;
		}
		this->Hide();
		Project::Correction2^ MAForm = gcnew Project::Correction2(i,list::ManagerList[j]->Manager::AList[azmoon]->Azmoon_class::SAList[i]->student_number, shenase,j,azmoon);
		MAForm->ShowDialog();
		this->Show();
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	panel1->Visible = false;
	comboBox2->Items->Clear();
}
private: System::Void panel1_Paint_1(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
