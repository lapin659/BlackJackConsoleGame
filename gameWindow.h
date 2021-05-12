#pragma once
#include <string>
#include <cstdlib>
#include <time.h>
#include <stdlib.h>
#include <iostream>
#include <windows.h>
#include <sstream>


#pragma once
#include <string>
#include <cstdlib>
#include <time.h>
#include <stdlib.h>
#include <iostream>
#include <windows.h>
#include <sstream>


#using <system.windows.forms.dll>
#using <Microsoft.VisualBasic.dll>
//current version as of 5_12 12:30am
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
			playerTotalCashAmount->Text = System::Convert::ToString(playerCashTotal);

		}
	private: System::Windows::Forms::Button^ placeBet;
	public:

	public:


	protected:
		int playerCashTotal;
		int moneyDefault;
		bool betPlaced = false;
		bool roundOver = false;
		int n{};
		int playerValue{};
		int softAce{};
		int dealerValue{};
		bool PlayerValue2Exists = false;
		bool playerAce = false;
		bool playerAce2 = false;
		bool playerAce3 = false;
		bool dealerBlackjack = false;
		int hiddenDealerValue{};
		bool dealerAce1 = false;
		bool dealerAce2 = false;
		bool dealerAce3 = false;
		bool dealerAce4 = false;
		bool secondAce = false;
		bool hit = false;
		bool stand = false;
		int result{};
		bool doubleDown = false;
		bool ace = false;
		bool ace2 = false;
		bool ace3 = false;
		bool ace4 = false;
		bool standAce = false;
		int msgNum;
		bool start = false;


	private: System::Windows::Forms::MenuStrip^ MenuBar;
	private: System::Windows::Forms::ToolStripMenuItem^ Options;
	private: System::Windows::Forms::ToolStripMenuItem^ viewLeaderboardToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ quitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ changeGameParametersToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ startToolStripMenuItem;
	private: System::Windows::Forms::Label^ playerName;
	private: System::Windows::Forms::ImageList^ chipList;
	private: System::Windows::Forms::PictureBox^ chip10;
	private: System::Windows::Forms::PictureBox^ chip50;
	private: System::Windows::Forms::PictureBox^ chip100;
	private: System::Windows::Forms::PictureBox^ chip500;

	private: System::Windows::Forms::ImageList^ playerStack;
	private: System::Windows::Forms::PictureBox^ playerChips;
	private: System::Windows::Forms::PictureBox^ winnings;
	private: System::Windows::Forms::PictureBox^ deck;
	private: System::Windows::Forms::ImageList^ dealerStack;
	private: System::Windows::Forms::PictureBox^ dealerChips;
	private: System::Windows::Forms::PictureBox^ background;
	private: System::Windows::Forms::ImageList^ bgList;

	private: System::Windows::Forms::PictureBox^ dealerFig;
	private: System::Windows::Forms::PictureBox^ playerProfile;
	private: System::Windows::Forms::RichTextBox^ dealerMsg;
	private: System::Windows::Forms::Label^ pressStartLabel;







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
			this->MenuBar = (gcnew System::Windows::Forms::MenuStrip());
			this->Options = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->changeGameParametersToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->viewLeaderboardToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->quitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->startToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->playerName = (gcnew System::Windows::Forms::Label());
			this->chipList = (gcnew System::Windows::Forms::ImageList(this->components));
			this->chip10 = (gcnew System::Windows::Forms::PictureBox());
			this->chip50 = (gcnew System::Windows::Forms::PictureBox());
			this->chip100 = (gcnew System::Windows::Forms::PictureBox());
			this->chip500 = (gcnew System::Windows::Forms::PictureBox());
			this->playerStack = (gcnew System::Windows::Forms::ImageList(this->components));
			this->playerChips = (gcnew System::Windows::Forms::PictureBox());
			this->winnings = (gcnew System::Windows::Forms::PictureBox());
			this->deck = (gcnew System::Windows::Forms::PictureBox());
			this->dealerStack = (gcnew System::Windows::Forms::ImageList(this->components));
			this->dealerChips = (gcnew System::Windows::Forms::PictureBox());
			this->background = (gcnew System::Windows::Forms::PictureBox());
			this->bgList = (gcnew System::Windows::Forms::ImageList(this->components));
			this->dealerFig = (gcnew System::Windows::Forms::PictureBox());
			this->playerProfile = (gcnew System::Windows::Forms::PictureBox());
			this->dealerMsg = (gcnew System::Windows::Forms::RichTextBox());
			this->pressStartLabel = (gcnew System::Windows::Forms::Label());
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chip10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chip50))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chip100))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chip500))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->playerChips))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->winnings))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->deck))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dealerChips))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->background))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dealerFig))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->playerProfile))->BeginInit();
			this->SuspendLayout();
			// 
			// hitButton
			// 
			this->hitButton->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->hitButton->FlatAppearance->BorderSize = 0;
			this->hitButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->hitButton->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->hitButton->Location = System::Drawing::Point(499, 683);
			this->hitButton->Name = L"hitButton";
			this->hitButton->Size = System::Drawing::Size(107, 52);
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
			this->standButton->Location = System::Drawing::Point(612, 683);
			this->standButton->Name = L"standButton";
			this->standButton->Size = System::Drawing::Size(107, 52);
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
			this->doubleButton->Location = System::Drawing::Point(725, 683);
			this->doubleButton->Name = L"doubleButton";
			this->doubleButton->Size = System::Drawing::Size(107, 52);
			this->doubleButton->TabIndex = 2;
			this->doubleButton->Text = L"Double";
			this->doubleButton->UseVisualStyleBackColor = true;
			this->doubleButton->Click += gcnew System::EventHandler(this, &gameWindow::doubleButton_Click);
			// 
			// totalCashLabel
			// 
			this->totalCashLabel->AutoSize = true;
			this->totalCashLabel->BackColor = System::Drawing::Color::DarkGray;
			this->totalCashLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->totalCashLabel->Location = System::Drawing::Point(1067, 645);
			this->totalCashLabel->Name = L"totalCashLabel";
			this->totalCashLabel->Size = System::Drawing::Size(160, 25);
			this->totalCashLabel->TabIndex = 3;
			this->totalCashLabel->Text = L"Total Cash:  $";
			// 
			// playerCardBox05
			// 
			this->playerCardBox05->Location = System::Drawing::Point(714, 505);
			this->playerCardBox05->Name = L"playerCardBox05";
			this->playerCardBox05->Size = System::Drawing::Size(105, 159);
			this->playerCardBox05->TabIndex = 4;
			this->playerCardBox05->TabStop = false;
			this->playerCardBox05->Visible = false;
			// 
			// playerCardBox01
			// 
			this->playerCardBox01->Location = System::Drawing::Point(455, 505);
			this->playerCardBox01->Name = L"playerCardBox01";
			this->playerCardBox01->Size = System::Drawing::Size(105, 159);
			this->playerCardBox01->TabIndex = 5;
			this->playerCardBox01->TabStop = false;
			this->playerCardBox01->Visible = false;
			// 
			// playerCardBox02
			// 
			this->playerCardBox02->Location = System::Drawing::Point(513, 505);
			this->playerCardBox02->Name = L"playerCardBox02";
			this->playerCardBox02->Size = System::Drawing::Size(105, 159);
			this->playerCardBox02->TabIndex = 6;
			this->playerCardBox02->TabStop = false;
			this->playerCardBox02->Visible = false;
			// 
			// playerCardBox03
			// 
			this->playerCardBox03->Location = System::Drawing::Point(575, 505);
			this->playerCardBox03->Name = L"playerCardBox03";
			this->playerCardBox03->Size = System::Drawing::Size(105, 159);
			this->playerCardBox03->TabIndex = 7;
			this->playerCardBox03->TabStop = false;
			this->playerCardBox03->Visible = false;
			// 
			// playerCardBox04
			// 
			this->playerCardBox04->Location = System::Drawing::Point(643, 505);
			this->playerCardBox04->Name = L"playerCardBox04";
			this->playerCardBox04->Size = System::Drawing::Size(105, 159);
			this->playerCardBox04->TabIndex = 8;
			this->playerCardBox04->TabStop = false;
			this->playerCardBox04->Visible = false;
			// 
			// playerCardBox06
			// 
			this->playerCardBox06->Location = System::Drawing::Point(768, 505);
			this->playerCardBox06->Name = L"playerCardBox06";
			this->playerCardBox06->Size = System::Drawing::Size(105, 159);
			this->playerCardBox06->TabIndex = 9;
			this->playerCardBox06->TabStop = false;
			this->playerCardBox06->Visible = false;
			// 
			// betLabel
			// 
			this->betLabel->AutoSize = true;
			this->betLabel->BackColor = System::Drawing::Color::DarkGray;
			this->betLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->betLabel->Location = System::Drawing::Point(1030, 477);
			this->betLabel->Name = L"betLabel";
			this->betLabel->Size = System::Drawing::Size(81, 25);
			this->betLabel->TabIndex = 10;
			this->betLabel->Text = L"Bet:  $";
			// 
			// playerBetAmount
			// 
			this->playerBetAmount->AutoSize = true;
			this->playerBetAmount->BackColor = System::Drawing::Color::DarkGray;
			this->playerBetAmount->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->playerBetAmount->Location = System::Drawing::Point(1105, 477);
			this->playerBetAmount->Name = L"playerBetAmount";
			this->playerBetAmount->Size = System::Drawing::Size(25, 25);
			this->playerBetAmount->TabIndex = 11;
			this->playerBetAmount->Text = L"0";
			// 
			// bet10Button
			// 
			this->bet10Button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bet10Button->Location = System::Drawing::Point(1031, 581);
			this->bet10Button->Name = L"bet10Button";
			this->bet10Button->Size = System::Drawing::Size(64, 29);
			this->bet10Button->TabIndex = 12;
			this->bet10Button->Text = L"$10";
			this->bet10Button->UseVisualStyleBackColor = true;
			this->bet10Button->Click += gcnew System::EventHandler(this, &gameWindow::bet10Button_Click);
			// 
			// bet50Button
			// 
			this->bet50Button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bet50Button->Location = System::Drawing::Point(1107, 581);
			this->bet50Button->Name = L"bet50Button";
			this->bet50Button->Size = System::Drawing::Size(64, 29);
			this->bet50Button->TabIndex = 13;
			this->bet50Button->Text = L"$50";
			this->bet50Button->UseVisualStyleBackColor = true;
			this->bet50Button->Click += gcnew System::EventHandler(this, &gameWindow::bet50Button_Click);
			// 
			// bet100Button
			// 
			this->bet100Button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bet100Button->Location = System::Drawing::Point(1183, 581);
			this->bet100Button->Name = L"bet100Button";
			this->bet100Button->Size = System::Drawing::Size(64, 29);
			this->bet100Button->TabIndex = 14;
			this->bet100Button->Text = L"$100";
			this->bet100Button->UseVisualStyleBackColor = true;
			this->bet100Button->Click += gcnew System::EventHandler(this, &gameWindow::bet100Button_Click);
			// 
			// bet500Button
			// 
			this->bet500Button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bet500Button->Location = System::Drawing::Point(1259, 581);
			this->bet500Button->Name = L"bet500Button";
			this->bet500Button->Size = System::Drawing::Size(64, 29);
			this->bet500Button->TabIndex = 15;
			this->bet500Button->Text = L"$500";
			this->bet500Button->UseVisualStyleBackColor = true;
			this->bet500Button->Click += gcnew System::EventHandler(this, &gameWindow::bet500Button_Click);
			// 
			// clearBetButton
			// 
			this->clearBetButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clearBetButton->Location = System::Drawing::Point(1218, 473);
			this->clearBetButton->Name = L"clearBetButton";
			this->clearBetButton->Size = System::Drawing::Size(108, 29);
			this->clearBetButton->TabIndex = 16;
			this->clearBetButton->Text = L"Clear Bet";
			this->clearBetButton->UseVisualStyleBackColor = true;
			this->clearBetButton->Click += gcnew System::EventHandler(this, &gameWindow::clearBetButton_Click);
			// 
			// playerTotalCashAmount
			// 
			this->playerTotalCashAmount->AutoSize = true;
			this->playerTotalCashAmount->BackColor = System::Drawing::Color::DarkGray;
			this->playerTotalCashAmount->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->playerTotalCashAmount->Location = System::Drawing::Point(1225, 645);
			this->playerTotalCashAmount->Name = L"playerTotalCashAmount";
			this->playerTotalCashAmount->Size = System::Drawing::Size(25, 25);
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
			// dealerCardBox03
			// 
			this->dealerCardBox03->Location = System::Drawing::Point(575, 51);
			this->dealerCardBox03->Name = L"dealerCardBox03";
			this->dealerCardBox03->Size = System::Drawing::Size(105, 159);
			this->dealerCardBox03->TabIndex = 22;
			this->dealerCardBox03->TabStop = false;
			this->dealerCardBox03->Visible = false;
			// 
			// dealerCardBox02
			// 
			this->dealerCardBox02->Location = System::Drawing::Point(513, 51);
			this->dealerCardBox02->Name = L"dealerCardBox02";
			this->dealerCardBox02->Size = System::Drawing::Size(105, 159);
			this->dealerCardBox02->TabIndex = 21;
			this->dealerCardBox02->TabStop = false;
			this->dealerCardBox02->Visible = false;
			// 
			// dealerCardBox01
			// 
			this->dealerCardBox01->Location = System::Drawing::Point(455, 51);
			this->dealerCardBox01->Name = L"dealerCardBox01";
			this->dealerCardBox01->Size = System::Drawing::Size(105, 159);
			this->dealerCardBox01->TabIndex = 20;
			this->dealerCardBox01->TabStop = false;
			this->dealerCardBox01->Visible = false;
			// 
			// dealerCardBox04
			// 
			this->dealerCardBox04->Location = System::Drawing::Point(643, 51);
			this->dealerCardBox04->Name = L"dealerCardBox04";
			this->dealerCardBox04->Size = System::Drawing::Size(105, 159);
			this->dealerCardBox04->TabIndex = 23;
			this->dealerCardBox04->TabStop = false;
			this->dealerCardBox04->Visible = false;
			// 
			// dealerCardBox05
			// 
			this->dealerCardBox05->Location = System::Drawing::Point(714, 51);
			this->dealerCardBox05->Name = L"dealerCardBox05";
			this->dealerCardBox05->Size = System::Drawing::Size(105, 159);
			this->dealerCardBox05->TabIndex = 19;
			this->dealerCardBox05->TabStop = false;
			this->dealerCardBox05->Visible = false;
			// 
			// dealerCardBox06
			// 
			this->dealerCardBox06->Location = System::Drawing::Point(768, 51);
			this->dealerCardBox06->Name = L"dealerCardBox06";
			this->dealerCardBox06->Size = System::Drawing::Size(105, 159);
			this->dealerCardBox06->TabIndex = 24;
			this->dealerCardBox06->TabStop = false;
			this->dealerCardBox06->Visible = false;
			// 
			// handTotalAmount
			// 
			this->handTotalAmount->AutoSize = true;
			this->handTotalAmount->BackColor = System::Drawing::Color::DarkGray;
			this->handTotalAmount->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->handTotalAmount->Location = System::Drawing::Point(721, 402);
			this->handTotalAmount->Name = L"handTotalAmount";
			this->handTotalAmount->Size = System::Drawing::Size(21, 24);
			this->handTotalAmount->TabIndex = 26;
			this->handTotalAmount->Text = L"0";
			// 
			// handTotalLabel
			// 
			this->handTotalLabel->AutoSize = true;
			this->handTotalLabel->BackColor = System::Drawing::Color::DarkGray;
			this->handTotalLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->handTotalLabel->Location = System::Drawing::Point(571, 402);
			this->handTotalLabel->Name = L"handTotalLabel";
			this->handTotalLabel->Size = System::Drawing::Size(157, 24);
			this->handTotalLabel->TabIndex = 25;
			this->handTotalLabel->Text = L"My Hand Total: ";
			// 
			// dealerHandTotal
			// 
			this->dealerHandTotal->AutoSize = true;
			this->dealerHandTotal->BackColor = System::Drawing::Color::DarkGray;
			this->dealerHandTotal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dealerHandTotal->Location = System::Drawing::Point(734, 378);
			this->dealerHandTotal->Name = L"dealerHandTotal";
			this->dealerHandTotal->Size = System::Drawing::Size(21, 24);
			this->dealerHandTotal->TabIndex = 28;
			this->dealerHandTotal->Text = L"0";
			// 
			// dealerHandLabel
			// 
			this->dealerHandLabel->AutoSize = true;
			this->dealerHandLabel->BackColor = System::Drawing::Color::DarkGray;
			this->dealerHandLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dealerHandLabel->Location = System::Drawing::Point(551, 378);
			this->dealerHandLabel->Name = L"dealerHandLabel";
			this->dealerHandLabel->Size = System::Drawing::Size(191, 24);
			this->dealerHandLabel->TabIndex = 27;
			this->dealerHandLabel->Text = L"Dealer Hand Total: ";
			// 
			// placeBet
			// 
			this->placeBet->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->placeBet->Location = System::Drawing::Point(1126, 613);
			this->placeBet->Name = L"placeBet";
			this->placeBet->Size = System::Drawing::Size(101, 29);
			this->placeBet->TabIndex = 29;
			this->placeBet->Text = L"Place Bet";
			this->placeBet->UseVisualStyleBackColor = true;
			this->placeBet->Click += gcnew System::EventHandler(this, &gameWindow::placeBet_Click);
			// 
			// MenuBar
			// 
			this->MenuBar->ImageScalingSize = System::Drawing::Size(24, 24);
			this->MenuBar->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->Options, this->quitToolStripMenuItem,
					this->startToolStripMenuItem
			});
			this->MenuBar->Location = System::Drawing::Point(10, 0);
			this->MenuBar->Name = L"MenuBar";
			this->MenuBar->Padding = System::Windows::Forms::Padding(4, 1, 0, 1);
			this->MenuBar->Size = System::Drawing::Size(1325, 38);
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
			this->Options->Size = System::Drawing::Size(131, 36);
			this->Options->Text = L"Options";
			this->Options->Click += gcnew System::EventHandler(this, &gameWindow::toolStripMenuItem1_Click);
			// 
			// changeGameParametersToolStripMenuItem
			// 
			this->changeGameParametersToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->changeGameParametersToolStripMenuItem->Name = L"changeGameParametersToolStripMenuItem";
			this->changeGameParametersToolStripMenuItem->Size = System::Drawing::Size(344, 30);
			this->changeGameParametersToolStripMenuItem->Text = L"Change Game Parameters";
			this->changeGameParametersToolStripMenuItem->Click += gcnew System::EventHandler(this, &gameWindow::changeGameParametersToolStripMenuItem_Click);
			// 
			// viewLeaderboardToolStripMenuItem
			// 
			this->viewLeaderboardToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->viewLeaderboardToolStripMenuItem->Name = L"viewLeaderboardToolStripMenuItem";
			this->viewLeaderboardToolStripMenuItem->Size = System::Drawing::Size(344, 30);
			this->viewLeaderboardToolStripMenuItem->Text = L"View Leaderboard";
			// 
			// quitToolStripMenuItem
			// 
			this->quitToolStripMenuItem->Alignment = System::Windows::Forms::ToolStripItemAlignment::Right;
			this->quitToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Arial", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->quitToolStripMenuItem->Name = L"quitToolStripMenuItem";
			this->quitToolStripMenuItem->Size = System::Drawing::Size(82, 36);
			this->quitToolStripMenuItem->Text = L"Quit";
			this->quitToolStripMenuItem->Click += gcnew System::EventHandler(this, &gameWindow::quitToolStripMenuItem_Click);
			// 
			// startToolStripMenuItem
			// 
			this->startToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->startToolStripMenuItem->Name = L"startToolStripMenuItem";
			this->startToolStripMenuItem->Size = System::Drawing::Size(89, 36);
			this->startToolStripMenuItem->Text = L"Start";
			this->startToolStripMenuItem->Click += gcnew System::EventHandler(this, &gameWindow::startToolStripMenuItem_Click);
			// 
			// playerName
			// 
			this->playerName->AutoSize = true;
			this->playerName->BackColor = System::Drawing::Color::SandyBrown;
			this->playerName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->playerName->Location = System::Drawing::Point(53, 683);
			this->playerName->Name = L"playerName";
			this->playerName->Size = System::Drawing::Size(139, 25);
			this->playerName->TabIndex = 36;
			this->playerName->Text = L"PlayerName";
			// 
			// chipList
			// 
			this->chipList->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"chipList.ImageStream")));
			this->chipList->TransparentColor = System::Drawing::Color::Transparent;
			this->chipList->Images->SetKeyName(0, L"10.png");
			this->chipList->Images->SetKeyName(1, L"50.png");
			this->chipList->Images->SetKeyName(2, L"100.png");
			this->chipList->Images->SetKeyName(3, L"500.png");
			// 
			// chip10
			// 
			this->chip10->BackColor = System::Drawing::Color::Transparent;
			this->chip10->Location = System::Drawing::Point(1028, 505);
			this->chip10->Name = L"chip10";
			this->chip10->Size = System::Drawing::Size(70, 70);
			this->chip10->TabIndex = 7;
			this->chip10->TabStop = false;
			// 
			// chip50
			// 
			this->chip50->Location = System::Drawing::Point(1104, 505);
			this->chip50->Name = L"chip50";
			this->chip50->Size = System::Drawing::Size(70, 70);
			this->chip50->TabIndex = 6;
			this->chip50->TabStop = false;
			// 
			// chip100
			// 
			this->chip100->Location = System::Drawing::Point(1180, 505);
			this->chip100->Name = L"chip100";
			this->chip100->Size = System::Drawing::Size(70, 70);
			this->chip100->TabIndex = 5;
			this->chip100->TabStop = false;
			// 
			// chip500
			// 
			this->chip500->Location = System::Drawing::Point(1256, 505);
			this->chip500->Name = L"chip500";
			this->chip500->Size = System::Drawing::Size(70, 70);
			this->chip500->TabIndex = 4;
			this->chip500->TabStop = false;
			// 
			// playerStack
			// 
			this->playerStack->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"playerStack.ImageStream")));
			this->playerStack->TransparentColor = System::Drawing::Color::Transparent;
			this->playerStack->Images->SetKeyName(0, L"bigStack.png");
			this->playerStack->Images->SetKeyName(1, L"smallStack.png");
			this->playerStack->Images->SetKeyName(2, L"pile.png");
			// 
			// playerChips
			// 
			this->playerChips->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"playerChips.Image")));
			this->playerChips->Location = System::Drawing::Point(235, 514);
			this->playerChips->Name = L"playerChips";
			this->playerChips->Size = System::Drawing::Size(150, 150);
			this->playerChips->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->playerChips->TabIndex = 3;
			this->playerChips->TabStop = false;
			// 
			// winnings
			// 
			this->winnings->Location = System::Drawing::Point(875, 505);
			this->winnings->Name = L"winnings";
			this->winnings->Size = System::Drawing::Size(150, 150);
			this->winnings->TabIndex = 2;
			this->winnings->TabStop = false;
			// 
			// deck
			// 
			this->deck->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"deck.Image")));
			this->deck->Location = System::Drawing::Point(1155, 51);
			this->deck->Name = L"deck";
			this->deck->Size = System::Drawing::Size(105, 159);
			this->deck->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->deck->TabIndex = 1;
			this->deck->TabStop = false;
			// 
			// dealerStack
			// 
			this->dealerStack->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"dealerStack.ImageStream")));
			this->dealerStack->TransparentColor = System::Drawing::Color::Transparent;
			this->dealerStack->Images->SetKeyName(0, L"dealerChips.png");
			// 
			// dealerChips
			// 
			this->dealerChips->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"dealerChips.Image")));
			this->dealerChips->Location = System::Drawing::Point(893, 39);
			this->dealerChips->Name = L"dealerChips";
			this->dealerChips->Size = System::Drawing::Size(256, 150);
			this->dealerChips->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->dealerChips->TabIndex = 0;
			this->dealerChips->TabStop = false;
			// 
			// background
			// 
			this->background->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"background.Image")));
			this->background->Location = System::Drawing::Point(-66, -229);
			this->background->Name = L"background";
			this->background->Size = System::Drawing::Size(1449, 1060);
			this->background->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->background->TabIndex = 37;
			this->background->TabStop = false;
			// 
			// bgList
			// 
			this->bgList->ColorDepth = System::Windows::Forms::ColorDepth::Depth8Bit;
			this->bgList->ImageSize = System::Drawing::Size(16, 16);
			this->bgList->TransparentColor = System::Drawing::Color::Transparent;
			// 
			// dealerFig
			// 
			this->dealerFig->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"dealerFig.Image")));
			this->dealerFig->Location = System::Drawing::Point(49, 51);
			this->dealerFig->Margin = System::Windows::Forms::Padding(2);
			this->dealerFig->Name = L"dealerFig";
			this->dealerFig->Size = System::Drawing::Size(147, 127);
			this->dealerFig->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->dealerFig->TabIndex = 39;
			this->dealerFig->TabStop = false;
			// 
			// playerProfile
			// 
			this->playerProfile->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"playerProfile.Image")));
			this->playerProfile->Location = System::Drawing::Point(49, 514);
			this->playerProfile->Margin = System::Windows::Forms::Padding(2);
			this->playerProfile->Name = L"playerProfile";
			this->playerProfile->Size = System::Drawing::Size(147, 131);
			this->playerProfile->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->playerProfile->TabIndex = 40;
			this->playerProfile->TabStop = false;
			// 
			// dealerMsg
			// 
			this->dealerMsg->BackColor = System::Drawing::SystemColors::Info;
			this->dealerMsg->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dealerMsg->Location = System::Drawing::Point(1, 181);
			this->dealerMsg->Margin = System::Windows::Forms::Padding(2);
			this->dealerMsg->Name = L"dealerMsg";
			this->dealerMsg->Size = System::Drawing::Size(245, 85);
			this->dealerMsg->TabIndex = 41;
			this->dealerMsg->Text = L"";
			// 
			// pressStartLabel
			// 
			this->pressStartLabel->AutoSize = true;
			this->pressStartLabel->BackColor = System::Drawing::Color::Yellow;
			this->pressStartLabel->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 50.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->pressStartLabel->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pressStartLabel->Location = System::Drawing::Point(256, 38);
			this->pressStartLabel->Name = L"pressStartLabel";
			this->pressStartLabel->Size = System::Drawing::Size(821, 89);
			this->pressStartLabel->TabIndex = 42;
			this->pressStartLabel->Text = L"PRESS START TO BEGIN";
			// 
			// gameWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(1345, 763);
			this->Controls->Add(this->pressStartLabel);
			this->Controls->Add(this->dealerMsg);
			this->Controls->Add(this->playerProfile);
			this->Controls->Add(this->dealerFig);
			this->Controls->Add(this->dealerChips);
			this->Controls->Add(this->deck);
			this->Controls->Add(this->winnings);
			this->Controls->Add(this->playerChips);
			this->Controls->Add(this->chip500);
			this->Controls->Add(this->chip100);
			this->Controls->Add(this->chip50);
			this->Controls->Add(this->chip10);
			this->Controls->Add(this->playerName);
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
			this->Controls->Add(this->background);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MainMenuStrip = this->MenuBar;
			this->Name = L"gameWindow";
			this->Padding = System::Windows::Forms::Padding(10, 0, 10, 0);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chip10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chip50))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chip100))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chip500))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->playerChips))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->winnings))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->deck))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dealerChips))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->background))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dealerFig))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->playerProfile))->EndInit();
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
		if (start)
		{
			if (betPlaced == true)
			{
				return;
			}
			result = System::Convert::ToInt32(playerBetAmount->Text) + 10;
			if (result > playerCashTotal)
			{
				return;
			}
			playerBetAmount->Text = System::Convert::ToString(result);
			this->chip10->Image = chipList->Images[0];
			this->chip10->Visible = true;
		}
		else
		{
			return;
		}


	}
	private: System::Void bet50Button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (start)
		{
			if (betPlaced == true)
			{
				return;
			}
			result = System::Convert::ToInt32(playerBetAmount->Text) + 50;
			if (result > playerCashTotal)
			{
				return;
			}
			playerBetAmount->Text = System::Convert::ToString(result);
			this->chip50->Image = chipList->Images[1];
			this->chip50->Visible = true;
		}
		else
		{
			return;
		}

	}
	private: System::Void bet100Button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (start)
		{
			if (betPlaced == true)
			{
				return;
			}
			result = System::Convert::ToInt32(playerBetAmount->Text) + 100;
			if (result > playerCashTotal)
			{
				return;
			}
			playerBetAmount->Text = System::Convert::ToString(result);
			this->chip100->Image = chipList->Images[2];
			this->chip100->Visible = true;
		}
		else
		{
			return;
		}

	}
	private: System::Void bet500Button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (start)
		{
			if (betPlaced == true)
			{
				return;
			}
			result = System::Convert::ToInt32(playerBetAmount->Text) + 500;
			if (result > playerCashTotal)
			{
				return;
			}
			playerBetAmount->Text = System::Convert::ToString(result);
			this->chip500->Image = chipList->Images[3];
			this->chip500->Visible = true;
		}
		else
		{
			return;
		}

	}
	private: System::Void clearBetButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (betPlaced == true)
		{
			return;
		}
		playerBetAmount->Text = System::Convert::ToString(0);
		this->chip10->Visible = false;
		this->chip50->Visible = false;
		this->chip100->Visible = false;
		this->chip500->Visible = false;
	}

		   //HIT STAND DOUBLE BUTTONS
	private: System::Void hitButton_Click(System::Object^ sender, System::EventArgs^ e)
	{

		if (betPlaced == false || roundOver == true)
		{
			return;
		}

		newCard();

		if (this->playerCardBox01->Visible == false)

		{


			this->playerCardBox01->Image = Cards->Images[n];
			this->playerCardBox01->Visible = true;
		}

		else if (this->playerCardBox02->Visible == false)
		{

			this->playerCardBox02->Image = Cards->Images[n];
			this->playerCardBox02->Visible = true;
		}

		else if (this->playerCardBox03->Visible == false)
		{
			bool playerAce3 = false;
			this->playerCardBox03->Image = Cards->Images[n];
			this->playerCardBox03->Visible = true;
			playerValue += totalValue(n);
			if (playerAce == true) softAce += totalValue(n);
			if (n > 35 && n <= 39)
			{
				playerAce3 = true;
				playerAce = true;
			}

			if (!dealerBlackjack)
			{
				if (playerAce3)
				{
					if (playerValue == 21)
					{
						handTotalAmount->Text = "Blackjack!";
						playerWins();
						dealerTalks(4);
						roundOver = true;
					}
					else
					{
						softAce = playerValue - 10;
						handTotalAmount->Text = System::Convert::ToString(softAce) + "/" + System::Convert::ToString(playerValue);
					}
				}
				else
				{
					handTotalAmount->Text = System::Convert::ToString(playerValue);
				}
			}

			if (playerValue < 21 && (playerAce == true || playerAce3 == true))
			{
				handTotalAmount->Text = System::Convert::ToString(softAce) + "/" + System::Convert::ToString(playerValue);
			}

			if (softAce < 11 && playerValue < 21 && (playerAce == true || playerAce3 == true))
			{
				handTotalAmount->Text = System::Convert::ToString(softAce) + "/" + System::Convert::ToString(playerValue);
			}

			if (softAce >= 11 && softAce < 21 && (playerAce == true || playerAce3 == true))
			{
				handTotalAmount->Text = System::Convert::ToString(softAce);
			}

			if (playerValue > 21 && (playerAce == true || playerAce3 == true))
			{
				playerValue = softAce;
				handTotalAmount->Text = System::Convert::ToString(playerValue);
			}

			if (playerValue == 21)
			{
				handTotalAmount->Text = "Blackjack!";
				playerWins();
				dealerTalks(4);
				roundOver = true;
			}

			if (playerValue > 21)
			{
				handTotalAmount->Text = "You bust!";
				roundOver = true;
				playerLoses();
				dealerTalks(2);
			}


		}

		else if (this->playerCardBox04->Visible == false)
		{
			bool playerAce4 = false;
			this->playerCardBox04->Image = Cards->Images[n];
			this->playerCardBox04->Visible = true;
			playerValue += totalValue(n);
			if (playerAce == true) softAce += totalValue(n);
			if (n > 35 && n <= 39)
			{
				playerAce4 = true;
				playerAce = true;
			}

			if (!dealerBlackjack)
			{
				if (playerAce4)
				{
					if (playerValue == 21)
					{
						handTotalAmount->Text = "Blackjack!";
						playerWins();
						dealerTalks(4);
						roundOver = true;
					}
					else
					{
						softAce = playerValue - 10;
						handTotalAmount->Text = System::Convert::ToString(softAce) + "/" + System::Convert::ToString(playerValue);
					}
				}
				else
				{
					handTotalAmount->Text = System::Convert::ToString(playerValue);
				}
			}

			if (playerValue < 21 && (playerAce == true || playerAce4 == true))
			{
				handTotalAmount->Text = System::Convert::ToString(softAce) + "/" + System::Convert::ToString(playerValue);
			}

			if (softAce < 11 && playerValue < 21 && (playerAce == true || playerAce4 == true))
			{
				handTotalAmount->Text = System::Convert::ToString(softAce) + "/" + System::Convert::ToString(playerValue);
			}

			if (softAce >= 11 && softAce < 21 && (playerAce == true || playerAce4 == true))
			{
				handTotalAmount->Text = System::Convert::ToString(softAce);
			}

			if (playerValue > 21 && (playerAce == true || playerAce4 == true))
			{
				playerValue = softAce;
				handTotalAmount->Text = System::Convert::ToString(playerValue);
			}

			if (playerValue == 21)
			{
				handTotalAmount->Text = "Blackjack!";
				playerWins();
				dealerTalks(4);
				roundOver = true;
			}

			if (playerValue > 21)
			{
				handTotalAmount->Text = "You bust!";
				roundOver = true;
				playerLoses();
				dealerTalks(2);
			}
		}

		else if (this->playerCardBox05->Visible == false)
		{
			bool playerAce5 = false;
			this->playerCardBox05->Image = Cards->Images[n];
			this->playerCardBox05->Visible = true;
			playerValue += totalValue(n);
			if (playerAce == true) softAce += totalValue(n);

			if (n > 35 && n <= 39)
			{
				playerAce5 = true;
				playerAce = true;
			}

			if (!dealerBlackjack)
			{
				if (playerAce5)
				{
					if (playerValue == 21)
					{
						handTotalAmount->Text = "Blackjack!";
						playerWins();
						dealerTalks(4);
						roundOver = true;
					}
					else
					{
						softAce = playerValue - 10;
						handTotalAmount->Text = System::Convert::ToString(softAce) + "/" + System::Convert::ToString(playerValue);
					}
				}
				else
				{
					handTotalAmount->Text = System::Convert::ToString(playerValue);
				}
			}

			if (playerValue < 21 && (playerAce == true || playerAce5 == true))
			{
				handTotalAmount->Text = System::Convert::ToString(softAce) + "/" + System::Convert::ToString(playerValue);
			}

			if (softAce < 11 && playerValue < 21 && (playerAce == true || playerAce5 == true))
			{
				handTotalAmount->Text = System::Convert::ToString(softAce) + "/" + System::Convert::ToString(playerValue);
			}

			if (softAce >= 11 && softAce < 21 && (playerAce == true || playerAce5 == true))
			{
				handTotalAmount->Text = System::Convert::ToString(softAce);
			}

			if (playerValue > 21 && (playerAce == true || playerAce5 == true))
			{
				playerValue = softAce;
				handTotalAmount->Text = System::Convert::ToString(playerValue);
			}

			if (playerValue == 21)
			{
				handTotalAmount->Text = "Blackjack!";
				playerWins();
				dealerTalks(4);
				roundOver = true;
			}

			if (playerValue > 21)
			{
				handTotalAmount->Text = "You bust!";
				roundOver = true;
				dealerTalks(2);
			}


		}

		else if (this->playerCardBox06->Visible == false)
		{
			bool playerAce6 = false;
			this->playerCardBox06->Image = Cards->Images[n];
			this->playerCardBox06->Visible = true;
			playerValue += totalValue(n);
			if (playerAce == true) softAce += totalValue(n);

			if (n > 35 && n <= 39)
			{
				playerAce6 = true;
				playerAce = true;
			}

			if (!dealerBlackjack)
			{
				if (playerAce6)
				{
					if (playerValue == 21)
					{
						handTotalAmount->Text = "Blackjack!";
						playerWins();
						dealerTalks(4);
						roundOver = true;
					}
					else
					{
						softAce = playerValue - 10;
						handTotalAmount->Text = System::Convert::ToString(softAce) + "/" + System::Convert::ToString(playerValue);
					}
				}
				else
				{
					handTotalAmount->Text = System::Convert::ToString(playerValue);
				}
			}

			if (playerValue < 21 && (playerAce == true || playerAce6 == true))
			{
				handTotalAmount->Text = System::Convert::ToString(softAce) + "/" + System::Convert::ToString(playerValue);
			}

			if (softAce < 11 && playerValue < 21 && (playerAce == true || playerAce6 == true))
			{
				handTotalAmount->Text = System::Convert::ToString(softAce) + "/" + System::Convert::ToString(playerValue);
			}

			if (softAce >= 11 && softAce < 21 && (playerAce == true || playerAce6 == true))
			{
				handTotalAmount->Text = System::Convert::ToString(softAce);
			}

			if (playerValue > 21 && (playerAce == true || playerAce6 == true))
			{
				playerValue = softAce;
				handTotalAmount->Text = System::Convert::ToString(playerValue);
			}

			if (playerValue == 21)
			{
				handTotalAmount->Text = "Blackjack!";
				playerWins();
				dealerTalks(4);
				roundOver = true;
			}

			if (playerValue > 21)
			{
				handTotalAmount->Text = "You bust!";
				dealerTalks(2);
				roundOver = true;
			}

		}
		else
		{
			return resetTurn();
		}
		hit = true;
		return resetTurn();
	}

	private: System::Void doubleButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (!hit && betPlaced && !stand)
		{
			if (result > playerCashTotal)
			{
				dealerTalks(9);
				return;
			}

			result *= 2;
			playerBetAmount->Text = System::Convert::ToString(result);
			playerCashTotal -= System::Convert::ToInt32(playerBetAmount->Text) / 2;
			playerTotalCashAmount->Text = System::Convert::ToString(playerCashTotal);
			newCard();
			this->playerCardBox03->Image = Cards->Images[n];
			this->playerCardBox03->Visible = true;
			playerValue += totalValue(n);
			if (n > 35 && n <= 39)
			{
				if (!playerAce)
				{
					playerAce = true;
				}
				else if (playerAce && !playerAce2)
				{
					playerAce2 = true;
				}
				else
				{
					playerAce3 = true;
				}
			}
			if (playerAce && playerValue > 21)
			{
				playerValue -= 10;
			}
			else if (playerAce && playerAce2 && playerValue > 21)
			{
				playerValue -= 10;
				if (playerValue > 21)
				{
					playerValue -= 10;
				}
			}
			else if (playerAce && playerAce2 && playerAce3)
			{
				playerValue = 13;
			}
			if (playerValue == 21)
			{
				handTotalAmount->Text = "Blackjack!";
				playerWins();
				dealerTalks(4);
				roundOver = true;
				return resetTurn();
			}
			if (playerValue > 21)
			{
				handTotalAmount->Text = "Bust!";
				playerLoses();
				dealerTalks(2);
				roundOver = true;
				return resetTurn();
			}
			else
			{
				handTotalAmount->Text = System::Convert::ToString(playerValue);
			}
			standExecute();
			doubleDown = true;
		}
	}

	private: System::Void placeBet_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (betPlaced == true || System::Convert::ToInt32(playerBetAmount->Text) == 0)
		{
			return;
		}
		dealerTalks(1);
		playerCashTotal -= System::Convert::ToInt32(playerBetAmount->Text);
		playerTotalCashAmount->Text = System::Convert::ToString(playerCashTotal);

		for (int i = 0; i < 5; i++)
		{
			newCard();

			if (i == 0)
			{
				this->playerCardBox01->Image = Cards->Images[n];
				this->playerCardBox01->Visible = true;
				playerValue = totalValue(n);
				if (n > 35 && n <= 39)
				{
					playerAce = true;
				}
			}
			else if (i == 1)
			{
				this->dealerCardBox01->Image = Cards->Images[n];
				this->dealerCardBox01->Visible = true;
				dealerValue = totalValue(n);
				hiddenDealerValue = dealerValue;
				if (n > 35 && n <= 39)
				{
					dealerHasAce();
				}
			}
			else if (i == 2)
			{
				this->playerCardBox02->Image = Cards->Images[n];
				this->playerCardBox02->Visible = true;
				playerValue += totalValue(n);
				if (n > 35 && n <= 39)
				{
					if (!playerAce)
					{
						playerAce = true;
					}
					else
					{
						playerAce2 = true;
					}
				}
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
				dealerValue += totalValue(n);
				if (n > 35 && n <= 39)
				{
					dealerHasAce();
					if (!dealerAce2)
					{
						secondAce = true;
					}
				}
			}
		}
		if (dealerAce1 || dealerAce2)
		{
			if (dealerValue == 21)
			{
				this->dealerCardBox02->Image = this->dealerCardBox03->Image;
				this->dealerCardBox02->Visible = true;
				dealerHandTotal->Text = "Blackjack!";
				handTotalAmount->Text = "You lose!";
				dealerTalks(2);
				playerLoses();
				roundOver = true;
				dealerBlackjack = true;
			}
			else if (dealerAce1)
			{
				if (secondAce)
				{
					dealerHandTotal->Text = System::Convert::ToString(hiddenDealerValue);
				}
				else
				{
					dealerHandTotal->Text = "1/11";
				}
			}
			else
			{
				dealerHandTotal->Text = System::Convert::ToString(hiddenDealerValue);
			}

		}
		else
		{
			dealerHandTotal->Text = System::Convert::ToString(hiddenDealerValue);
		}

		if (!dealerBlackjack)
		{
			if (playerAce && playerAce2)
			{
				playerValue -= 10;
				handTotalAmount->Text = "2/" + System::Convert::ToString(playerValue);

			}
			else if (playerAce)
			{
				if (playerValue == 21)
				{
					handTotalAmount->Text = "Blackjack!";
					playerWins();
					dealerTalks(4);
					roundOver = true;
				}
				else
				{
					softAce = playerValue - 10;
					handTotalAmount->Text = System::Convert::ToString(softAce) + "/" + System::Convert::ToString(playerValue);
					standAce = true;
				}
			}
			else
			{
				handTotalAmount->Text = System::Convert::ToString(playerValue);
			}
		}

		if (dealerBlackjack && playerValue == 21)
		{
			handTotalAmount->Text = "Blackjack!";
			playerWins();
			dealerTalks(4);
			roundOver = true;
			return resetTurn();
		}

		betPlaced = true;
		return resetTurn();
	}

	private: System::Void standButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		standExecute();
	}

	private: void standExecute()
	{
		if (standAce)
		{
			handTotalAmount->Text = System::Convert::ToString(playerValue);
		}
		if (betPlaced == false || roundOver == true)
		{
			return;
		}
		if (playerValue > 21)
		{
			this->dealerCardBox02->Image = this->dealerCardBox03->Image;
			this->dealerCardBox02->Visible = true;
			dealerHandTotal->Text = System::Convert::ToString(dealerValue);
		}
		else if (playerValue != 21)
		{
			this->dealerCardBox02->Image = this->dealerCardBox03->Image;
			this->dealerCardBox02->Visible = true;
			dealerHandTotal->Text = System::Convert::ToString(dealerValue);

			if (dealerValue > 21)
			{
				dealerValue -= 10;
				dealerHandTotal->Text = "2/" + System::Convert::ToString(dealerValue);
			}
			if (dealerValue < 17)
			{
				newCard();
				this->dealerCardBox03->Image = Cards->Images[n];
				this->dealerCardBox03->Visible = true;
				if (n > 35 && n <= 39)
				{
					dealerHasAce();
				}
				addShowDealerHand();
				if (dealerValue < 17)
				{
					newCard();
					this->dealerCardBox04->Image = Cards->Images[n];
					this->dealerCardBox04->Visible = true;
					if (n > 35 && n <= 39)
					{
						dealerHasAce();
					}
					addShowDealerHand();
					if (dealerValue < 17)
					{
						newCard();
						this->dealerCardBox05->Image = Cards->Images[n];
						this->dealerCardBox05->Visible = true;
						if (n > 35 && n <= 39)
						{
							dealerHasAce();
						}
						addShowDealerHand();
						if (dealerValue < 17)
						{
							newCard();
							this->dealerCardBox06->Image = Cards->Images[n];
							this->dealerCardBox06->Visible = true;
							if (n > 35 && n <= 39)
							{
								dealerHasAce();
							}
							addShowDealerHand();
							if (dealerValue < 17)
							{
								newCard();
								this->dealerCardBox06->Image = Cards->Images[n];
								this->dealerCardBox06->Visible = true;
								if (n > 35 && n <= 39)
								{
									dealerHasAce();
								}
								addShowDealerHand();
							}
						}
					}
				}
			}
			if (roundOver == false)
			{
				if (handTotalAmount->Text == "Blackjack!")
				{
					playerWins();
					dealerTalks(4);
					roundOver = true;
				}
				else if (dealerHandTotal->Text == "Dealer Busts!")
				{
					playerWins();
					dealerTalks(3);
					roundOver = true;
				}
				else if (playerValue > softAce && playerValue > dealerValue)
				{
					playerWins();
					dealerTalks(6);
					roundOver = true;
				}
				else if (playerValue == dealerValue)
				{
					handTotalAmount->Text = System::Convert::ToInt32(handTotalAmount->Text) + " Push";
					playerTies();
					dealerTalks(8);
					roundOver = true;
				}
				else
				{
					playerLoses();
					dealerTalks(7);
					roundOver = true;
				}
			}
		}
		stand = true;
		resetTurn();
	}

	private: void dealerHasAce()
	{
		if (!dealerAce1)
		{
			dealerAce1 = true;
		}
		else if (!dealerAce2)
		{
			dealerAce2 = true;
		}
		else if (!dealerAce3)
		{
			dealerAce3 = true;
		}
		else
		{
			dealerAce4 = true;
		}
	}

	private: void addShowDealerHand()
	{
		dealerValue += totalValue(n);
		if (dealerValue > 21)
		{
			if (dealerAce1 && !ace)
			{
				dealerValue -= 10;
				dealerHandTotal->Text = System::Convert::ToString(dealerValue);
				ace = true;
			}
			else if (dealerAce1 && dealerAce2 && !ace2)
			{
				dealerValue -= 10;
				dealerHandTotal->Text = System::Convert::ToString(dealerValue);
				ace2 = true;
			}
			else if (dealerAce1 && dealerAce2 && dealerAce3 && !ace3)
			{
				dealerValue -= 10;
				dealerHandTotal->Text = System::Convert::ToString(dealerValue);
				ace3 = true;
			}
			else if (dealerAce1 && dealerAce2 && dealerAce3 && dealerAce4 && !ace4)
			{
				dealerValue -= 10;
				dealerHandTotal->Text = System::Convert::ToString(dealerValue);
				ace4 = true;
			}
			else
			{
				dealerHandTotal->Text = "Dealer Busts!";
				dealerTalks(3);
			}
		}
		else
		{
			dealerHandTotal->Text = System::Convert::ToString(dealerValue);
		}
	}

	private: int newCard()
	{
		n = rand() % (int)52;

		while (System::Convert::ToBoolean(usedCards[n]) == true)
		{
			n = rand() % (int)52;
		}

		usedCards[n] = true;

		return n;
	}

	private: System::Void reset_Click(System::Object^ sender, System::EventArgs^ e)

	{
		resetExecute();
	}

	private: void resetExecute()
	{
		betPlaced = false;
		if (playerCashTotal < 2500 && playerCashTotal > 0)
		{
			this->playerChips->Image = playerStack->Images[1];
		}
		else if (playerCashTotal > 2500)
		{
			this->playerChips->Image = playerStack->Images[0];
		}
		else
		{
			this->playerChips->Visible = false;
		}

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

		this->chip10->Visible = false;
		this->chip50->Visible = false;
		this->chip100->Visible = false;
		this->chip500->Visible = false;
		this->winnings->Visible = false;

		dealerMsg->Text = "";

		for (int i = 0; i < 52; i++)
		{
			usedCards[i] = false;
		}
		handTotalAmount->Text = System::Convert::ToString(0);
		dealerHandTotal->Text = System::Convert::ToString(0);
		playerBetAmount->Text = System::Convert::ToString(0);
		n = 0;
		playerValue = 0;
		softAce = 0;
		PlayerValue2Exists = false;
		playerAce = false;
		playerAce2 = false;
		playerAce3 = false;
		dealerBlackjack = false;
		dealerAce1 = false;
		dealerAce2 = false;
		dealerAce3 = false;
		dealerAce4 = false;
		secondAce = false;
		hit = false;
		stand = false;
		doubleDown = false;
		roundOver = false;
		ace = false;
		ace2 = false;
		ace3 = false;
		ace4 = false;
		standAce = false;
	}

	private: void resetTurn()
	{
		if (roundOver)
		{
			Update();
			Sleep(3000);
			resetExecute();
		}
	}

	private: void playerWins()
	{
		playerCashTotal += 2 * System::Convert::ToInt32(playerBetAmount->Text);
		playerTotalCashAmount->Text = System::Convert::ToString(playerCashTotal);
		this->winnings->Image = playerStack->Images[2];
		this->winnings->Visible = true;
	}

	private: void playerTies()
	{
		playerCashTotal += System::Convert::ToInt32(playerBetAmount->Text);
		playerTotalCashAmount->Text = System::Convert::ToString(playerCashTotal);
	}

	private: int totalValue(int n)
	{
		int value{};
		if (n <= 3) value = 2;
		else if (n > 3 && n <= 7) value = 3;
		else if (n > 7 && n <= 11) value = 4;
		else if (n > 11 && n <= 15) value = 5;
		else if (n > 15 && n <= 19) value = 6;
		else if (n > 19 && n <= 23) value = 7;
		else if (n > 23 && n <= 27) value = 8;
		else if (n > 27 && n <= 31) value = 9;
		else if (n > 31 && n <= 35) value = 10;
		else if (n > 35 && n <= 39) value = 11;
		else if (n > 39 && n <= 51) value = 10;

		return value;
	}

		   //Options Menu Bar
	private: System::Void toolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {

	}
		   //Exit Game Option
	private: System::Void quitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::DialogResult res = MessageBox::Show("Quit the game now? ", "Quit the game", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
		try {
			if (System::Windows::Forms::DialogResult::Yes == res) {
				exit(3);
			}
		}
		catch (...) {

		}
	}
		   //Change Game Parameter -> Set player number
	private: System::Void changeGameParametersToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		//MessageBox::Show("Set Player Number: ", "Set Player Number: ", MessageBoxButtons::OKCancel);Form setPlayer;
		//Microsoft::VisualBasic::Interaction::InputBox(L"Enter Player Number:", L"Player Settings", L"1 - 5", 500, 500);
		gameStart();
	}

		   //Enter player name 
	private:
		String^ userName;
		System::Void startToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			userName = Microsoft::VisualBasic::Interaction::InputBox(L"Enter Player Name:", L"Player Name", L"Your Name", 500, 500);
			playerName->Text = userName;
			gameStart();
			MessageBox::Show("Place your bet to start: ", "Start New Game");
			start = true;
			this->pressStartLabel->Visible = false;
		}

		//Player loses game
	private: void playerLoses() {
		if (playerCashTotal <= 0) {
			if (MessageBox::Show("You lose! \n Play again?", "Game Over!", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::No) {
				Application::Exit();
			}
			else {
				resetExecute();
				playerCashTotal = moneyDefault;
				playerTotalCashAmount->Text = System::Convert::ToString(playerCashTotal);
			}
		}

	}

	private: void gameStart() {
		String^ moneyTemp = "0";

		while (true) {
			moneyTemp = Microsoft::VisualBasic::Interaction::InputBox(L"Enter Player Starting Money:", L"Game Start", L"500 to 50,000", 500, 500);
			if (moneyTemp == """") {
				moneyTemp = "5000";
			}
			if (moneyTemp == "500 to 50,000") {
				moneyTemp = "5000";
			}
			try {
				moneyDefault = System::Convert::ToInt32(moneyTemp);
			}
			catch (...) {
				continue;
			}

			break;
		}


		//moneyDefault = System::Convert::ToInt32(moneyTemp);
		playerCashTotal = moneyDefault;
		if (playerCashTotal < 500) {
			playerCashTotal = 5000;
			gameStart();
		}
		if (playerCashTotal > 50000) {
			playerCashTotal = 5000;
			gameStart();
		}

		playerTotalCashAmount->Text = System::Convert::ToString(playerCashTotal);

	}

		   //  Displays a talkbox of the dealer to give the player instructions
	private: void dealerTalks(int msgNum) {
		switch (msgNum) {
		case 1:
			dealerMsg->Text = "Please press the hit, stand or double button below";
			break;
		case 2:
			dealerMsg->Text = "You bust!";
			break;
		case 3:
			dealerMsg->Text = "Dealer busts! You win!";
			break;
		case 4:
			dealerMsg->Text = "Blackjack! You win!";
			break;
		case 5:
			dealerMsg->Text = "Blackjack! Dealer wins!";
			break;
		case 6:
			dealerMsg->Text = "You win!";
			break;
		case 7:
			dealerMsg->Text = "You lost!";
			break;
		case 8:
			dealerMsg->Text = "Tie, another round?";
			break;
		case 9:
			dealerMsg->Text = "You don't have enough chips to Double!";
			break;
		}
	}
	};

}