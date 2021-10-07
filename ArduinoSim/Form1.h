#pragma once

#include "ArduinoSim.h"
#include "Willys.c"
#include <sstream>

namespace ArduinoSim {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;



	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::CheckedListBox^  checkedListBox1;
	private: System::Windows::Forms::CheckedListBox^  checkedListBox2;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::CheckedListBox^  checkedListBox3;
	private: System::Windows::Forms::CheckedListBox^  checkedListBox4;
	private: System::Windows::Forms::TrackBar^  trackBar1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;

	private: System::ComponentModel::IContainer^  components;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->checkedListBox2 = (gcnew System::Windows::Forms::CheckedListBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->checkedListBox3 = (gcnew System::Windows::Forms::CheckedListBox());
			this->checkedListBox4 = (gcnew System::Windows::Forms::CheckedListBox());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Location = System::Drawing::Point(117, -43);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(318, 659);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Form1::pictureBox1_Click);
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Location = System::Drawing::Point(430, 174);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(111, 364);
			this->checkedListBox1->TabIndex = 1;
			this->checkedListBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::checkedListBox1_SelectedIndexChanged);
			// 
			// checkedListBox2
			// 
			this->checkedListBox2->CheckOnClick = true;
			this->checkedListBox2->FormattingEnabled = true;
			this->checkedListBox2->Location = System::Drawing::Point(29, 298);
			this->checkedListBox2->Name = L"checkedListBox2";
			this->checkedListBox2->Size = System::Drawing::Size(90, 274);
			this->checkedListBox2->TabIndex = 2;
			this->checkedListBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::checkedListBox2_SelectedIndexChanged);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 50;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// checkedListBox3
			// 
			this->checkedListBox3->CheckOnClick = true;
			this->checkedListBox3->FormattingEnabled = true;
			this->checkedListBox3->Location = System::Drawing::Point(545, 264);
			this->checkedListBox3->Name = L"checkedListBox3";
			this->checkedListBox3->Size = System::Drawing::Size(96, 274);
			this->checkedListBox3->TabIndex = 3;
			// 
			// checkedListBox4
			// 
			this->checkedListBox4->CheckOnClick = true;
			this->checkedListBox4->FormattingEnabled = true;
			this->checkedListBox4->Location = System::Drawing::Point(647, 264);
			this->checkedListBox4->Name = L"checkedListBox4";
			this->checkedListBox4->Size = System::Drawing::Size(96, 274);
			this->checkedListBox4->TabIndex = 4;
			// 
			// trackBar1
			// 
			this->trackBar1->LargeChange = 50;
			this->trackBar1->Location = System::Drawing::Point(441, 22);
			this->trackBar1->Maximum = 1000;
			this->trackBar1->Minimum = 1;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(175, 45);
			this->trackBar1->SmallChange = 10;
			this->trackBar1->TabIndex = 6;
			this->trackBar1->Value = 100;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &Form1::trackBar1_Scroll);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(506, 54);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 7;
			this->label1->Text = L"label1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(493, 3);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(54, 13);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Scan time";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(493, 93);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 13);
			this->label3->TabIndex = 9;
			this->label3->Text = L"label3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(493, 115);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"label4";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(581, 153);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(35, 13);
			this->label5->TabIndex = 11;
			this->label5->Text = L"label5";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(765, 693);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->trackBar1);
			this->Controls->Add(this->checkedListBox4);
			this->Controls->Add(this->checkedListBox3);
			this->Controls->Add(this->checkedListBox2);
			this->Controls->Add(this->checkedListBox1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"Form1";
			this->Text = L"Willys Arduino simulator";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {

				 setup();

                 #include "autogentagstrings.h"

				 for (int i = 13; i >= 0; i--) {
					 ostringstream stream;
					 stream << i;
					 stream << " " << pinDesc[stream.str()];
					 checkedListBox1->Items->Add(gcnew String(stream.str().c_str()));
				 }

				 checkedListBox1->Items->Add("");
				 checkedListBox1->Items->Add("");

				 for (int i = 14; i < 22; i++) {
					 ostringstream stream;
					 stream << i;
					 stream << " " << pinDesc[stream.str()];
					 checkedListBox1->Items->Add(gcnew String(stream.str().c_str()));
				 }

				 for (int i = 0; i < 8; i++){
					 ostringstream stream;
					 stream << "A" << i;
					 stream << " " << pinDesc[stream.str()];
					 checkedListBox2->Items->Add(gcnew String(stream.str().c_str()));
				 }

				 checkedListBox2->Items->Add("");
				 for (int i = 8; i < 16; i++) {
					 ostringstream stream;
					 stream << "A" << i;
					 stream << " " << pinDesc[stream.str()];
					 checkedListBox2->Items->Add(gcnew String(stream.str().c_str()));
				 }

				 for (int i = 22; i < 53; i += 2) {
					 ostringstream stream;
					 stream << i;
					 stream << " " << pinDesc[stream.str()];
					 checkedListBox3->Items->Add(gcnew String(stream.str().c_str()));
				 }

				 for (int i = 23; i < 54; i += 2) {
					 ostringstream stream;
					 stream << i;
					 stream << " " << pinDesc[stream.str()];
					 checkedListBox4->Items->Add(gcnew String(stream.str().c_str()));
				 }

				 System::EventArgs^ args;
				 trackBar1_Scroll(this,args);

			 }



	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void checkedListBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void checkedListBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 }



private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
			 // inputs
		
			for (int i = 0; i < 22; i++)
				 if (!pinWriteable[i]) // not writeable means readable :)
					 pinStatus[i] = checkedListBox1->GetItemCheckState(
					 checkedListBox1->FindString(i.ToString()))
					 == CheckState::Unchecked;
				 for (int i = 0; i < 16; i++)
				 if (!pinWriteable[i + 54])
					 pinStatus[i + 54] = checkedListBox2->GetItemCheckState(
					 checkedListBox2->FindString("A" + i.ToString()))
					 == CheckState::Unchecked;
				 for (int i = 22; i < 54; i += 2)
				 if (!pinWriteable[i])
					 pinStatus[i] = checkedListBox3->GetItemCheckState(
					 checkedListBox3->FindString(i.ToString()))
					 == CheckState::Unchecked;
				 for (int i = 23; i < 54; i += 2)
				 if (!pinWriteable[i])
					 pinStatus[i] = checkedListBox4->GetItemCheckState(
					 checkedListBox4->FindString(i.ToString()))
					 == CheckState::Unchecked;

			 loop();

				 for (int i = 0; i < 22; i++)
				 if (pinWriteable[i])
					 checkedListBox1->SetItemCheckState(
					 checkedListBox1->FindString(i.ToString()),
					 (pinStatus[i]) ? CheckState::Unchecked : CheckState::Checked);
				 for (int i = 0; i < 16; i++)
				 if (pinWriteable[i + 54])
					 checkedListBox2->SetItemCheckState(
					 checkedListBox2->FindString("A" + i.ToString()),
					 (pinStatus[i + 54]) ? CheckState::Unchecked : CheckState::Checked);

				 for (int i = 22; i < 54; i += 2)
				 if (pinWriteable[i])
					 checkedListBox3->SetItemCheckState(
					 checkedListBox3->FindString(i.ToString()),
					 (pinStatus[i]) ? CheckState::Unchecked : CheckState::Checked);
				 for (int i = 23; i < 54; i += 2)
				 if (pinWriteable[i])
					 checkedListBox4->SetItemCheckState(
					 checkedListBox4->FindString(i.ToString()),
					 (pinStatus[i]) ? CheckState::Unchecked : CheckState::Checked);

			label3->Text = "wiper interval "+(interval/1000).ToString();
			label4->Text = "numWiperToggles " + numWiperToggles;
			label5->Text = "lightMode " + lightMode;


		 }


private: System::Void trackBar1_Scroll(System::Object^  sender, System::EventArgs^  e) {
			 timer1->Interval = trackBar1->Value;
			 label1->Text = trackBar1->Value.ToString()+" ms";

}
};
}

