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
	/// Summary for Correction2
	/// </summary>
	public ref class Correction2 : public System::Windows::Forms::Form
	{
	public:
		System::String^ j1;
		int j2;
		int j;
		int shenase;
		int azmoon;
		int ma;
		int mazmoon;
		Correction2(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Correction2(int b, System::String^ n, int m, int x, int y)
		{
			InitializeComponent();
			j1 = n;
			for (int t = 0; t < list::SList.Count; t++) {
				if (list::SList[t]->student_number == n) {
					j = t;
					break;
				}
			}
			j2 = b;
			shenase = m;
			ma = x;
			mazmoon = 	y;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Correction2()
		{
			if (components)
			{
				delete components;
			}
		}
		System::Collections::Generic::List<TextBox^> TList;
		System::Collections::Generic::List<Label^> LList;
	private: System::Windows::Forms::Button^ button4;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Correction2::typeid));
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"B Nazanin", 25.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(178)));
			this->button4->Location = System::Drawing::Point(405, 501);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(124, 83);
			this->button4->TabIndex = 5;
			this->button4->Text = L"پایان";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Correction2::button4_Click);
			// 
			// Correction2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::Color::Black;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(960, 620);
			this->Controls->Add(this->button4);
			this->Name = L"Correction2";
			this->Text = L"Correction2";
			this->Load += gcnew System::EventHandler(this, &Correction2::Correction2_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Correction2_Load(System::Object^ sender, System::EventArgs^ e) {
		int i = 36;
		int n;
		for (n = 0; n < list::SList[j]->Student::AList.Count; n++) {
			if (list::SList[j]->Student::AList[n]->shenase == shenase) break;
		}
		azmoon = n;
		for (int k = 0; k < list::SList[j]->Student::AList[azmoon]->Azmoon_class::QList.Count; k++) {
			LList.Add(gcnew Label());
			this->LList[k]->BackColor = System::Drawing::Color::PowderBlue;
			this->LList[k]->Font = (gcnew System::Drawing::Font(L"B Nazanin", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->LList[k]->Location = System::Drawing::Point(12, i + ((LList.Count - 1) * 248) + ((TList.Count) * 56) + ((LList.Count + TList.Count - 1) * 12));
			this->LList[k]->Name = L"label3";
			this->LList[k]->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->LList[k]->Size = System::Drawing::Size(675, 248);
			this->LList[k]->TabIndex = 3;
			this->LList[k]->Text = L"سوال " + (k + 1) + ". " + list::SList[j]->Student::AList[azmoon]->Azmoon_class::QList[k]->problem + "------------->" + L"پاسخ: " + list::SList[j]->Student::AList[azmoon]->Azmoon_class::QList[k]->answer;
			this->Controls->Add(LList[k]);
			this->Update();
			TList.Add(gcnew TextBox());
			this->TList[k]->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->TList[k]->Font = (gcnew System::Drawing::Font(L"B Nazanin", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->TList[k]->Location = System::Drawing::Point(12, i + ((LList.Count) * 248) + ((TList.Count - 1) * 56) + ((LList.Count + TList.Count - 1) * 12));
			this->TList[k]->Name = L"textBox1";
			this->TList[k]->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->TList[k]->Size = System::Drawing::Size(100, 56);
			this->TList[k]->TabIndex = 4;
			this->TList[k]->Text = L"";
			this->Controls->Add(TList[k]);
			this->Update();
		}
		button4->Location = System::Drawing::Point(300, i + ((LList.Count) * 248) + ((TList.Count) * 56) + ((LList.Count + TList.Count - 1) * 12) + 100);
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		list::SList[j]->Student::AList[azmoon]->score_t = 0;
		int count = 0;
		for (int k = 0; k < list::SList[j]->Student::AList[azmoon]->Azmoon_class::QList.Count; k++) {
			if (TList[k]->Text == "")
				count++;
		}
		if (count != 0) MessageBox::Show("Please rate all questions!");
		else {
			for (int k = 0; k < list::SList[j]->Student::AList[azmoon]->Azmoon_class::QList.Count; k++) {
				__int32 s;
				System::String^ mark;
				mark = TList[k]->Text;
				s = System::Int32::Parse(mark);
				list::SList[j]->Student::AList[azmoon]->Azmoon_class::QList[k]->score = s;
				list::SList[j]->Student::AList[azmoon]->score_t += s;
			}
			list::ManagerList[ma]->Manager::AList[mazmoon]->Azmoon_class::SAList[j2]->score_T = list::SList[j]->Student::AList[azmoon]->score_t;
			LList.Clear();
			System::Windows::Forms::Form::Close();
		}
	}
};
}
