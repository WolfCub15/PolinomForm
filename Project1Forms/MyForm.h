#pragma once
#include <msclr\marshal_cppstd.h>
#include "Polinom.h"
Polinom* P1;
Polinom* P2;
Polinom* P3;
namespace Project1Forms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label4;
	protected:
	private: System::Windows::Forms::TextBox^ Max_degree;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ Count;
	private: System::Windows::Forms::Button^ Block;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ Pol1;
	private: System::Windows::Forms::TextBox^ Pol2;
	private: System::Windows::Forms::Button^ Add1;
	private: System::Windows::Forms::TextBox^ textAdd1;




	private: System::Windows::Forms::Button^ Del1;
	private: System::Windows::Forms::TextBox^ textDel1;
	private: System::Windows::Forms::Button^ Add2;
	private: System::Windows::Forms::TextBox^ textAdd2;




	private: System::Windows::Forms::Button^ Del2;
	private: System::Windows::Forms::TextBox^ textDel2;
	private: System::Windows::Forms::Button^ BuildP1P2;



	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ Pol3;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ K;
	private: System::Windows::Forms::Button^ plus;
	private: System::Windows::Forms::Button^ min;
	private: System::Windows::Forms::Button^ mult;
	private: System::Windows::Forms::Button^ multK;
	private: System::Windows::Forms::Button^ exit;
	private: System::Windows::Forms::Button^ Clear;
	private: System::Windows::Forms::TextBox^ P1build;
	private: System::Windows::Forms::TextBox^ P2build;







	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Max_degree = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->Count = (gcnew System::Windows::Forms::TextBox());
			this->Block = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Pol1 = (gcnew System::Windows::Forms::TextBox());
			this->Pol2 = (gcnew System::Windows::Forms::TextBox());
			this->Add1 = (gcnew System::Windows::Forms::Button());
			this->textAdd1 = (gcnew System::Windows::Forms::TextBox());
			this->Del1 = (gcnew System::Windows::Forms::Button());
			this->textDel1 = (gcnew System::Windows::Forms::TextBox());
			this->Add2 = (gcnew System::Windows::Forms::Button());
			this->textAdd2 = (gcnew System::Windows::Forms::TextBox());
			this->Del2 = (gcnew System::Windows::Forms::Button());
			this->textDel2 = (gcnew System::Windows::Forms::TextBox());
			this->BuildP1P2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Pol3 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->K = (gcnew System::Windows::Forms::TextBox());
			this->plus = (gcnew System::Windows::Forms::Button());
			this->min = (gcnew System::Windows::Forms::Button());
			this->mult = (gcnew System::Windows::Forms::Button());
			this->multK = (gcnew System::Windows::Forms::Button());
			this->exit = (gcnew System::Windows::Forms::Button());
			this->Clear = (gcnew System::Windows::Forms::Button());
			this->P1build = (gcnew System::Windows::Forms::TextBox());
			this->P2build = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(12, 21);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(119, 25);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Max Degree";
			// 
			// Max_degree
			// 
			this->Max_degree->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Max_degree->Location = System::Drawing::Point(137, 12);
			this->Max_degree->Multiline = true;
			this->Max_degree->Name = L"Max_degree";
			this->Max_degree->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->Max_degree->Size = System::Drawing::Size(181, 56);
			this->Max_degree->TabIndex = 14;
			this->Max_degree->TextChanged += gcnew System::EventHandler(this, &MyForm::Max_degree_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(360, 12);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(65, 25);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Count";
			// 
			// Count
			// 
			this->Count->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Count->Location = System::Drawing::Point(431, 12);
			this->Count->Multiline = true;
			this->Count->Name = L"Count";
			this->Count->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->Count->Size = System::Drawing::Size(181, 56);
			this->Count->TabIndex = 16;
			this->Count->TextChanged += gcnew System::EventHandler(this, &MyForm::Count_TextChanged);
			// 
			// Block
			// 
			this->Block->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Block->Location = System::Drawing::Point(631, 12);
			this->Block->Name = L"Block";
			this->Block->Size = System::Drawing::Size(174, 56);
			this->Block->TabIndex = 25;
			this->Block->Text = L"Block";
			this->Block->UseVisualStyleBackColor = true;
			this->Block->Click += gcnew System::EventHandler(this, &MyForm::Block_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 94);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(93, 25);
			this->label1->TabIndex = 26;
			this->label1->Text = L"Polinom1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(22, 308);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(93, 25);
			this->label2->TabIndex = 27;
			this->label2->Text = L"Polinom2";
			// 
			// Pol1
			// 
			this->Pol1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Pol1->Location = System::Drawing::Point(137, 94);
			this->Pol1->Multiline = true;
			this->Pol1->Name = L"Pol1";
			this->Pol1->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->Pol1->Size = System::Drawing::Size(779, 68);
			this->Pol1->TabIndex = 28;
			this->Pol1->TextChanged += gcnew System::EventHandler(this, &MyForm::Pol1_TextChanged);
			// 
			// Pol2
			// 
			this->Pol2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Pol2->Location = System::Drawing::Point(137, 265);
			this->Pol2->Multiline = true;
			this->Pol2->Name = L"Pol2";
			this->Pol2->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->Pol2->Size = System::Drawing::Size(779, 68);
			this->Pol2->TabIndex = 29;
			this->Pol2->TextChanged += gcnew System::EventHandler(this, &MyForm::Pol2_TextChanged);
			// 
			// Add1
			// 
			this->Add1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Add1->Location = System::Drawing::Point(922, 145);
			this->Add1->Name = L"Add1";
			this->Add1->Size = System::Drawing::Size(208, 39);
			this->Add1->TabIndex = 30;
			this->Add1->Text = L"Add Monom";
			this->Add1->UseVisualStyleBackColor = true;
			this->Add1->Click += gcnew System::EventHandler(this, &MyForm::Add1_Click);
			// 
			// textAdd1
			// 
			this->textAdd1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textAdd1->Location = System::Drawing::Point(922, 190);
			this->textAdd1->Multiline = true;
			this->textAdd1->Name = L"textAdd1";
			this->textAdd1->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textAdd1->Size = System::Drawing::Size(230, 46);
			this->textAdd1->TabIndex = 31;
			this->textAdd1->TextChanged += gcnew System::EventHandler(this, &MyForm::textAdd1_TextChanged);
			// 
			// Del1
			// 
			this->Del1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Del1->Location = System::Drawing::Point(1136, 145);
			this->Del1->Name = L"Del1";
			this->Del1->Size = System::Drawing::Size(208, 39);
			this->Del1->TabIndex = 32;
			this->Del1->Text = L"Del Monom";
			this->Del1->UseVisualStyleBackColor = true;
			this->Del1->Click += gcnew System::EventHandler(this, &MyForm::Del1_Click);
			// 
			// textDel1
			// 
			this->textDel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textDel1->Location = System::Drawing::Point(1136, 190);
			this->textDel1->Multiline = true;
			this->textDel1->Name = L"textDel1";
			this->textDel1->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textDel1->Size = System::Drawing::Size(230, 46);
			this->textDel1->TabIndex = 33;
			this->textDel1->TextChanged += gcnew System::EventHandler(this, &MyForm::textDel1_TextChanged);
			// 
			// Add2
			// 
			this->Add2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Add2->Location = System::Drawing::Point(922, 316);
			this->Add2->Name = L"Add2";
			this->Add2->Size = System::Drawing::Size(208, 39);
			this->Add2->TabIndex = 34;
			this->Add2->Text = L"Add Monom";
			this->Add2->UseVisualStyleBackColor = true;
			this->Add2->Click += gcnew System::EventHandler(this, &MyForm::Add2_Click);
			// 
			// textAdd2
			// 
			this->textAdd2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textAdd2->Location = System::Drawing::Point(922, 361);
			this->textAdd2->Multiline = true;
			this->textAdd2->Name = L"textAdd2";
			this->textAdd2->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textAdd2->Size = System::Drawing::Size(230, 46);
			this->textAdd2->TabIndex = 35;
			this->textAdd2->TextChanged += gcnew System::EventHandler(this, &MyForm::textAdd2_TextChanged);
			// 
			// Del2
			// 
			this->Del2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Del2->Location = System::Drawing::Point(1136, 316);
			this->Del2->Name = L"Del2";
			this->Del2->Size = System::Drawing::Size(208, 39);
			this->Del2->TabIndex = 36;
			this->Del2->Text = L"Del Monom";
			this->Del2->UseVisualStyleBackColor = true;
			this->Del2->Click += gcnew System::EventHandler(this, &MyForm::Del2_Click);
			// 
			// textDel2
			// 
			this->textDel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textDel2->Location = System::Drawing::Point(1136, 361);
			this->textDel2->Multiline = true;
			this->textDel2->Name = L"textDel2";
			this->textDel2->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textDel2->Size = System::Drawing::Size(230, 46);
			this->textDel2->TabIndex = 37;
			this->textDel2->TextChanged += gcnew System::EventHandler(this, &MyForm::textDel2_TextChanged);
			// 
			// BuildP1P2
			// 
			this->BuildP1P2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->BuildP1P2->Location = System::Drawing::Point(922, 12);
			this->BuildP1P2->Name = L"BuildP1P2";
			this->BuildP1P2->Size = System::Drawing::Size(422, 89);
			this->BuildP1P2->TabIndex = 38;
			this->BuildP1P2->Text = L"Build polinom1 and polinom2";
			this->BuildP1P2->UseVisualStyleBackColor = true;
			this->BuildP1P2->Click += gcnew System::EventHandler(this, &MyForm::BuildP1P2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(12, 492);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(66, 25);
			this->label3->TabIndex = 39;
			this->label3->Text = L"Result";
			// 
			// Pol3
			// 
			this->Pol3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Pol3->Location = System::Drawing::Point(137, 492);
			this->Pol3->Multiline = true;
			this->Pol3->Name = L"Pol3";
			this->Pol3->ReadOnly = true;
			this->Pol3->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->Pol3->Size = System::Drawing::Size(1207, 75);
			this->Pol3->TabIndex = 40;
			this->Pol3->TextChanged += gcnew System::EventHandler(this, &MyForm::Pol3_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(132, 443);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(28, 25);
			this->label6->TabIndex = 41;
			this->label6->Text = L"k:";
			// 
			// K
			// 
			this->K->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->K->Location = System::Drawing::Point(181, 436);
			this->K->Multiline = true;
			this->K->Name = L"K";
			this->K->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->K->Size = System::Drawing::Size(113, 46);
			this->K->TabIndex = 42;
			this->K->TextChanged += gcnew System::EventHandler(this, &MyForm::K_TextChanged);
			// 
			// plus
			// 
			this->plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->plus->Location = System::Drawing::Point(337, 443);
			this->plus->Name = L"plus";
			this->plus->Size = System::Drawing::Size(88, 39);
			this->plus->TabIndex = 43;
			this->plus->Text = L"+";
			this->plus->UseVisualStyleBackColor = true;
			this->plus->Click += gcnew System::EventHandler(this, &MyForm::plus_Click);
			// 
			// min
			// 
			this->min->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->min->Location = System::Drawing::Point(449, 443);
			this->min->Name = L"min";
			this->min->Size = System::Drawing::Size(88, 39);
			this->min->TabIndex = 44;
			this->min->Text = L"-";
			this->min->UseVisualStyleBackColor = true;
			this->min->Click += gcnew System::EventHandler(this, &MyForm::min_Click);
			// 
			// mult
			// 
			this->mult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->mult->Location = System::Drawing::Point(562, 443);
			this->mult->Name = L"mult";
			this->mult->Size = System::Drawing::Size(88, 39);
			this->mult->TabIndex = 45;
			this->mult->Text = L"*";
			this->mult->UseVisualStyleBackColor = true;
			this->mult->Click += gcnew System::EventHandler(this, &MyForm::mult_Click);
			// 
			// multK
			// 
			this->multK->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->multK->Location = System::Drawing::Point(684, 443);
			this->multK->Name = L"multK";
			this->multK->Size = System::Drawing::Size(88, 39);
			this->multK->TabIndex = 46;
			this->multK->Text = L"*k";
			this->multK->UseVisualStyleBackColor = true;
			this->multK->Click += gcnew System::EventHandler(this, &MyForm::multK_Click);
			// 
			// exit
			// 
			this->exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->exit->Location = System::Drawing::Point(1256, 573);
			this->exit->Name = L"exit";
			this->exit->Size = System::Drawing::Size(88, 39);
			this->exit->TabIndex = 47;
			this->exit->Text = L"Exit";
			this->exit->UseVisualStyleBackColor = true;
			this->exit->Click += gcnew System::EventHandler(this, &MyForm::exit_Click);
			// 
			// Clear
			// 
			this->Clear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Clear->Location = System::Drawing::Point(1136, 573);
			this->Clear->Name = L"Clear";
			this->Clear->Size = System::Drawing::Size(88, 39);
			this->Clear->TabIndex = 48;
			this->Clear->Text = L"Clear";
			this->Clear->UseVisualStyleBackColor = true;
			this->Clear->Click += gcnew System::EventHandler(this, &MyForm::Clear_Click);
			// 
			// P1build
			// 
			this->P1build->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->P1build->Location = System::Drawing::Point(137, 168);
			this->P1build->Multiline = true;
			this->P1build->Name = L"P1build";
			this->P1build->ReadOnly = true;
			this->P1build->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->P1build->Size = System::Drawing::Size(779, 68);
			this->P1build->TabIndex = 49;
			this->P1build->TextChanged += gcnew System::EventHandler(this, &MyForm::P1build_TextChanged);
			// 
			// P2build
			// 
			this->P2build->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->P2build->Location = System::Drawing::Point(137, 339);
			this->P2build->Multiline = true;
			this->P2build->Name = L"P2build";
			this->P2build->ReadOnly = true;
			this->P2build->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->P2build->Size = System::Drawing::Size(779, 68);
			this->P2build->TabIndex = 50;
			this->P2build->TextChanged += gcnew System::EventHandler(this, &MyForm::P2build_TextChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1381, 624);
			this->Controls->Add(this->P2build);
			this->Controls->Add(this->P1build);
			this->Controls->Add(this->Clear);
			this->Controls->Add(this->exit);
			this->Controls->Add(this->multK);
			this->Controls->Add(this->mult);
			this->Controls->Add(this->min);
			this->Controls->Add(this->plus);
			this->Controls->Add(this->K);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->Pol3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->BuildP1P2);
			this->Controls->Add(this->textDel2);
			this->Controls->Add(this->Del2);
			this->Controls->Add(this->textAdd2);
			this->Controls->Add(this->Add2);
			this->Controls->Add(this->textDel1);
			this->Controls->Add(this->Del1);
			this->Controls->Add(this->textAdd1);
			this->Controls->Add(this->Add1);
			this->Controls->Add(this->Pol2);
			this->Controls->Add(this->Pol1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Block);
			this->Controls->Add(this->Count);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->Max_degree);
			this->Controls->Add(this->label4);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		int max_d;
		int n;
	private: System::Void Max_degree_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Count_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Block_Click(System::Object^ sender, System::EventArgs^ e) {
		max_d = Convert::ToInt32(Max_degree->Text);
		n = Convert::ToInt32(Count->Text);
		Max_degree->ReadOnly = true;
		Count->ReadOnly = true;
	}
	
	private: System::Void Add1_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string str = msclr::interop::marshal_as<std::string>(textAdd1->Text);
		Monom tmp(str, max_d, n);
		P1->AddMonomToPolinom(tmp);
		textAdd1->Clear();
		std::string st = P1->PolinomToString();
		String^ Pres = gcnew System::String(st.c_str());
		P1build->Text = Pres;
	}
	private: System::Void Del1_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string str = msclr::interop::marshal_as<std::string>(textDel1->Text);
		Monom tmp(str, max_d, n);
		P1->DelMonom(tmp);
		textDel1->Clear();
		std::string st = P1->PolinomToString();
		String^ Pres = gcnew System::String(st.c_str());
		P1build->Text = Pres;
	}
	private: System::Void Add2_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string str = msclr::interop::marshal_as<std::string>(textAdd2->Text);
		Monom tmp(str, max_d, n);
		P2->AddMonomToPolinom(tmp);
		textAdd2->Clear();
		std::string st = P2->PolinomToString();
		String^ Pres = gcnew System::String(st.c_str());
		P2build->Text = Pres;
	}
	private: System::Void Del2_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string str = msclr::interop::marshal_as<std::string>(textDel2->Text);
		Monom tmp(str, max_d, n);
		P2->DelMonom(tmp);
		textDel2->Clear();
		std::string st = P2->PolinomToString();
		String^ Pres = gcnew System::String(st.c_str());
		P2build->Text = Pres;
	}
	
	private: System::Void BuildP1P2_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string str1 = msclr::interop::marshal_as<std::string>(Pol1->Text);
		std::string str2 = msclr::interop::marshal_as<std::string>(Pol2->Text);
		P1 = new Polinom(str1, n, max_d);
		P2 = new Polinom(str2, n, max_d);
		std::string st1 = P1->PolinomToString();
		String^ Pres1 = gcnew System::String(st1.c_str());
		P1build->Text = Pres1;
		std::string st2 = P2->PolinomToString();
		String^ Pres2 = gcnew System::String(st2.c_str());
		P2build->Text = Pres2;
		Pol1->ReadOnly = true;
		Pol2->ReadOnly = true;
	}
	private: System::Void K_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void plus_Click(System::Object^ sender, System::EventArgs^ e) {
		Polinom tmp = *P1 + *P2;
		std::string st = tmp.PolinomToString();
		String^ Pres = gcnew System::String(st.c_str());
		Pol3->Text = Pres;
	}
	private: System::Void min_Click(System::Object^ sender, System::EventArgs^ e) {
		Polinom tmp = *P1 - *P2;
		std::string st = tmp.PolinomToString();
		String^ Pres = gcnew System::String(st.c_str());
		Pol3->Text = Pres;
	}

	private: System::Void mult_Click(System::Object^ sender, System::EventArgs^ e) {
		Polinom tmp = (*P1) * (*P2);
		std::string st = tmp.PolinomToString();
		String^ Pres = gcnew System::String(st.c_str());
		Pol3->Text = Pres;
	}
	private: System::Void multK_Click(System::Object^ sender, System::EventArgs^ e) {
		int k= Convert::ToInt32(K->Text);
		Polinom tmp = (*P1) * k;
		std::string st = tmp.PolinomToString();
		String^ Pres = gcnew System::String(st.c_str());
		Pol3->Text = Pres;
	}
	private: System::Void exit_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
	private: System::Void Pol1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Pol2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Pol3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textAdd1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textAdd2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textDel1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textDel2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Clear_Click(System::Object^ sender, System::EventArgs^ e) {
		Max_degree->ReadOnly = false;
		Max_degree->Clear();
		Count->ReadOnly = false;
		Count->Clear();
		Pol1->Clear();
		Pol2->Clear();
		Pol1->ReadOnly = false;
		Pol2->ReadOnly = false;
		Pol3->Clear();
		textAdd1->Clear();
		textAdd2->Clear();
		textDel1->Clear();
		textDel2->Clear();
		P1build->Clear();
		P2build->Clear();
		K->Clear();
	}
	private: System::Void P1build_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void P2build_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
