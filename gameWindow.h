#pragma once
#include <string>
#include <cstdlib>
#include <time.h>
#include <iostream>




namespace blackJack {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Summary for gameWindow
	/// </summary>
	public ref class gameWindow : public System::Windows::Forms::Form
	{
	public:
		gameWindow(void)
		{
			InitializeComponent();
			usedCards = gcnew array<bool^> {false, false, false, false, false, false, false, false, false, false, false, false,
											false, false, false, false, false, false, false, false, false, false, false, false,
											false, false, false, false, false, false, false, false, false, false, false, false,
											false, false, false, false, false, false, false, false, false, false, false, false,
											false, false, false, false};
			srand(time(NULL));

		}
	private: System::Windows::Forms::Button^ placeBet;
	public:

	public:


	protected:
		bool betPlaced = false;
	private: System::Windows::Forms::Button^ reset;
	private: System::Windows::Forms::MenuStrip^ MenuBar;
	private: System::Windows::Forms::ToolStripMenuItem^ Options;

	private: System::Windows::Forms::ToolStripMenuItem^ viewLeaderboardToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ quitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ changeGameParametersToolStripMenuItem;









	protected:
		array<bool^>^ usedCards;


		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~gameWindow()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ hitButton;
	private: System::Windows::Forms::Button^ standButton;
	private: System::Windows::Forms::Button^ doubleButton;
	private: System::Windows::Forms::Label^ totalCashLabel;

	private: System::Windows::Forms::PictureBox^ playerCardBox05;

	private: System::Windows::Forms::PictureBox^ playerCardBox01;
	private: System::Windows::Forms::PictureBox^ playerCardBox02;
	private: System::Windows::Forms::PictureBox^ playerCardBox03;
	private: System::Windows::Forms::PictureBox^ playerCardBox04;
	private: System::Windows::Forms::PictureBox^ playerCardBox06;
	private: System::Windows::Forms::Label^ betLabel;
	private: System::Windows::Forms::Label^ playerBetAmount;
	private: System::Windows::Forms::Button^ bet10Button;
	private: System::Windows::Forms::Button^ bet50Button;
	private: System::Windows::Forms::Button^ bet100Button;
	private: System::Windows::Forms::Button^ bet500Button;
	private: System::Windows::Forms::Button^ clearBetButton;
	private: System::Windows::Forms::Label^ playerTotalCashAmount;
	private: System::Windows::Forms::ImageList^ Cards;
	private: System::Windows::Forms::Label^ debugText;
	private: System::Windows::Forms::PictureBox^ dealerCardBox03;
	private: System::Windows::Forms::PictureBox^ dealerCardBox02;
	private: System::Windows::Forms::PictureBox^ dealerCardBox01;
	private: System::Windows::Forms::PictureBox^ dealerCardBox04;
	private: System::Windows::Forms::PictureBox^ dealerCardBox05;
	private: System::Windows::Forms::PictureBox^ dealerCardBox06;
	private: System::Windows::Forms::Label^ handTotalAmount;
	private: System::Windows::Forms::Label^ handTotalLabel;
	private: System::Windows::Forms::Label^ dealerHandTotal;

	private: System::Windows::Forms::Label^ dealerHandLabel;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(gameWindow::typeid));
			this->hitButton = (gcnew System::Windows::Forms::Button());
			this->standButton = (gcnew System::Windows::Forms::Button());
			this->doubleButton = (gcnew System::Windows::Forms::Button());
			this->totalCashLabel = (gcnew System::Windows::Forms::Label());
			this->playerCardBox05 = (gcnew System::Windows::Forms::PictureBox());
			this->playerCardBox01 = (gcnew System::Windows::Forms::PictureBox());
			this->playerCardBox02 = (gcnew System::Windows::Forms::PictureBox());
			this->playerCardBox03 = (gcnew System::Windows::Forms::PictureBox());
			this->playerCardBox04 = (gcnew System::Windows::Forms::PictureBox());
			this->playerCardBox06 = (gcnew System::Windows::Forms::PictureBox());
			this->betLabel = (gcnew System::Windows::Forms::Label());
			this->playerBetAmount = (gcnew System::Windows::Forms::Label());
			this->bet10Button = (gcnew System::Windows::Forms::Button());
			this->bet50Button = (gcnew System::Windows::Forms::Button());
			this->bet100Button = (gcnew System::Windows::Forms::Button());
			this->bet500Button = (gcnew System::Windows::Forms::Button());
			this->clearBetButton = (gcnew System::Windows::Forms::Button());
			this->playerTotalCashAmount = (gcnew System::Windows::Forms::Label());
			this->Cards = (gcnew System::Windows::Forms::ImageList(this->components));
			this->debugText = (gcnew System::Windows::Forms::Label());
			this->dealerCardBox03 = (gcnew System::Windows::Forms::PictureBox());
			this->dealerCardBox02 = (gcnew System::Windows::Forms::PictureBox());
			this->dealerCardBox01 = (gcnew System::Windows::Forms::PictureBox());
			this->dealerCardBox04 = (gcnew System::Windows::Forms::PictureBox());
			this->dealerCardBox05 = (gcnew System::Windows::Forms::PictureBox());
			this->dealerCardBox06 = (gcnew System::Windows::Forms::PictureBox());
			this->handTotalAmount = (gcnew System::Windows::Forms::Label());
			this->handTotalLabel = (gcnew System::Windows::Forms::Label());
			this->dealerHandTotal = (gcnew System::Windows::Forms::Label());
			this->dealerHandLabel = (gcnew System::Windows::Forms::Label());
			this->placeBet = (gcnew System::Windows::Forms::Button());
			this->reset = (gcnew System::Windows::Forms::Button());
			this->MenuBar = (gcnew System::Windows::Forms::MenuStrip());
			this->Options = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->changeGameParametersToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->viewLeaderboardToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->quitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->playerCardBox05))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->playerCardBox01))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->playerCardBox02))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->playerCardBox03))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->playerCardBox04))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->playerCardBox06))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dealerCardBox03))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dealerCardBox02))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dealerCardBox01))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dealerCardBox04))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dealerCardBox05))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dealerCardBox06))->BeginInit();
			this->MenuBar->SuspendLayout();
			this->SuspendLayout();
			// 
			// hitButton
			// 
			this->hitButton->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->hitButton->FlatAppearance->BorderSize = 0;
			this->hitButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->hitButton->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->hitButton->Location = System::Drawing::Point(442, 1171);
			this->hitButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->hitButton->Name = L"hitButton";
			this->hitButton->Size = System::Drawing::Size(160, 80);
			this->hitButton->TabIndex = 0;
			this->hitButton->Text = L"Hit";
			this->hitButton->UseVisualStyleBackColor = true;
			this->hitButton->Click += gcnew System::EventHandler(this, &gameWindow::hitButton_Click);
			// 
			// standButton
			// 
			this->standButton->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->standButton->FlatAppearance->BorderSize = 0;
			this->standButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->standButton->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->standButton->Location = System::Drawing::Point(780, 1171);
			this->standButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->standButton->Name = L"standButton";
			this->standButton->Size = System::Drawing::Size(160, 80);
			this->standButton->TabIndex = 1;
			this->standButton->Text = L"Stand";
			this->standButton->UseVisualStyleBackColor = true;
			this->standButton->Click += gcnew System::EventHandler(this, &gameWindow::standButton_Click);
			// 
			// doubleButton
			// 
			this->doubleButton->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->doubleButton->FlatAppearance->BorderSize = 0;
			this->doubleButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->doubleButton->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->doubleButton->Location = System::Drawing::Point(1132, 1171);
			this->doubleButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->doubleButton->Name = L"doubleButton";
			this->doubleButton->Size = System::Drawing::Size(160, 80);
			this->doubleButton->TabIndex = 2;
			this->doubleButton->Text = L"Double";
			this->doubleButton->UseVisualStyleBackColor = true;
			this->doubleButton->Click += gcnew System::EventHandler(this, &gameWindow::doubleButton_Click);
			// 
			// totalCashLabel
			// 
			this->totalCashLabel->AutoSize = true;
			this->totalCashLabel->BackColor = System::Drawing::Color::Chartreuse;
			this->totalCashLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->totalCashLabel->Location = System::Drawing::Point(700, 1071);
			this->totalCashLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->totalCashLabel->Name = L"totalCashLabel";
			this->totalCashLabel->Size = System::Drawing::Size(232, 37);
			this->totalCashLabel->TabIndex = 3;
			this->totalCashLabel->Text = L"Total Cash:  $";
			// 
			// playerCardBox05
			// 
			this->playerCardBox05->Location = System::Drawing::Point(1056, 777);
			this->playerCardBox05->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->playerCardBox05->Name = L"playerCardBox05";
			this->playerCardBox05->Size = System::Drawing::Size(158, 245);
			this->playerCardBox05->TabIndex = 4;
			this->playerCardBox05->TabStop = false;
			this->playerCardBox05->Visible = false;
			// 
			// playerCardBox01
			// 
			this->playerCardBox01->Location = System::Drawing::Point(668, 777);
			this->playerCardBox01->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->playerCardBox01->Name = L"playerCardBox01";
			this->playerCardBox01->Size = System::Drawing::Size(158, 245);
			this->playerCardBox01->TabIndex = 5;
			this->playerCardBox01->TabStop = false;
			this->playerCardBox01->Visible = false;
			// 
			// playerCardBox02
			// 
			this->playerCardBox02->Location = System::Drawing::Point(754, 777);
			this->playerCardBox02->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->playerCardBox02->Name = L"playerCardBox02";
			this->playerCardBox02->Size = System::Drawing::Size(158, 245);
			this->playerCardBox02->TabIndex = 6;
			this->playerCardBox02->TabStop = false;
			this->playerCardBox02->Visible = false;
			// 
			// playerCardBox03
			// 
			this->playerCardBox03->Location = System::Drawing::Point(848, 777);
			this->playerCardBox03->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->playerCardBox03->Name = L"playerCardBox03";
			this->playerCardBox03->Size = System::Drawing::Size(158, 245);
			this->playerCardBox03->TabIndex = 7;
			this->playerCardBox03->TabStop = false;
			this->playerCardBox03->Visible = false;
			// 
			// playerCardBox04
			// 
			this->playerCardBox04->Location = System::Drawing::Point(950, 777);
			this->playerCardBox04->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->playerCardBox04->Name = L"playerCardBox04";
			this->playerCardBox04->Size = System::Drawing::Size(158, 245);
			this->playerCardBox04->TabIndex = 8;
			this->playerCardBox04->TabStop = false;
			this->playerCardBox04->Visible = false;
			// 
			// playerCardBox06
			// 
			this->playerCardBox06->Location = System::Drawing::Point(1137, 777);
			this->playerCardBox06->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->playerCardBox06->Name = L"playerCardBox06";
			this->playerCardBox06->Size = System::Drawing::Size(158, 245);
			this->playerCardBox06->TabIndex = 9;
			this->playerCardBox06->TabStop = false;
			this->playerCardBox06->Visible = false;
			// 
			// betLabel
			// 
			this->betLabel->AutoSize = true;
			this->betLabel->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->betLabel->Location = System::Drawing::Point(756, 680);
			this->betLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->betLabel->Name = L"betLabel";
			this->betLabel->Size = System::Drawing::Size(98, 37);
			this->betLabel->TabIndex = 10;
			this->betLabel->Text = L"Bet:  $";
			// 
			// playerBetAmount
			// 
			this->playerBetAmount->AutoSize = true;
			this->playerBetAmount->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->playerBetAmount->Location = System::Drawing::Point(849, 680);
			this->playerBetAmount->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->playerBetAmount->Name = L"playerBetAmount";
			this->playerBetAmount->Size = System::Drawing::Size(32, 37);
			this->playerBetAmount->TabIndex = 11;
			this->playerBetAmount->Text = L"0";
			// 
			// bet10Button
			// 
			this->bet10Button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bet10Button->Location = System::Drawing::Point(988, 680);
			this->bet10Button->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bet10Button->Name = L"bet10Button";
			this->bet10Button->Size = System::Drawing::Size(96, 45);
			this->bet10Button->TabIndex = 12;
			this->bet10Button->Text = L"$10";
			this->bet10Button->UseVisualStyleBackColor = true;
			this->bet10Button->Click += gcnew System::EventHandler(this, &gameWindow::bet10Button_Click);
			// 
			// bet50Button
			// 
			this->bet50Button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bet50Button->Location = System::Drawing::Point(1114, 680);
			this->bet50Button->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bet50Button->Name = L"bet50Button";
			this->bet50Button->Size = System::Drawing::Size(96, 45);
			this->bet50Button->TabIndex = 13;
			this->bet50Button->Text = L"$50";
			this->bet50Button->UseVisualStyleBackColor = true;
			this->bet50Button->Click += gcnew System::EventHandler(this, &gameWindow::bet50Button_Click);
			// 
			// bet100Button
			// 
			this->bet100Button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bet100Button->Location = System::Drawing::Point(1248, 680);
			this->bet100Button->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bet100Button->Name = L"bet100Button";
			this->bet100Button->Size = System::Drawing::Size(96, 45);
			this->bet100Button->TabIndex = 14;
			this->bet100Button->Text = L"$100";
			this->bet100Button->UseVisualStyleBackColor = true;
			this->bet100Button->Click += gcnew System::EventHandler(this, &gameWindow::bet100Button_Click);
			// 
			// bet500Button
			// 
			this->bet500Button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bet500Button->Location = System::Drawing::Point(1376, 680);
			this->bet500Button->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->bet500Button->Name = L"bet500Button";
			this->bet500Button->Size = System::Drawing::Size(96, 45);
			this->bet500Button->TabIndex = 15;
			this->bet500Button->Text = L"$500";
			this->bet500Button->UseVisualStyleBackColor = true;
			this->bet500Button->Click += gcnew System::EventHandler(this, &gameWindow::bet500Button_Click);
			// 
			// clearBetButton
			// 
			this->clearBetButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clearBetButton->Location = System::Drawing::Point(464, 680);
			this->clearBetButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->clearBetButton->Name = L"clearBetButton";
			this->clearBetButton->Size = System::Drawing::Size(162, 45);
			this->clearBetButton->TabIndex = 16;
			this->clearBetButton->Text = L"Clear Bet";
			this->clearBetButton->UseVisualStyleBackColor = true;
			this->clearBetButton->Click += gcnew System::EventHandler(this, &gameWindow::clearBetButton_Click);
			// 
			// playerTotalCashAmount
			// 
			this->playerTotalCashAmount->AutoSize = true;
			this->playerTotalCashAmount->BackColor = System::Drawing::Color::Chartreuse;
			this->playerTotalCashAmount->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->playerTotalCashAmount->Location = System::Drawing::Point(934, 1071);
			this->playerTotalCashAmount->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->playerTotalCashAmount->Name = L"playerTotalCashAmount";
			this->playerTotalCashAmount->Size = System::Drawing::Size(36, 37);
			this->playerTotalCashAmount->TabIndex = 17;
			this->playerTotalCashAmount->Text = L"0";
			// 
			// Cards
			// 
			this->Cards->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"Cards.ImageStream")));
			this->Cards->TransparentColor = System::Drawing::Color::Transparent;
			this->Cards->Images->SetKeyName(0, L"2C.jpg");
			this->Cards->Images->SetKeyName(1, L"2D.jpg");
			this->Cards->Images->SetKeyName(2, L"2H.jpg");
			this->Cards->Images->SetKeyName(3, L"2S.jpg");
			this->Cards->Images->SetKeyName(4, L"3C.jpg");
			this->Cards->Images->SetKeyName(5, L"3D.jpg");
			this->Cards->Images->SetKeyName(6, L"3H.jpg");
			this->Cards->Images->SetKeyName(7, L"3S.jpg");
			this->Cards->Images->SetKeyName(8, L"4C.jpg");
			this->Cards->Images->SetKeyName(9, L"4D.jpg");
			this->Cards->Images->SetKeyName(10, L"4H.jpg");
			this->Cards->Images->SetKeyName(11, L"4S.jpg");
			this->Cards->Images->SetKeyName(12, L"5C.jpg");
			this->Cards->Images->SetKeyName(13, L"5D.jpg");
			this->Cards->Images->SetKeyName(14, L"5H.jpg");
			this->Cards->Images->SetKeyName(15, L"5S.jpg");
			this->Cards->Images->SetKeyName(16, L"6C.jpg");
			this->Cards->Images->SetKeyName(17, L"6D.jpg");
			this->Cards->Images->SetKeyName(18, L"6H.jpg");
			this->Cards->Images->SetKeyName(19, L"6S.jpg");
			this->Cards->Images->SetKeyName(20, L"7C.jpg");
			this->Cards->Images->SetKeyName(21, L"7D.jpg");
			this->Cards->Images->SetKeyName(22, L"7H.jpg");
			this->Cards->Images->SetKeyName(23, L"7S.jpg");
			this->Cards->Images->SetKeyName(24, L"8C.jpg");
			this->Cards->Images->SetKeyName(25, L"8D.jpg");
			this->Cards->Images->SetKeyName(26, L"8H.jpg");
			this->Cards->Images->SetKeyName(27, L"8S.jpg");
			this->Cards->Images->SetKeyName(28, L"9C.jpg");
			this->Cards->Images->SetKeyName(29, L"9D.jpg");
			this->Cards->Images->SetKeyName(30, L"9H.jpg");
			this->Cards->Images->SetKeyName(31, L"9S.jpg");
			this->Cards->Images->SetKeyName(32, L"10C.jpg");
			this->Cards->Images->SetKeyName(33, L"10D.jpg");
			this->Cards->Images->SetKeyName(34, L"10H.jpg");
			this->Cards->Images->SetKeyName(35, L"10S.jpg");
			this->Cards->Images->SetKeyName(36, L"AC.jpg");
			this->Cards->Images->SetKeyName(37, L"AD.jpg");
			this->Cards->Images->SetKeyName(38, L"AH.jpg");
			this->Cards->Images->SetKeyName(39, L"AS.jpg");
			this->Cards->Images->SetKeyName(40, L"JC.jpg");
			this->Cards->Images->SetKeyName(41, L"JD.jpg");
			this->Cards->Images->SetKeyName(42, L"JH.jpg");
			this->Cards->Images->SetKeyName(43, L"JS.jpg");
			this->Cards->Images->SetKeyName(44, L"KC.jpg");
			this->Cards->Images->SetKeyName(45, L"KD.jpg");
			this->Cards->Images->SetKeyName(46, L"KH.jpg");
			this->Cards->Images->SetKeyName(47, L"KS.jpg");
			this->Cards->Images->SetKeyName(48, L"QC.jpg");
			this->Cards->Images->SetKeyName(49, L"QD.jpg");
			this->Cards->Images->SetKeyName(50, L"QH.jpg");
			this->Cards->Images->SetKeyName(51, L"QS.jpg");
			this->Cards->Images->SetKeyName(52, L"Red_back.jpg");
			// 
			// debugText
			// 
			this->debugText->AutoSize = true;
			this->debugText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->debugText->Location = System::Drawing::Point(1392, 858);
			this->debugText->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->debugText->Name = L"debugText";
			this->debugText->Size = System::Drawing::Size(99, 37);
			this->debugText->TabIndex = 18;
			this->debugText->Text = L"TEST";
			// 
			// dealerCardBox03
			// 
			this->dealerCardBox03->Location = System::Drawing::Point(813, 78);
			this->dealerCardBox03->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->dealerCardBox03->Name = L"dealerCardBox03";
			this->dealerCardBox03->Size = System::Drawing::Size(158, 245);
			this->dealerCardBox03->TabIndex = 22;
			this->dealerCardBox03->TabStop = false;
			this->dealerCardBox03->Visible = false;
			// 
			// dealerCardBox02
			// 
			this->dealerCardBox02->Location = System::Drawing::Point(720, 78);
			this->dealerCardBox02->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->dealerCardBox02->Name = L"dealerCardBox02";
			this->dealerCardBox02->Size = System::Drawing::Size(158, 245);
			this->dealerCardBox02->TabIndex = 21;
			this->dealerCardBox02->TabStop = false;
			this->dealerCardBox02->Visible = false;
			// 
			// dealerCardBox01
			// 
			this->dealerCardBox01->Location = System::Drawing::Point(633, 78);
			this->dealerCardBox01->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->dealerCardBox01->Name = L"dealerCardBox01";
			this->dealerCardBox01->Size = System::Drawing::Size(158, 245);
			this->dealerCardBox01->TabIndex = 20;
			this->dealerCardBox01->TabStop = false;
			this->dealerCardBox01->Visible = false;
			// 
			// dealerCardBox04
			// 
			this->dealerCardBox04->Location = System::Drawing::Point(915, 78);
			this->dealerCardBox04->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->dealerCardBox04->Name = L"dealerCardBox04";
			this->dealerCardBox04->Size = System::Drawing::Size(158, 245);
			this->dealerCardBox04->TabIndex = 23;
			this->dealerCardBox04->TabStop = false;
			this->dealerCardBox04->Visible = false;
			// 
			// dealerCardBox05
			// 
			this->dealerCardBox05->Location = System::Drawing::Point(1022, 78);
			this->dealerCardBox05->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->dealerCardBox05->Name = L"dealerCardBox05";
			this->dealerCardBox05->Size = System::Drawing::Size(158, 245);
			this->dealerCardBox05->TabIndex = 19;
			this->dealerCardBox05->TabStop = false;
			this->dealerCardBox05->Visible = false;
			// 
			// dealerCardBox06
			// 
			this->dealerCardBox06->Location = System::Drawing::Point(1102, 78);
			this->dealerCardBox06->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->dealerCardBox06->Name = L"dealerCardBox06";
			this->dealerCardBox06->Size = System::Drawing::Size(158, 245);
			this->dealerCardBox06->TabIndex = 24;
			this->dealerCardBox06->TabStop = false;
			this->dealerCardBox06->Visible = false;
			// 
			// handTotalAmount
			// 
			this->handTotalAmount->AutoSize = true;
			this->handTotalAmount->BackColor = System::Drawing::Color::Chartreuse;
			this->handTotalAmount->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->handTotalAmount->Location = System::Drawing::Point(981, 605);
			this->handTotalAmount->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->handTotalAmount->Name = L"handTotalAmount";
			this->handTotalAmount->Size = System::Drawing::Size(36, 37);
			this->handTotalAmount->TabIndex = 26;
			this->handTotalAmount->Text = L"0";
			// 
			// handTotalLabel
			// 
			this->handTotalLabel->AutoSize = true;
			this->handTotalLabel->BackColor = System::Drawing::Color::Chartreuse;
			this->handTotalLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->handTotalLabel->Location = System::Drawing::Point(712, 605);
			this->handTotalLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->handTotalLabel->Name = L"handTotalLabel";
			this->handTotalLabel->Size = System::Drawing::Size(258, 37);
			this->handTotalLabel->TabIndex = 25;
			this->handTotalLabel->Text = L"My Hand Total: ";
			// 
			// dealerHandTotal
			// 
			this->dealerHandTotal->AutoSize = true;
			this->dealerHandTotal->BackColor = System::Drawing::Color::Chartreuse;
			this->dealerHandTotal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dealerHandTotal->Location = System::Drawing::Point(981, 514);
			this->dealerHandTotal->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->dealerHandTotal->Name = L"dealerHandTotal";
			this->dealerHandTotal->Size = System::Drawing::Size(36, 37);
			this->dealerHandTotal->TabIndex = 28;
			this->dealerHandTotal->Text = L"0";
			// 
			// dealerHandLabel
			// 
			this->dealerHandLabel->AutoSize = true;
			this->dealerHandLabel->BackColor = System::Drawing::Color::Chartreuse;
			this->dealerHandLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dealerHandLabel->Location = System::Drawing::Point(660, 514);
			this->dealerHandLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->dealerHandLabel->Name = L"dealerHandLabel";
			this->dealerHandLabel->Size = System::Drawing::Size(314, 37);
			this->dealerHandLabel->TabIndex = 27;
			this->dealerHandLabel->Text = L"Dealer Hand Total: ";
			// 
			// placeBet
			// 
			this->placeBet->Location = System::Drawing::Point(1500, 689);
			this->placeBet->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->placeBet->Name = L"placeBet";
			this->placeBet->Size = System::Drawing::Size(112, 35);
			this->placeBet->TabIndex = 29;
			this->placeBet->Text = L"Place Bet";
			this->placeBet->UseVisualStyleBackColor = true;
			this->placeBet->Click += gcnew System::EventHandler(this, &gameWindow::placeBet_Click);
			// 
			// reset
			// 
			this->reset->Location = System::Drawing::Point(108, 903);
			this->reset->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->reset->Name = L"reset";
			this->reset->Size = System::Drawing::Size(112, 35);
			this->reset->TabIndex = 30;
			this->reset->Text = L"Debug reset\r\n";
			this->reset->UseVisualStyleBackColor = true;
			this->reset->Click += gcnew System::EventHandler(this, &gameWindow::reset_Click);
			// 
			// MenuBar
			// 
			this->MenuBar->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->MenuBar->ImageScalingSize = System::Drawing::Size(24, 24);
			this->MenuBar->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->Options, this->quitToolStripMenuItem });
			this->MenuBar->Location = System::Drawing::Point(15, 0);
			this->MenuBar->Name = L"MenuBar";
			this->MenuBar->Size = System::Drawing::Size(1866, 56);
			this->MenuBar->TabIndex = 34;
			// 
			// Options
			// 
			this->Options->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->changeGameParametersToolStripMenuItem,
					this->viewLeaderboardToolStripMenuItem
			});
			this->Options->Font = (gcnew System::Drawing::Font(L"Arial", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Options->Name = L"Options";
			this->Options->Size = System::Drawing::Size(184, 52);
			this->Options->Text = L"Options";
			this->Options->Click += gcnew System::EventHandler(this, &gameWindow::toolStripMenuItem1_Click);
			// 
			// changeGameParametersToolStripMenuItem
			// 
			this->changeGameParametersToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->changeGameParametersToolStripMenuItem->Name = L"changeGameParametersToolStripMenuItem";
			this->changeGameParametersToolStripMenuItem->Size = System::Drawing::Size(502, 44);
			this->changeGameParametersToolStripMenuItem->Text = L"Change Game Parameters";
			this->changeGameParametersToolStripMenuItem->Click += gcnew System::EventHandler(this, &gameWindow::changeGameParametersToolStripMenuItem_Click);
			// 
			// viewLeaderboardToolStripMenuItem
			// 
			this->viewLeaderboardToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->viewLeaderboardToolStripMenuItem->Name = L"viewLeaderboardToolStripMenuItem";
			this->viewLeaderboardToolStripMenuItem->Size = System::Drawing::Size(502, 44);
			this->viewLeaderboardToolStripMenuItem->Text = L"View Leaderboard";
			// 
			// quitToolStripMenuItem
			// 
			this->quitToolStripMenuItem->Alignment = System::Windows::Forms::ToolStripItemAlignment::Right;
			this->quitToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Arial", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->quitToolStripMenuItem->Name = L"quitToolStripMenuItem";
			this->quitToolStripMenuItem->Size = System::Drawing::Size(114, 52);
			this->quitToolStripMenuItem->Text = L"Quit";
			this->quitToolStripMenuItem->Click += gcnew System::EventHandler(this, &gameWindow::quitToolStripMenuItem_Click);
			// 
			// gameWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::Green;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(1896, 1417);
			this->Controls->Add(this->reset);
			this->Controls->Add(this->placeBet);
			this->Controls->Add(this->dealerHandTotal);
			this->Controls->Add(this->dealerHandLabel);
			this->Controls->Add(this->handTotalAmount);
			this->Controls->Add(this->handTotalLabel);
			this->Controls->Add(this->dealerCardBox03);
			this->Controls->Add(this->dealerCardBox02);
			this->Controls->Add(this->dealerCardBox01);
			this->Controls->Add(this->dealerCardBox04);
			this->Controls->Add(this->dealerCardBox05);
			this->Controls->Add(this->dealerCardBox06);
			this->Controls->Add(this->debugText);
			this->Controls->Add(this->playerTotalCashAmount);
			this->Controls->Add(this->clearBetButton);
			this->Controls->Add(this->bet500Button);
			this->Controls->Add(this->bet100Button);
			this->Controls->Add(this->bet50Button);
			this->Controls->Add(this->bet10Button);
			this->Controls->Add(this->playerBetAmount);
			this->Controls->Add(this->betLabel);
			this->Controls->Add(this->playerCardBox03);
			this->Controls->Add(this->playerCardBox02);
			this->Controls->Add(this->playerCardBox01);
			this->Controls->Add(this->totalCashLabel);
			this->Controls->Add(this->doubleButton);
			this->Controls->Add(this->standButton);
			this->Controls->Add(this->hitButton);
			this->Controls->Add(this->playerCardBox04);
			this->Controls->Add(this->playerCardBox05);
			this->Controls->Add(this->playerCardBox06);
			this->Controls->Add(this->MenuBar);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MainMenuStrip = this->MenuBar;
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"gameWindow";
			this->Padding = System::Windows::Forms::Padding(15, 0, 15, 0);
			this->Text = L"gameWindow";
			this->Load += gcnew System::EventHandler(this, &gameWindow::gameWindow_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->playerCardBox05))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->playerCardBox01))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->playerCardBox02))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->playerCardBox03))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->playerCardBox04))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->playerCardBox06))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dealerCardBox03))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dealerCardBox02))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dealerCardBox01))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dealerCardBox04))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dealerCardBox05))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dealerCardBox06))->EndInit();
			this->MenuBar->ResumeLayout(false);
			this->MenuBar->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void gameWindow_Load(System::Object^ sender, System::EventArgs^ e)
	{
		
	}




//Betting Buttons
private: System::Void bet10Button_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (betPlaced == true)
	{
		return;
	}
	int result = System::Convert::ToInt16(playerBetAmount->Text) + 10;
	playerBetAmount->Text = System::Convert::ToString(result);
	
}
private: System::Void bet50Button_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (betPlaced == true)
	{
		return;
	}
	int result = System::Convert::ToInt16(playerBetAmount->Text) + 50;
	playerBetAmount->Text = System::Convert::ToString(result);
}
private: System::Void bet100Button_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (betPlaced == true)
	{
		return;
	}
	int result = System::Convert::ToInt16(playerBetAmount->Text) + 100;
	playerBetAmount->Text = System::Convert::ToString(result);
}
private: System::Void bet500Button_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (betPlaced == true)
	{
		return;
	}
	int result = System::Convert::ToInt16(playerBetAmount->Text) + 500;
	playerBetAmount->Text = System::Convert::ToString(result);
}
private: System::Void clearBetButton_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (betPlaced == true)
	{
		return;
	}
	playerBetAmount->Text = System::Convert::ToString(0);
}

//HIT STAND DOUBLE BUTTONS
private: System::Void hitButton_Click(System::Object^ sender, System::EventArgs^ e) 
{

	if (betPlaced == false)
	{
		return;
	}
	
	int n;
	n = rand() % (int)52;

	
	
	while (System::Convert::ToBoolean(usedCards[n]) == true)
	{
		n = rand() % (int)52;
	}

	usedCards[n] = true;


	if (this->playerCardBox01->Visible == false)

	{
		
		this->debugText->Text = "box 1";
		this->playerCardBox01->Image = Cards->Images[n];
		this->playerCardBox01->Visible = true;
	}

	else if (this->playerCardBox02->Visible == false)
	{
		this->debugText->Text = "box 2";
		this->playerCardBox02->Image = Cards->Images[n];
		this->playerCardBox02->Visible = true;
	}

	else if (this->playerCardBox03->Visible == false)
	{
		this->debugText->Text = "box 3";
		this->playerCardBox03->Image = Cards->Images[n];
		this->playerCardBox03->Visible = true;
	}

	else if (this->playerCardBox04->Visible == false)
	{
		this->debugText->Text = "box 4";
		this->playerCardBox04->Image = Cards->Images[n];
		this->playerCardBox04->Visible = true;
	}

	else if (this->playerCardBox05->Visible == false)
	{
		this->debugText->Text = "box 5";
		this->playerCardBox05->Image = Cards->Images[n];
		this->playerCardBox05->Visible = true;
	}

	else if (this->playerCardBox06->Visible == false)
	{
		this->debugText->Text = "box 6";
		this->playerCardBox06->Image = Cards->Images[n];
		this->playerCardBox06->Visible = true;
	}
	else
	{
		this->debugText->Text = "return";
		return;
	}
	
}

private: System::Void standButton_Click(System::Object^ sender, System::EventArgs^ e) 
{
		   this->debugText->Text = "Stand Button Pressed";

}


private: System::Void doubleButton_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->debugText->Text = "Double Button Pressed";
}

private: System::Void placeBet_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (betPlaced == true || System::Convert::ToInt16(playerBetAmount->Text) == 0)
	{
		return;
	}
	
	int n;

	for (int i = 0; i < 5; i++)
	{
		n = rand() % (int)52;

		while (System::Convert::ToBoolean(usedCards[n]) == true)
		{
			n = rand() % (int)52;
		}

		usedCards[n] = true;

		if (i == 0)
		{
			this->playerCardBox01->Image = Cards->Images[n];
			this->playerCardBox01->Visible = true;
		}
		else if (i == 1)
		{
			this->dealerCardBox01->Image = Cards->Images[n];
			this->dealerCardBox01->Visible = true;
		}
		else if (i == 2)
		{
			this->playerCardBox02->Image = Cards->Images[n];
			this->playerCardBox02->Visible = true;
		}
		else if (i == 3)
		{
			this->dealerCardBox02->Image = Cards->Images[52];        // this needs to be a face down picture
			this->dealerCardBox02->Visible = true;
		}
		else if (i == 4)
		{
			this->dealerCardBox03->Image = Cards->Images[n];    // this is the actual 2nd card since the one before was just a face down picture with no value
			this->dealerCardBox03->Visible = false;                // once the player finishes their turn, we assign dealerCardBox03 image to dealerCardBox02
		}
	}
	betPlaced = true;
}
private: System::Void reset_Click(System::Object^ sender, System::EventArgs^ e) 

{
	betPlaced = false;

	this->playerCardBox01->Visible = false;
	this->playerCardBox02->Visible = false;
	this->playerCardBox03->Visible = false;
	this->playerCardBox04->Visible = false;
	this->playerCardBox05->Visible = false;
	this->playerCardBox06->Visible = false;

	this->dealerCardBox01->Visible = false;
	this->dealerCardBox02->Visible = false;
	this->dealerCardBox03->Visible = false;
	this->dealerCardBox04->Visible = false;
	this->dealerCardBox05->Visible = false;
	this->dealerCardBox06->Visible = false;

	for (int i = 0; i < 52; i++)
	{
		usedCards[i] = false;
	}

	playerBetAmount->Text = System::Convert::ToString(0);
}


//Options Menu Bar
private: System::Void toolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {

}
//Exit Game Option
private: System::Void quitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	exit(3);
}
//Change Game Parameter -> Set player number
private: System::Void changeGameParametersToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Set Player Number: ", "Set Player Number: ", MessageBoxButtons::OKCancel);
	Form setPlayer;
	setPlayer.ShowDialog();
	//setPlayer.Controls->Add(this->enterPlayerNum);
}


};


}