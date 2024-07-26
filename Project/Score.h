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
	/// Summary for Score
	/// </summary>
	public ref class Score : public System::Windows::Forms::Form
	{
	public:
		int j;
		__int32 azmoon;
		System::String^ Azmoon;
		Score(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Score(int n)
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
		~Score()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button2;
	protected:
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::ColumnHeader^ columnHeader1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader2;








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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Score::typeid));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(405, 410);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(132, 51);
			this->button2->TabIndex = 28;
			this->button2->Text = L"ادامه";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Score::button2_Click);
			// 
			// comboBox2
			// 
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"B Nazanin", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(308, 332);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(329, 63);
			this->comboBox2->TabIndex = 27;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &Score::comboBox2_SelectedIndexChanged);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(43, 531);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(132, 51);
			this->button3->TabIndex = 26;
			this->button3->Text = L"بازگشت";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Score::button3_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"B Nazanin", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(172, 205);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(632, 71);
			this->label3->TabIndex = 25;
			this->label3->Text = L"لطفا آزمون مورد نظر خود را انتخاب کنید";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"B Nazanin", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(401, 79);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(153, 89);
			this->label4->TabIndex = 24;
			this->label4->Text = L"نمرات";
			// 
			// panel1
			// 
			this->panel1->AutoScroll = true;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->listView1);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(960, 620);
			this->panel1->TabIndex = 29;
			this->panel1->Visible = false;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Score::panel1_Paint);
			// 
			// label9
			// 
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"B Nazanin", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(418, 332);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(136, 71);
			this->label9->TabIndex = 31;
			this->label9->Text = L"label9";
			// 
			// label8
			// 
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"B Nazanin", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(413, 248);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(141, 71);
			this->label8->TabIndex = 30;
			this->label8->Text = L"label8";
			// 
			// label7
			// 
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"B Nazanin", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(405, 166);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(297, 71);
			this->label7->TabIndex = 29;
			this->label7->Text = L"label7";
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) { this->columnHeader1, this->columnHeader2 });
			this->listView1->Font = (gcnew System::Drawing::Font(L"B Nazanin", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->listView1->FullRowSelect = true;
			this->listView1->GridLines = true;
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(75, 135);
			this->listView1->Name = L"listView1";
			this->listView1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->listView1->RightToLeftLayout = true;
			this->listView1->Size = System::Drawing::Size(258, 302);
			this->listView1->TabIndex = 28;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &Score::listView1_SelectedIndexChanged);
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"شماره سوال";
			this->columnHeader1->Width = 159;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"نمره";
			this->columnHeader2->Width = 90;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(43, 531);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(132, 51);
			this->button1->TabIndex = 27;
			this->button1->Text = L"بازگشت";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Score::button1_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"B Nazanin", 28.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(178)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(590, 324);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(214, 71);
			this->label6->TabIndex = 3;
			this->label6->Text = L"میانگین کل";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"B Nazanin", 28.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(178)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(710, 248);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(94, 71);
			this->label5->TabIndex = 2;
			this->label5->Text = L"رتبه";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"B Nazanin", 28.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(178)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(708, 159);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(96, 71);
			this->label2->TabIndex = 1;
			this->label2->Text = L"نمره";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"B Nazanin", 28.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(178)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(734, 49);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(168, 71);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			// 
			// Score
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(960, 620);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Name = L"Score";
			this->Text = L"Score";
			this->Load += gcnew System::EventHandler(this, &Score::Score_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Score_Load(System::Object^ sender, System::EventArgs^ e) {
		int TAzmoon = list::SList[j]->Student::AList.Count;
		for (int i = 1; i <= TAzmoon; i++) {
			comboBox2->Items->Add(L"آزمون " + i);
		}
	}
	private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (comboBox2->Text == "")
		MessageBox::Show("Please select an exam!");
	else {
		listView1->Items->Clear();
		int i, k;
		Azmoon = comboBox2->Text;
		Azmoon = Azmoon->Substring(Azmoon->Length - 1);
		azmoon = System::Int32::Parse(Azmoon);
		azmoon--;
		label1->Text = L"آزمون " + (azmoon + 1);
		if (list::SList[j]->Student::AList[azmoon]->score_t == -1) label7->Text = L"در حال تحصیح";
		else label7->Text = System::Convert::ToString(list::SList[j]->Student::AList[azmoon]->score_t);
		for (i = 0; i < list::ManagerList.Count; i++) {
			for (k = 0; k < list::ManagerList[i]->AList.Count; k++) {
				if (list::SList[j]->Student::AList[azmoon]->shenase == list::ManagerList[i]->Manager::AList[k]->shenase) break;
			}
			if (i < list::ManagerList.Count && k < list::ManagerList[i]->AList.Count)
				if (list::SList[j]->Student::AList[azmoon]->shenase == list::ManagerList[i]->Manager::AList[k]->shenase) break;
		}
		int total = list::ManagerList[i]->Manager::AList[k]->Azmoon_class::SAList.Count;
		list::SList[j]->Student::AList[azmoon]->num = 1;
		for (int m = 0; m < list::ManagerList[i]->Manager::AList[k]->Azmoon_class::SAList.Count; m++) {
			if (list::SList[j]->Student::AList[azmoon]->score_t < list::ManagerList[i]->Manager::AList[k]->Azmoon_class::SAList[m]->score_T)
				list::SList[j]->Student::AList[azmoon]->num++;
		}
		label8->Text = System::Convert::ToString(list::SList[j]->Student::AList[azmoon]->num);
		double average=0;
		for (int m = 0; m < list::ManagerList[i]->Manager::AList[k]->Azmoon_class::SAList.Count; m++) {
			if (list::ManagerList[i]->Manager::AList[k]->Azmoon_class::SAList[m]->score_T == -1) total--;
			else
				average += list::ManagerList[i]->Manager::AList[k]->Azmoon_class::SAList[m]->score_T;
		}
		if (total != 0) average /= (double)total;
		else average = 0;
		label9->Text = System::Convert::ToString(average);

		for (int m = 0; m < list::SList[j]->Student::AList[azmoon]->Azmoon_class::QList.Count; m++) {
			System::String^ soal = L"سوال " + (m + 1);
			System::String^ mark = System::Convert::ToString(list::SList[j]->Student::AList[azmoon]->Azmoon_class::QList[m]->score);
			ListViewItem^ LView = gcnew ListViewItem(soal);
			LView->SubItems->Add(mark);
			listView1->Items->Add(LView);
		}
		panel1->Visible = true;
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::Form::Close();
}
private: System::Void listView1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	panel1->Visible = false;
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}
