#pragma once
#include"person.h"
#include"MExam.h"
#include"Manage_Azmoon.h"
#include"Manage_Azmoon2.h"
#include"Azmoon_History.h"
#include"Correction.h"
namespace Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Manager_main
	/// </summary>
	public ref class Manager_main : public System::Windows::Forms::Form
	{
		static System::Collections::Generic::List<Button^> ButtonList;

	public:
		int j;
		int TAzmoon;
		Manager_main(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Manager_main(int n)
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
		~Manager_main()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Manager_main::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"B Nazanin", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(347, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(270, 89);
			this->label1->TabIndex = 4;
			this->label1->Text = L"پنل مدیریت";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"B Nazanin", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(637, 105);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(181, 89);
			this->label2->TabIndex = 11;
			this->label2->Text = L"گروه ها";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(90, 112);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(317, 82);
			this->button1->TabIndex = 0;
			this->button1->Text = L"ایجاد آزمون";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Manager_main::button1_Click);
			// 
			// button2
			// 
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(90, 211);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(317, 82);
			this->button2->TabIndex = 1;
			this->button2->Text = L"تاریخچه آزمون";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Manager_main::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(90, 313);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(317, 82);
			this->button3->TabIndex = 2;
			this->button3->Text = L"مدیریت آزمون ها";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Manager_main::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(90, 414);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(317, 82);
			this->button4->TabIndex = 3;
			this->button4->Text = L"تصحیح";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Manager_main::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(28, 533);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(132, 51);
			this->button5->TabIndex = 10;
			this->button5->Text = L"بازگشت";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Manager_main::button5_Click);
			// 
			// Manager_main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::Color::Black;
			//this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(960, 620);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Manager_main";
			this->Text = L"manager_main";
			this->Load += gcnew System::EventHandler(this, &Manager_main::Manager_main_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Manager_main_Load(System::Object^ sender, System::EventArgs^ e) {
		if (list::ManagerList[j]->Manager::AList.Count != 0) {
			for (int i = 0; i < list::ManagerList[j]->Manager::AList.Count; i++) {
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
				this->ButtonList[i]->Click += gcnew System::EventHandler(this, &Manager_main::ButtonList_Click);
				this->Controls->Add(ButtonList[i]);
				this->Update();
			}
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			Azmoon_class^ item = gcnew Azmoon_class();
			list::ManagerList[j]->Manager::AList.Add(item);
			if (list::ManagerList[j]->Manager::AList.Count == 1) list::ManagerList[j]->Manager::AList[list::ManagerList[j]->Manager::AList.Count - 1]->shenase += (100 * (j + 1));
			else list::ManagerList[j]->Manager::AList[list::ManagerList[j]->Manager::AList.Count - 1]->shenase = list::ManagerList[j]->Manager::AList[list::ManagerList[j]->Manager::AList.Count - 2]->shenase + 1;
		ButtonList.Add(gcnew Button());
		int f = 197;
		int k = list::ManagerList[j]->Manager::AList.Count;
		this->ButtonList[k - 1]->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->ButtonList[k - 1]->Location = System::Drawing::Point(440, f + ((k - 1) * 82) + (6 * (k - 1)));
		this->ButtonList[k - 1]->Name = L"ButtonList";
		this->ButtonList[k - 1]->Size = System::Drawing::Size(232, 82);
		this->ButtonList[k - 1]->TabIndex = 13;
		this->ButtonList[k - 1]->Text = L"آزمون " + k;
		this->ButtonList[k - 1]->UseVisualStyleBackColor = true;
		this->ButtonList[k - 1]->Click += gcnew System::EventHandler(this, &Manager_main::ButtonList_Click);
		this->Controls->Add(ButtonList[k - 1]);
		this->Update();

		this->Hide();
		Project::MExam^ MForm = gcnew Project::MExam(j, list::ManagerList[j]->Manager::AList.Count-1);
		MForm->ShowDialog();
		this->Show();
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	Project::Manage_Azmoon^ MAForm = gcnew Project::Manage_Azmoon(j,list::ManagerList[j]->Manager::AList.Count);
	MAForm->ShowDialog();
	this->Show();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::Form::Close();
}
private: System::Void ButtonList_Click(System::Object^ sender, System::EventArgs^ e) {
	TAzmoon = list::ManagerList[j]->Manager::AList.Count;
	this->Hide();
	Project::Azmoon_History^ MAForm = gcnew Project::Azmoon_History(j,TAzmoon);
	MAForm->ShowDialog();
	this->Show();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	TAzmoon = list::ManagerList[j]->Manager::AList.Count;
	this->Hide();
	Project::Azmoon_History^ MAForm = gcnew Project::Azmoon_History(j, TAzmoon);
	MAForm->ShowDialog();
	this->Show();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	Project::Correction^ MAForm = gcnew Project::Correction(j);
	MAForm->ShowDialog();
	this->Show();
}
};
}
