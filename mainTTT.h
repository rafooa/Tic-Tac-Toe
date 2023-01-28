#pragma once
#include <iostream>
namespace TicTacToe {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for mainTTT
	/// </summary>
	public ref class mainTTT : public System::Windows::Forms::Form
	{
	public:
		mainTTT(void)
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
		~mainTTT()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:

	protected:

	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;








	private: System::Windows::Forms::Button^ ttt1;
















	private: System::Windows::Forms::Label^ score2;
	private: System::Windows::Forms::Label^ Name2;


	private: System::Windows::Forms::Label^ score1;
	private: System::Windows::Forms::Label^ Name1;


	private: System::Windows::Forms::Label^ underGrid;
	private: System::Windows::Forms::Button^ ttt9;

	private: System::Windows::Forms::Button^ ttt8;

	private: System::Windows::Forms::Button^ ttt7;

	private: System::Windows::Forms::Button^ ttt6;

	private: System::Windows::Forms::Button^ ttt5;

	private: System::Windows::Forms::Button^ ttt4;

	private: System::Windows::Forms::Button^ ttt3;

	private: System::Windows::Forms::Button^ ttt2;

	private: System::Windows::Forms::Button^ menu;
	private: System::Windows::Forms::Button^ reset;
	private: System::Windows::Forms::Panel^ panel3;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button3;












	protected:

	protected:
	private: System::ComponentModel::IContainer^ components;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(mainTTT::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->ttt9 = (gcnew System::Windows::Forms::Button());
			this->ttt8 = (gcnew System::Windows::Forms::Button());
			this->ttt7 = (gcnew System::Windows::Forms::Button());
			this->ttt6 = (gcnew System::Windows::Forms::Button());
			this->ttt5 = (gcnew System::Windows::Forms::Button());
			this->ttt4 = (gcnew System::Windows::Forms::Button());
			this->ttt3 = (gcnew System::Windows::Forms::Button());
			this->ttt2 = (gcnew System::Windows::Forms::Button());
			this->menu = (gcnew System::Windows::Forms::Button());
			this->reset = (gcnew System::Windows::Forms::Button());
			this->underGrid = (gcnew System::Windows::Forms::Label());
			this->score2 = (gcnew System::Windows::Forms::Label());
			this->Name2 = (gcnew System::Windows::Forms::Label());
			this->score1 = (gcnew System::Windows::Forms::Label());
			this->Name1 = (gcnew System::Windows::Forms::Label());
			this->ttt1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Candara", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Aquamarine;
			this->label1->Location = System::Drawing::Point(8, 39);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(363, 78);
			this->label1->TabIndex = 0;
			this->label1->Text = L"TIC-TAC-TOE";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LightGray;
			this->button1->Font = (gcnew System::Drawing::Font(L"Candara", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(110, 167);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(141, 48);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Play";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &mainTTT::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::PaleTurquoise;
			this->label2->Location = System::Drawing::Point(265, 385);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(110, 20);
			this->label2->TabIndex = 3;
			this->label2->Text = L"by raf";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(380, 411);
			this->panel1->TabIndex = 4;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::LightGray;
			this->button3->Font = (gcnew System::Drawing::Font(L"Candara", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(110, 252);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(141, 48);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Toggle Music";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &mainTTT::button3_Click);
			// 
			// panel2
			// 
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel2->Controls->Add(this->ttt9);
			this->panel2->Controls->Add(this->ttt8);
			this->panel2->Controls->Add(this->ttt7);
			this->panel2->Controls->Add(this->ttt6);
			this->panel2->Controls->Add(this->ttt5);
			this->panel2->Controls->Add(this->ttt4);
			this->panel2->Controls->Add(this->ttt3);
			this->panel2->Controls->Add(this->ttt2);
			this->panel2->Controls->Add(this->menu);
			this->panel2->Controls->Add(this->reset);
			this->panel2->Controls->Add(this->underGrid);
			this->panel2->Controls->Add(this->score2);
			this->panel2->Controls->Add(this->Name2);
			this->panel2->Controls->Add(this->score1);
			this->panel2->Controls->Add(this->Name1);
			this->panel2->Controls->Add(this->ttt1);
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Margin = System::Windows::Forms::Padding(2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(377, 413);
			this->panel2->TabIndex = 5;
			this->panel2->Visible = false;
			// 
			// ttt9
			// 
			this->ttt9->BackColor = System::Drawing::Color::Transparent;
			this->ttt9->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->ttt9->FlatAppearance->BorderSize = 0;
			this->ttt9->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->ttt9->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->ttt9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ttt9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 56.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ttt9->ForeColor = System::Drawing::Color::White;
			this->ttt9->Location = System::Drawing::Point(252, 213);
			this->ttt9->Name = L"ttt9";
			this->ttt9->Size = System::Drawing::Size(68, 87);
			this->ttt9->TabIndex = 24;
			this->ttt9->UseVisualStyleBackColor = false;
			this->ttt9->Click += gcnew System::EventHandler(this, &mainTTT::ttt9_Click);
			// 
			// ttt8
			// 
			this->ttt8->BackColor = System::Drawing::Color::Transparent;
			this->ttt8->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->ttt8->FlatAppearance->BorderSize = 0;
			this->ttt8->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->ttt8->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->ttt8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ttt8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 56.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ttt8->ForeColor = System::Drawing::Color::White;
			this->ttt8->Location = System::Drawing::Point(148, 213);
			this->ttt8->Name = L"ttt8";
			this->ttt8->Size = System::Drawing::Size(80, 87);
			this->ttt8->TabIndex = 23;
			this->ttt8->UseVisualStyleBackColor = false;
			this->ttt8->Click += gcnew System::EventHandler(this, &mainTTT::ttt8_Click);
			// 
			// ttt7
			// 
			this->ttt7->BackColor = System::Drawing::Color::Transparent;
			this->ttt7->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->ttt7->FlatAppearance->BorderSize = 0;
			this->ttt7->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->ttt7->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->ttt7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ttt7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 56.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ttt7->ForeColor = System::Drawing::Color::White;
			this->ttt7->Location = System::Drawing::Point(53, 213);
			this->ttt7->Name = L"ttt7";
			this->ttt7->Size = System::Drawing::Size(84, 87);
			this->ttt7->TabIndex = 22;
			this->ttt7->UseVisualStyleBackColor = false;
			this->ttt7->Click += gcnew System::EventHandler(this, &mainTTT::ttt7_Click);
			// 
			// ttt6
			// 
			this->ttt6->BackColor = System::Drawing::Color::Transparent;
			this->ttt6->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->ttt6->FlatAppearance->BorderSize = 0;
			this->ttt6->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->ttt6->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->ttt6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ttt6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 56.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ttt6->ForeColor = System::Drawing::Color::White;
			this->ttt6->Location = System::Drawing::Point(239, 117);
			this->ttt6->Name = L"ttt6";
			this->ttt6->Size = System::Drawing::Size(95, 80);
			this->ttt6->TabIndex = 21;
			this->ttt6->UseVisualStyleBackColor = false;
			this->ttt6->Click += gcnew System::EventHandler(this, &mainTTT::ttt6_Click);
			// 
			// ttt5
			// 
			this->ttt5->BackColor = System::Drawing::Color::Transparent;
			this->ttt5->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->ttt5->FlatAppearance->BorderSize = 0;
			this->ttt5->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->ttt5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->ttt5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ttt5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 56.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ttt5->ForeColor = System::Drawing::Color::White;
			this->ttt5->Location = System::Drawing::Point(148, 117);
			this->ttt5->Name = L"ttt5";
			this->ttt5->Size = System::Drawing::Size(80, 82);
			this->ttt5->TabIndex = 20;
			this->ttt5->UseVisualStyleBackColor = false;
			this->ttt5->Click += gcnew System::EventHandler(this, &mainTTT::ttt5_Click);
			// 
			// ttt4
			// 
			this->ttt4->BackColor = System::Drawing::Color::Transparent;
			this->ttt4->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->ttt4->FlatAppearance->BorderSize = 0;
			this->ttt4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->ttt4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->ttt4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ttt4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 56.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ttt4->ForeColor = System::Drawing::Color::White;
			this->ttt4->Location = System::Drawing::Point(45, 117);
			this->ttt4->Name = L"ttt4";
			this->ttt4->Size = System::Drawing::Size(90, 80);
			this->ttt4->TabIndex = 19;
			this->ttt4->UseVisualStyleBackColor = false;
			this->ttt4->Click += gcnew System::EventHandler(this, &mainTTT::ttt4_Click);
			// 
			// ttt3
			// 
			this->ttt3->BackColor = System::Drawing::Color::Transparent;
			this->ttt3->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->ttt3->FlatAppearance->BorderSize = 0;
			this->ttt3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->ttt3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->ttt3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ttt3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 56.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ttt3->ForeColor = System::Drawing::Color::White;
			this->ttt3->Location = System::Drawing::Point(252, 13);
			this->ttt3->Name = L"ttt3";
			this->ttt3->Size = System::Drawing::Size(68, 86);
			this->ttt3->TabIndex = 18;
			this->ttt3->UseVisualStyleBackColor = false;
			this->ttt3->Click += gcnew System::EventHandler(this, &mainTTT::ttt3_Click);
			// 
			// ttt2
			// 
			this->ttt2->BackColor = System::Drawing::Color::Transparent;
			this->ttt2->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->ttt2->FlatAppearance->BorderSize = 0;
			this->ttt2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->ttt2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->ttt2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ttt2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 56.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ttt2->ForeColor = System::Drawing::Color::White;
			this->ttt2->Location = System::Drawing::Point(157, 12);
			this->ttt2->Name = L"ttt2";
			this->ttt2->Size = System::Drawing::Size(65, 87);
			this->ttt2->TabIndex = 17;
			this->ttt2->UseVisualStyleBackColor = false;
			this->ttt2->Click += gcnew System::EventHandler(this, &mainTTT::ttt2_Click);
			// 
			// menu
			// 
			this->menu->BackColor = System::Drawing::Color::LightGray;
			this->menu->Font = (gcnew System::Drawing::Font(L"Candara", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->menu->Location = System::Drawing::Point(299, 375);
			this->menu->Margin = System::Windows::Forms::Padding(2);
			this->menu->Name = L"menu";
			this->menu->Size = System::Drawing::Size(64, 29);
			this->menu->TabIndex = 16;
			this->menu->Text = L"Menu";
			this->menu->UseVisualStyleBackColor = false;
			this->menu->Click += gcnew System::EventHandler(this, &mainTTT::menu_Click);
			// 
			// reset
			// 
			this->reset->BackColor = System::Drawing::Color::LightGray;
			this->reset->Font = (gcnew System::Drawing::Font(L"Candara", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->reset->Location = System::Drawing::Point(231, 375);
			this->reset->Margin = System::Windows::Forms::Padding(2);
			this->reset->Name = L"reset";
			this->reset->Size = System::Drawing::Size(64, 29);
			this->reset->TabIndex = 15;
			this->reset->Text = L"Reset";
			this->reset->UseVisualStyleBackColor = false;
			this->reset->Click += gcnew System::EventHandler(this, &mainTTT::reset_Click);
			// 
			// underGrid
			// 
			this->underGrid->AutoSize = true;
			this->underGrid->Font = (gcnew System::Drawing::Font(L"Candara", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->underGrid->ForeColor = System::Drawing::Color::PaleTurquoise;
			this->underGrid->Location = System::Drawing::Point(91, 306);
			this->underGrid->Name = L"underGrid";
			this->underGrid->Size = System::Drawing::Size(22, 36);
			this->underGrid->TabIndex = 14;
			this->underGrid->Text = L"-";
			this->underGrid->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// score2
			// 
			this->score2->AutoSize = true;
			this->score2->BackColor = System::Drawing::Color::White;
			this->score2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->score2->Location = System::Drawing::Point(108, 384);
			this->score2->Name = L"score2";
			this->score2->Size = System::Drawing::Size(19, 20);
			this->score2->TabIndex = 13;
			this->score2->Text = L"0";
			this->score2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Name2
			// 
			this->Name2->AutoSize = true;
			this->Name2->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Name2->ForeColor = System::Drawing::Color::White;
			this->Name2->Location = System::Drawing::Point(11, 383);
			this->Name2->Name = L"Name2";
			this->Name2->Size = System::Drawing::Size(75, 21);
			this->Name2->TabIndex = 12;
			this->Name2->Text = L"Player 2:";
			// 
			// score1
			// 
			this->score1->AutoSize = true;
			this->score1->BackColor = System::Drawing::Color::White;
			this->score1->Cursor = System::Windows::Forms::Cursors::Default;
			this->score1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->score1->Location = System::Drawing::Point(108, 353);
			this->score1->Name = L"score1";
			this->score1->Size = System::Drawing::Size(19, 20);
			this->score1->TabIndex = 11;
			this->score1->Text = L"0";
			this->score1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Name1
			// 
			this->Name1->AutoSize = true;
			this->Name1->BackColor = System::Drawing::Color::Transparent;
			this->Name1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Name1->ForeColor = System::Drawing::Color::White;
			this->Name1->Location = System::Drawing::Point(10, 353);
			this->Name1->Name = L"Name1";
			this->Name1->Size = System::Drawing::Size(75, 21);
			this->Name1->TabIndex = 10;
			this->Name1->Text = L"Player 1:";
			// 
			// ttt1
			// 
			this->ttt1->BackColor = System::Drawing::Color::Transparent;
			this->ttt1->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->ttt1->FlatAppearance->BorderSize = 0;
			this->ttt1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->ttt1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->ttt1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ttt1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 56.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ttt1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ttt1->Location = System::Drawing::Point(58, 12);
			this->ttt1->Name = L"ttt1";
			this->ttt1->Size = System::Drawing::Size(73, 87);
			this->ttt1->TabIndex = 1;
			this->ttt1->UseVisualStyleBackColor = false;
			this->ttt1->Click += gcnew System::EventHandler(this, &mainTTT::ttt1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(42, 11);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(297, 293);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->button2);
			this->panel3->Controls->Add(this->label6);
			this->panel3->Controls->Add(this->label4);
			this->panel3->Controls->Add(this->textBox2);
			this->panel3->Controls->Add(this->textBox1);
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(380, 424);
			this->panel3->TabIndex = 6;
			this->panel3->Visible = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::LightGray;
			this->button2->Font = (gcnew System::Drawing::Font(L"Candara", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(116, 353);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(141, 39);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Continue";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &mainTTT::button2_Click_1);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(107, 208);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(168, 18);
			this->label6->TabIndex = 3;
			this->label6->Text = L"Enter Player 2 Name:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(107, 84);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(168, 18);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Enter Player 1 Name:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(96, 244);
			this->textBox2->MaxLength = 10;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(197, 20);
			this->textBox2->TabIndex = 1;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(96, 116);
			this->textBox1->MaxLength = 10;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(197, 20);
			this->textBox1->TabIndex = 0;
			// 
			// mainTTT
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightSlateGray;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(383, 418);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->MaximumSize = System::Drawing::Size(399, 457);
			this->MinimumSize = System::Drawing::Size(399, 454);
			this->Name = L"mainTTT";
			this->Text = L" Tic Tac Toe";
			this->Load += gcnew System::EventHandler(this, &mainTTT::mainTTT_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);

		}

#pragma endregion
		bool player = false;
		int score, turnCount = 0, sCount=0;
		void gameEnd() {
			//==============================================================================
			//Player 1 Win Conditions:
			if (ttt1->Text != "" && ttt2->Text != "" && ttt3->Text != "" && ttt4->Text != "" && ttt5->Text != "" && ttt6->Text != "" && ttt7->Text != "" && ttt8->Text != "" && ttt9->Text != "") {
				underGrid->Text = "     Draw!!";
			}
			if (ttt1->Text == "O" && ttt2->Text == "O" && ttt3->Text == "O"){
				ttt1->ForeColor = System::Drawing::Color::Black;
				ttt2->ForeColor = System::Drawing::Color::Black;
				ttt3->ForeColor = System::Drawing::Color::Black;
				underGrid->Text = textBox1->Text + " Wins!";
				score = int::Parse(score1->Text);
				score1->Text = Convert::ToString(score + 1);
				disableAll();
				return;
			}
			if (ttt4->Text == "O" && ttt5->Text == "O" && ttt6->Text == "O") {
				ttt4->ForeColor = System::Drawing::Color::Aquamarine;
				ttt5->ForeColor = System::Drawing::Color::Aquamarine;
				ttt6->ForeColor = System::Drawing::Color::Aquamarine;
				underGrid->Text = textBox1->Text + " Wins!";
				score = int::Parse(score1->Text);
				score1->Text = Convert::ToString(score + 1);
				disableAll();
				return;
			}
			if (ttt1->Text == "O" && ttt4->Text == "O" && ttt7->Text == "O") {
				ttt1->ForeColor = System::Drawing::Color::Aquamarine;
				ttt4->ForeColor = System::Drawing::Color::Aquamarine;
				ttt7->ForeColor = System::Drawing::Color::Aquamarine;
				underGrid->Text = textBox1->Text + " Wins!";
				score = int::Parse(score1->Text);
				score1->Text = Convert::ToString(score + 1);
				disableAll();
				return;
			}
			if (ttt2->Text == "O" && ttt5->Text == "O" && ttt8->Text == "O") {
				ttt2->ForeColor = System::Drawing::Color::Aquamarine;
				ttt5->ForeColor = System::Drawing::Color::Aquamarine;
				ttt8->ForeColor = System::Drawing::Color::Aquamarine;
				underGrid->Text = textBox1->Text + " Wins!";
				score = int::Parse(score1->Text);
				score1->Text = Convert::ToString(score + 1);
				disableAll();
				return;
			}
			if (ttt3->Text == "O" && ttt6->Text == "O" && ttt9->Text == "O") {
				ttt3->ForeColor = System::Drawing::Color::Aquamarine;
				ttt6->ForeColor = System::Drawing::Color::Aquamarine;
				ttt9->ForeColor = System::Drawing::Color::Aquamarine;
				underGrid->Text = textBox1->Text + " Wins!";
				score = int::Parse(score1->Text);
				score1->Text = Convert::ToString(score + 1);
				disableAll();
				return;
			}
			if (ttt7->Text == "O" && ttt8->Text == "O" && ttt9->Text == "O") {
				ttt7->ForeColor = System::Drawing::Color::Aquamarine;
				ttt8->ForeColor = System::Drawing::Color::Aquamarine;
				ttt9->ForeColor = System::Drawing::Color::Aquamarine;
				underGrid->Text = textBox1->Text + " Wins!";
				score = int::Parse(score1->Text);
				score1->Text = Convert::ToString(score + 1);
				disableAll();
				return;
			}
			if (ttt1->Text == "O" && ttt5->Text == "O" && ttt9->Text == "O") {
				ttt1->ForeColor = System::Drawing::Color::Aquamarine;
				ttt5->ForeColor = System::Drawing::Color::Aquamarine;
				ttt9->ForeColor = System::Drawing::Color::Aquamarine;
				underGrid->Text = textBox1->Text + " Wins!";
				score = int::Parse(score1->Text);
				score1->Text = Convert::ToString(score + 1);
				disableAll();
				return;
			}
			if (ttt3->Text == "O" && ttt5->Text == "O" && ttt7->Text == "O") {
				ttt3->ForeColor = System::Drawing::Color::Aquamarine;
				ttt5->ForeColor = System::Drawing::Color::Aquamarine;
				ttt7->ForeColor = System::Drawing::Color::Aquamarine;
				underGrid->Text = textBox1->Text + " Wins!";
				score = int::Parse(score1->Text);
				score1->Text = Convert::ToString(score + 1);
				disableAll();
				return;
			}

			//==============================================================================
			//Player 2 Win Conditions:

			if (ttt1->Text != "" && ttt2->Text != "" && ttt3->Text != "" && ttt4->Text != "" && ttt5->Text != "" && ttt6->Text != "" && ttt7->Text != "" && ttt8->Text != "" && ttt9->Text != "") {
				underGrid->Text = "      Draw!!";
			}
			if (ttt1->Text == "X" && ttt2->Text == "X" && ttt3->Text == "X") {
				ttt1->ForeColor = System::Drawing::Color::Aquamarine;
				ttt2->BackColor = System::Drawing::Color::Aquamarine;
				ttt3->BackColor = System::Drawing::Color::Aquamarine;
				underGrid->Text = textBox2->Text + " Wins!";
				score = int::Parse(score2->Text);
				score2->Text = Convert::ToString(score + 1);
				disableAll();
			}
			if (ttt4->Text == "X" && ttt5->Text == "X" && ttt6->Text == "X") {
				ttt4->ForeColor = System::Drawing::Color::Aquamarine;
				ttt5->ForeColor = System::Drawing::Color::Aquamarine;
				ttt6->ForeColor = System::Drawing::Color::Aquamarine;
				underGrid->Text = textBox2->Text + " Wins!";
				score = int::Parse(score2->Text);
				score2->Text = Convert::ToString(score + 1);
				disableAll();
			}
			if (ttt1->Text == "X" && ttt4->Text == "X" && ttt7->Text == "X") {
				ttt1->ForeColor = System::Drawing::Color::Aquamarine;
				ttt4->ForeColor = System::Drawing::Color::Aquamarine;
				ttt7->ForeColor = System::Drawing::Color::Aquamarine;
				underGrid->Text = textBox2->Text + " Wins!";
				score = int::Parse(score2->Text);
				score2->Text = Convert::ToString(score + 1);
				disableAll();
			}
			if (ttt2->Text == "X" && ttt5->Text == "X" && ttt8->Text == "X") {
				ttt2->ForeColor = System::Drawing::Color::Aquamarine;
				ttt5->ForeColor = System::Drawing::Color::Aquamarine;
				ttt8->ForeColor = System::Drawing::Color::Aquamarine;
				underGrid->Text = textBox2->Text + " Wins!";
				score = int::Parse(score2->Text);
				score2->Text = Convert::ToString(score + 1);
				disableAll();
			}
			if (ttt3->Text == "X" && ttt6->Text == "X" && ttt9->Text == "X") {
				ttt3->ForeColor = System::Drawing::Color::Aquamarine;
				ttt6->ForeColor = System::Drawing::Color::Aquamarine;
				ttt9->ForeColor = System::Drawing::Color::Aquamarine;
				underGrid->Text = textBox2->Text + " Wins!";
				score = int::Parse(score2->Text);
				score2->Text = Convert::ToString(score + 1);
				disableAll();
			}
			if (ttt7->Text == "X" && ttt8->Text == "X" && ttt9->Text == "X") {
				ttt7->ForeColor = System::Drawing::Color::Aquamarine;
				ttt8->ForeColor = System::Drawing::Color::Aquamarine;
				ttt9->ForeColor = System::Drawing::Color::Aquamarine;
				underGrid->Text = textBox2->Text + " Wins!";
				score = int::Parse(score2->Text);
				score2->Text = Convert::ToString(score + 1);
				disableAll();
			}
			if (ttt1->Text == "X" && ttt5->Text == "X" && ttt9->Text == "X") {
				ttt1->ForeColor = System::Drawing::Color::Aquamarine;
				ttt5->ForeColor = System::Drawing::Color::Aquamarine;
				ttt9->ForeColor = System::Drawing::Color::Aquamarine;
				underGrid->Text = textBox2->Text + " Wins!";
				score = int::Parse(score2->Text);
				score2->Text = Convert::ToString(score + 1);
				disableAll();
			}
			if (ttt3->Text == "X" && ttt5->Text == "X" && ttt7->Text == "X") {
				ttt3->ForeColor = System::Drawing::Color::Aquamarine;
				ttt5->ForeColor = System::Drawing::Color::Aquamarine;
				ttt7->ForeColor = System::Drawing::Color::Aquamarine;
				underGrid->Text = textBox2->Text + " Wins!";
				score = int::Parse(score2->Text);
				score2->Text = Convert::ToString(score + 1);
				disableAll();
			}
			return;
		}
		void disableAll() {
			ttt1->Enabled = false;
			ttt2->Enabled = false;
			ttt3->Enabled = false;
			ttt4->Enabled = false;
			ttt5->Enabled = false;
			ttt6->Enabled = false;
			ttt7->Enabled = false;
			ttt8->Enabled = false;
			ttt9->Enabled = false;
		}
	private: System::Void mainTTT_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		panel1->Visible = false;
		panel3->Visible = true;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void ttt1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (player == false) {
			ttt1->Text = "O";
			player = true;
			underGrid ->Text = textBox2->Text + "'s Turn";
		}
		else {
			ttt1->Text = "X";
			player = false;
			underGrid->Text = textBox1->Text + "'s Turn";
		}
		ttt1->Enabled = false;
		gameEnd();
	}


	private: System::Void ttt2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (player == false) {
			ttt2->Text = "O";
			player = true;
			underGrid->Text = textBox2->Text + "'s Turn";
		}
		else {
			ttt2->Text = "X";
			player = false;
			underGrid->Text = textBox1->Text + "'s Turn";
		}
		ttt2->Enabled = false;
		gameEnd();
	}
	private: System::Void ttt3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (player == false) {
			ttt3->Text = "O";
			player = true;
			underGrid->Text = textBox2->Text + "'s Turn";
		}
		else {
			ttt3->Text = "X";
			player = false;
			underGrid->Text = textBox1->Text + "'s Turn";
		}
		ttt3->Enabled = false;
		gameEnd();
	}
	private: System::Void ttt4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (player == false) {
			ttt4->Text = "O";
			player = true;
			underGrid->Text = textBox2->Text + "'s Turn";
		}
		else {
			ttt4->Text = "X";
			player = false;
			underGrid->Text = textBox1->Text + "'s Turn";
		}
		ttt4->Enabled = false;
		gameEnd();
	}
	private: System::Void ttt5_Click(System::Object^ sender, System::EventArgs^ e) {
		if (player == false) {
			ttt5->Text = "O";
			player = true;
			underGrid->Text = textBox2->Text + "'s Turn";
		}
		else {
			ttt5->Text = "X";
			player = false;
			underGrid->Text = textBox1->Text + "'s Turn";
		}
		ttt5->Enabled = false;
		gameEnd();
	}
	private: System::Void ttt6_Click(System::Object^ sender, System::EventArgs^ e) {
		if (player == false) {
			ttt6->Text = "O";
			player = true;
			underGrid->Text = textBox2->Text + "'s Turn";
		}
		else {
			ttt6->Text = "X";
			player = false;
			underGrid->Text = textBox1->Text + "'s Turn";
		}
		ttt6->Enabled = false;
		gameEnd();
	}
	private: System::Void ttt7_Click(System::Object^ sender, System::EventArgs^ e) {
		if (player == false) {
			ttt7->Text = "O";
			player = true;
			underGrid->Text = textBox2->Text + "'s Turn";
		}
		else {
			ttt7->Text = "X";
			player = false;
			underGrid->Text = textBox1->Text + "'s Turn";
		}
		ttt7->Enabled = false;
		gameEnd();
	}
	private: System::Void ttt8_Click(System::Object^ sender, System::EventArgs^ e) {
		if (player == false) {
			ttt8->Text = "O";
			player = true;
			underGrid->Text = textBox2->Text + "'s Turn";
		}
		else {
			ttt8->Text = "X";
			player = false;
			underGrid->Text = textBox1->Text + "'s Turn";
		}
		ttt8->Enabled = false;
		gameEnd();
	}
	private: System::Void ttt9_Click(System::Object^ sender, System::EventArgs^ e) {
		if (player == false) {
			ttt9->Text = "O";
			player = true;
			underGrid->Text = textBox2->Text + "'s Turn";
		}
		else {
			ttt9->Text = "X";
			player = false;
			underGrid->Text = textBox1->Text + "'s Turn";
		}
		ttt9->Enabled = false;
		gameEnd();
	}
	void resetGrid() {
		ttt1->Text = "";
		ttt2->Text = "";
		ttt3->Text = "";
		ttt4->Text = "";
		ttt5->Text = "";
		ttt6->Text = "";
		ttt7->Text = "";
		ttt8->Text = "";
		ttt9->Text = "";

		ttt1->Enabled = true;
		ttt2->Enabled = true;
		ttt3->Enabled = true;
		ttt4->Enabled = true;
		ttt5->Enabled = true;
		ttt6->Enabled = true;
		ttt7->Enabled = true;
		ttt8->Enabled = true;
		ttt9->Enabled = true;
	}
 	private: System::Void reset_Click(System::Object^ sender, System::EventArgs^ e) {
		turnCount++;
		resetGrid();
		if ((turnCount % 2) == 0) {
			player = false;
			underGrid->Text = textBox1->Text + "'s Turn";
		}
		else {
			player = true;
			underGrid->Text = textBox2->Text + "'s Turn";
		}
	}
	private: System::Void menu_Click(System::Object^ sender, System::EventArgs^ e) {
		resetGrid();
		turnCount = 0;
		textBox1->Text = "";
		textBox2->Text = "";
		score1->Text = "0";
		score2->Text = "0";
		player = false;
		underGrid->Text = "Player 1's Turn";
		panel2->Visible = false;
		panel1->Visible = true;
	}
	private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
		Name1->Text = textBox1->Text + ":";
		Name2->Text = textBox2->Text + ":";
		if (textBox1->Text == "") {
			Name1->Text = "Player 1:";
			textBox1->Text = "Player 1";
		}
		if (textBox2->Text == "") {
			Name2->Text = "Player 2:";
			textBox2->Text = "Player 2";
		}
		underGrid->Text = textBox1->Text + "'s Turn";
		panel3->Visible = false;
		panel2->Visible = true;
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Media::SoundPlayer^ playsound = gcnew System::Media::SoundPlayer();
		playsound->SoundLocation = "XO.wav";
		if ((sCount % 2) == 0) {
			playsound->Load();
			playsound->Play();
			sCount++;
		}
		else {
			playsound->Stop();
			sCount++;
		}
	}
};
}
