#pragma once
#include <iostream>
#include <string>
#include "main_interface.h"
using namespace std;

Interface test;
int log_counter = 0;
int tree_log_counter = 0;

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung fьr Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufьgen.
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

	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;


	private: System::Windows::Forms::TabPage^ SearchTab;
	private: System::Windows::Forms::GroupBox^ groupBoxResult;


	private: System::Windows::Forms::Button^ GenerateResult;
	private: System::Windows::Forms::NumericUpDown^ InputDaySearch;






	private: System::Windows::Forms::DataGridView^ ResultWindow;






	private: System::Windows::Forms::TabPage^ ContPage;

	private: System::Windows::Forms::GroupBox^ Сleanings;
	private: System::Windows::Forms::Button^ InitData;
	private: System::Windows::Forms::DataGridView^ CleaningWindow;

	private: System::Windows::Forms::GroupBox^ Room_box;
	private: System::Windows::Forms::DataGridView^ MangaWindow;


	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::Button^ DeleteFromTreeButton;
	private: System::Windows::Forms::Button^ InsertToTreeButton;
	private: System::Windows::Forms::Button^ DeleteFromHashButton;
	private: System::Windows::Forms::Button^ InsertToHashButton;
	private: System::Windows::Forms::TabPage^ DebugTab;
	private: System::Windows::Forms::GroupBox^ DebugClean;

	private: System::Windows::Forms::DataGridView^ dataGridCleanDebug;

	private: System::Windows::Forms::GroupBox^ DebagRoom;

	private: System::Windows::Forms::DataGridView^ dataGridRoomDebug;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::GroupBox^ LogBox;
	private: System::Windows::Forms::DataGridView^ LogGridView;

	public: System::Windows::Forms::TextBox^ productionNameInput;
	private:

	private: System::Windows::Forms::NumericUpDown^ performanceDurInput;
	public:
	private:









	public:

	public:
	private:



















	private: System::Windows::Forms::NumericUpDown^ HashTableSize;
private: System::Windows::Forms::NumericUpDown^ productionPriceInput;



public:

public:

public: System::Windows::Forms::TextBox^ performanceGenreInput;
private:

public: System::Windows::Forms::TextBox^ performanceTitleInput;
	private:


public:




private: System::Windows::Forms::GroupBox^ groupBox1;
private: System::Windows::Forms::DataGridView^ TreeLogBox;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;


private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ ResTable;

private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::Label^ label10;

private: System::Windows::Forms::Label^ label8;



private: System::Windows::Forms::Button^ TreeSearch;
private: System::Windows::Forms::Button^ HashTableSearch;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Rooms;
private: System::Windows::Forms::NumericUpDown^ productionYearInput;

private: System::Windows::Forms::NumericUpDown^ productionMounthInput;

private: System::Windows::Forms::NumericUpDown^ productionDayInput;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Cleanings;
private: System::Windows::Forms::NumericUpDown^ InputYearSearch;

private: System::Windows::Forms::NumericUpDown^ InputMounthSearch;
public: System::Windows::Forms::TextBox^ InputGenreSearch;
private: System::Windows::Forms::Label^ label9;
public:
private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::Label^ label11;
private:


	public:
	private:

	private:


	public:

	private: System::ComponentModel::IContainer^ components;


	private:

		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode fьr die Designerunterstьtzung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geдndert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->SearchTab = (gcnew System::Windows::Forms::TabPage());
			this->groupBoxResult = (gcnew System::Windows::Forms::GroupBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->InputGenreSearch = (gcnew System::Windows::Forms::TextBox());
			this->InputYearSearch = (gcnew System::Windows::Forms::NumericUpDown());
			this->InputMounthSearch = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->GenerateResult = (gcnew System::Windows::Forms::Button());
			this->InputDaySearch = (gcnew System::Windows::Forms::NumericUpDown());
			this->ResultWindow = (gcnew System::Windows::Forms::DataGridView());
			this->ResTable = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ContPage = (gcnew System::Windows::Forms::TabPage());
			this->Сleanings = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->productionYearInput = (gcnew System::Windows::Forms::NumericUpDown());
			this->productionMounthInput = (gcnew System::Windows::Forms::NumericUpDown());
			this->productionDayInput = (gcnew System::Windows::Forms::NumericUpDown());
			this->TreeSearch = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->productionPriceInput = (gcnew System::Windows::Forms::NumericUpDown());
			this->DeleteFromTreeButton = (gcnew System::Windows::Forms::Button());
			this->InsertToTreeButton = (gcnew System::Windows::Forms::Button());
			this->productionNameInput = (gcnew System::Windows::Forms::TextBox());
			this->CleaningWindow = (gcnew System::Windows::Forms::DataGridView());
			this->Cleanings = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Room_box = (gcnew System::Windows::Forms::GroupBox());
			this->HashTableSearch = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->performanceGenreInput = (gcnew System::Windows::Forms::TextBox());
			this->MangaWindow = (gcnew System::Windows::Forms::DataGridView());
			this->Rooms = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->performanceDurInput = (gcnew System::Windows::Forms::NumericUpDown());
			this->DeleteFromHashButton = (gcnew System::Windows::Forms::Button());
			this->InsertToHashButton = (gcnew System::Windows::Forms::Button());
			this->performanceTitleInput = (gcnew System::Windows::Forms::TextBox());
			this->HashTableSize = (gcnew System::Windows::Forms::NumericUpDown());
			this->InitData = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->DebugTab = (gcnew System::Windows::Forms::TabPage());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->TreeLogBox = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DebugClean = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridCleanDebug = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->LogBox = (gcnew System::Windows::Forms::GroupBox());
			this->LogGridView = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DebagRoom = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridRoomDebug = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->SearchTab->SuspendLayout();
			this->groupBoxResult->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->InputYearSearch))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->InputMounthSearch))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->InputDaySearch))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ResultWindow))->BeginInit();
			this->ContPage->SuspendLayout();
			this->Сleanings->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->productionYearInput))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->productionMounthInput))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->productionDayInput))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->productionPriceInput))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CleaningWindow))->BeginInit();
			this->Room_box->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MangaWindow))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->performanceDurInput))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HashTableSize))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->DebugTab->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TreeLogBox))->BeginInit();
			this->DebugClean->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridCleanDebug))->BeginInit();
			this->LogBox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LogGridView))->BeginInit();
			this->DebagRoom->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridRoomDebug))->BeginInit();
			this->SuspendLayout();
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			this->SearchTab->Controls->Add(this->groupBoxResult);
			this->SearchTab->Location = System::Drawing::Point(4, 22);
			this->SearchTab->Name = L"SearchTab";
			this->SearchTab->Padding = System::Windows::Forms::Padding(3);
			this->SearchTab->Size = System::Drawing::Size(1143, 634);
			this->SearchTab->TabIndex = 2;
			this->SearchTab->Text = L"Поисковая задача";
			this->SearchTab->UseVisualStyleBackColor = true;
			this->groupBoxResult->BackColor = System::Drawing::Color::SlateBlue;
			this->groupBoxResult->Controls->Add(this->label12);
			this->groupBoxResult->Controls->Add(this->label11);
			this->groupBoxResult->Controls->Add(this->label9);
			this->groupBoxResult->Controls->Add(this->InputGenreSearch);
			this->groupBoxResult->Controls->Add(this->InputYearSearch);
			this->groupBoxResult->Controls->Add(this->InputMounthSearch);
			this->groupBoxResult->Controls->Add(this->label1);
			this->groupBoxResult->Controls->Add(this->GenerateResult);
			this->groupBoxResult->Controls->Add(this->InputDaySearch);
			this->groupBoxResult->Controls->Add(this->ResultWindow);
			this->groupBoxResult->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBoxResult->Location = System::Drawing::Point(6, 3);
			this->groupBoxResult->Name = L"groupBoxResult";
			this->groupBoxResult->Size = System::Drawing::Size(1134, 700);
			this->groupBoxResult->TabIndex = 8;
			this->groupBoxResult->TabStop = false;
			this->groupBoxResult->Text = L"Решение поисковой задачи";
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(35, 578);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(33, 19);
			this->label12->TabIndex = 30;
			this->label12->Text = L"Год";
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(35, 534);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(55, 19);
			this->label11->TabIndex = 29;
			this->label11->Text = L"Месяц";
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(309, 499);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(48, 19);
			this->label9->TabIndex = 28;
			this->label9->Text = L"Жанр";
			this->InputGenreSearch->Location = System::Drawing::Point(250, 533);
			this->InputGenreSearch->Name = L"InputGenreSearch";
			this->InputGenreSearch->Size = System::Drawing::Size(165, 27);
			this->InputGenreSearch->TabIndex = 27;
			this->InputYearSearch->BackColor = System::Drawing::Color::White;
			this->InputYearSearch->Location = System::Drawing::Point(116, 576);
			this->InputYearSearch->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2040, 0, 0, 0 });
			this->InputYearSearch->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2000, 0, 0, 0 });
			this->InputYearSearch->Name = L"InputYearSearch";
			this->InputYearSearch->Size = System::Drawing::Size(88, 27);
			this->InputYearSearch->TabIndex = 9;
			this->InputYearSearch->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2000, 0, 0, 0 });
			this->InputMounthSearch->BackColor = System::Drawing::Color::White;
			this->InputMounthSearch->Location = System::Drawing::Point(116, 534);
			this->InputMounthSearch->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 12, 0, 0, 0 });
			this->InputMounthSearch->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->InputMounthSearch->Name = L"InputMounthSearch";
			this->InputMounthSearch->Size = System::Drawing::Size(88, 27);
			this->InputMounthSearch->TabIndex = 8;
			this->InputMounthSearch->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(35, 493);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(45, 19);
			this->label1->TabIndex = 5;
			this->label1->Text = L"День\r\n";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			this->GenerateResult->Font = (gcnew System::Drawing::Font(L"Calibri", 16.2, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->GenerateResult->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->GenerateResult->Location = System::Drawing::Point(444, 483);
			this->GenerateResult->Name = L"GenerateResult";
			this->GenerateResult->Size = System::Drawing::Size(165, 142);
			this->GenerateResult->TabIndex = 3;
			this->GenerateResult->Text = L"Найти";
			this->GenerateResult->UseVisualStyleBackColor = true;
			this->GenerateResult->Click += gcnew System::EventHandler(this, &Form1::GenerateResult_Click);
			this->InputDaySearch->BackColor = System::Drawing::Color::White;
			this->InputDaySearch->Location = System::Drawing::Point(116, 491);
			this->InputDaySearch->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 30, 0, 0, 0 });
			this->InputDaySearch->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->InputDaySearch->Name = L"InputDaySearch";
			this->InputDaySearch->Size = System::Drawing::Size(88, 27);
			this->InputDaySearch->TabIndex = 4;
			this->InputDaySearch->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->ResultWindow->BackgroundColor = System::Drawing::Color::SlateBlue;
			this->ResultWindow->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->ResultWindow->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->ResTable });
			this->ResultWindow->Location = System::Drawing::Point(6, 26);
			this->ResultWindow->Name = L"ResultWindow";
			this->ResultWindow->RowHeadersWidth = 51;
			this->ResultWindow->Size = System::Drawing::Size(1054, 438);
			this->ResultWindow->TabIndex = 2;
			this->ResultWindow->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView1_CellContentClick);
			this->ResTable->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->ResTable->HeaderText = L"Результат";
			this->ResTable->MinimumWidth = 6;
			this->ResTable->Name = L"ResTable";
			this->ContPage->BackColor = System::Drawing::Color::SlateBlue;
			this->ContPage->Controls->Add(this->Сleanings);
			this->ContPage->Controls->Add(this->Room_box);
			this->ContPage->Location = System::Drawing::Point(4, 22);
			this->ContPage->Name = L"ContPage";
			this->ContPage->Padding = System::Windows::Forms::Padding(3);
			this->ContPage->Size = System::Drawing::Size(1143, 634);
			this->ContPage->TabIndex = 0;
			this->ContPage->Text = L"Справочники";
			this->Сleanings->BackColor = System::Drawing::Color::SlateBlue;
			this->Сleanings->Controls->Add(this->label4);
			this->Сleanings->Controls->Add(this->label3);
			this->Сleanings->Controls->Add(this->label2);
			this->Сleanings->Controls->Add(this->productionYearInput);
			this->Сleanings->Controls->Add(this->productionMounthInput);
			this->Сleanings->Controls->Add(this->productionDayInput);
			this->Сleanings->Controls->Add(this->TreeSearch);
			this->Сleanings->Controls->Add(this->label10);
			this->Сleanings->Controls->Add(this->label8);
			this->Сleanings->Controls->Add(this->productionPriceInput);
			this->Сleanings->Controls->Add(this->DeleteFromTreeButton);
			this->Сleanings->Controls->Add(this->InsertToTreeButton);
			this->Сleanings->Controls->Add(this->productionNameInput);
			this->Сleanings->Controls->Add(this->CleaningWindow);
			this->Сleanings->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Сleanings->Location = System::Drawing::Point(566, 40);
			this->Сleanings->Name = L"Сleanings";
			this->Сleanings->Size = System::Drawing::Size(567, 588);
			this->Сleanings->TabIndex = 6;
			this->Сleanings->TabStop = false;
			this->Сleanings->Text = L"Постановки";
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(253, 132);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(33, 19);
			this->label4->TabIndex = 37;
			this->label4->Text = L"Год";
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(139, 132);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(55, 19);
			this->label3->TabIndex = 36;
			this->label3->Text = L"Месяц";
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(23, 132);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(45, 19);
			this->label2->TabIndex = 35;
			this->label2->Text = L"День";
			this->productionYearInput->BackColor = System::Drawing::Color::White;
			this->productionYearInput->Location = System::Drawing::Point(235, 159);
			this->productionYearInput->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2050, 0, 0, 0 });
			this->productionYearInput->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2000, 0, 0, 0 });
			this->productionYearInput->Name = L"productionYearInput";
			this->productionYearInput->Size = System::Drawing::Size(78, 27);
			this->productionYearInput->TabIndex = 34;
			this->productionYearInput->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2000, 0, 0, 0 });
			this->productionMounthInput->BackColor = System::Drawing::Color::White;
			this->productionMounthInput->Location = System::Drawing::Point(129, 159);
			this->productionMounthInput->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 12, 0, 0, 0 });
			this->productionMounthInput->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->productionMounthInput->Name = L"productionMounthInput";
			this->productionMounthInput->Size = System::Drawing::Size(78, 27);
			this->productionMounthInput->TabIndex = 33;
			this->productionMounthInput->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->productionDayInput->BackColor = System::Drawing::Color::White;
			this->productionDayInput->Location = System::Drawing::Point(21, 159);
			this->productionDayInput->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 30, 0, 0, 0 });
			this->productionDayInput->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->productionDayInput->Name = L"productionDayInput";
			this->productionDayInput->Size = System::Drawing::Size(78, 27);
			this->productionDayInput->TabIndex = 32;
			this->productionDayInput->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->TreeSearch->BackColor = System::Drawing::Color::White;
			this->TreeSearch->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold));
			this->TreeSearch->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->TreeSearch->Location = System::Drawing::Point(344, 132);
			this->TreeSearch->Name = L"TreeSearch";
			this->TreeSearch->Size = System::Drawing::Size(204, 46);
			this->TreeSearch->TabIndex = 31;
			this->TreeSearch->Text = L"Поиск";
			this->TreeSearch->UseVisualStyleBackColor = false;
			this->TreeSearch->Click += gcnew System::EventHandler(this, &Form1::TreeSearch_Click);
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(23, 79);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(45, 19);
			this->label10->TabIndex = 30;
			this->label10->Text = L"Цена";
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(23, 25);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(76, 19);
			this->label8->TabIndex = 28;
			this->label8->Text = L"Название";
			this->label8->Click += gcnew System::EventHandler(this, &Form1::label8_Click);
			this->productionPriceInput->BackColor = System::Drawing::Color::White;
			this->productionPriceInput->Location = System::Drawing::Point(20, 101);
			this->productionPriceInput->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->productionPriceInput->Name = L"productionPriceInput";
			this->productionPriceInput->Size = System::Drawing::Size(164, 27);
			this->productionPriceInput->TabIndex = 13;
			this->DeleteFromTreeButton->BackColor = System::Drawing::Color::White;
			this->DeleteFromTreeButton->ForeColor = System::Drawing::Color::Black;
			this->DeleteFromTreeButton->Location = System::Drawing::Point(344, 76);
			this->DeleteFromTreeButton->Name = L"DeleteFromTreeButton";
			this->DeleteFromTreeButton->Size = System::Drawing::Size(204, 44);
			this->DeleteFromTreeButton->TabIndex = 7;
			this->DeleteFromTreeButton->Text = L"Удаление";
			this->DeleteFromTreeButton->UseVisualStyleBackColor = false;
			this->DeleteFromTreeButton->Click += gcnew System::EventHandler(this, &Form1::DeleteFromTreeButton_Click);
			this->InsertToTreeButton->BackColor = System::Drawing::Color::White;
			this->InsertToTreeButton->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->InsertToTreeButton->Location = System::Drawing::Point(344, 19);
			this->InsertToTreeButton->Name = L"InsertToTreeButton";
			this->InsertToTreeButton->Size = System::Drawing::Size(204, 47);
			this->InsertToTreeButton->TabIndex = 6;
			this->InsertToTreeButton->Text = L"Вставка";
			this->InsertToTreeButton->UseVisualStyleBackColor = false;
			this->InsertToTreeButton->Click += gcnew System::EventHandler(this, &Form1::InsertToTreeButton_Click);
			this->productionNameInput->Location = System::Drawing::Point(20, 49);
			this->productionNameInput->Name = L"productionNameInput";
			this->productionNameInput->Size = System::Drawing::Size(165, 27);
			this->productionNameInput->TabIndex = 17;
			this->CleaningWindow->BackgroundColor = System::Drawing::Color::White;
			this->CleaningWindow->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->CleaningWindow->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->Cleanings });
			this->CleaningWindow->Location = System::Drawing::Point(20, 210);
			this->CleaningWindow->Name = L"CleaningWindow";
			this->CleaningWindow->RowHeadersWidth = 51;
			this->CleaningWindow->Size = System::Drawing::Size(522, 353);
			this->CleaningWindow->TabIndex = 2;
			this->Cleanings->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Cleanings->HeaderText = L"Постановки";
			this->Cleanings->MinimumWidth = 6;
			this->Cleanings->Name = L"Cleanings";
			this->Cleanings->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->Room_box->BackColor = System::Drawing::Color::SlateBlue;
			this->Room_box->Controls->Add(this->HashTableSearch);
			this->Room_box->Controls->Add(this->label7);
			this->Room_box->Controls->Add(this->label6);
			this->Room_box->Controls->Add(this->label5);
			this->Room_box->Controls->Add(this->performanceGenreInput);
			this->Room_box->Controls->Add(this->MangaWindow);
			this->Room_box->Controls->Add(this->performanceDurInput);
			this->Room_box->Controls->Add(this->DeleteFromHashButton);
			this->Room_box->Controls->Add(this->InsertToHashButton);
			this->Room_box->Controls->Add(this->performanceTitleInput);
			this->Room_box->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Room_box->Location = System::Drawing::Point(6, 40);
			this->Room_box->Name = L"Room_box";
			this->Room_box->Size = System::Drawing::Size(554, 588);
			this->Room_box->TabIndex = 7;
			this->Room_box->TabStop = false;
			this->Room_box->Text = L"Спектакли";
			this->HashTableSearch->BackColor = System::Drawing::Color::White;
			this->HashTableSearch->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold));
			this->HashTableSearch->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->HashTableSearch->Location = System::Drawing::Point(302, 148);
			this->HashTableSearch->Name = L"HashTableSearch";
			this->HashTableSearch->Size = System::Drawing::Size(225, 44);
			this->HashTableSearch->TabIndex = 30;
			this->HashTableSearch->Text = L"Поиск";
			this->HashTableSearch->UseVisualStyleBackColor = false;
			this->HashTableSearch->Click += gcnew System::EventHandler(this, &Form1::HashTableSearch_Click);
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(14, 129);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(106, 19);
			this->label7->TabIndex = 29;
			this->label7->Text = L"Длительность";
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(14, 77);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(48, 19);
			this->label6->TabIndex = 28;
			this->label6->Text = L"Жанр";
			this->label6->Click += gcnew System::EventHandler(this, &Form1::label6_Click);
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(13, 25);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(76, 19);
			this->label5->TabIndex = 27;
			this->label5->Text = L"Название";
			this->performanceGenreInput->Location = System::Drawing::Point(16, 99);
			this->performanceGenreInput->Name = L"performanceGenreInput";
			this->performanceGenreInput->Size = System::Drawing::Size(165, 27);
			this->performanceGenreInput->TabIndex = 26;
			this->MangaWindow->BackgroundColor = System::Drawing::Color::White;
			this->MangaWindow->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->MangaWindow->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->Rooms });
			this->MangaWindow->Location = System::Drawing::Point(18, 210);
			this->MangaWindow->Name = L"MangaWindow";
			this->MangaWindow->RowHeadersWidth = 51;
			this->MangaWindow->Size = System::Drawing::Size(511, 353);
			this->MangaWindow->TabIndex = 2;
			this->Rooms->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Rooms->HeaderText = L"Спектакли";
			this->Rooms->MinimumWidth = 6;
			this->Rooms->Name = L"Rooms";
			this->Rooms->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->performanceDurInput->BackColor = System::Drawing::Color::White;
			this->performanceDurInput->Location = System::Drawing::Point(17, 159);
			this->performanceDurInput->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->performanceDurInput->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			this->performanceDurInput->Name = L"performanceDurInput";
			this->performanceDurInput->Size = System::Drawing::Size(163, 27);
			this->performanceDurInput->TabIndex = 12;
			this->performanceDurInput->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			this->DeleteFromHashButton->BackColor = System::Drawing::Color::White;
			this->DeleteFromHashButton->ForeColor = System::Drawing::Color::Black;
			this->DeleteFromHashButton->Location = System::Drawing::Point(302, 88);
			this->DeleteFromHashButton->Name = L"DeleteFromHashButton";
			this->DeleteFromHashButton->Size = System::Drawing::Size(225, 46);
			this->DeleteFromHashButton->TabIndex = 4;
			this->DeleteFromHashButton->Text = L"Удаление";
			this->DeleteFromHashButton->UseVisualStyleBackColor = false;
			this->DeleteFromHashButton->Click += gcnew System::EventHandler(this, &Form1::DeleteFromHashButton_Click);
			this->InsertToHashButton->BackColor = System::Drawing::Color::White;
			this->InsertToHashButton->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->InsertToHashButton->Location = System::Drawing::Point(302, 29);
			this->InsertToHashButton->Name = L"InsertToHashButton";
			this->InsertToHashButton->Size = System::Drawing::Size(225, 47);
			this->InsertToHashButton->TabIndex = 3;
			this->InsertToHashButton->Text = L"Вставка";
			this->InsertToHashButton->UseVisualStyleBackColor = false;
			this->InsertToHashButton->Click += gcnew System::EventHandler(this, &Form1::InsertToHashButton_Click);
			this->performanceTitleInput->Location = System::Drawing::Point(16, 49);
			this->performanceTitleInput->Name = L"performanceTitleInput";
			this->performanceTitleInput->Size = System::Drawing::Size(165, 27);
			this->performanceTitleInput->TabIndex = 25;
			this->HashTableSize->BackColor = System::Drawing::Color::White;
			this->HashTableSize->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->HashTableSize->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->HashTableSize->Location = System::Drawing::Point(511, 49);
			this->HashTableSize->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->HashTableSize->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->HashTableSize->Name = L"HashTableSize";
			this->HashTableSize->Size = System::Drawing::Size(128, 30);
			this->HashTableSize->TabIndex = 22;
			this->HashTableSize->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->InitData->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->InitData->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->InitData->Location = System::Drawing::Point(486, 12);
			this->InitData->Name = L"InitData";
			this->InitData->Size = System::Drawing::Size(184, 31);
			this->InitData->TabIndex = 5;
			this->InitData->Text = L"Инициализация";
			this->InitData->UseVisualStyleBackColor = true;
			this->InitData->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			this->tabControl1->Controls->Add(this->ContPage);
			this->tabControl1->Controls->Add(this->SearchTab);
			this->tabControl1->Controls->Add(this->DebugTab);
			this->tabControl1->Cursor = System::Windows::Forms::Cursors::Default;
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Malgun Gothic Semilight", 8.25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabControl1->Location = System::Drawing::Point(20, 89);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1151, 660);
			this->tabControl1->TabIndex = 9;
			this->DebugTab->BackColor = System::Drawing::Color::SlateBlue;
			this->DebugTab->Controls->Add(this->groupBox1);
			this->DebugTab->Controls->Add(this->DebugClean);
			this->DebugTab->Controls->Add(this->LogBox);
			this->DebugTab->Controls->Add(this->DebagRoom);
			this->DebugTab->Location = System::Drawing::Point(4, 22);
			this->DebugTab->Name = L"DebugTab";
			this->DebugTab->Padding = System::Windows::Forms::Padding(3);
			this->DebugTab->Size = System::Drawing::Size(1143, 634);
			this->DebugTab->TabIndex = 3;
			this->DebugTab->Text = L"Окно отладки";
			this->groupBox1->BackColor = System::Drawing::Color::SlateBlue;
			this->groupBox1->Controls->Add(this->TreeLogBox);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(578, 6);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(505, 161);
			this->groupBox1->TabIndex = 10;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Путь объекта в дереве";
			this->TreeLogBox->BackgroundColor = System::Drawing::Color::AliceBlue;
			this->TreeLogBox->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->TreeLogBox->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->dataGridViewTextBoxColumn4 });
			this->TreeLogBox->Location = System::Drawing::Point(11, 25);
			this->TreeLogBox->Name = L"TreeLogBox";
			this->TreeLogBox->RowHeadersWidth = 51;
			this->TreeLogBox->Size = System::Drawing::Size(477, 120);
			this->TreeLogBox->TabIndex = 3;
			this->dataGridViewTextBoxColumn4->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn4->HeaderText = L"Путь";
			this->dataGridViewTextBoxColumn4->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->DebugClean->BackColor = System::Drawing::Color::SlateBlue;
			this->DebugClean->Controls->Add(this->dataGridCleanDebug);
			this->DebugClean->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->DebugClean->Location = System::Drawing::Point(578, 184);
			this->DebugClean->Name = L"DebugClean";
			this->DebugClean->Size = System::Drawing::Size(505, 486);
			this->DebugClean->TabIndex = 9;
			this->DebugClean->TabStop = false;
			this->DebugClean->Text = L"Дерево";
			this->dataGridCleanDebug->BackgroundColor = System::Drawing::Color::AliceBlue;
			this->dataGridCleanDebug->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridCleanDebug->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->dataGridViewTextBoxColumn2 });
			this->dataGridCleanDebug->Location = System::Drawing::Point(11, 25);
			this->dataGridCleanDebug->Name = L"dataGridCleanDebug";
			this->dataGridCleanDebug->RowHeadersWidth = 51;
			this->dataGridCleanDebug->Size = System::Drawing::Size(477, 451);
			this->dataGridCleanDebug->TabIndex = 2;
			this->dataGridViewTextBoxColumn2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn2->HeaderText = L"Графическое представление дерева";
			this->dataGridViewTextBoxColumn2->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->LogBox->BackColor = System::Drawing::Color::SlateBlue;
			this->LogBox->Controls->Add(this->LogGridView);
			this->LogBox->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->LogBox->Location = System::Drawing::Point(19, 6);
			this->LogBox->Name = L"LogBox";
			this->LogBox->Size = System::Drawing::Size(525, 161);
			this->LogBox->TabIndex = 10;
			this->LogBox->TabStop = false;
			this->LogBox->Text = L"Первичный и Вторичный ключи";
			this->LogGridView->BackgroundColor = System::Drawing::Color::AliceBlue;
			this->LogGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->LogGridView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->dataGridViewTextBoxColumn3 });
			this->LogGridView->Location = System::Drawing::Point(25, 25);
			this->LogGridView->Name = L"LogGridView";
			this->LogGridView->RowHeadersWidth = 51;
			this->LogGridView->Size = System::Drawing::Size(484, 120);
			this->LogGridView->TabIndex = 2;
			this->dataGridViewTextBoxColumn3->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn3->HeaderText = L"Ключи";
			this->dataGridViewTextBoxColumn3->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->DebagRoom->BackColor = System::Drawing::Color::SlateBlue;
			this->DebagRoom->Controls->Add(this->dataGridRoomDebug);
			this->DebagRoom->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->DebagRoom->Location = System::Drawing::Point(19, 173);
			this->DebagRoom->Name = L"DebagRoom";
			this->DebagRoom->Size = System::Drawing::Size(525, 497);
			this->DebagRoom->TabIndex = 8;
			this->DebagRoom->TabStop = false;
			this->DebagRoom->Text = L"Хэш таблица";
			this->dataGridRoomDebug->BackgroundColor = System::Drawing::Color::AliceBlue;
			this->dataGridRoomDebug->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridRoomDebug->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->dataGridViewTextBoxColumn1 });
			this->dataGridRoomDebug->Location = System::Drawing::Point(25, 25);
			this->dataGridRoomDebug->Name = L"dataGridRoomDebug";
			this->dataGridRoomDebug->RowHeadersWidth = 51;
			this->dataGridRoomDebug->Size = System::Drawing::Size(484, 462);
			this->dataGridRoomDebug->TabIndex = 2;
			this->dataGridViewTextBoxColumn1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn1->HeaderText = L"Таблица";
			this->dataGridViewTextBoxColumn1->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->ClientSize = System::Drawing::Size(1183, 761);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->InitData);
			this->Controls->Add(this->HashTableSize);
			this->Name = L"Form1";
			this->Text = L"Курсовой проект";
			this->SearchTab->ResumeLayout(false);
			this->groupBoxResult->ResumeLayout(false);
			this->groupBoxResult->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->InputYearSearch))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->InputMounthSearch))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->InputDaySearch))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ResultWindow))->EndInit();
			this->ContPage->ResumeLayout(false);
			this->Сleanings->ResumeLayout(false);
			this->Сleanings->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->productionYearInput))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->productionMounthInput))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->productionDayInput))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->productionPriceInput))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CleaningWindow))->EndInit();
			this->Room_box->ResumeLayout(false);
			this->Room_box->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MangaWindow))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->performanceDurInput))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HashTableSize))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->DebugTab->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TreeLogBox))->EndInit();
			this->DebugClean->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridCleanDebug))->EndInit();
			this->LogBox->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LogGridView))->EndInit();
			this->DebagRoom->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridRoomDebug))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void print_performance_data_base()
	{
		auto hash_table = test.get_all_hash_table();
		auto table_size = test.get_hash_table_size();

		MangaWindow->Rows->Clear();

		MangaWindow->ColumnCount = 1;
		MangaWindow->RowCount = table_size;

		auto j = 0;
		for (auto item : *hash_table)
		{
			if (item.cell_status == status::occupied)
			{
				MangaWindow->Rows[j]->Cells[0]->Value = item.data->get_all_data_string();
				++j;
			}
		}
	}

	private: System::Void print_production_debug_data()
	{
		auto res = test.get_all_tree_for_drawning();


		if (res->Count == 0)
		{
			dataGridCleanDebug->Rows->Clear();
			return;
		}
		dataGridCleanDebug->ColumnCount = 1;
		dataGridCleanDebug->RowCount = res->Count;

		auto tmp = res->First;
		for (auto i = 0; i < res->Count; i++)
		{
			dataGridCleanDebug->Rows[i]->Cells[0]->Value = tmp->Value;
			tmp = tmp->Next;
		}
	}

	private: System::Void print_performance_debug_data()
	{
		auto hash_table = test.get_all_hash_table();
		auto table_size = test.get_hash_table_size();

		dataGridRoomDebug->ColumnCount = 1;
		dataGridRoomDebug->RowCount = table_size;

		auto i = 0;
		for (auto item : *hash_table)
		{
			if (item.cell_status == status::free)
				dataGridRoomDebug->Rows[i]->Cells[0]->Value = "Empty";
			else if (item.cell_status == status::deleted)
				dataGridRoomDebug->Rows[i]->Cells[0]->Value = "Del";
			else
			{
				dataGridRoomDebug->Rows[i]->Cells[0]->Value = item.data->get_all_data_string();
			}
			++i;
		}
	}

	private: System::Void print_production_data_base()
	{
		auto tree = test.get_all_tree_for_debug()->get_all_items();

		if (tree->size() == 0)
		{
			dataGridCleanDebug->Rows->Clear();
			dataGridCleanDebug->Update();

			return;

		}

		CleaningWindow->ColumnCount = 1;
		CleaningWindow->RowCount = tree->size();


		auto i = 0;
		for (auto item : *tree)
		{
			CleaningWindow->Rows[i]->Cells[0]->Value = item->get_all_data_string();
			++i;
		}
	}

	private: System::Boolean check_in_table(string title)
	{
		auto hash_table = test.get_all_hash_table();
		for (auto item : *hash_table)
		{
			if (item.cell_status == status::occupied)
			{
				if (item.data->get_title() == title)
					return true;
			}
		}
		return false;
	}

	private: System::Void GenerateResult_Click(System::Object^ sender, System::EventArgs^ e) {  // Result button
		if (test.is_bases_inited())
		{

			auto day = Convert::ToInt32(InputDaySearch->Value);
			auto mounth = Convert::ToInt32(InputMounthSearch->Value);
			auto year = Convert::ToInt32(InputYearSearch->Value);

			auto genre = InputGenreSearch->Text;


			std::string tmp_genre;
			MarshalString(genre, tmp_genre);

			if (tmp_genre.size() == 0)
			{
				MessageBox::Show("Поле Жанр не должно быть пустым", "Решение поисковой задачи");
				return;
			}
			tmp_genre = tmp_genre + " ";
			int comparisons{};

			auto res = test.main_search_task(tmp_genre, day, mounth, year, comparisons);

			if (res.size() != 0)
			{
				ResultWindow->ColumnCount = 1;
				ResultWindow->RowCount = res.size();

				for (auto i = 0; i < res.size(); ++i)
				{
					ResultWindow->Rows[i]->Cells[0]->Value = res[i]->get_all_data_string() + "| Сравнения: " + comparisons;
				}

			}
			else
				MessageBox::Show("Результат отсутствует", "Задача поиска");
		}
		else
			MessageBox::Show("Введите размер таблицы на первой вкладке", "Начало работы");
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		auto size = Convert::ToInt32(HashTableSize->Value);
		test.Init_Data_Bases(size); // инициализация баз данных

		// show Cleanings
		print_production_data_base();
		// show Rooms
		print_performance_data_base();

		print_performance_debug_data();
		print_production_debug_data();
		LogGridView->ColumnCount = 1; // создание лога на 100 записей
		LogGridView->RowCount = 1000;
		TreeLogBox->ColumnCount = 1; // создание лога на 100 записей
		TreeLogBox->RowCount = 1000;

		auto names = test.get_initialize_hash_objects_names();
		auto hash_keys = test.get_initialize_hash_keys();
		int name_counter = 0;

		for (auto counter = 0; counter < hash_keys.size(); counter += 2)
		{
			auto title_str = gcnew System::String(names[name_counter].c_str());
			LogGridView->Rows[log_counter]->Cells[0]->Value = "Ключ(" + title_str + ") Первичный: "
				+ hash_keys[counter].ToString() + " Вторичный: " + hash_keys[counter + 1].ToString();
			log_counter++;
			name_counter++;
		}


		MessageBox::Show("Вместимость таблицы: " + test.get_hash_table_size() + " записей", "Создание хэш таблицы");
	}

	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void comboType_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void InsertToHashButton_Click(System::Object^ sender, System::EventArgs^ e) {
		// room input
		if (test.is_bases_inited())
		{
			// получаем данные из формы
			auto title = performanceTitleInput->Text;
			auto genre = performanceGenreInput->Text;
			auto duration = Convert::ToInt32(performanceDurInput->Value);



			// маршализация строки
			std::string tmp_title;
			std::string tmp_genre;
			MarshalString(title, tmp_title);
			MarshalString(genre, tmp_genre);

			if (tmp_title.size() == 0)
			{
				MessageBox::Show("Поле Название не может быть пустым", "Вставка в хэш-таблицу");
				return;
			}
			if (tmp_genre.size() == 0)
			{
				MessageBox::Show("Поле Жанр не должно быть пустым", "Вставка в хэш-таблицу");
				return;
			}
			tmp_title = tmp_title + " ";
			tmp_genre = tmp_genre + " ";

			
			auto operation_result = test.insert_element_to_performance_data_base(tmp_title, tmp_genre, duration);
			if (operation_result == -1)
				MessageBox::Show("Ключ не уникален", "Вставка в хэш-таблицу");
			else if (operation_result == -2)
				MessageBox::Show("Хэш-таблица переполнена", "Вставка в хэш-таблицу");
			else
			{
				print_performance_data_base();
				print_performance_debug_data();
				LogGridView->Rows[log_counter]->Cells[0]->Value = "Ключ(" + title + ") Первичный: "
					+ test.get_string_code(tmp_title) % test.get_hash_table_size() + " Вторичный: " + operation_result;
				log_counter++;
			}
		}
		else
			MessageBox::Show("Перед началом работы введите размерность хэш-таблицы", "Начало работы");
	}


	private: System::Void MarshalString(String^ s, string& os) {
		using namespace Runtime::InteropServices;
		const char* chars =
			(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
		os = chars;
		Marshal::FreeHGlobal(IntPtr((void*)chars));
	}


	private: System::Void DeleteFromHashButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (test.is_bases_inited())
		{
			// получаем данные из формы
			auto title = performanceTitleInput->Text;
			auto genre = performanceGenreInput->Text;
			auto duration = Convert::ToInt32(performanceDurInput->Value);

			// маршализация строки
			std::string tmp_title;
			std::string tmp_genre;
			MarshalString(title, tmp_title);
			MarshalString(genre, tmp_genre);
			if (tmp_title.size() == 0)
			{
				MessageBox::Show("Поле Название пустое! Введите данные", "Удаление из хэш-таблицы");
				return;
			}
			if (tmp_genre.size() == 0)
			{
				MessageBox::Show("Поле Жанр пустое! Введите данные", "Удаление из хэш-таблицы");
				return;
			}
			tmp_title = tmp_title + " ";
			tmp_genre = tmp_genre + " ";

			

			auto operation_result = test.delete_element_from_performance_data_base(tmp_title, tmp_genre, duration);
			if (operation_result == -1)
				MessageBox::Show("Элемент отсутсвует", "Удаление из Таблицы");
			else
			{
				// удаление из побочной таблицы
				auto found = test.find_all_elements_by_num(tmp_title);
				if (found->size() != 0)
				{
					MessageBox::Show("Так же будет удалено " + found->size() + " записей из БДП", "Удаление связанных элементов");
					for (auto item : *found)
					{
						test.delete_element_to_production_data_base(item->get_day(), item->get_mounth(), item->get_year(), item->get_name(), item->get_price());
					}
				}

				print_performance_data_base();
				print_production_data_base();
				print_production_debug_data();
				print_performance_debug_data();
			}
		}
		else
			MessageBox::Show("Введите размер таблицы на первой вкладке", "Начало работы");
	}
	private: System::Void InsertToTreeButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (test.is_bases_inited())
		{
			// получаем данные из формы
			auto name = productionNameInput->Text;
			auto price = Convert::ToInt32(productionPriceInput->Value);
			auto day = Convert::ToInt32(productionDayInput->Value);
			auto mounth = Convert::ToInt32(productionMounthInput->Value);
			auto year = Convert::ToInt32(productionYearInput->Value);

			// маршализация строки
			std::string tmp_name;
			MarshalString(name, tmp_name);

			if (tmp_name.size() == 0)
			{
				MessageBox::Show("Поле Название пустое! Введите данные", "Вставка в дерево");
				return;
			}

			tmp_name = tmp_name + " ";


			if(!check_in_table(tmp_name))
			{
				MessageBox::Show("Спектакль с указанным названием отсутствует", "Вставка в дерево"); 
				return;
			}


			// добавление 
			auto tree_path = test.insert_element_to_production_data_base(day, mounth, year, tmp_name, price);

			auto full_tree_path = name + ") Путь: ";
			for (auto item : *tree_path)
				full_tree_path += (item + " -> ");
			// обновление данных в форме
			TreeLogBox->Rows[tree_log_counter]->Cells[0]->Value = full_tree_path;
			tree_log_counter++;
			print_production_data_base();
			print_production_debug_data();


		}
		else
			MessageBox::Show("Введите размер таблицы на первой вкладке", "Начало работы");
	}
	private: System::Void DeleteFromTreeButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (test.is_bases_inited())
		{
			// получаем данные из формы
			auto name = productionNameInput->Text;
			auto price = Convert::ToInt32(productionPriceInput->Value);
			auto day = Convert::ToInt32(productionDayInput->Value);
			auto mounth = Convert::ToInt32(productionMounthInput->Value);
			auto year = Convert::ToInt32(productionYearInput->Value);

			// маршализация строки
			std::string tmp_name;
			MarshalString(name, tmp_name);

			if (tmp_name.size() == 0)
			{
				MessageBox::Show("Поле Название пустое! Введите данные", "Удаление из дерева");
				return;
			}

			tmp_name = tmp_name + " ";


			if (!check_in_table(tmp_name))
			{
				MessageBox::Show("Спектакль с указанным названием осутствует", "Удаление из дерева");
				return;
			}

			auto is_element_deleted = test.delete_element_to_production_data_base(day, mounth, year, tmp_name, price);

			if (is_element_deleted)
			{
				// обновление данныхв форме
				print_production_data_base();
				print_production_debug_data();
			}
			else
				MessageBox::Show("Элемент остуствует", "Удаление из дерева");
		}
		else
			MessageBox::Show("Введите размер таблицы на первой вкладке", "Начало работы");
	}


private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void HashTableSearch_Click(System::Object^ sender, System::EventArgs^ e) {
	if (test.is_bases_inited())
	{
		// получаем данные из формы
		auto title = performanceTitleInput->Text;
		auto genre = performanceGenreInput->Text;
		auto duration = Convert::ToInt32(performanceDurInput->Value);



		// маршализация строки
		std::string tmp_title;
		std::string tmp_genre;
		MarshalString(title, tmp_title);
		MarshalString(genre, tmp_genre);

		if (tmp_title.size() == 0)
		{
			MessageBox::Show("Поле Название пустое! Введите данные", "Вставка в хэш-таблицу");
			return;
		}
		if (tmp_genre.size() == 0)
		{
			MessageBox::Show("Поле Жанр пустое! Введите данные", "Вставка в хэш-таблицу");
			return;
		}
		tmp_title = tmp_title + " ";
		tmp_genre = tmp_genre + " ";

		auto operation_code = test.find_object_in_table(tmp_title, tmp_genre, duration);

		if (operation_code)
			MessageBox::Show("Объект " + title + " " + genre + " " + duration + " найден", "SearchInTable");
		else
			MessageBox::Show("Объект не найден", "SearchInTable");

	}
	else
		MessageBox::Show("Введите размер таблицы на первой вкладке", "Начало работы");
}
private: System::Void TreeSearch_Click(System::Object^ sender, System::EventArgs^ e) {
	if (test.is_bases_inited())
	{
		// получаем данные из формы
		auto name = productionNameInput->Text;
		auto price = Convert::ToInt32(productionPriceInput->Value);
		auto day = Convert::ToInt32(productionDayInput->Value);
		auto mounth = Convert::ToInt32(productionMounthInput->Value);
		auto year = Convert::ToInt32(productionYearInput->Value);

		// маршализация строки
		std::string tmp_name;
		MarshalString(name, tmp_name);

		if (tmp_name.size() == 0)
		{
			MessageBox::Show("Поле Название пустое! Введите данные", "Удаление из дерева");
			return;
		}

		tmp_name = tmp_name + " ";


		if (!check_in_table(tmp_name))
		{
			MessageBox::Show("Спектакль с указанным названием осутствует", "Удаление из дерева");
			return;
		}

		auto operation_code = test.find_object_in_tree(day, mounth, year, tmp_name, price);

		if (operation_code == true)
			MessageBox::Show("Объект " + name + " " + price + " " + day + "/" + mounth + "/" + year + " найден", "Дерево");
		else
			MessageBox::Show("Объект не найден", "Дерево");

	}
	else
		MessageBox::Show("Введите размер таблицы на первой вкладке", "Начало работы");
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}