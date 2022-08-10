#pragma once

#include "stdafx.h"

namespace DevProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	vector<Integer> interel;
	int sysf = 0;

	public ref class MsgBox1 : public System::Windows::Forms::Form
	{
	public:
		MsgBox1(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MsgBox1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Cursor = System::Windows::Forms::Cursors::Default;
			this->label1->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(124, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(115, 39);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ФГБОУ ВО \"НИУ\"МЭИ\"\r\nИнститут ИВТ\r\nКафедра МКМ";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(7, 54);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(336, 54);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Программа математического и компьютерного\r\nмоделирования  систем, имеющих структу"
				L"ру \r\nациклической проективной геометрии.";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(41, 123);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(283, 26);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Разработчик: студент Клягин Антон Олегович\r\nРуководитель: проф. Фролов Александр "
				L"Борисович";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(142, 162);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(79, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Москва, 2021";
			this->label4->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(259, 152);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MsgBox1::button1_Click);
			// 
			// MsgBox1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(346, 184);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"MsgBox1";
			this->ShowIcon = false;
			this->Text = L"СПРАВКА";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	};

	/// <summary>
	/// Сводка для MyForm
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
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:



	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::GroupBox^ groupBox6;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::TextBox^ textBox17;
	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::GroupBox^ groupBox7;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ textBox18;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::TextBox^ textBox19;
	private: System::Windows::Forms::GroupBox^ groupBox8;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ textBox20;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::TextBox^ textBox21;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::TextBox^ textBox23;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::TextBox^ textBox22;
	private: System::Windows::Forms::GroupBox^ groupBox9;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::TextBox^ textBox25;
	private: System::Windows::Forms::TextBox^ textBox24;
	private: System::Windows::Forms::GroupBox^ groupBox10;
	private: System::Windows::Forms::TextBox^ textBox26;
	private: System::Windows::Forms::GroupBox^ groupBox11;
	private: System::Windows::Forms::TextBox^ textBox27;
	private: System::Windows::Forms::ToolTip^ toolTip1;
private: System::Windows::Forms::CheckBox^ checkBox1;
private: System::Windows::Forms::FontDialog^ fontDialog1;


private: System::Windows::Forms::Button^ button16;
private: System::Windows::Forms::Button^ button18;
private: System::Windows::Forms::Button^ button17;
private: System::Windows::Forms::Button^ button20;
private: System::Windows::Forms::Button^ button19;
private: System::Windows::Forms::Button^ button22;
private: System::Windows::Forms::Button^ button21;
private: System::Windows::Forms::Button^ button23;
private: System::Windows::Forms::Button^ button24;
private: System::Windows::Forms::Button^ button25;
private: System::Windows::Forms::GroupBox^ groupBox12;
private: System::Windows::Forms::TextBox^ textBox30;
private: System::Windows::Forms::Button^ button26;
private: System::Windows::Forms::TextBox^ textBox29;
private: System::Windows::Forms::TextBox^ textBox28;
private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::Button^ button28;
private: System::Windows::Forms::Button^ button27;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::TextBox^ textBox31;
private: System::Windows::Forms::TextBox^ textBox32;
private: System::Windows::Forms::Button^ button29;
private: System::Windows::Forms::ToolStripMenuItem^ ключевыеСистемыToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ вычислительныеСистемыToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ справкаToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ выходToolStripMenuItem;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ключевыеСистемыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->вычислительныеСистемыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->справкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox9 = (gcnew System::Windows::Forms::GroupBox());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->textBox31 = (gcnew System::Windows::Forms::TextBox());
			this->textBox32 = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox10 = (gcnew System::Windows::Forms::GroupBox());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox11 = (gcnew System::Windows::Forms::GroupBox());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->textBox27 = (gcnew System::Windows::Forms::TextBox());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->groupBox12 = (gcnew System::Windows::Forms::GroupBox());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->textBox30 = (gcnew System::Windows::Forms::TextBox());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->textBox29 = (gcnew System::Windows::Forms::TextBox());
			this->textBox28 = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->fontDialog1 = (gcnew System::Windows::Forms::FontDialog());
			this->menuStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->groupBox8->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox9->SuspendLayout();
			this->groupBox10->SuspendLayout();
			this->groupBox11->SuspendLayout();
			this->groupBox12->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->ключевыеСистемыToolStripMenuItem,
					this->вычислительныеСистемыToolStripMenuItem, this->справкаToolStripMenuItem, this->выходToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(984, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ключевыеСистемыToolStripMenuItem
			// 
			this->ключевыеСистемыToolStripMenuItem->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ключевыеСистемыToolStripMenuItem->Name = L"ключевыеСистемыToolStripMenuItem";
			this->ключевыеСистемыToolStripMenuItem->Size = System::Drawing::Size(128, 20);
			this->ключевыеСистемыToolStripMenuItem->Text = L"Ключевые системы";
			this->ключевыеСистемыToolStripMenuItem->ToolTipText = L"В ключевой системе связь осуществляется между узлами через ключи";
			this->ключевыеСистемыToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ключевыеСистемыToolStripMenuItem_Click);
			// 
			// вычислительныеСистемыToolStripMenuItem
			// 
			this->вычислительныеСистемыToolStripMenuItem->BackColor = System::Drawing::SystemColors::Window;
			this->вычислительныеСистемыToolStripMenuItem->Name = L"вычислительныеСистемыToolStripMenuItem";
			this->вычислительныеСистемыToolStripMenuItem->Size = System::Drawing::Size(166, 20);
			this->вычислительныеСистемыToolStripMenuItem->Text = L"Вычислительные системы";
			this->вычислительныеСистемыToolStripMenuItem->ToolTipText = L"В вычислительной системе связи осуществляются между компьютерами через их идентиф"
				L"икаторы";
			this->вычислительныеСистемыToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::вычислительныеСистемыToolStripMenuItem_Click);
			// 
			// справкаToolStripMenuItem
			// 
			this->справкаToolStripMenuItem->Name = L"справкаToolStripMenuItem";
			this->справкаToolStripMenuItem->Size = System::Drawing::Size(65, 20);
			this->справкаToolStripMenuItem->Text = L"Справка";
			this->справкаToolStripMenuItem->ToolTipText = L"Справка о программе";
			this->справкаToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::справкаToolStripMenuItem_Click);
			// 
			// выходToolStripMenuItem
			// 
			this->выходToolStripMenuItem->Name = L"выходToolStripMenuItem";
			this->выходToolStripMenuItem->Size = System::Drawing::Size(54, 20);
			this->выходToolStripMenuItem->Text = L"Выход";
			this->выходToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::выходToolStripMenuItem_Click_1);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(6, 48);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox1->Size = System::Drawing::Size(243, 107);
			this->textBox1->TabIndex = 1;
			this->textBox1->TabStop = false;
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(37, 24);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(19, 20);
			this->textBox2->TabIndex = 2;
			this->textBox2->TabStop = false;
			this->textBox2->Text = L"2";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(98, 24);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(19, 20);
			this->textBox3->TabIndex = 0;
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox3_KeyPress);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(164, 24);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(19, 20);
			this->textBox4->TabIndex = 1;
			this->textBox4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox4_KeyPress);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(6, 19);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 5;
			this->button1->TabStop = false;
			this->button1->Text = L"Блоки";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(22, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"p =";
			this->toolTip1->SetToolTip(this->label1, L"p – характеристика поля, p=2");
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(77, 27);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(18, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"l =";
			this->toolTip1->SetToolTip(this->label2, L"l – степень расширения поля заданной характеристики, l >=1");
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(139, 27);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(22, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"d =";
			this->toolTip1->SetToolTip(this->label3, L"d - размерность проективной плоскости PP(n, d)");
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(6, 161);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(104, 22);
			this->button2->TabIndex = 9;
			this->button2->TabStop = false;
			this->button2->Text = L"Дуальные блоки";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->checkBox1);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->textBox8);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->textBox7);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->textBox6);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(12, 27);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(258, 143);
			this->groupBox1->TabIndex = 10;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Параметры PG(d,n)";
			this->toolTip1->SetToolTip(this->groupBox1, resources->GetString(L"groupBox1.ToolTip"));
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(15, 107);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(236, 17);
			this->checkBox1->TabIndex = 18;
			this->checkBox1->TabStop = false;
			this->checkBox1->Text = L"Вывод блоков в алгебраической нотации";
			this->toolTip1->SetToolTip(this->checkBox1, L"Отвечает за то в какой нотации, числовой или алгебраической, будут выведены блоки"
				L". При установленном флаге блоки будут выводиться в алгебраической нотации");
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(159, 79);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(22, 13);
			this->label7->TabIndex = 17;
			this->label7->Text = L"k =";
			this->toolTip1->SetToolTip(this->label7, L"k = (n^d - 1) / (n - 1) - количество элементов в блоке");
			// 
			// textBox8
			// 
			this->textBox8->Enabled = false;
			this->textBox8->Location = System::Drawing::Point(184, 76);
			this->textBox8->Name = L"textBox8";
			this->textBox8->ReadOnly = true;
			this->textBox8->Size = System::Drawing::Size(32, 20);
			this->textBox8->TabIndex = 16;
			this->textBox8->TabStop = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(93, 80);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(22, 13);
			this->label6->TabIndex = 15;
			this->label6->Text = L"v =";
			this->toolTip1->SetToolTip(this->label6, L"v = (n^(d + 1) - 1) / (n - 1) - количество блоков");
			// 
			// textBox7
			// 
			this->textBox7->Enabled = false;
			this->textBox7->Location = System::Drawing::Point(118, 77);
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(30, 20);
			this->textBox7->TabIndex = 14;
			this->textBox7->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 53);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(22, 13);
			this->label5->TabIndex = 13;
			this->label5->Text = L"n =";
			this->toolTip1->SetToolTip(this->label5, L"n = p^l - порядок проективной плоскости PP(n, d)");
			// 
			// textBox6
			// 
			this->textBox6->Enabled = false;
			this->textBox6->Location = System::Drawing::Point(37, 50);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(19, 20);
			this->textBox6->TabIndex = 12;
			this->textBox6->TabStop = false;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(80, 47);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(114, 23);
			this->button3->TabIndex = 11;
			this->button3->TabStop = false;
			this->button3->Text = L"Задать параметры";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(15, 81);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(19, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"f =";
			this->toolTip1->SetToolTip(this->label4, L"f - неприводимый примитивный многочлен степени l над расширением поля характерист"
				L"ики 2, ");
			// 
			// textBox5
			// 
			this->textBox5->Enabled = false;
			this->textBox5->Location = System::Drawing::Point(37, 78);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(49, 20);
			this->textBox5->TabIndex = 9;
			this->textBox5->TabStop = false;
			// 
			// textBox9
			// 
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox9->Location = System::Drawing::Point(6, 189);
			this->textBox9->Multiline = true;
			this->textBox9->Name = L"textBox9";
			this->textBox9->ReadOnly = true;
			this->textBox9->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox9->Size = System::Drawing::Size(243, 130);
			this->textBox9->TabIndex = 11;
			this->textBox9->TabStop = false;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->textBox9);
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Enabled = false;
			this->groupBox2->Location = System::Drawing::Point(12, 176);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(258, 328);
			this->groupBox2->TabIndex = 12;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Построение PG(d,n)";
			this->toolTip1->SetToolTip(this->groupBox2, L"Поле отвечающее за вывод всех блоков и дуальных блоков заданной \r\nациклической пр"
				L"оективной плоскости.");
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->button5);
			this->groupBox3->Controls->Add(this->button4);
			this->groupBox3->Controls->Add(this->textBox13);
			this->groupBox3->Controls->Add(this->textBox12);
			this->groupBox3->Controls->Add(this->label9);
			this->groupBox3->Controls->Add(this->label8);
			this->groupBox3->Controls->Add(this->textBox11);
			this->groupBox3->Controls->Add(this->textBox10);
			this->groupBox3->Enabled = false;
			this->groupBox3->Location = System::Drawing::Point(12, 503);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(258, 183);
			this->groupBox3->TabIndex = 13;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Построение отдельных блоков PG(d,n)";
			this->toolTip1->SetToolTip(this->groupBox3, L"Поле отвечающие за вывод определённого блока или дуального блока \r\nзаданной ацикл"
				L"ической проективной плоскости..");
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(6, 111);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(157, 23);
			this->button5->TabIndex = 13;
			this->button5->TabStop = false;
			this->button5->Text = L"Построить дуальный блок";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(136, 19);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(101, 23);
			this->button4->TabIndex = 12;
			this->button4->TabStop = false;
			this->button4->Text = L"Построить блок";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(6, 151);
			this->textBox13->Multiline = true;
			this->textBox13->Name = L"textBox13";
			this->textBox13->ReadOnly = true;
			this->textBox13->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->textBox13->Size = System::Drawing::Size(246, 20);
			this->textBox13->TabIndex = 11;
			this->textBox13->TabStop = false;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(6, 48);
			this->textBox12->Multiline = true;
			this->textBox12->Name = L"textBox12";
			this->textBox12->ReadOnly = true;
			this->textBox12->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->textBox12->Size = System::Drawing::Size(246, 20);
			this->textBox12->TabIndex = 10;
			this->textBox12->TabStop = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(3, 86);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(129, 13);
			this->label9->TabIndex = 8;
			this->label9->Text = L"Номер дуального блока";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(6, 24);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(74, 13);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Номер блока";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(133, 83);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(30, 20);
			this->textBox11->TabIndex = 3;
			this->textBox11->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox11_KeyPress);
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(85, 21);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(32, 20);
			this->textBox10->TabIndex = 2;
			this->textBox10->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox10_KeyPress);
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->groupBox7);
			this->groupBox4->Controls->Add(this->groupBox8);
			this->groupBox4->Controls->Add(this->groupBox6);
			this->groupBox4->Controls->Add(this->groupBox5);
			this->groupBox4->Enabled = false;
			this->groupBox4->Location = System::Drawing::Point(276, 27);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(696, 265);
			this->groupBox4->TabIndex = 18;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Ограничения БСС для моделирования коммуникаций узлов";
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->button20);
			this->groupBox7->Controls->Add(this->label19);
			this->groupBox7->Controls->Add(this->textBox23);
			this->groupBox7->Controls->Add(this->label14);
			this->groupBox7->Controls->Add(this->label15);
			this->groupBox7->Controls->Add(this->textBox18);
			this->groupBox7->Controls->Add(this->button10);
			this->groupBox7->Controls->Add(this->button11);
			this->groupBox7->Controls->Add(this->textBox19);
			this->groupBox7->Location = System::Drawing::Point(353, 138);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(337, 117);
			this->groupBox7->TabIndex = 3;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Запрещённые связи между узлами";
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(172, 54);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(75, 23);
			this->button20->TabIndex = 9;
			this->button20->TabStop = false;
			this->button20->Text = L"Очистить";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(6, 54);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(76, 13);
			this->label19->TabIndex = 8;
			this->label19->Text = L"Номер 2 узла";
			// 
			// textBox23
			// 
			this->textBox23->Location = System::Drawing::Point(130, 51);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(36, 20);
			this->textBox23->TabIndex = 9;
			this->textBox23->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox23_KeyPress);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(6, 28);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(76, 13);
			this->label14->TabIndex = 6;
			this->label14->Text = L"Номер 1 узла";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(32, 94);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(44, 13);
			this->label15->TabIndex = 5;
			this->label15->Text = L"Список";
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(82, 91);
			this->textBox18->Multiline = true;
			this->textBox18->Name = L"textBox18";
			this->textBox18->ReadOnly = true;
			this->textBox18->Size = System::Drawing::Size(246, 20);
			this->textBox18->TabIndex = 3;
			this->textBox18->TabStop = false;
			this->textBox18->Text = L"[]";
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(253, 22);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 23);
			this->button10->TabIndex = 2;
			this->button10->TabStop = false;
			this->button10->Text = L"Удалить";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(172, 23);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(75, 23);
			this->button11->TabIndex = 1;
			this->button11->TabStop = false;
			this->button11->Text = L"Добавить";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(130, 25);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(36, 20);
			this->textBox19->TabIndex = 8;
			this->textBox19->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox19_KeyPress);
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->button19);
			this->groupBox8->Controls->Add(this->label18);
			this->groupBox8->Controls->Add(this->textBox22);
			this->groupBox8->Controls->Add(this->label16);
			this->groupBox8->Controls->Add(this->label17);
			this->groupBox8->Controls->Add(this->textBox20);
			this->groupBox8->Controls->Add(this->button12);
			this->groupBox8->Controls->Add(this->button13);
			this->groupBox8->Controls->Add(this->textBox21);
			this->groupBox8->Location = System::Drawing::Point(6, 138);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(337, 117);
			this->groupBox8->TabIndex = 2;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"Запрещённые ключи в узле";
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(166, 59);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(75, 23);
			this->button19->TabIndex = 9;
			this->button19->TabStop = false;
			this->button19->Text = L"Очистить";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(11, 33);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(67, 13);
			this->label18->TabIndex = 8;
			this->label18->Text = L"Номер узла";
			// 
			// textBox22
			// 
			this->textBox22->Location = System::Drawing::Point(124, 29);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(36, 20);
			this->textBox22->TabIndex = 7;
			this->textBox22->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox22_KeyPress);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(11, 58);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(75, 13);
			this->label16->TabIndex = 5;
			this->label16->Text = L"Номер ключа";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(40, 94);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(44, 13);
			this->label17->TabIndex = 4;
			this->label17->Text = L"Список";
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(87, 91);
			this->textBox20->Multiline = true;
			this->textBox20->Name = L"textBox20";
			this->textBox20->ReadOnly = true;
			this->textBox20->Size = System::Drawing::Size(244, 20);
			this->textBox20->TabIndex = 3;
			this->textBox20->TabStop = false;
			this->textBox20->Text = L"[]";
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(247, 26);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(75, 23);
			this->button12->TabIndex = 2;
			this->button12->TabStop = false;
			this->button12->Text = L"Удалить";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(166, 27);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(75, 23);
			this->button13->TabIndex = 1;
			this->button13->TabStop = false;
			this->button13->Text = L"Добавить";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// textBox21
			// 
			this->textBox21->Location = System::Drawing::Point(124, 54);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(36, 20);
			this->textBox21->TabIndex = 6;
			this->textBox21->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox21_KeyPress);
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->button22);
			this->groupBox6->Controls->Add(this->label13);
			this->groupBox6->Controls->Add(this->label11);
			this->groupBox6->Controls->Add(this->textBox16);
			this->groupBox6->Controls->Add(this->button8);
			this->groupBox6->Controls->Add(this->button9);
			this->groupBox6->Controls->Add(this->textBox17);
			this->groupBox6->Location = System::Drawing::Point(353, 19);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(337, 113);
			this->groupBox6->TabIndex = 1;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Запрещённые узлы";
			// 
			// button22
			// 
			this->button22->Location = System::Drawing::Point(172, 54);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(75, 23);
			this->button22->TabIndex = 7;
			this->button22->TabStop = false;
			this->button22->Text = L"Очистить";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(6, 26);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(67, 13);
			this->label13->TabIndex = 6;
			this->label13->Text = L"Номер узла";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(32, 90);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(44, 13);
			this->label11->TabIndex = 5;
			this->label11->Text = L"Список";
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(82, 87);
			this->textBox16->Multiline = true;
			this->textBox16->Name = L"textBox16";
			this->textBox16->ReadOnly = true;
			this->textBox16->Size = System::Drawing::Size(246, 20);
			this->textBox16->TabIndex = 3;
			this->textBox16->TabStop = false;
			this->textBox16->Text = L"[]";
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(253, 19);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 2;
			this->button8->TabStop = false;
			this->button8->Text = L"Удалить";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(172, 20);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 23);
			this->button9->TabIndex = 1;
			this->button9->TabStop = false;
			this->button9->Text = L"Добавить";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(130, 22);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(36, 20);
			this->textBox17->TabIndex = 5;
			this->textBox17->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox17_KeyPress);
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->button21);
			this->groupBox5->Controls->Add(this->label12);
			this->groupBox5->Controls->Add(this->label10);
			this->groupBox5->Controls->Add(this->textBox15);
			this->groupBox5->Controls->Add(this->button7);
			this->groupBox5->Controls->Add(this->button6);
			this->groupBox5->Controls->Add(this->textBox14);
			this->groupBox5->Location = System::Drawing::Point(6, 19);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(337, 113);
			this->groupBox5->TabIndex = 0;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Запрещённые ключи";
			// 
			// button21
			// 
			this->button21->Location = System::Drawing::Point(166, 54);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(75, 23);
			this->button21->TabIndex = 6;
			this->button21->TabStop = false;
			this->button21->Text = L"Очистить";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(6, 24);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(75, 13);
			this->label12->TabIndex = 5;
			this->label12->Text = L"Номер ключа";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(40, 90);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(44, 13);
			this->label10->TabIndex = 4;
			this->label10->Text = L"Список";
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(87, 87);
			this->textBox15->Multiline = true;
			this->textBox15->Name = L"textBox15";
			this->textBox15->ReadOnly = true;
			this->textBox15->Size = System::Drawing::Size(244, 20);
			this->textBox15->TabIndex = 3;
			this->textBox15->TabStop = false;
			this->textBox15->Text = L"[]";
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(247, 19);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 2;
			this->button7->TabStop = false;
			this->button7->Text = L"Удалить";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(166, 20);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 1;
			this->button6->TabStop = false;
			this->button6->Text = L"Добавить";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(124, 22);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(36, 20);
			this->textBox14->TabIndex = 4;
			this->textBox14->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox14_KeyPress);
			// 
			// groupBox9
			// 
			this->groupBox9->Controls->Add(this->button29);
			this->groupBox9->Controls->Add(this->label23);
			this->groupBox9->Controls->Add(this->label24);
			this->groupBox9->Controls->Add(this->textBox31);
			this->groupBox9->Controls->Add(this->textBox32);
			this->groupBox9->Controls->Add(this->label21);
			this->groupBox9->Controls->Add(this->label20);
			this->groupBox9->Controls->Add(this->button15);
			this->groupBox9->Controls->Add(this->button14);
			this->groupBox9->Controls->Add(this->textBox25);
			this->groupBox9->Controls->Add(this->textBox24);
			this->groupBox9->Enabled = false;
			this->groupBox9->Location = System::Drawing::Point(276, 298);
			this->groupBox9->Name = L"groupBox9";
			this->groupBox9->Size = System::Drawing::Size(696, 70);
			this->groupBox9->TabIndex = 9;
			this->groupBox9->TabStop = false;
			this->groupBox9->Text = L"Параметры коммуникации БСС";
			// 
			// button29
			// 
			this->button29->Enabled = false;
			this->button29->Location = System::Drawing::Point(331, 40);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(171, 23);
			this->button29->TabIndex = 22;
			this->button29->TabStop = false;
			this->button29->Text = L"Коммуникация компьютеров";
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Visible = false;
			this->button29->Click += gcnew System::EventHandler(this, &MyForm::button29_Click);
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(155, 45);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(43, 13);
			this->label23->TabIndex = 13;
			this->label23->Text = L"Шина 2";
			this->label23->Visible = false;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(6, 45);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(43, 13);
			this->label24->TabIndex = 12;
			this->label24->Text = L"Шина 1";
			this->label24->Visible = false;
			// 
			// textBox31
			// 
			this->textBox31->Location = System::Drawing::Point(239, 42);
			this->textBox31->Name = L"textBox31";
			this->textBox31->Size = System::Drawing::Size(54, 20);
			this->textBox31->TabIndex = 15;
			this->textBox31->Visible = false;
			this->textBox31->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox31_KeyPress);
			// 
			// textBox32
			// 
			this->textBox32->Location = System::Drawing::Point(93, 42);
			this->textBox32->Name = L"textBox32";
			this->textBox32->Size = System::Drawing::Size(54, 20);
			this->textBox32->TabIndex = 14;
			this->textBox32->Visible = false;
			this->textBox32->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox32_KeyPress);
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(155, 21);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(42, 13);
			this->label21->TabIndex = 6;
			this->label21->Text = L"Узел 2";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(6, 22);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(42, 13);
			this->label20->TabIndex = 5;
			this->label20->Text = L"Узел 1";
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(508, 16);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(182, 23);
			this->button15->TabIndex = 3;
			this->button15->TabStop = false;
			this->button15->Text = L"Коммуникация по алгоритму 2";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(331, 16);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(171, 23);
			this->button14->TabIndex = 2;
			this->button14->TabStop = false;
			this->button14->Text = L"Коммуникация по алгоритму 1";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// textBox25
			// 
			this->textBox25->Location = System::Drawing::Point(239, 19);
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(54, 20);
			this->textBox25->TabIndex = 11;
			this->textBox25->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox25_KeyPress);
			// 
			// textBox24
			// 
			this->textBox24->Location = System::Drawing::Point(93, 18);
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(54, 20);
			this->textBox24->TabIndex = 10;
			this->textBox24->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox24_KeyPress);
			// 
			// groupBox10
			// 
			this->groupBox10->Controls->Add(this->button18);
			this->groupBox10->Controls->Add(this->button17);
			this->groupBox10->Controls->Add(this->button16);
			this->groupBox10->Controls->Add(this->textBox26);
			this->groupBox10->Location = System::Drawing::Point(276, 374);
			this->groupBox10->Name = L"groupBox10";
			this->groupBox10->Size = System::Drawing::Size(343, 115);
			this->groupBox10->TabIndex = 19;
			this->groupBox10->TabStop = false;
			this->groupBox10->Text = L"Алгоритм 1";
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(253, 83);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(75, 23);
			this->button18->TabIndex = 3;
			this->button18->TabStop = false;
			this->button18->Text = L"Тест 3";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(130, 83);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(75, 23);
			this->button17->TabIndex = 2;
			this->button17->TabStop = false;
			this->button17->Text = L"Тест 2";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(9, 83);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(75, 23);
			this->button16->TabIndex = 1;
			this->button16->TabStop = false;
			this->button16->Text = L"Тест 1";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// textBox26
			// 
			this->textBox26->Location = System::Drawing::Point(9, 19);
			this->textBox26->Multiline = true;
			this->textBox26->Name = L"textBox26";
			this->textBox26->ReadOnly = true;
			this->textBox26->Size = System::Drawing::Size(319, 51);
			this->textBox26->TabIndex = 0;
			this->textBox26->TabStop = false;
			// 
			// groupBox11
			// 
			this->groupBox11->Controls->Add(this->button23);
			this->groupBox11->Controls->Add(this->button24);
			this->groupBox11->Controls->Add(this->button25);
			this->groupBox11->Controls->Add(this->textBox27);
			this->groupBox11->Location = System::Drawing::Point(629, 374);
			this->groupBox11->Name = L"groupBox11";
			this->groupBox11->Size = System::Drawing::Size(343, 115);
			this->groupBox11->TabIndex = 20;
			this->groupBox11->TabStop = false;
			this->groupBox11->Text = L"Алгоритм 2";
			// 
			// button23
			// 
			this->button23->Location = System::Drawing::Point(253, 83);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(75, 23);
			this->button23->TabIndex = 6;
			this->button23->TabStop = false;
			this->button23->Text = L"Тест 3";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click);
			// 
			// button24
			// 
			this->button24->Location = System::Drawing::Point(130, 83);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(75, 23);
			this->button24->TabIndex = 5;
			this->button24->TabStop = false;
			this->button24->Text = L"Тест 2";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click);
			// 
			// button25
			// 
			this->button25->Location = System::Drawing::Point(9, 83);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(75, 23);
			this->button25->TabIndex = 4;
			this->button25->TabStop = false;
			this->button25->Text = L"Тест 1";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::button25_Click);
			// 
			// textBox27
			// 
			this->textBox27->Location = System::Drawing::Point(9, 19);
			this->textBox27->Multiline = true;
			this->textBox27->Name = L"textBox27";
			this->textBox27->ReadOnly = true;
			this->textBox27->Size = System::Drawing::Size(319, 51);
			this->textBox27->TabIndex = 1;
			this->textBox27->TabStop = false;
			// 
			// toolTip1
			// 
			this->toolTip1->AutomaticDelay = 8000;
			this->toolTip1->AutoPopDelay = 80000;
			this->toolTip1->InitialDelay = 500;
			this->toolTip1->ReshowDelay = 100;
			// 
			// groupBox12
			// 
			this->groupBox12->Controls->Add(this->button28);
			this->groupBox12->Controls->Add(this->button27);
			this->groupBox12->Controls->Add(this->textBox30);
			this->groupBox12->Controls->Add(this->button26);
			this->groupBox12->Controls->Add(this->textBox29);
			this->groupBox12->Controls->Add(this->textBox28);
			this->groupBox12->Controls->Add(this->label22);
			this->groupBox12->Enabled = false;
			this->groupBox12->Location = System::Drawing::Point(276, 495);
			this->groupBox12->Name = L"groupBox12";
			this->groupBox12->Size = System::Drawing::Size(343, 191);
			this->groupBox12->TabIndex = 21;
			this->groupBox12->TabStop = false;
			this->groupBox12->Text = L"Номера блоков, с заданными элементами";
			this->toolTip1->SetToolTip(this->groupBox12, L"Построения списка блоков, в которых присутствуют заданные элементы");
			// 
			// button28
			// 
			this->button28->Location = System::Drawing::Point(158, 24);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(75, 23);
			this->button28->TabIndex = 16;
			this->button28->TabStop = false;
			this->button28->Text = L"Добавить";
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm::button28_Click);
			// 
			// button27
			// 
			this->button27->Location = System::Drawing::Point(239, 24);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(75, 23);
			this->button27->TabIndex = 15;
			this->button27->TabStop = false;
			this->button27->Text = L"Очистить";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::button27_Click);
			// 
			// textBox30
			// 
			this->textBox30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox30->Location = System::Drawing::Point(20, 119);
			this->textBox30->Multiline = true;
			this->textBox30->Name = L"textBox30";
			this->textBox30->ReadOnly = true;
			this->textBox30->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox30->Size = System::Drawing::Size(245, 60);
			this->textBox30->TabIndex = 14;
			this->textBox30->TabStop = false;
			// 
			// button26
			// 
			this->button26->Location = System::Drawing::Point(19, 51);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(147, 23);
			this->button26->TabIndex = 13;
			this->button26->TabStop = false;
			this->button26->Text = L"Построить пересечение";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::button26_Click);
			// 
			// textBox29
			// 
			this->textBox29->Location = System::Drawing::Point(19, 80);
			this->textBox29->Multiline = true;
			this->textBox29->Name = L"textBox29";
			this->textBox29->ReadOnly = true;
			this->textBox29->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->textBox29->Size = System::Drawing::Size(246, 31);
			this->textBox29->TabIndex = 11;
			this->textBox29->TabStop = false;
			this->toolTip1->SetToolTip(this->textBox29, L"Список элементов, для которых мы ищем общие блоки");
			// 
			// textBox28
			// 
			this->textBox28->Location = System::Drawing::Point(117, 26);
			this->textBox28->Name = L"textBox28";
			this->textBox28->Size = System::Drawing::Size(34, 20);
			this->textBox28->TabIndex = 9;
			this->textBox28->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox28_KeyPress);
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(16, 29);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(93, 13);
			this->label22->TabIndex = 8;
			this->label22->Text = L"Номер элемента";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(984, 687);
			this->Controls->Add(this->groupBox12);
			this->Controls->Add(this->groupBox11);
			this->Controls->Add(this->groupBox10);
			this->Controls->Add(this->groupBox9);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MainMenuStrip = this->menuStrip1;
			this->MinimumSize = System::Drawing::Size(800, 600);
			this->Name = L"MyForm";
			this->Text = L"Математическое и компьютерное моделирование систем, имеющих структуру ациклическо"
				L"й проективной геометрии";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox9->ResumeLayout(false);
			this->groupBox9->PerformLayout();
			this->groupBox10->ResumeLayout(false);
			this->groupBox10->PerformLayout();
			this->groupBox11->ResumeLayout(false);
			this->groupBox11->PerformLayout();
			this->groupBox12->ResumeLayout(false);
			this->groupBox12->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		if (dOut() == 2 && lOut() > 3)
		{
			throw 0;
		}
		if (dOut() == 3 && lOut() > 2)
		{
			throw 1;
		}
		this->textBox1->Text = "";
		if (checkBox1->Checked)
		{
			OutAlg(0, -1, this->textBox1);
		}
		else
		{
			Out(0, -1, this->textBox1);
		}
	}
	catch (int a)
	{
		if (a == 0)
		{
			MessageBox::Show("При d=2 и при l>3, блок схема вычисляется слишком долго, пользуйтесь выводом только нужных блоков", "Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
		if (a == 1)
		{
			MessageBox::Show("При d=3 и при l>2, блок схема вычисляется слишком долго, пользуйтесь выводом только нужных блоков", "Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
	}
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		if (dOut() == 2 && lOut() > 3)
		{
			throw 0;
		}
		if (dOut() == 3 && lOut() > 1)
		{
			throw 1;
		}
		this->textBox9->Text = "";
		if (checkBox1->Checked)
		{
			OutAlg(1, -1, this->textBox9);
		}
		else
		{
			Out(1, -1, this->textBox9);
		}
	}
	catch (int a)
	{
		if (a == 0)
		{
			MessageBox::Show("При d=2 и при l>3, блок схема вычисляется слишком долго, пользуйтесь выводом только нужных дуальных блоков", "Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
		if (a == 1)
		{
			MessageBox::Show("При d=3 и при l>1, блок схема вычисляется слишком долго, пользуйтесь выводом только нужных дуальных блоков", "Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
	}
}

	   void Out(int fl, int numbl, System::Windows::Forms::TextBox^ tb)
	   {
		   int beg = 0;
		   int v = vOut();
		   if (numbl != -1)
		   {
			   beg = numbl;
			   v = beg + 1;
		   }
		   else
		   {
			   if (fl == 0)
			   {
				   tb->Text += "Ациклическая проективная плоскость" + "\r" + "\n";
			   }
			   else
			   {
				   tb->Text += "Дуальная ациклическая проективная плоскость" + "\r" + "\n";
			   }
		   }
		   vector<Integer> bl;
		   for (int i = beg; i < v; i++)
		   {
			   SetS(i);
			   if (fl == 0)
			   {
				   bl = AcicleBlok();
			   }
			   else
			   {
				   bl = DualAcicleBlok();
			   }
			   tb->Text += Convert::ToString(i) + ": [";
			   for (int j = 0; j < bl.size(); j++)
			   {
				   tb->Text += gcnew String(bl[j].ToString().c_str());
				   if (j != bl.size()-1)
				   {
					   tb->Text += ", ";
				   }
				   else
				   {
					   tb->Text += "]";
				   }
			   }
			   tb->Text += "\r" + "\n";
		   }
	   }

	   void OutAlg(int fl, int numbl, System::Windows::Forms::TextBox^ tb)
	   {
		   int beg = 0;
		   int v = vOut();
		   if (numbl != -1)
		   {
			   beg = numbl;
			   v = beg + 1;
		   }
		   else
		   {
			   if (fl == 0)
			   {
				   tb->Text += "Ациклическая проективная плоскость" + "\r" + "\n";
			   }
			   else
			   {
				   tb->Text += "Дуальная ациклическая проективная плоскость" + "\r" + "\n";
			   }
		   }
		   vector<string> bl;
		   for (int i = beg; i < v; i++)
		   {
			   SetS(i);
			   if (fl == 0)
			   {
				   bl = PolAcicleBlok();
			   }
			   else
			   {
				   bl = PolDualAcicleBlok();
			   }
			   tb->Text += Convert::ToString(i) + ": [";
			   for (int j = 0; j < bl.size(); j++)
			   {
				   tb->Text += gcnew String(bl[j].c_str());
				   if (j != bl.size() - 1)
				   {
					   tb->Text += ",";
				   }
				   else
				   {
					   tb->Text += "]";
				   }
			   }
			   tb->Text += "\r" + "\n";
		   }
	   }

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		if (this->textBox3->Text == "" || this->textBox4->Text == "")
		{
			throw 0;
		}
		int l = Convert::ToInt32(this->textBox3->Text);
		int d = Convert::ToInt32(this->textBox4->Text);
		if (l < 1)
		{
			throw 1;
		}
		if (d < 2 || d > 3)
		{
			throw 2;
		}
		SetParams(l, d);
		this->textBox5->Text = gcnew String(fOut().c_str());
		this->textBox6->Text = Convert::ToString(nOut());
		this->textBox7->Text = Convert::ToString(vOut());
		this->textBox8->Text = Convert::ToString(kOut());
		this->textBox1->Text = "";
		this->textBox9->Text = "";
		this->textBox10->Text = "";
		this->textBox11->Text = "";
		this->textBox12->Text = "";
		this->textBox13->Text = "";

		ClearLK();
		ClearLB();
		ClearLBK();
		ClearLBB();

		this->textBox15->Text = "[]";
		this->textBox16->Text = "[]";
		this->textBox20->Text = "[]";
		this->textBox18->Text = "[]";
		this->textBox26->Text = "";
		this->textBox27->Text = "";
		this->textBox24->Text = "";
		this->textBox25->Text = "";

		this->groupBox2->Enabled = true;
		this->groupBox3->Enabled = true;
		this->groupBox4->Enabled = true;
		this->groupBox9->Enabled = true;
		this->groupBox12->Enabled = true;
	}
	catch (int a)
	{
		if (a == 0)
		{
			MessageBox::Show("Введите l и d", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
		if (a == 1)
		{
			MessageBox::Show("l должно быть не меньше единицы", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
		if (a == 2)
		{
			MessageBox::Show("d должно быть быть равным 2 или 3", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		this->textBox12->Text = "";
		if (this->textBox10->Text == "")
		{
			throw 0;
		}
		int ns = Convert::ToInt32(this->textBox10->Text);
		if (ns < 0 || ns > vOut() - 1)
		{
			throw 1;
		}
		if (checkBox1->Checked)
		{
			OutAlg(0, Convert::ToInt32(this->textBox10->Text), this->textBox12);
		}
		else
		{
			Out(0, Convert::ToInt32(this->textBox10->Text), this->textBox12);
		}
	}
	catch (int a)
	{
		if (a == 0)
		{
			MessageBox::Show("Введите номер блока", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
		if (a == 1)
		{
			MessageBox::Show("Номер блока не может быть меньше 0 и больше " + Convert::ToString(vOut() - 1), "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
	}
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		this->textBox13->Text = "";
		if (this->textBox11->Text == "")
		{
			throw 0;
		}
		int ns = Convert::ToInt32(this->textBox11->Text);
		if (ns < 0 || ns > vOut() - 1)
		{
			throw 1;
		}
		if (checkBox1->Checked)
		{
			OutAlg(0, Convert::ToInt32(this->textBox11->Text), this->textBox13);
		}
		else
		{
			Out(0, Convert::ToInt32(this->textBox11->Text), this->textBox13);
		}
	}
	catch (int a)
	{
		if (a == 0)
		{
			MessageBox::Show("Введите номер блока", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
		if (a == 1)
		{
			MessageBox::Show("Номер блока не может быть меньше 0 и больше " + Convert::ToString(vOut() - 1), "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
	}
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		if (this->textBox14->Text == "")
		{
			throw 0;
		}
		int lk = Convert::ToInt32(this->textBox14->Text);
		if (lk < 0 || lk > vOut() - 1)
		{
			throw 1;
		}
		if (SetLK(lk))
		{
			MessageBox::Show("Такой ключ уже есть", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}

		this->textBox15->Text = gcnew String(ShowLK().c_str());
	}
	catch (int a)
	{
		if (a == 0)
		{
			MessageBox::Show("Есть пустое поле", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
		if (a == 1)
		{
			MessageBox::Show("Значение ключа не может быть меньше 0 и больше " + Convert::ToString(vOut() - 1), "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
	}
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		if (this->textBox17->Text == "")
		{
			throw 0;
		}
		int lb = Convert::ToInt32(this->textBox17->Text);
		if (lb < 0 || lb > vOut() - 1)
		{
			throw 1;
		}
		if (SetLB(lb))
		{
			MessageBox::Show("Такой узел уже есть", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}

		this->textBox16->Text = gcnew String(ShowLB().c_str());
	}
	catch (int a)
	{
		if (a == 0)
		{
			MessageBox::Show("Есть пустое поле", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
		if (a == 1)
		{
			MessageBox::Show("Номер узла(блока) не может быть меньше 0 и больше " + Convert::ToString(vOut() - 1), "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
	}
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		if (this->textBox21->Text == "" || this->textBox22->Text == "")
		{
			throw 0;
		}
		int lk = Convert::ToInt32(this->textBox21->Text);
		int lb = Convert::ToInt32(this->textBox22->Text);
		if (lb < 0 || lb > vOut() - 1 || lk < 0 || lk > vOut() - 1)
		{
			throw 1;
		}
		if (SetLBK(lb, lk))
		{
			MessageBox::Show("Такая пара блок-ключ уже есть", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}

		this->textBox20->Text = gcnew String(ShowLBK().c_str());
	}
	catch (int a)
	{
		if (a == 0)
		{
			MessageBox::Show("Есть пустое поле", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
		if (a == 1)
		{
			MessageBox::Show("Номер узла(блока) и значение ключа не могут быть меньше 0 и больше " + Convert::ToString(vOut() - 1), "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
	}
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		if (this->textBox19->Text == "" || this->textBox23->Text == "")
		{
			throw 0;
		}
		int lk = Convert::ToInt32(this->textBox19->Text);
		int lb = Convert::ToInt32(this->textBox23->Text);
		if (lb < 0 || lb > vOut() - 1 || lk < 0 || lk > vOut() - 1)
		{
			throw 1;
		}
		if (lk == lb)
		{
			throw 2;
		}
		if (SetLBB(lk, lb))
		{
			MessageBox::Show("Такая пара блок-блок уже есть", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}

		this->textBox18->Text = gcnew String(ShowLBB().c_str());
	}
	catch (int a)
	{
		if (a == 0)
		{
			MessageBox::Show("Есть пустое поле", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
		if (a == 1)
		{
			MessageBox::Show("Номера узлов(блоков) не могут быть меньше 0 и больше " + Convert::ToString(vOut() - 1), "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
		if (a == 2)
		{
			MessageBox::Show("Номера блоков не могут быть одинаковыми", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
	}
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		if (this->textBox14->Text == "")
		{
			throw 0;
		}
		int lk = Convert::ToInt32(this->textBox14->Text);
		if (lk < 0 || lk > vOut() - 1)
		{
			throw 1;
		}
		DelLK(lk);

		this->textBox15->Text = gcnew String(ShowLK().c_str());
	}
	catch (int a)
	{
		if (a == 0)
		{
			MessageBox::Show("Есть пустое поле", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
		if (a == 1)
		{
			MessageBox::Show("Значение ключа не может быть меньше 0 и больше " + Convert::ToString(vOut() - 1), "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
	}
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		if (this->textBox17->Text == "")
		{
			throw 0;
		}
		int lb = Convert::ToInt32(this->textBox17->Text);
		if (lb < 0 || lb > vOut() - 1)
		{
			throw 1;
		}
		DelLB(lb);

		this->textBox16->Text = gcnew String(ShowLB().c_str());
	}
	catch (int a)
	{
		if (a == 0)
		{
			MessageBox::Show("Есть пустое поле", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
		if (a == 1)
		{
			MessageBox::Show("Номер узла(блока) не может быть меньше 0 и больше " + Convert::ToString(vOut() - 1), "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
	}
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		if (this->textBox21->Text == "" || this->textBox22->Text == "")
		{
			throw 0;
		}
		int lk = Convert::ToInt32(this->textBox21->Text);
		int lb = Convert::ToInt32(this->textBox22->Text);
		if (lb < 0 || lb > vOut() - 1 || lk < 0 || lk > vOut() - 1)
		{
			throw 1;
		}
		DelLBK(lk, lb);

		this->textBox20->Text = gcnew String(ShowLBK().c_str());
	}
	catch (int a)
	{
		if (a == 0)
		{
			MessageBox::Show("Есть пустое поле", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
		if (a == 1)
		{
			MessageBox::Show("Номер узла(блока) и значение ключа не могут быть меньше 0 и больше " + Convert::ToString(vOut() - 1), "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
	}
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		if (this->textBox19->Text == "" || this->textBox23->Text == "")
		{
			throw 0;
		}
		int lk = Convert::ToInt32(this->textBox19->Text);
		int lb = Convert::ToInt32(this->textBox23->Text);
		if (lb < 0 || lb > vOut() - 1 || lk < 0 || lk > vOut() - 1)
		{
			throw 1;
		}
		if (lk == lb)
		{
			throw 2;
		}
		DelLBB(lk, lb);

		this->textBox18->Text = gcnew String(ShowLBB().c_str());
	}
	catch (int a)
	{
		if (a == 0)
		{
			MessageBox::Show("Есть пустое поле", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
		if (a == 1)
		{
			MessageBox::Show("Номера узлов(блоков) не могут быть меньше 0 и больше " + Convert::ToString(vOut() - 1), "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
		if (a == 2)
		{
			MessageBox::Show("Номера узлов(блоков) не могут быть одинаковыми", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
	}
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		if (this->textBox24->Text == "" || this->textBox25->Text == "")
		{
			throw 0;
		}
		int j1 = Convert::ToInt32(this->textBox24->Text);
		int j2 = Convert::ToInt32(this->textBox25->Text);
		if (j1 < 0 || j1 > vOut() - 1 || j2 < 0 || j2 > vOut() - 1)
		{
			throw 1;
		}
		if (j1 == j2 && sysf == 0)
		{
			throw 2;
		}

		Alg1Out(j1, j2, this->textBox26);
	}
	catch (int a)
	{
		if (a == 0)
		{
			MessageBox::Show("Есть пустое поле", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
		if (a == 1)
		{
			MessageBox::Show("Номера узлов(блоков) не могут быть меньше 0 и больше " + Convert::ToString(vOut() - 1), "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
		if (a == 2)
		{
			MessageBox::Show("Номера узлов(блоков) не могут быть одинаковыми", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
	}
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		if (this->textBox24->Text == "" || this->textBox25->Text == "")
		{
			throw 0;
		}
		int j1 = Convert::ToInt32(this->textBox24->Text);
		int j2 = Convert::ToInt32(this->textBox25->Text);
		if (j1 < 0 || j1 > vOut() - 1 || j2 < 0 || j2 > vOut() - 1)
		{
			throw 1;
		}
		if (j1 == j2 && sysf == 0)
		{
			throw 2;
		}

		Alg2Out(j1, j2, this->textBox27);
	}
	catch (int a)
	{
		if (a == 0)
		{
			MessageBox::Show("Есть пустое поле", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
		if (a == 1)
		{
			MessageBox::Show("Номера узлов(блоков) не могут быть меньше 0 и больше " + Convert::ToString(vOut() - 1), "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
		if (a == 2)
		{
			MessageBox::Show("Номера узлов(блоков) не могут быть одинаковыми", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
	}
}
	   void Alg1Out(int j1, int j2, System::Windows::Forms::TextBox^ tb)
	   {
		   vector<Integer> alg;
		   alg = Algoritm1(j1, j2);
		   if (alg.size() == 0)
		   {
			   tb->Text = "Связи (непосредственной или через одного посредника) между узлами с номерами " + Convert::ToString(j1) + " и " + Convert::ToString(j2) + " нет!";
		   }
		   if (alg.size() == 1)
		   {
			   tb->Text = "Номер ключа непосредственной связи узлов c номерами " + Convert::ToString(j1) + " и " + Convert::ToString(j2) + " : " + gcnew String(alg[0].ToString().c_str());
		   }
		   if (alg.size() == 2)
		   {
			   tb->Text = "Номер ключа связи узлов c номерами " + Convert::ToString(j1) + " и " + Convert::ToString(j2) + " через узел с номером " + gcnew String(alg[1].ToString().c_str()) + " : "+gcnew String(alg[0].ToString().c_str());
		   }
		   if (alg.size() == 5)
		   {
			   tb->Text = "Узел c номером " + Convert::ToString(j1) + " по ключу с номером " + gcnew String(alg[1].ToString().c_str()) + " связан с узлом c номером " + gcnew String(alg[2].ToString().c_str()) + " связанным по ключу " + gcnew String(alg[3].ToString().c_str()) + " c узлом с номером " + Convert::ToString(j2);
		   }
	   }
	   void Alg2Out(int j1, int j2, System::Windows::Forms::TextBox^ tb)
	   {
		   vector<Integer> alg;
		   alg = Algoritm2(j1, j2);
		   if (alg.size() == 0)
		   {
			   tb->Text = "Связи (непосредственной или через одного посредника) между узлами с номерами j1 = " + Convert::ToString(j1) + " и j2 = " + Convert::ToString(j2) + " нет!";
		   }
		   if (alg.size() == 2)
		   {
			   tb->Text = "Узлы " + Convert::ToString(j1) + " и " + Convert::ToString(j2) + " связаны напрямую";
		   }
		   if (alg.size() == 3)
		   {
			   tb->Text = "Узлы " + Convert::ToString(j1) + " и " + Convert::ToString(j2) + " связаны через узел " + gcnew String(alg[2].ToString().c_str());
		   }
	   }
	   void AlgVchOut(vector<Integer> v1, vector<Integer> v2, System::Windows::Forms::TextBox^ tb)
	   {
		   if (!IsIn(v1) || !IsIn(v2))
		   {
			   tb->Text = "Таких элементов системы не существует";
		   }
		   else
		   {
			   vector<vector<Integer>> alg;
			   alg = Algoritm3(v1, v2);
			   if (alg.size() == 2)
			   {
				   tb->Text = "(" + gcnew String(v1[0].ToString().c_str()) + "," + gcnew String(v1[1].ToString().c_str()) + ")->" + "(" + gcnew String(v2[0].ToString().c_str()) + ", " + gcnew String(v2[1].ToString().c_str()) + ")";
			   }
			   if (alg.size() == 3)
			   {
				   tb->Text = "(" + gcnew String(v1[0].ToString().c_str()) + "," + gcnew String(v1[1].ToString().c_str()) + ")->" + "(" + gcnew String(alg[1][0].ToString().c_str()) + "," + gcnew String(alg[1][1].ToString().c_str()) + ")->" + "(" + gcnew String(v2[0].ToString().c_str()) + "," + gcnew String(v2[1].ToString().c_str()) + ")";
			   }
			   if (alg.size() == 4)
			   {
				   tb->Text = "(" + gcnew String(v1[0].ToString().c_str()) + "," + gcnew String(v1[1].ToString().c_str()) + ")->" + "(" + gcnew String(alg[1][0].ToString().c_str()) + "," + gcnew String(alg[1][1].ToString().c_str()) + ")->" + "(" + gcnew String(alg[2][0].ToString().c_str()) + "," + gcnew String(alg[2][1].ToString().c_str()) + ")->" + "(" + gcnew String(v2[0].ToString().c_str()) + "," + gcnew String(v2[1].ToString().c_str()) + ")";
			   }
		   }
	   }

private: System::Void rBut2Clc(System::Object^ sender, System::EventArgs^ e) {
	this->groupBox4->Text = "Ограничения БСС для моделирования коммуникаций компьютеров";

	this->groupBox5->Text = "Запрещённые компьютеры";
	this->label12->Text = "Номер компьютера";

	this->groupBox6->Text = "Запрещённые шины";
	this->label13->Text = "Номер шины";

	this->groupBox7->Text = "Запрещённые компьютеры на локальной шине";
	this->label14->Text = "Номер компьютера";
	this->label19->Text = "Номер шины";

	this->groupBox8->Text = "Запрещённые компьютеры на глобальной шине";
	this->label16->Text = "Номер компьютера";
	this->label18->Text = "Номер шины";

	this->groupBox5->Enabled = false;
	this->groupBox6->Enabled = false;
	this->groupBox7->Enabled = false;
	this->groupBox8->Enabled = false;

	this->groupBox11->Enabled = false;
	this->groupBox11->Visible = false;
	this->button16->Enabled = false;
	this->button17->Enabled = false;
	this->button18->Enabled = false;
	this->button16->Visible = false;
	this->button17->Visible = false;
	this->button18->Visible = false;

	this->label20->Text = "Компьютер 1";
	this->label21->Text = "Компьютер 2";

	this->textBox31->Visible = true;
	this->textBox32->Visible = true;
	this->label24->Visible = true;
	this->label23->Visible = true;

	this->textBox24->Text = "";
	this->textBox25->Text = "";
	this->textBox26->Text = "";
	this->textBox27->Text = "";

	ClearLB();
	ClearLK();
	ClearLBB;
	ClearLBK();
	this->textBox15->Text = "[]";
	this->textBox16->Text = "[]";
	this->textBox20->Text = "[]";
	this->textBox18->Text = "[]";

	this->groupBox10->Text = "Коммуникация компьютеров";

	this->button29->Enabled = true;
	this->button14->Enabled = false;
	this->button15->Enabled = false;

	this->button29->Visible = true;
	this->button14->Visible = false;
	this->button15->Visible = false;
}
private: System::Void rBut1Clc(System::Object^ sender, System::EventArgs^ e) {
	this->groupBox4->Text = "Ограничения БСС для моделирования коммуникаций узлов";

	this->groupBox5->Text = "Запрещённые ключи";
	this->label12->Text = "Номер ключа";

	this->groupBox6->Text = "Запрещённые узлы";
	this->label13->Text = "Номер узла";

	this->groupBox7->Text = "Запрещённые связи между узлами";
	this->label14->Text = "Номер 1 узла";
	this->label19->Text = "Номер 2 узла";

	this->groupBox8->Text = "Запрещённые ключи в узле";
	this->label16->Text = "Номер ключа";
	this->label18->Text = "Номер узла";

	this->groupBox5->Enabled = true;
	this->groupBox6->Enabled = true;
	this->groupBox7->Enabled = true;
	this->groupBox8->Enabled = true;

	this->groupBox11->Enabled = true;
	this->groupBox11->Visible = true;
	this->button16->Enabled = true;
	this->button17->Enabled = true;
	this->button18->Enabled = true;
	this->button16->Visible = true;
	this->button17->Visible = true;
	this->button18->Visible = true;

	this->label20->Text = "Узел 1";
	this->label21->Text = "Узел 2";

	this->groupBox10->Text = "Алгоритм 1";

	this->textBox31->Visible = false;
	this->textBox32->Visible = false;
	this->label24->Visible = false;
	this->label23->Visible = false;

	this->textBox24->Text = "";
	this->textBox25->Text = "";
	this->textBox26->Text = "";
	this->textBox27->Text = "";

	this->button29->Enabled = false;
	this->button14->Enabled = true;
	this->button15->Enabled = true;

	this->button29->Visible = false;
	this->button14->Visible = true;
	this->button15->Visible = true;
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	SetParams(1, 2);

	this->textBox3->Text = "1";
	this->textBox4->Text = "2";

	this->textBox5->Text = gcnew String(fOut().c_str());
	this->textBox6->Text = Convert::ToString(nOut());
	this->textBox7->Text = Convert::ToString(vOut());
	this->textBox8->Text = Convert::ToString(kOut());

	ClearLK();
	ClearLB();
	ClearLBK();
	ClearLBB();

	SetLK(0);
	SetLK(1);
	SetLK(5);
	SetLBK(1, 0);
	SetLBB(0, 5);

	this->textBox15->Text = "[]";
	this->textBox16->Text = "[]";
	this->textBox20->Text = "[]";
	this->textBox18->Text = "[]";

	this->textBox15->Text = gcnew String(ShowLK().c_str());
	this->textBox20->Text = gcnew String(ShowLBK().c_str());
	this->textBox18->Text = gcnew String(ShowLBB().c_str());

	this->textBox1->Text = "";
	this->textBox9->Text = "";
	this->textBox10->Text = "";
	this->textBox11->Text = "";
	this->textBox12->Text = "";
	this->textBox13->Text = "";

	this->textBox24->Text = "0";
	this->textBox25->Text = "1";

	Alg1Out(0, 1, this->textBox26);

	this->groupBox2->Enabled = true;
	this->groupBox3->Enabled = true;
	this->groupBox4->Enabled = true;
	this->groupBox9->Enabled = true;
	this->groupBox12->Enabled = true;
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
	SetParams(2, 2);

	this->textBox3->Text = "2";
	this->textBox4->Text = "2";

	this->textBox5->Text = gcnew String(fOut().c_str());
	this->textBox6->Text = Convert::ToString(nOut());
	this->textBox7->Text = Convert::ToString(vOut());
	this->textBox8->Text = Convert::ToString(kOut());

	ClearLK();
	ClearLB();
	ClearLBK();
	ClearLBB();

	SetLK(0);
	SetLK(1);
	SetLK(5);
	SetLB(10);
	SetLBK(1, 0);
	SetLBK(2, 11);
	SetLBB(0, 5);

	this->textBox15->Text = "[]";
	this->textBox16->Text = "[]";
	this->textBox20->Text = "[]";
	this->textBox18->Text = "[]";

	this->textBox15->Text = gcnew String(ShowLK().c_str());
	this->textBox16->Text = gcnew String(ShowLB().c_str());
	this->textBox20->Text = gcnew String(ShowLBK().c_str());
	this->textBox18->Text = gcnew String(ShowLBB().c_str());

	this->textBox1->Text = "";
	this->textBox9->Text = "";
	this->textBox10->Text = "";
	this->textBox11->Text = "";
	this->textBox12->Text = "";
	this->textBox13->Text = "";

	this->textBox24->Text = "0";
	this->textBox25->Text = "1";

	Alg1Out(0, 1, this->textBox26);

	this->groupBox2->Enabled = true;
	this->groupBox3->Enabled = true;
	this->groupBox4->Enabled = true;
	this->groupBox9->Enabled = true;
	this->groupBox12->Enabled = true;
}
private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
	ClearLK();
	this->textBox15->Text = "[]";
}
private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
	ClearLB();
	this->textBox16->Text = "[]";
}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
	ClearLBK();
	this->textBox20->Text = "[]";
}
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
	ClearLBB();
	this->textBox18->Text = "[]";
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
	SetParams(1, 3);

	this->textBox3->Text = "1";
	this->textBox4->Text = "3";

	this->textBox5->Text = gcnew String(fOut().c_str());
	this->textBox6->Text = Convert::ToString(nOut());
	this->textBox7->Text = Convert::ToString(vOut());
	this->textBox8->Text = Convert::ToString(kOut());

	ClearLK();
	ClearLB();
	ClearLBK();
	ClearLBB();

	SetLK(12);
	SetLB(11);
	SetLB(13);
	SetLBK(7, 11);
	SetLBK(10, 11);
	SetLBK(8, 5);
	SetLBB(2, 6);
	SetLBB(0, 2);
	SetLBB(2, 1);
	SetLBB(2, 3);
	SetLBB(2, 4);
	SetLBB(2, 5);
	SetLBB(6, 7);

	this->textBox15->Text = "[]";
	this->textBox16->Text = "[]";
	this->textBox20->Text = "[]";
	this->textBox18->Text = "[]";

	this->textBox15->Text = gcnew String(ShowLK().c_str());
	this->textBox16->Text = gcnew String(ShowLB().c_str());
	this->textBox20->Text = gcnew String(ShowLBK().c_str());
	this->textBox18->Text = gcnew String(ShowLBB().c_str());

	this->textBox1->Text = "";
	this->textBox9->Text = "";
	this->textBox10->Text = "";
	this->textBox11->Text = "";
	this->textBox12->Text = "";
	this->textBox13->Text = "";

	this->textBox24->Text = "2";
	this->textBox25->Text = "6";

	Alg1Out(2, 6, this->textBox26);

	this->groupBox2->Enabled = true;
	this->groupBox3->Enabled = true;
	this->groupBox4->Enabled = true;
	this->groupBox9->Enabled = true;
	this->groupBox12->Enabled = true;
}
private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
	SetParams(1, 2);

	this->textBox3->Text = "1";
	this->textBox4->Text = "2";

	this->textBox5->Text = gcnew String(fOut().c_str());
	this->textBox6->Text = Convert::ToString(nOut());
	this->textBox7->Text = Convert::ToString(vOut());
	this->textBox8->Text = Convert::ToString(kOut());

	ClearLK();
	ClearLB();
	ClearLBK();
	ClearLBB();

	SetLK(0);
	SetLK(1);
	SetLK(5);
	SetLBK(1, 0);
	SetLBB(0, 5);

	this->textBox15->Text = "[]";
	this->textBox16->Text = "[]";
	this->textBox20->Text = "[]";
	this->textBox18->Text = "[]";

	this->textBox15->Text = gcnew String(ShowLK().c_str());
	this->textBox20->Text = gcnew String(ShowLBK().c_str());
	this->textBox18->Text = gcnew String(ShowLBB().c_str());

	this->textBox1->Text = "";
	this->textBox9->Text = "";
	this->textBox10->Text = "";
	this->textBox11->Text = "";
	this->textBox12->Text = "";
	this->textBox13->Text = "";

	this->textBox24->Text = "0";
	this->textBox25->Text = "1";

	Alg2Out(0, 1, this->textBox27);

	this->groupBox2->Enabled = true;
	this->groupBox3->Enabled = true;
	this->groupBox4->Enabled = true;
	this->groupBox9->Enabled = true;
	this->groupBox12->Enabled = true;
}
private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
	SetParams(2, 2);

	this->textBox3->Text = "2";
	this->textBox4->Text = "2";

	this->textBox5->Text = gcnew String(fOut().c_str());
	this->textBox6->Text = Convert::ToString(nOut());
	this->textBox7->Text = Convert::ToString(vOut());
	this->textBox8->Text = Convert::ToString(kOut());

	ClearLK();
	ClearLB();
	ClearLBK();
	ClearLBB();

	SetLK(0);
	SetLK(1);
	SetLK(5);
	SetLB(10);
	SetLBK(1, 0);
	SetLBK(2, 11);
	SetLBB(0, 5);

	this->textBox15->Text = "[]";
	this->textBox16->Text = "[]";
	this->textBox20->Text = "[]";
	this->textBox18->Text = "[]";

	this->textBox15->Text = gcnew String(ShowLK().c_str());
	this->textBox16->Text = gcnew String(ShowLB().c_str());
	this->textBox20->Text = gcnew String(ShowLBK().c_str());
	this->textBox18->Text = gcnew String(ShowLBB().c_str());

	this->textBox1->Text = "";
	this->textBox9->Text = "";
	this->textBox10->Text = "";
	this->textBox11->Text = "";
	this->textBox12->Text = "";
	this->textBox13->Text = "";

	this->textBox24->Text = "0";
	this->textBox25->Text = "1";

	Alg2Out(0, 1, this->textBox27);

	this->groupBox2->Enabled = true;
	this->groupBox3->Enabled = true;
	this->groupBox4->Enabled = true;
	this->groupBox9->Enabled = true;
	this->groupBox12->Enabled = true;
}
private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
	SetParams(1, 3);

	this->textBox3->Text = "1";
	this->textBox4->Text = "3";

	this->textBox5->Text = gcnew String(fOut().c_str());
	this->textBox6->Text = Convert::ToString(nOut());
	this->textBox7->Text = Convert::ToString(vOut());
	this->textBox8->Text = Convert::ToString(kOut());

	ClearLK();
	ClearLB();
	ClearLBK();
	ClearLBB();

	SetLK(12);
	SetLB(11);
	SetLB(13);
	SetLBK(7, 11);
	SetLBK(10, 11);
	SetLBK(8, 5);
	SetLBB(2, 6);
	SetLBB(0, 2);
	SetLBB(2, 1);
	SetLBB(2, 3);
	SetLBB(2, 4);
	SetLBB(2, 5);
	SetLBB(6, 7);

	this->textBox15->Text = "[]";
	this->textBox16->Text = "[]";
	this->textBox20->Text = "[]";
	this->textBox18->Text = "[]";

	this->textBox15->Text = gcnew String(ShowLK().c_str());
	this->textBox16->Text = gcnew String(ShowLB().c_str());
	this->textBox20->Text = gcnew String(ShowLBK().c_str());
	this->textBox18->Text = gcnew String(ShowLBB().c_str());

	this->textBox1->Text = "";
	this->textBox9->Text = "";
	this->textBox10->Text = "";
	this->textBox11->Text = "";
	this->textBox12->Text = "";
	this->textBox13->Text = "";

	this->textBox24->Text = "2";
	this->textBox25->Text = "6";

	Alg2Out(2, 6, this->textBox27);

	this->groupBox2->Enabled = true;
	this->groupBox3->Enabled = true;
	this->groupBox4->Enabled = true;
	this->groupBox9->Enabled = true;
	this->groupBox12->Enabled = true;
}
private: System::Void button28_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		if (this->textBox28->Text == "")
		{
			throw 0;
		}
		int lk = Convert::ToInt32(this->textBox28->Text);
		if (lk < 0 || lk > vOut() - 1)
		{
			throw 1;
		}
		if (find(interel.begin(), interel.end(), lk) != interel.end())
		{
			throw 2;
		}
		interel.push_back(lk);
		this->textBox29->Text = "";
		for (int i = 0; i < interel.size(); i++)
		{
			this->textBox29->Text += gcnew String(interel[i].ToString().c_str());
			if (i < interel.size() - 1)
			{
				this->textBox29->Text += ", ";
			}
		}

		this->textBox15->Text = gcnew String(ShowLK().c_str());
	}
	catch (int a)
	{
		if (a == 0)
		{
			MessageBox::Show("Есть пустое поле", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
		if (a == 1)
		{
			MessageBox::Show("Значение элемента не может быть меньше 0 и больше " + Convert::ToString(vOut() - 1), "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
		if (a == 2)
		{
			MessageBox::Show("Такой элемент уже есть", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
	}
}
private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {
	interel.clear();

	this->textBox29->Text = "";
}
private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		if (interel.empty())
		{
			throw 0;
		}
		vector<Integer> out;
		this->textBox30->Text = "";
		out = cens(interel, true);
		if (out.size() == 0)
		{
			this->textBox30->Text = "Список номеров блоков, содержащих заданные элементы, пуст";
		}
		else
		{
			this->textBox30->Text = "Номера блоков, содержащих элементы из списка: [";
			for (int i = 0; i < out.size(); i++)
			{
				this->textBox30->Text += gcnew String(out[i].ToString().c_str());
				if (i < out.size() - 1)
				{
					this->textBox30->Text += ", ";
				}
				else
				{
					this->textBox30->Text += "]";
				}
			}
		}
	}
	catch (int a)
	{
		MessageBox::Show("Список элементов пуст", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
}
private: System::Void button29_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		if (this->textBox24->Text == "" || this->textBox25->Text == "" || this->textBox32->Text == "" || this->textBox31->Text == "")
		{
			throw 0;
		}
		int j1 = Convert::ToInt32(this->textBox24->Text);
		int j2 = Convert::ToInt32(this->textBox25->Text);
		int s1 = Convert::ToInt32(this->textBox32->Text);
		int s2 = Convert::ToInt32(this->textBox31->Text);
		if (j1 < 0 || j1 > vOut() - 1 || j2 < 0 || j2 > vOut() - 1 || s1 < 0 || s1 > vOut() - 1 || s2 < 0 || s2 > vOut() - 1)
		{
			throw 1;
		}
		
		AlgVchOut({ s1, j1 }, { s2, j2 }, this->textBox26);
	}
	catch (int a)
	{
		if (a == 0)
		{
			MessageBox::Show("Есть пустое поле", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
		if (a == 1)
		{
			MessageBox::Show("Номера узлов(блоков) не могут быть меньше 0 и больше " + Convert::ToString(vOut() - 1), "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
	}
}
private: System::Void выходToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void ключевыеСистемыToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	sysf = 0;
	
	this->ключевыеСистемыToolStripMenuItem->BackColor = SystemColors::ActiveCaption;
	this->вычислительныеСистемыToolStripMenuItem->BackColor = SystemColors::Window;

	this->groupBox4->Text = "Ограничения БСС для моделирования коммуникаций узлов";

	this->groupBox5->Text = "Запрещённые ключи";
	this->label12->Text = "Номер ключа";

	this->groupBox6->Text = "Запрещённые узлы";
	this->label13->Text = "Номер узла";

	this->groupBox7->Text = "Запрещённые связи между узлами";
	this->label14->Text = "Номер 1 узла";
	this->label19->Text = "Номер 2 узла";

	this->groupBox8->Text = "Запрещённые ключи в узле";
	this->label16->Text = "Номер ключа";
	this->label18->Text = "Номер узла";

	this->groupBox5->Enabled = true;
	this->groupBox6->Enabled = true;
	this->groupBox7->Enabled = true;
	this->groupBox8->Enabled = true;

	this->groupBox11->Enabled = true;
	this->groupBox11->Visible = true;
	this->button16->Enabled = true;
	this->button17->Enabled = true;
	this->button18->Enabled = true;
	this->button16->Visible = true;
	this->button17->Visible = true;
	this->button18->Visible = true;

	this->label20->Text = "Узел 1";
	this->label21->Text = "Узел 2";

	this->groupBox10->Text = "Алгоритм 1";

	this->textBox31->Visible = false;
	this->textBox32->Visible = false;
	this->label24->Visible = false;
	this->label23->Visible = false;

	this->textBox24->Text = "";
	this->textBox25->Text = "";
	this->textBox26->Text = "";
	this->textBox27->Text = "";

	this->button29->Enabled = false;
	this->button14->Enabled = true;
	this->button15->Enabled = true;

	this->button29->Visible = false;
	this->button14->Visible = true;
	this->button15->Visible = true;
}
private: System::Void вычислительныеСистемыToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	sysf = 1;

	this->вычислительныеСистемыToolStripMenuItem->BackColor = SystemColors::ActiveCaption;
	this->ключевыеСистемыToolStripMenuItem->BackColor = SystemColors::Window;

	this->groupBox4->Text = "Ограничения БСС для моделирования коммуникаций компьютеров";

	this->groupBox5->Text = "Запрещённые компьютеры";
	this->label12->Text = "Номер компьютера";

	this->groupBox6->Text = "Запрещённые шины";
	this->label13->Text = "Номер шины";

	this->groupBox7->Text = "Запрещённые компьютеры на локальной шине";
	this->label14->Text = "Номер компьютера";
	this->label19->Text = "Номер шины";

	this->groupBox8->Text = "Запрещённые компьютеры на глобальной шине";
	this->label16->Text = "Номер компьютера";
	this->label18->Text = "Номер шины";

	this->groupBox5->Enabled = false;
	this->groupBox6->Enabled = false;
	this->groupBox7->Enabled = false;
	this->groupBox8->Enabled = false;

	this->groupBox11->Enabled = false;
	this->groupBox11->Visible = false;
	this->button16->Enabled = false;
	this->button17->Enabled = false;
	this->button18->Enabled = false;
	this->button16->Visible = false;
	this->button17->Visible = false;
	this->button18->Visible = false;

	this->label20->Text = "Компьютер 1";
	this->label21->Text = "Компьютер 2";

	this->textBox31->Visible = true;
	this->textBox32->Visible = true;
	this->label24->Visible = true;
	this->label23->Visible = true;

	this->textBox24->Text = "";
	this->textBox25->Text = "";
	this->textBox26->Text = "";
	this->textBox27->Text = "";

	this->textBox32->Text = "";
	this->textBox31->Text = "";

	ClearLB();
	ClearLK();
	ClearLBB;
	ClearLBK();
	this->textBox15->Text = "[]";
	this->textBox16->Text = "[]";
	this->textBox20->Text = "[]";
	this->textBox18->Text = "[]";

	this->groupBox10->Text = "Коммуникация компьютеров";

	this->button29->Enabled = true;
	this->button14->Enabled = false;
	this->button15->Enabled = false;

	this->button29->Visible = true;
	this->button14->Visible = false;
	this->button15->Visible = false;
}
private: System::Void справкаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MsgBox1^ msgb = gcnew MsgBox1;
	msgb->ShowDialog();
}
private: System::Void textBox3_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	char ch = e->KeyChar;
	if (!Char::IsDigit(ch) && ch != 8)
	{
		e->Handled = true;
	}
}
private: System::Void textBox4_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	char ch = e->KeyChar;
	if (!Char::IsDigit(ch) && ch != 8)
	{
		e->Handled = true;
	}
}
private: System::Void textBox10_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	char ch = e->KeyChar;
	if (!Char::IsDigit(ch) && ch != 8)
	{
		e->Handled = true;
	}
}
private: System::Void textBox11_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	char ch = e->KeyChar;
	if (!Char::IsDigit(ch) && ch != 8)
	{
		e->Handled = true;
	}
}
private: System::Void textBox14_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	char ch = e->KeyChar;
	if (!Char::IsDigit(ch) && ch != 8)
	{
		e->Handled = true;
	}
}
private: System::Void textBox17_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	char ch = e->KeyChar;
	if (!Char::IsDigit(ch) && ch != 8)
	{
		e->Handled = true;
	}
}
private: System::Void textBox22_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	char ch = e->KeyChar;
	if (!Char::IsDigit(ch) && ch != 8)
	{
		e->Handled = true;
	}
}
private: System::Void textBox21_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	char ch = e->KeyChar;
	if (!Char::IsDigit(ch) && ch != 8)
	{
		e->Handled = true;
	}
}
private: System::Void textBox19_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	char ch = e->KeyChar;
	if (!Char::IsDigit(ch) && ch != 8)
	{
		e->Handled = true;
	}
}
private: System::Void textBox23_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	char ch = e->KeyChar;
	if (!Char::IsDigit(ch) && ch != 8)
	{
		e->Handled = true;
	}
}
private: System::Void textBox24_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	char ch = e->KeyChar;
	if (!Char::IsDigit(ch) && ch != 8)
	{
		e->Handled = true;
	}
}
private: System::Void textBox25_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	char ch = e->KeyChar;
	if (!Char::IsDigit(ch) && ch != 8)
	{
		e->Handled = true;
	}
}
private: System::Void textBox32_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	char ch = e->KeyChar;
	if (!Char::IsDigit(ch) && ch != 8)
	{
		e->Handled = true;
	}
}
private: System::Void textBox31_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	char ch = e->KeyChar;
	if (!Char::IsDigit(ch) && ch != 8)
	{
		e->Handled = true;
	}
}
private: System::Void textBox28_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	char ch = e->KeyChar;
	if (!Char::IsDigit(ch) && ch != 8)
	{
		e->Handled = true;
	}
}
};
}