#pragma once

#include "Concert.h"

namespace Source {
	
	//concert A(n);
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	std::string ToStr(int k)
	{
		if (k >= 1 && k <= 9)
		{
			return ("0" + std::to_string(k));
		}
		return std::to_string(k);
	}

	int SearchIndexInDGV2(System::String^ name, System::String^ date, System::Windows::Forms::DataGridView^ a)
	{
		for (auto i = 0; i < a->RowCount; i++)
		{
			if (a->Rows[i]->Cells[0]->Value->ToString() == name && a->Rows[i]->Cells[2]->Value->ToString() == date)
			{
				return i;
			}
		}
		return -2;
	}

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::DataGridView^  dataGridView1;




	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ComboBox^  comboBox5;
	private: System::Windows::Forms::ComboBox^  comboBox6;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::ComboBox^  comboBox4;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::ComboBox^  comboBox1;





	private: System::Windows::Forms::DataGridView^  dataGridView2;









	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;















	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToOrderColumns = true;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column1,
					this->Column2, this->Column3
			});
			this->dataGridView1->Location = System::Drawing::Point(882, 40);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(843, 708);
			this->dataGridView1->TabIndex = 20;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView1_CellContentClick);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F));
			this->button2->Location = System::Drawing::Point(212, 305);
			this->button2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(390, 48);
			this->button2->TabIndex = 19;
			this->button2->Text = L"Íàéòè ïî íàçâàíèþ";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(183, 246);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(454, 26);
			this->textBox1->TabIndex = 18;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F));
			this->button1->Location = System::Drawing::Point(212, 155);
			this->button1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(390, 48);
			this->button1->TabIndex = 17;
			this->button1->Text = L"Íàéòè â äèàïàçîíå";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// comboBox5
			// 
			this->comboBox5->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Items->AddRange(gcnew cli::array< System::Object^  >(31) {
				L"01", L"02", L"03", L"04", L"05", L"06", L"07",
					L"08", L"09", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25",
					L"26", L"27", L"28", L"29", L"30", L"31"
			});
			this->comboBox5->Location = System::Drawing::Point(518, 40);
			this->comboBox5->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(120, 28);
			this->comboBox5->TabIndex = 16;
			// 
			// comboBox6
			// 
			this->comboBox6->DisplayMember = L"c";
			this->comboBox6->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox6->FormattingEnabled = true;
			this->comboBox6->Items->AddRange(gcnew cli::array< System::Object^  >(31) {
				L"01", L"02", L"03", L"04", L"05", L"06", L"07",
					L"08", L"09", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25",
					L"26", L"27", L"28", L"29", L"30", L"31"
			});
			this->comboBox6->Location = System::Drawing::Point(518, 98);
			this->comboBox6->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->comboBox6->Name = L"comboBox6";
			this->comboBox6->Size = System::Drawing::Size(120, 28);
			this->comboBox6->TabIndex = 15;
			// 
			// comboBox3
			// 
			this->comboBox3->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"01", L"02", L"03", L"04", L"05", L"06", L"07",
					L"08", L"09", L"10", L"11", L"12"
			});
			this->comboBox3->Location = System::Drawing::Point(346, 40);
			this->comboBox3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(120, 28);
			this->comboBox3->TabIndex = 14;
			// 
			// comboBox4
			// 
			this->comboBox4->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"01", L"02", L"03", L"04", L"05", L"06", L"07",
					L"08", L"09", L"10", L"11", L"12"
			});
			this->comboBox4->Location = System::Drawing::Point(346, 98);
			this->comboBox4->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(120, 28);
			this->comboBox4->TabIndex = 13;
			// 
			// comboBox2
			// 
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(20) {
				L"2019", L"2020", L"2021", L"2022", L"2023", L"2024",
					L"2025", L"2026", L"2027", L"2028", L"2029", L"2030", L"2031", L"2032", L"2033", L"2034", L"2035", L"2036", L"2037", L"2038"
			});
			this->comboBox2->Location = System::Drawing::Point(183, 98);
			this->comboBox2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(120, 28);
			this->comboBox2->TabIndex = 12;
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(20) {
				L"2019", L"2020", L"2021", L"2022", L"2023", L"2024",
					L"2025", L"2026", L"2027", L"2028", L"2029", L"2030", L"2031", L"2032", L"2033", L"2034", L"2035", L"2036", L"2037", L"2038"
			});
			this->comboBox1->Location = System::Drawing::Point(183, 40);
			this->comboBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(120, 28);
			this->comboBox1->TabIndex = 11;
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column6,
					this->Column7, this->Column8
			});
			this->dataGridView2->Location = System::Drawing::Point(60, 391);
			this->dataGridView2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(726, 357);
			this->dataGridView2->TabIndex = 21;
			this->dataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView2_CellContentClick);
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Íàçâàíèå";
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			this->Column6->Width = 180;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"ðàçìåð";
			this->Column7->Name = L"Column7";
			this->Column7->ReadOnly = true;
			this->Column7->Width = 130;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"çíà÷åíèå";
			this->Column8->Name = L"Column8";
			this->Column8->ReadOnly = true;
			this->Column8->Width = 130;
			// 
			// Column1
			// 
			this->Column1->Frozen = true;
			this->Column1->HeaderText = L"Íàçâàíèå";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 180;
			// 
			// Column2
			// 
			this->Column2->Frozen = true;
			this->Column2->HeaderText = L"ðàçìåð";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 120;
			// 
			// Column3
			// 
			this->Column3->Frozen = true;
			this->Column3->HeaderText = L"çíà÷åíèå";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Width = 130;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1768, 800);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox5);
			this->Controls->Add(this->comboBox6);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->comboBox4);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"Form1";
			this->Text = L"Form1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		std::string str1 = std::to_string(comboBox1->SelectedIndex + 2019) + "-" + ToStr(comboBox3->SelectedIndex + 1) + "-" + ToStr(comboBox5->SelectedIndex + 1) + " 00:00";
		std::string str2 = std::to_string(comboBox2->SelectedIndex + 2019) + "-" + ToStr(comboBox4->SelectedIndex + 1) + "-" + ToStr(comboBox6->SelectedIndex + 1) + " 23:59";

		dataGridView1->RowCount = 0;

/*		for (auto i = 0; i < A.get_size(); i++)
		{
			if (str1 <= A[i].data_time && A[i].data_time <= str2)
			{
				std::string a[] = { A[i].name, std::to_string(A[i].residue), A[i].data_time, std::to_string(A[i].n_of_booking) };
			
				dataGridView1->Rows->Add(gcnew array<System::String ^>(6){ gcnew System::String(a[0].c_str()), gcnew System::String(a[1].c_str()), gcnew System::String(a[2].c_str()), "" ,gcnew System::String(a[3].c_str()), (i).ToString()});
			}
		}*/
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		dataGridView1->RowCount = 0;
		if (textBox1->Text != "")
		{
			System::String^ Line = textBox1->Lines[0];
			/*for (auto i = 0; i < A.get_size(); i++)
			{
				std::string a[] = { A[i].name, std::to_string(A[i].residue), A[i].data_time, std::to_string(A[i].n_of_booking) };

				System::String^ b = gcnew System::String(a[0].c_str());
				if (b == Line)
				{
					dataGridView1->Rows->Add(gcnew array<System::String ^>(6) { gcnew System::String(a[0].c_str()), gcnew System::String(a[1].c_str()), gcnew System::String(a[2].c_str()), "", gcnew System::String(a[3].c_str()), (i).ToString() });
				}
			}*/
		}
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		if (e->ColumnIndex == 3 && e->RowIndex != -1)
		{
			if (dataGridView1->Rows[e->RowIndex]->Cells[1]->Value->ToString() != "0")
			{
				//A[Int32::Parse(dataGridView1->Rows[e->RowIndex]->Cells[5]->Value->ToString())].residue--;
				//A[Int32::Parse(dataGridView1->Rows[e->RowIndex]->Cells[5]->Value->ToString())].n_of_booking++;
				int n = 0;
				int i = Int32::Parse(dataGridView1->Rows[e->RowIndex]->Cells[1]->Value->ToString());
				dataGridView1->Rows[e->RowIndex]->Cells[1]->Value = (i - 1).ToString();

				dataGridView1->Rows[e->RowIndex]->Cells[4]->Value = (Int32::Parse(dataGridView1->Rows[e->RowIndex]->Cells[4]->Value->ToString()) + 1).ToString();
				if ((n = SearchIndexInDGV2(dataGridView1->Rows[e->RowIndex]->Cells[0]->Value->ToString(), dataGridView1->Rows[e->RowIndex]->Cells[2]->Value->ToString(), dataGridView2)) != -2)
				{
					dataGridView2->Rows[n]->Cells[1]->Value = (Int32::Parse(dataGridView2->Rows[n]->Cells[1]->Value->ToString()) + 1).ToString();
				}
				else
				{
					dataGridView2->Rows->Add((gcnew array<System::String ^>(3) { dataGridView1->Rows[e->RowIndex]->Cells[0]->Value->ToString(), dataGridView1->Rows[e->RowIndex]->Cells[4]->Value->ToString(), dataGridView1->Rows[e->RowIndex]->Cells[2]->Value->ToString() }));
				}
			}
		}
	}
private: System::Void dataGridView2_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
}
};
}
