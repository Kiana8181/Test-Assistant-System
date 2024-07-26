#pragma once
#include"person.h"
#include<chrono>
namespace Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Azmoon_History
	/// </summary>
	public ref class Azmoon_History : public System::Windows::Forms::Form
	{
	public:
		int TAzmoon;
		int j;
		System::String^ Azmoon;
	private: System::Windows::Forms::ListView^ listView1;
	public:
	private: System::Windows::Forms::ColumnHeader^ columnHeader8;
	private: System::Windows::Forms::ColumnHeader^ columnHeader9;
	private: System::Windows::Forms::ColumnHeader^ columnHeader10;
	private: System::Windows::Forms::ColumnHeader^ columnHeader11;
	private: System::Windows::Forms::ColumnHeader^ columnHeader12;
	private: System::Windows::Forms::ColumnHeader^ columnHeader13;
	private: System::Windows::Forms::ColumnHeader^ columnHeader14;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Panel^ panel1;

	public:









	public:
		__int32 azmoon;
		Azmoon_History(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Azmoon_History(int m, int n)
		{
			InitializeComponent();
			j = m;
			TAzmoon = n;

			//
			//TODO: Add the constructor code here
			//
		}

		

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Azmoon_History()
		{
			if (components)
			{
				delete components;
			}
		}
		
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button5;







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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Azmoon_History::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader8 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader9 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader10 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader11 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader12 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader13 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader14 = (gcnew System::Windows::Forms::ColumnHeader());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"B Nazanin", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(294, 71);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(381, 89);
			this->label1->TabIndex = 5;
			this->label1->Text = L"تاریخچه آزمون ها";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"B Nazanin", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(169, 198);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(632, 71);
			this->label2->TabIndex = 9;
			this->label2->Text = L"لطفا آزمون مورد نظر خود را انتخاب کنید";
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"B Nazanin", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(320, 287);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(329, 63);
			this->comboBox1->TabIndex = 13;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Azmoon_History::comboBox1_SelectedIndexChanged);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(414, 362);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(132, 51);
			this->button1->TabIndex = 14;
			this->button1->Text = L"ادامه";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Azmoon_History::button1_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(44, 523);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(132, 51);
			this->button5->TabIndex = 15;
			this->button5->Text = L"بازگشت";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Azmoon_History::button5_Click);
			// 
			// listView1
			// 
			this->listView1->BackColor = System::Drawing::Color::White;
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(7) {
				this->columnHeader8, this->columnHeader9,
					this->columnHeader10, this->columnHeader11, this->columnHeader12, this->columnHeader13, this->columnHeader14
			});
			this->listView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listView1->Font = (gcnew System::Drawing::Font(L"B Nazanin", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->listView1->ForeColor = System::Drawing::Color::Black;
			this->listView1->FullRowSelect = true;
			this->listView1->GridLines = true;
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(0, 0);
			this->listView1->Name = L"listView1";
			this->listView1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->listView1->RightToLeftLayout = true;
			this->listView1->Size = System::Drawing::Size(960, 620);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &Azmoon_History::listView1_SelectedIndexChanged);
			// 
			// columnHeader8
			// 
			this->columnHeader8->Text = L"نام";
			this->columnHeader8->Width = 185;
			// 
			// columnHeader9
			// 
			this->columnHeader9->Text = L"نام خانوادگی";
			this->columnHeader9->Width = 218;
			// 
			// columnHeader10
			// 
			this->columnHeader10->Text = L"شماره دانشجویی";
			this->columnHeader10->Width = 233;
			// 
			// columnHeader11
			// 
			this->columnHeader11->Text = L"نمره";
			this->columnHeader11->Width = 172;
			// 
			// columnHeader12
			// 
			this->columnHeader12->Text = L"تاریخ آزمون";
			this->columnHeader12->Width = 205;
			// 
			// columnHeader13
			// 
			this->columnHeader13->Text = L"زمان شروع آزمون";
			this->columnHeader13->Width = 209;
			// 
			// columnHeader14
			// 
			this->columnHeader14->Text = L"مدت زمان آزمون";
			this->columnHeader14->Width = 197;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(414, 542);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(132, 51);
			this->button2->TabIndex = 16;
			this->button2->Text = L"بازگشت";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Azmoon_History::button2_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->listView1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(960, 620);
			this->panel1->TabIndex = 16;
			this->panel1->Visible = false;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Azmoon_History::panel1_Paint);
			// 
			// Azmoon_History
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(960, 620);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Azmoon_History";
			this->Text = L"Azmoon_History";
			this->Load += gcnew System::EventHandler(this, &Azmoon_History::Azmoon_History_Load);
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Azmoon_History_Load(System::Object^ sender, System::EventArgs^ e) {
		for (int i = 1; i <= TAzmoon; i++) {
			comboBox1->Items->Add(L"آزمون " + i);
		}
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::Form::Close();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (comboBox1->Text == "")
		MessageBox::Show("Please select an exam!");
	else {
		listView1->Items->Clear();
		Azmoon = comboBox1->Text;
		Azmoon = Azmoon->Substring(Azmoon->Length - 1);
		azmoon = System::Int32::Parse(Azmoon);
		azmoon--;
		for (int i = 0; i < list::ManagerList[j]->Manager::AList[azmoon]->Azmoon_class::SAList.Count; i++) {
			System::String^ n = list::ManagerList[j]->Manager::AList[azmoon]->Azmoon_class::SAList[i]->name;
			System::String^ ln = list::ManagerList[j]->Manager::AList[azmoon]->Azmoon_class::SAList[i]->last_name;
			System::String^ stn = list::ManagerList[j]->Manager::AList[azmoon]->Azmoon_class::SAList[i]->student_number;
			ListViewItem^ LView = gcnew ListViewItem(n);
			LView->SubItems->Add(ln);
			LView->SubItems->Add(stn);
			if (list::ManagerList[j]->Manager::AList[azmoon]->Azmoon_class::SAList[i]->score_T != -1) {
				LView->SubItems->Add(System::Convert::ToString(list::ManagerList[j]->Manager::AList[azmoon]->Azmoon_class::SAList[i]->score_T));
			}
			else LView->SubItems->Add(L"در حال تصحیح");
			LView->SubItems->Add(list::ManagerList[j]->Manager::AList[azmoon]->day + " / " + list::ManagerList[j]->Manager::AList[azmoon]->mounth + " / " + list::ManagerList[j]->Manager::AList[azmoon]->year);
			LView->SubItems->Add(list::ManagerList[j]->Manager::AList[azmoon]->start_am + " : " + list::ManagerList[j]->Manager::AList[azmoon]->start_ah);
			int min = list::ManagerList[j]->Manager::AList[azmoon]->min;
			LView->SubItems->Add(System::Convert::ToString(min)+L" دقیقه");
			listView1->Items->Add(LView);
		}
		ListViewItem^ LView = gcnew ListViewItem(L"میانگین");
		LView->SubItems->Add("");
		LView->SubItems->Add("");
		int total = list::ManagerList[j]->Manager::AList[azmoon]->Azmoon_class::SAList.Count;
		double average = 0;
		for (int m = 0; m < list::ManagerList[j]->Manager::AList[azmoon]->Azmoon_class::SAList.Count; m++) {
			if (list::ManagerList[j]->Manager::AList[azmoon]->Azmoon_class::SAList[m]->score_T == -1) total--;
			else
				average += list::ManagerList[j]->Manager::AList[azmoon]->Azmoon_class::SAList[m]->score_T;
		}
		if (total != 0) average /= (double)total;
		else average = 0;
		LView->SubItems->Add(System::Convert::ToString(average));
		panel1->Visible = true;
		listView1->Items->Add(LView);
	}
}
private: System::Void listView1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	panel1->Visible = false;
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
