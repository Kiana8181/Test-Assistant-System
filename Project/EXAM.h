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
	/// Summary for EXAM
	/// </summary>
	public ref class EXAM : public System::Windows::Forms::Form
	{
	public:
		static int HOUR;
		static int SECOND = 0;
		static int MINUTE;
		int j;
		int i = 1;
		int c = 0;
		int t = 0;
		int TAzmoon;
		System::String^ Azmoon;
		System::String^ SEC;
		System::String^ MIN;
		System::String^ H;
	private: System::Windows::Forms::Timer^ timer1;
	public:
	private: System::Windows::Forms::Label^ label1;

	public:
		__int32 azmoon;
		EXAM(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		EXAM(int n,int m)
		{
			InitializeComponent();
			j = n;
			azmoon = m;
			//
			//TODO: Add the constructor code here
			//
			DateTime dt1 = DateTime::Now;
			int y = list::SList[j]->Student::AList[azmoon]->year2 - dt1.Year;
			int mo = list::SList[j]->Student::AList[azmoon]->mounth2 - dt1.Month;
			int d = list::SList[j]->Student::AList[azmoon]->day2 - dt1.Day;
			int min2 = list::SList[j]->Student::AList[azmoon]->end_ah - dt1.Hour;
			int min1 = list::SList[j]->Student::AList[azmoon]->end_am - dt1.Minute;
			int min = (y * 525600) + (mo * 43200) + (d * 1440) + (min2 * 60) + min1;
			int h = min / 60;
			min %= 60;
			int b = min;
			HOUR = h;
			MINUTE = b;
			
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~EXAM()
		{
			if (components)
			{
				delete components;
			}
		}
		System::Collections::Generic::List<TextBox^> TList;
		System::Collections::Generic::List<Label^> LList;
		System::Collections::Generic::List<ComboBox^> COList;
	private: System::Windows::Forms::Button^ button4;
	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(EXAM::typeid));
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"B Nazanin", 25.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(178)));
			this->button4->Location = System::Drawing::Point(421, 525);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(124, 83);
			this->button4->TabIndex = 1;
			this->button4->Text = L"پایان";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &EXAM::button4_Click);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &EXAM::timer1_Tick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Courier New", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(43, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(168, 54);
			this->label1->TabIndex = 2;
			this->label1->Text = L"0:0:0";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label1->Click += gcnew System::EventHandler(this, &EXAM::label1_Click);
			// 
			// EXAM
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::Color::Black;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(960, 620);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button4);
			this->Name = L"EXAM";
			this->Text = L"EXAM";
			this->Load += gcnew System::EventHandler(this, &EXAM::EXAM_Load);
			this->Click += gcnew System::EventHandler(this, &EXAM::TTList);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void EXAM_Load(System::Object^ sender, System::EventArgs^ e) {
		for (int k = 0; k < list::SList[j]->Student::AList[azmoon]->Azmoon_class::QList.Count; k++) {
			int i = 110;
			if (list::SList[j]->Student::AList[azmoon]->Azmoon_class::QList[k]->which == "TA") {
				LList.Add(gcnew Label());
				this->LList[k]->BackColor = System::Drawing::SystemColors::ControlDarkDark;
				this->LList[k]->Font = (gcnew System::Drawing::Font(L"B Nazanin", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(178)));
				this->LList[k]->ForeColor = System::Drawing::Color::White;
				this->LList[k]->Location = System::Drawing::Point(17, i + ((LList.Count - 1) * 149) + ((COList.Count) * 52) + (LList.Count + COList.Count + TList.Count - 1) * 12 + ((TList.Count) * 184));
				this->LList[k]->Name = L"LList";
				this->LList[k]->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
				this->LList[k]->Size = System::Drawing::Size(650, 149);
				this->LList[k]->TabIndex = 0;
				this->LList[k]->Text = L"سوال " + (k + 1) + ". " + list::SList[j]->Student::AList[azmoon]->Azmoon_class::QList[k]->problem;
				this->Controls->Add(LList[k]);
				this->Update();
				TList.Add(gcnew TextBox());
				this->TList[t]->Location = System::Drawing::Point(17, i + ((LList.Count) * 149) + ((COList.Count) * 52) + (LList.Count + COList.Count + TList.Count - 1) * 12 + ((TList.Count - 1) * 184));
				this->TList[t]->Multiline = true;
				this->TList[t]->Name = L"textBox1";
				this->TList[t]->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
				this->TList[t]->Size = System::Drawing::Size(650, 184);
				this->TList[t]->TabIndex = 0;
				this->TList[t]->TextChanged += gcnew System::EventHandler(this, &EXAM::TTList);
				this->Controls->Add(TList[t]);
				this->Update();
				t++;
			}
			else if (list::SList[j]->Student::AList[azmoon]->Azmoon_class::QList[k]->which == "TF") {
				LList.Add(gcnew Label());
				this->LList[k]->BackColor = System::Drawing::SystemColors::ControlDarkDark;
				this->LList[k]->Font = (gcnew System::Drawing::Font(L"B Nazanin", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(178)));
				this->LList[k]->ForeColor = System::Drawing::Color::White;
				this->LList[k]->Location = System::Drawing::Point(17, i + ((LList.Count - 1) * 149) + ((COList.Count) * 52) + (LList.Count + COList.Count + TList.Count - 1) * 12 + ((TList.Count) * 184));
				this->LList[k]->Name = L"LList";
				this->LList[k]->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
				this->LList[k]->Size = System::Drawing::Size(650, 149);
				this->LList[k]->TabIndex = 0;
				this->LList[k]->Text = L"سوال " + (k + 1) + ". " + list::SList[j]->Student::AList[azmoon]->Azmoon_class::QList[k]->problem;
				this->Controls->Add(LList[k]);
				this->Update();
				COList.Add(gcnew ComboBox());
				this->COList[c]->Font = (gcnew System::Drawing::Font(L"B Nazanin", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(178)));
				this->COList[c]->FormattingEnabled = true;
				this->COList[c]->Location = System::Drawing::Point(17, i + ((LList.Count) * 149) + ((COList.Count - 1) * 52) + (LList.Count + COList.Count + TList.Count - 1) * 12 + ((TList.Count) * 184));
				this->COList[c]->Name = L"comboBox2";
				this->COList[c]->Size = System::Drawing::Size(650, 52);
				this->COList[c]->TabIndex = 1;
				COList[c]->Items->Add(L"صحیح");
				COList[c]->Items->Add(L"غلط");
				this->Controls->Add(COList[c]);
				this->Update();
				c++;
			}
			else {
				LList.Add(gcnew Label());
				this->LList[k]->BackColor = System::Drawing::SystemColors::ControlDarkDark;
				this->LList[k]->Font = (gcnew System::Drawing::Font(L"B Nazanin", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(178)));
				this->LList[k]->ForeColor = System::Drawing::Color::White;
				this->LList[k]->Location = System::Drawing::Point(17, i + ((LList.Count - 1) * 149) + ((COList.Count) * 52) + (LList.Count + COList.Count + TList.Count - 1) * 12 + ((TList.Count) * 184));
				this->LList[k]->Name = L"LList";
				this->LList[k]->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
				this->LList[k]->Size = System::Drawing::Size(650, 149);
				this->LList[k]->TabIndex = 0;
				this->LList[k]->Text = L"سوال " + (k + 1) + ". " + list::SList[j]->Student::AList[azmoon]->Azmoon_class::QList[k]->problem;
				this->Controls->Add(LList[k]);
				this->Update();
				COList.Add(gcnew ComboBox());
				this->COList[c]->Font = (gcnew System::Drawing::Font(L"B Nazanin", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(178)));
				this->COList[c]->FormattingEnabled = true;
				this->COList[c]->Location = System::Drawing::Point(17, i + ((LList.Count) * 149) + ((COList.Count - 1) * 52) + (LList.Count + COList.Count + TList.Count - 1) * 12 + ((TList.Count) * 184));
				this->COList[c]->Name = L"comboBox2";
				this->COList[c]->Size = System::Drawing::Size(650, 52);
				this->COList[c]->TabIndex = 1;
				COList[c]->Items->Add(list::SList[j]->Student::AList[azmoon]->Azmoon_class::QList[k]->num1);
				COList[c]->Items->Add(list::SList[j]->Student::AList[azmoon]->Azmoon_class::QList[k]->num2);
				COList[c]->Items->Add(list::SList[j]->Student::AList[azmoon]->Azmoon_class::QList[k]->num3);
				COList[c]->Items->Add(list::SList[j]->Student::AList[azmoon]->Azmoon_class::QList[k]->num4);
				this->Controls->Add(COList[c]);
				this->Update();
				c++;
			}
		}
		button4->Location = System::Drawing::Point(300, i + ((LList.Count) * 149) + ((COList.Count) * 52) + (LList.Count + COList.Count + TList.Count - 1) * 12 + ((TList.Count) * 184)+200);
		t = 0;
		c = 0;
	}
private: System::Void TTList(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	for (int k = 0; k < list::SList[j]->Student::AList[azmoon]->Azmoon_class::QList.Count; k++) {
		if (list::SList[j]->Student::AList[azmoon]->Azmoon_class::QList[k]->which == "TA") {
			list::SList[j]->Student::AList[azmoon]->Azmoon_class::QList[k]->answer = TList[t]->Text;
			t++;
		}
		else {
			list::SList[j]->Student::AList[azmoon]->Azmoon_class::QList[k]->answer = COList[c]->Text;
			c++;
		}
	}
	COList.Clear();
	TList.Clear();
	LList.Clear();
	System::Windows::Forms::Form::Close();
	
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	SECOND--;
	if (SECOND == -1) {
		SECOND = 59;
		MINUTE--;
		if (MINUTE == -1) {
			MINUTE = 59;
			HOUR--;
		}
	}
	SEC = System::Convert::ToString(SECOND);
	MIN = System::Convert::ToString(MINUTE);
	H = System::Convert::ToString(HOUR);
	label1->Text = H + ":" + MIN + ":" + SEC;
	DateTime dt = DateTime::Now;
	if (dt.Year == list::SList[j]->Student::AList[azmoon]->year2 && dt.Month == list::SList[j]->Student::AList[azmoon]->mounth2 && dt.Day == list::SList[j]->Student::AList[azmoon]->day2) {
		if (dt.Hour >= list::SList[j]->Student::AList[azmoon]->end_ah) 
			if (dt.Minute >= list::SList[j]->Student::AList[azmoon]->end_am)
				System::Windows::Forms::Form::Close();
	}
	if (HOUR == -1) {
		System::Windows::Forms::Form::Close();
	}
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
