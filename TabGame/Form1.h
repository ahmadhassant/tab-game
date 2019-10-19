#pragma once
#include <time.h>
namespace TabGame {

#pragma region  form Initializing Component


	using namespace System;
	using namespace System::Globalization;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Media;
	

	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{



	private: System::Windows::Forms::ListBox^  listBox11;


	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::Button^  btnCancel;
	private: System::Windows::Forms::Button^  btnGrouping;
	private: System::Windows::Forms::Button^  btnContinueMoving;


	private: System::Windows::Forms::Splitter^  splitter1;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::CheckBox^  checkBox4;
	private: System::Windows::Forms::GroupBox^  groupBox6;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::PictureBox^  picBackground;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::ImageList^  imageList1;


	private: System::Windows::Forms::TextBox^  textBox1;

	private: System::Windows::Forms::GroupBox^  groupBox7;
	private: System::Windows::Forms::TrackBar^  trackBar1;
	private: System::Windows::Forms::CheckBox^  checkBox5;
	private: System::Windows::Forms::CheckBox^  checkBox6;
	private: System::Windows::Forms::ListBox^  listBox10;
	private: System::Windows::Forms::CheckBox^  checkBox7;
	private: System::Windows::Forms::Timer^  timer2;
	private: System::Windows::Forms::GroupBox^  groupBox8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::ListBox^  listBox9;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::ListBox^  listBox8;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::ListBox^  listBox7;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::ListBox^  listBox6;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::ListBox^  listBox5;
	private: System::Windows::Forms::ListBox^  listBox4;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::ListBox^  lstHistory;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::ImageList^  imageList2;

	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  newGameToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  optionsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;


	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::Button^  button3;



























	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::ComboBox^  cmbPlayer2Level;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::CheckBox^  checkBox8;
	private: System::Windows::Forms::ListBox^  listBox19;
	private: System::Windows::Forms::ListBox^  listBox17;
	private: System::Windows::Forms::ListBox^  listBox15;


	private: System::Windows::Forms::ComboBox^  cmbPlayer1Level;


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
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::Button^  btnPlay;
	private: System::Windows::Forms::Button^  btnPlayerChanging;



	private: System::Windows::Forms::Button^  btnThrowSticks;
	private: System::Windows::Forms::Button^  btnSoldiers;


	private: System::Windows::Forms::ListBox^  lbTempMovements;

	private: System::Windows::Forms::ListBox^  lbMovements;
	private: System::Windows::Forms::ListBox^  lbSoldierTarget;


	private: System::Windows::Forms::ListBox^  lbSoldierMovements;

	private: System::Windows::Forms::ListBox^  lbMovementSoldiers;
	private: System::Windows::Forms::Label^  lblInfo;




	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  lblStatics;


	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  lblMsg;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::ListBox^  listBox2;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  btnThrowOrNew;

	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::ListBox^  listBox3;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Button^  btnMoveOneSoldier;
	private: System::Windows::Forms::Button^  btnMoveAllSoldiers;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::CheckBox^  checkBox3;













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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->splitter1 = (gcnew System::Windows::Forms::Splitter());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->lblMsg = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->btnPlay = (gcnew System::Windows::Forms::Button());
			this->btnPlayerChanging = (gcnew System::Windows::Forms::Button());
			this->btnThrowSticks = (gcnew System::Windows::Forms::Button());
			this->btnSoldiers = (gcnew System::Windows::Forms::Button());
			this->lbTempMovements = (gcnew System::Windows::Forms::ListBox());
			this->lbSoldierTarget = (gcnew System::Windows::Forms::ListBox());
			this->lbSoldierMovements = (gcnew System::Windows::Forms::ListBox());
			this->lbMovementSoldiers = (gcnew System::Windows::Forms::ListBox());
			this->lblInfo = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lbMovements = (gcnew System::Windows::Forms::ListBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->lblStatics = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->btnThrowOrNew = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->btnMoveAllSoldiers = (gcnew System::Windows::Forms::Button());
			this->btnMoveOneSoldier = (gcnew System::Windows::Forms::Button());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->listBox11 = (gcnew System::Windows::Forms::ListBox());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->btnGrouping = (gcnew System::Windows::Forms::Button());
			this->btnContinueMoving = (gcnew System::Windows::Forms::Button());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->listBox10 = (gcnew System::Windows::Forms::ListBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->picBackground = (gcnew System::Windows::Forms::PictureBox());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->cmbPlayer1Level = (gcnew System::Windows::Forms::ComboBox());
			this->checkBox8 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->cmbPlayer2Level = (gcnew System::Windows::Forms::ComboBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->checkBox7 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->listBox9 = (gcnew System::Windows::Forms::ListBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->listBox8 = (gcnew System::Windows::Forms::ListBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->listBox7 = (gcnew System::Windows::Forms::ListBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->listBox6 = (gcnew System::Windows::Forms::ListBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->listBox5 = (gcnew System::Windows::Forms::ListBox());
			this->listBox4 = (gcnew System::Windows::Forms::ListBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->lstHistory = (gcnew System::Windows::Forms::ListBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->imageList2 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newGameToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->optionsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->listBox19 = (gcnew System::Windows::Forms::ListBox());
			this->listBox17 = (gcnew System::Windows::Forms::ListBox());
			this->listBox15 = (gcnew System::Windows::Forms::ListBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar1))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			this->groupBox3->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->picBackground))->BeginInit();
			this->groupBox7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			this->groupBox8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(3, 25);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(905, 313);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Visible = false;
			this->pictureBox1->MouseLeave += gcnew System::EventHandler(this, &Form1::pictureBox1_MouseLeave);
			this->pictureBox1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::pictureBox1_MouseMove);
			this->pictureBox1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::pictureBox1_MouseDown);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button9);
			this->groupBox1->Controls->Add(this->trackBar1);
			this->groupBox1->Controls->Add(this->checkBox5);
			this->groupBox1->Controls->Add(this->splitter1);
			this->groupBox1->Controls->Add(this->button8);
			this->groupBox1->Controls->Add(this->lblMsg);
			this->groupBox1->Controls->Add(this->checkBox1);
			this->groupBox1->Controls->Add(this->btnPlay);
			this->groupBox1->Controls->Add(this->btnPlayerChanging);
			this->groupBox1->Controls->Add(this->btnThrowSticks);
			this->groupBox1->Controls->Add(this->btnSoldiers);
			this->groupBox1->Controls->Add(this->lbTempMovements);
			this->groupBox1->Controls->Add(this->lbSoldierTarget);
			this->groupBox1->Controls->Add(this->lbSoldierMovements);
			this->groupBox1->Controls->Add(this->lbMovementSoldiers);
			this->groupBox1->Controls->Add(this->lblInfo);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Enabled = false;
			this->groupBox1->Location = System::Drawing::Point(19, 506);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(375, 234);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(112, 55);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 23);
			this->button9->TabIndex = 41;
			this->button9->Text = L"button9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// trackBar1
			// 
			this->trackBar1->LargeChange = 100;
			this->trackBar1->Location = System::Drawing::Point(-49, 32);
			this->trackBar1->Maximum = 10000;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(130, 45);
			this->trackBar1->SmallChange = 50;
			this->trackBar1->TabIndex = 30;
			this->trackBar1->Value = 500;
			this->trackBar1->Visible = false;
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Checked = true;
			this->checkBox5->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox5->Location = System::Drawing::Point(-49, 5);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(75, 17);
			this->checkBox5->TabIndex = 29;
			this->checkBox5->Text = L"delay time";
			this->checkBox5->UseVisualStyleBackColor = true;
			this->checkBox5->Visible = false;
			// 
			// splitter1
			// 
			this->splitter1->Location = System::Drawing::Point(3, 16);
			this->splitter1->Name = L"splitter1";
			this->splitter1->Size = System::Drawing::Size(3, 215);
			this->splitter1->TabIndex = 28;
			this->splitter1->TabStop = false;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(25, 54);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 41;
			this->button8->Text = L"revarseBoard";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Visible = false;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// lblMsg
			// 
			this->lblMsg->AutoSize = true;
			this->lblMsg->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblMsg->ForeColor = System::Drawing::Color::MediumBlue;
			this->lblMsg->Location = System::Drawing::Point(122, 36);
			this->lblMsg->MaximumSize = System::Drawing::Size(250, 0);
			this->lblMsg->Name = L"lblMsg";
			this->lblMsg->Size = System::Drawing::Size(13, 16);
			this->lblMsg->TabIndex = 27;
			this->lblMsg->Text = L":";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Location = System::Drawing::Point(156, 201);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(150, 17);
			this->checkBox1->TabIndex = 26;
			this->checkBox1->Text = L"remove played movement";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// btnPlay
			// 
			this->btnPlay->Enabled = false;
			this->btnPlay->Location = System::Drawing::Point(302, 83);
			this->btnPlay->Name = L"btnPlay";
			this->btnPlay->Size = System::Drawing::Size(47, 108);
			this->btnPlay->TabIndex = 24;
			this->btnPlay->Text = L"play";
			this->btnPlay->UseVisualStyleBackColor = true;
			this->btnPlay->Click += gcnew System::EventHandler(this, &Form1::btnPlay_Click);
			// 
			// btnPlayerChanging
			// 
			this->btnPlayerChanging->Enabled = false;
			this->btnPlayerChanging->Location = System::Drawing::Point(6, 197);
			this->btnPlayerChanging->Name = L"btnPlayerChanging";
			this->btnPlayerChanging->Size = System::Drawing::Size(94, 23);
			this->btnPlayerChanging->TabIndex = 25;
			this->btnPlayerChanging->Text = L"change player";
			this->btnPlayerChanging->UseVisualStyleBackColor = true;
			this->btnPlayerChanging->Click += gcnew System::EventHandler(this, &Form1::btnPlayerChanging_Click);
			// 
			// btnThrowSticks
			// 
			this->btnThrowSticks->Location = System::Drawing::Point(6, 83);
			this->btnThrowSticks->Name = L"btnThrowSticks";
			this->btnThrowSticks->Size = System::Drawing::Size(75, 33);
			this->btnThrowSticks->TabIndex = 23;
			this->btnThrowSticks->Text = L"Throw Sticks";
			this->btnThrowSticks->UseVisualStyleBackColor = true;
			this->btnThrowSticks->Click += gcnew System::EventHandler(this, &Form1::btnThrowSticks_Click);
			// 
			// btnSoldiers
			// 
			this->btnSoldiers->Enabled = false;
			this->btnSoldiers->Location = System::Drawing::Point(87, 84);
			this->btnSoldiers->Name = L"btnSoldiers";
			this->btnSoldiers->Size = System::Drawing::Size(51, 108);
			this->btnSoldiers->TabIndex = 22;
			this->btnSoldiers->Text = L"soldiers by steps";
			this->btnSoldiers->UseVisualStyleBackColor = true;
			this->btnSoldiers->Click += gcnew System::EventHandler(this, &Form1::btnSoldiers_Click);
			// 
			// lbTempMovements
			// 
			this->lbTempMovements->FormattingEnabled = true;
			this->lbTempMovements->Items->AddRange(gcnew cli::array< System::Object^  >(5) {L"1", L"2", L"3", L"4", L"6"});
			this->lbTempMovements->Location = System::Drawing::Point(6, 122);
			this->lbTempMovements->Name = L"lbTempMovements";
			this->lbTempMovements->Size = System::Drawing::Size(31, 69);
			this->lbTempMovements->TabIndex = 21;
			this->lbTempMovements->DoubleClick += gcnew System::EventHandler(this, &Form1::lbTempMovements_DoubleClick);
			// 
			// lbSoldierTarget
			// 
			this->lbSoldierTarget->FormattingEnabled = true;
			this->lbSoldierTarget->Location = System::Drawing::Point(234, 83);
			this->lbSoldierTarget->Name = L"lbSoldierTarget";
			this->lbSoldierTarget->Size = System::Drawing::Size(62, 108);
			this->lbSoldierTarget->TabIndex = 17;
			this->lbSoldierTarget->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::lbSoldierTarget_SelectedIndexChanged);
			// 
			// lbSoldierMovements
			// 
			this->lbSoldierMovements->FormattingEnabled = true;
			this->lbSoldierMovements->Location = System::Drawing::Point(193, 83);
			this->lbSoldierMovements->Name = L"lbSoldierMovements";
			this->lbSoldierMovements->Size = System::Drawing::Size(31, 108);
			this->lbSoldierMovements->TabIndex = 20;
			this->lbSoldierMovements->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::lbSoldierMovements_SelectedIndexChanged);
			// 
			// lbMovementSoldiers
			// 
			this->lbMovementSoldiers->FormattingEnabled = true;
			this->lbMovementSoldiers->Location = System::Drawing::Point(156, 83);
			this->lbMovementSoldiers->Name = L"lbMovementSoldiers";
			this->lbMovementSoldiers->Size = System::Drawing::Size(31, 108);
			this->lbMovementSoldiers->TabIndex = 19;
			this->lbMovementSoldiers->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::lbMovementSoldiers_SelectedIndexChanged);
			// 
			// lblInfo
			// 
			this->lblInfo->AutoSize = true;
			this->lblInfo->Location = System::Drawing::Point(138, 226);
			this->lblInfo->Name = L"lblInfo";
			this->lblInfo->Size = System::Drawing::Size(0, 13);
			this->lblInfo->TabIndex = 16;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(22, 43);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(41, 13);
			this->label1->TabIndex = 16;
			this->label1->Text = L"label18";
			this->label1->Visible = false;
			// 
			// lbMovements
			// 
			this->lbMovements->FormattingEnabled = true;
			this->lbMovements->Location = System::Drawing::Point(955, 396);
			this->lbMovements->Name = L"lbMovements";
			this->lbMovements->Size = System::Drawing::Size(31, 69);
			this->lbMovements->TabIndex = 18;
			this->lbMovements->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::lbMovements_SelectedIndexChanged);
			this->lbMovements->DoubleClick += gcnew System::EventHandler(this, &Form1::lbMovements_DoubleClick);
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Checked = true;
			this->checkBox4->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox4->ForeColor = System::Drawing::SystemColors::Control;
			this->checkBox4->Location = System::Drawing::Point(30, 23);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(141, 17);
			this->checkBox4->TabIndex = 29;
			this->checkBox4->Text = L"Computer vs. Computer";
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::Transparent;
			this->label17->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Bold));
			this->label17->ForeColor = System::Drawing::Color::White;
			this->label17->Location = System::Drawing::Point(49, 344);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(81, 23);
			this->label17->TabIndex = 27;
			this->label17->Text = L"Player1";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(221, 42);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(34, 82);
			this->listBox1->TabIndex = 28;
			// 
			// lblStatics
			// 
			this->lblStatics->AutoSize = true;
			this->lblStatics->Location = System::Drawing::Point(6, 72);
			this->lblStatics->Name = L"lblStatics";
			this->lblStatics->Size = System::Drawing::Size(49, 13);
			this->lblStatics->TabIndex = 16;
			this->lblStatics->Text = L"lblStatics";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(306, 96);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(102, 23);
			this->button2->TabIndex = 18;
			this->button2->Text = L"custom arrBoard";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(306, 67);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 19;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Location = System::Drawing::Point(261, 42);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(34, 82);
			this->listBox2->TabIndex = 28;
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::Transparent;
			this->groupBox2->Controls->Add(this->btnThrowOrNew);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->pictureBox3);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Location = System::Drawing::Point(576, 335);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(324, 58);
			this->groupBox2->TabIndex = 29;
			this->groupBox2->TabStop = false;
			// 
			// btnThrowOrNew
			// 
			this->btnThrowOrNew->BackColor = System::Drawing::Color::Transparent;
			this->btnThrowOrNew->Location = System::Drawing::Point(224, 14);
			this->btnThrowOrNew->Name = L"btnThrowOrNew";
			this->btnThrowOrNew->Size = System::Drawing::Size(85, 33);
			this->btnThrowOrNew->TabIndex = 23;
			this->btnThrowOrNew->Text = L"Throw Sticks";
			this->btnThrowOrNew->UseVisualStyleBackColor = false;
			this->btnThrowOrNew->Click += gcnew System::EventHandler(this, &Form1::btnThrowSticks_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::MediumBlue;
			this->label2->Location = System::Drawing::Point(6, 16);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(81, 23);
			this->label2->TabIndex = 27;
			this->label2->Text = L"Player1";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(1, 9);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(317, 48);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 28;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::MediumBlue;
			this->label3->Location = System::Drawing::Point(88, 68);
			this->label3->MaximumSize = System::Drawing::Size(250, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(13, 16);
			this->label3->TabIndex = 27;
			this->label3->Text = L":";
			this->label3->Visible = false;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(288, 42);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(104, 23);
			this->button4->TabIndex = 30;
			this->button4->Text = L"show saved info";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Visible = false;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Checked = true;
			this->checkBox2->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox2->Location = System::Drawing::Point(25, 464);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(161, 17);
			this->checkBox2->TabIndex = 31;
			this->checkBox2->Text = L"auto save last 5 movements";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->Visible = false;
			// 
			// listBox3
			// 
			this->listBox3->FormattingEnabled = true;
			this->listBox3->Location = System::Drawing::Point(25, 336);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(306, 95);
			this->listBox3->TabIndex = 32;
			this->listBox3->Visible = false;
			this->listBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::listBox3_SelectedIndexChanged);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->button5);
			this->groupBox3->Controls->Add(this->btnMoveAllSoldiers);
			this->groupBox3->Controls->Add(this->btnMoveOneSoldier);
			this->groupBox3->Location = System::Drawing::Point(251, 249);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(111, 91);
			this->groupBox3->TabIndex = 29;
			this->groupBox3->TabStop = false;
			this->groupBox3->Visible = false;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(5, 62);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(102, 25);
			this->button5->TabIndex = 23;
			this->button5->Text = L"«·€«¡ «·Õ—ﬂ…";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// btnMoveAllSoldiers
			// 
			this->btnMoveAllSoldiers->Location = System::Drawing::Point(5, 36);
			this->btnMoveAllSoldiers->Name = L"btnMoveAllSoldiers";
			this->btnMoveAllSoldiers->Size = System::Drawing::Size(102, 25);
			this->btnMoveAllSoldiers->TabIndex = 23;
			this->btnMoveAllSoldiers->Text = L" Õ—Ìﬂ Ã„Ì⁄ «·Ã‰Êœ";
			this->btnMoveAllSoldiers->UseVisualStyleBackColor = true;
			this->btnMoveAllSoldiers->Click += gcnew System::EventHandler(this, &Form1::btnMoveAllSoldiers_Click);
			// 
			// btnMoveOneSoldier
			// 
			this->btnMoveOneSoldier->Location = System::Drawing::Point(5, 8);
			this->btnMoveOneSoldier->Name = L"btnMoveOneSoldier";
			this->btnMoveOneSoldier->Size = System::Drawing::Size(102, 25);
			this->btnMoveOneSoldier->TabIndex = 23;
			this->btnMoveOneSoldier->Text = L" Õ—Ìﬂ Ã‰œÌ Ê«Õœ";
			this->btnMoveOneSoldier->UseVisualStyleBackColor = true;
			this->btnMoveOneSoldier->Click += gcnew System::EventHandler(this, &Form1::btnMoveOneSoldier_Click);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Checked = true;
			this->checkBox3->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox3->Location = System::Drawing::Point(192, 464);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(66, 17);
			this->checkBox3->TabIndex = 31;
			this->checkBox3->Text = L"save file";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->Visible = false;
			// 
			// listBox11
			// 
			this->listBox11->FormattingEnabled = true;
			this->listBox11->Location = System::Drawing::Point(221, 130);
			this->listBox11->Name = L"listBox11";
			this->listBox11->Size = System::Drawing::Size(34, 82);
			this->listBox11->TabIndex = 28;
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(277, 443);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(75, 23);
			this->button11->TabIndex = 43;
			this->button11->Text = L"button11";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(277, 472);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 23);
			this->button10->TabIndex = 41;
			this->button10->Text = L"button10";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->btnCancel);
			this->groupBox5->Controls->Add(this->btnGrouping);
			this->groupBox5->Controls->Add(this->btnContinueMoving);
			this->groupBox5->Location = System::Drawing::Point(368, 249);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(111, 91);
			this->groupBox5->TabIndex = 39;
			this->groupBox5->TabStop = false;
			this->groupBox5->Visible = false;
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(6, 61);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(102, 25);
			this->btnCancel->TabIndex = 23;
			this->btnCancel->Text = L"«·€«¡ «·Õ—ﬂ…";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &Form1::btnCancel_Click);
			// 
			// btnGrouping
			// 
			this->btnGrouping->Location = System::Drawing::Point(6, 35);
			this->btnGrouping->Name = L"btnGrouping";
			this->btnGrouping->Size = System::Drawing::Size(102, 25);
			this->btnGrouping->TabIndex = 23;
			this->btnGrouping->Text = L" Ã„Ì⁄";
			this->btnGrouping->UseVisualStyleBackColor = true;
			this->btnGrouping->Click += gcnew System::EventHandler(this, &Form1::btnGrouping_Click);
			// 
			// btnContinueMoving
			// 
			this->btnContinueMoving->Location = System::Drawing::Point(6, 7);
			this->btnContinueMoving->Name = L"btnContinueMoving";
			this->btnContinueMoving->Size = System::Drawing::Size(102, 25);
			this->btnContinueMoving->TabIndex = 23;
			this->btnContinueMoving->Text = L"«” „—«—Ì… «·Õ—ﬂ…";
			this->btnContinueMoving->UseVisualStyleBackColor = true;
			this->btnContinueMoving->Click += gcnew System::EventHandler(this, &Form1::btnContinueMoving_Click);
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->button4);
			this->groupBox6->Controls->Add(this->listBox1);
			this->groupBox6->Controls->Add(this->listBox2);
			this->groupBox6->Controls->Add(this->textBox1);
			this->groupBox6->Controls->Add(this->listBox11);
			this->groupBox6->Controls->Add(this->lblStatics);
			this->groupBox6->Controls->Add(this->button2);
			this->groupBox6->Controls->Add(this->button1);
			this->groupBox6->Location = System::Drawing::Point(16, 47);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(378, 234);
			this->groupBox6->TabIndex = 40;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"groupBox6";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(110, 42);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(86, 48);
			this->textBox1->TabIndex = 33;
			this->textBox1->Visible = false;
			// 
			// listBox10
			// 
			this->listBox10->FormattingEnabled = true;
			this->listBox10->Location = System::Drawing::Point(939, 499);
			this->listBox10->Name = L"listBox10";
			this->listBox10->Size = System::Drawing::Size(120, 95);
			this->listBox10->TabIndex = 34;
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// picBackground
			// 
			this->picBackground->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"picBackground.Image")));
			this->picBackground->Location = System::Drawing::Point(175, 384);
			this->picBackground->Name = L"picBackground";
			this->picBackground->Size = System::Drawing::Size(144, 43);
			this->picBackground->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picBackground->TabIndex = 42;
			this->picBackground->TabStop = false;
			this->picBackground->Visible = false;
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^  >(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"s1.jpg");
			this->imageList1->Images->SetKeyName(1, L"s2.jpg");
			this->imageList1->Images->SetKeyName(2, L"s3.jpg");
			this->imageList1->Images->SetKeyName(3, L"s4.jpg");
			this->imageList1->Images->SetKeyName(4, L"s5.jpg");
			this->imageList1->Images->SetKeyName(5, L"s6.jpg");
			this->imageList1->Images->SetKeyName(6, L"ss1.jpg");
			this->imageList1->Images->SetKeyName(7, L"ss2.jpg");
			this->imageList1->Images->SetKeyName(8, L"ss3.jpg");
			this->imageList1->Images->SetKeyName(9, L"ss4.jpg");
			this->imageList1->Images->SetKeyName(10, L"ss5.jpg");
			this->imageList1->Images->SetKeyName(11, L"ss6.jpg");
			// 
			// groupBox7
			// 
			this->groupBox7->BackColor = System::Drawing::Color::Transparent;
			this->groupBox7->Controls->Add(this->cmbPlayer1Level);
			this->groupBox7->Controls->Add(this->checkBox8);
			this->groupBox7->Controls->Add(this->textBox2);
			this->groupBox7->Controls->Add(this->label16);
			this->groupBox7->Controls->Add(this->cmbPlayer2Level);
			this->groupBox7->Controls->Add(this->label15);
			this->groupBox7->Controls->Add(this->button3);
			this->groupBox7->Controls->Add(this->checkBox7);
			this->groupBox7->Controls->Add(this->checkBox6);
			this->groupBox7->Controls->Add(this->checkBox4);
			this->groupBox7->Controls->Add(this->pictureBox4);
			this->groupBox7->Location = System::Drawing::Point(390, 83);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(206, 190);
			this->groupBox7->TabIndex = 44;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Options";
			// 
			// cmbPlayer1Level
			// 
			this->cmbPlayer1Level->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cmbPlayer1Level->FormattingEnabled = true;
			this->cmbPlayer1Level->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"Beginner", L"Intermediate", L"Advanced"});
			this->cmbPlayer1Level->Location = System::Drawing::Point(114, 102);
			this->cmbPlayer1Level->Name = L"cmbPlayer1Level";
			this->cmbPlayer1Level->Size = System::Drawing::Size(64, 21);
			this->cmbPlayer1Level->TabIndex = 53;
			// 
			// checkBox8
			// 
			this->checkBox8->AutoSize = true;
			this->checkBox8->ForeColor = System::Drawing::Color::White;
			this->checkBox8->Location = System::Drawing::Point(30, 86);
			this->checkBox8->Name = L"checkBox8";
			this->checkBox8->Size = System::Drawing::Size(104, 17);
			this->checkBox8->TabIndex = 56;
			this->checkBox8->Text = L"Disable Graphics";
			this->checkBox8->UseVisualStyleBackColor = true;
			this->checkBox8->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox8_CheckedChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(119, 63);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(57, 20);
			this->textBox2->TabIndex = 55;
			this->textBox2->Text = L"100";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->ForeColor = System::Drawing::Color::White;
			this->label16->Location = System::Drawing::Point(30, 131);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(81, 13);
			this->label16->TabIndex = 54;
			this->label16->Text = L"Player 2 Level :";
			// 
			// cmbPlayer2Level
			// 
			this->cmbPlayer2Level->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cmbPlayer2Level->FormattingEnabled = true;
			this->cmbPlayer2Level->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"Beginner", L"Intermediate", L"Advanced"});
			this->cmbPlayer2Level->Location = System::Drawing::Point(114, 126);
			this->cmbPlayer2Level->Name = L"cmbPlayer2Level";
			this->cmbPlayer2Level->Size = System::Drawing::Size(64, 21);
			this->cmbPlayer2Level->TabIndex = 53;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->ForeColor = System::Drawing::Color::White;
			this->label15->Location = System::Drawing::Point(30, 107);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(81, 13);
			this->label15->TabIndex = 54;
			this->label15->Text = L"Player 1 Level :";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(60, 149);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 52;
			this->button3->Text = L"OK";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click_1);
			// 
			// checkBox7
			// 
			this->checkBox7->AutoSize = true;
			this->checkBox7->Checked = true;
			this->checkBox7->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox7->ForeColor = System::Drawing::SystemColors::Control;
			this->checkBox7->Location = System::Drawing::Point(30, 65);
			this->checkBox7->Name = L"checkBox7";
			this->checkBox7->Size = System::Drawing::Size(93, 17);
			this->checkBox7->TabIndex = 31;
			this->checkBox7->Text = L"Continue Test";
			this->checkBox7->UseVisualStyleBackColor = true;
			this->checkBox7->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox7_CheckedChanged);
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->ForeColor = System::Drawing::SystemColors::Control;
			this->checkBox6->Location = System::Drawing::Point(30, 43);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(131, 17);
			this->checkBox6->TabIndex = 29;
			this->checkBox6->Text = L"Forcing Tab First Turn";
			this->checkBox6->UseVisualStyleBackColor = true;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(-1, -2);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(207, 192);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 51;
			this->pictureBox4->TabStop = false;
			// 
			// timer2
			// 
			this->timer2->Tick += gcnew System::EventHandler(this, &Form1::timer2_Tick);
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->groupBox6);
			this->groupBox8->Controls->Add(this->button11);
			this->groupBox8->Controls->Add(this->picBackground);
			this->groupBox8->Controls->Add(this->checkBox3);
			this->groupBox8->Controls->Add(this->listBox3);
			this->groupBox8->Controls->Add(this->button10);
			this->groupBox8->Controls->Add(this->checkBox2);
			this->groupBox8->Controls->Add(this->groupBox1);
			this->groupBox8->Location = System::Drawing::Point(964, 35);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(431, 721);
			this->groupBox8->TabIndex = 45;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"groupBox8";
			this->groupBox8->Visible = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(185, 375);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(80, 14);
			this->label7->TabIndex = 35;
			this->label7->Text = L"Stick Values";
			// 
			// listBox9
			// 
			this->listBox9->FormattingEnabled = true;
			this->listBox9->Location = System::Drawing::Point(484, 397);
			this->listBox9->Name = L"listBox9";
			this->listBox9->Size = System::Drawing::Size(79, 121);
			this->listBox9->TabIndex = 34;
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(267, 375);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(129, 32);
			this->label5->TabIndex = 35;
			this->label5->Text = L"Movement Solders";
			// 
			// listBox8
			// 
			this->listBox8->FormattingEnabled = true;
			this->listBox8->Location = System::Drawing::Point(390, 397);
			this->listBox8->Name = L"listBox8";
			this->listBox8->Size = System::Drawing::Size(83, 121);
			this->listBox8->TabIndex = 34;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(133, 375);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(52, 14);
			this->label8->TabIndex = 35;
			this->label8->Text = L"Solders";
			// 
			// listBox7
			// 
			this->listBox7->FormattingEnabled = true;
			this->listBox7->Location = System::Drawing::Point(290, 397);
			this->listBox7->Name = L"listBox7";
			this->listBox7->Size = System::Drawing::Size(76, 121);
			this->listBox7->TabIndex = 34;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(438, 350);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(78, 14);
			this->label9->TabIndex = 35;
			this->label9->Text = L"GA Decision";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(41, 375);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(80, 14);
			this->label4->TabIndex = 35;
			this->label4->Text = L"Stick Values";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::White;
			this->label11->Location = System::Drawing::Point(388, 375);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(80, 14);
			this->label11->TabIndex = 35;
			this->label11->Text = L"Stick Values";
			// 
			// listBox6
			// 
			this->listBox6->FormattingEnabled = true;
			this->listBox6->Location = System::Drawing::Point(200, 397);
			this->listBox6->Name = L"listBox6";
			this->listBox6->Size = System::Drawing::Size(51, 121);
			this->listBox6->TabIndex = 34;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(486, 375);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(63, 14);
			this->label10->TabIndex = 35;
			this->label10->Text = L"Positions";
			// 
			// listBox5
			// 
			this->listBox5->FormattingEnabled = true;
			this->listBox5->Location = System::Drawing::Point(133, 397);
			this->listBox5->Name = L"listBox5";
			this->listBox5->Size = System::Drawing::Size(49, 121);
			this->listBox5->TabIndex = 34;
			// 
			// listBox4
			// 
			this->listBox4->FormattingEnabled = true;
			this->listBox4->Location = System::Drawing::Point(44, 396);
			this->listBox4->Name = L"listBox4";
			this->listBox4->Size = System::Drawing::Size(77, 121);
			this->listBox4->TabIndex = 34;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(279, 350);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(99, 14);
			this->label6->TabIndex = 35;
			this->label6->Text = L"Current Status";
			// 
			// lstHistory
			// 
			this->lstHistory->FormattingEnabled = true;
			this->lstHistory->Location = System::Drawing::Point(574, 396);
			this->lstHistory->Name = L"lstHistory";
			this->lstHistory->Size = System::Drawing::Size(291, 121);
			this->lstHistory->TabIndex = 43;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(484, 524);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(214, 184);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 46;
			this->pictureBox2->TabStop = false;
			// 
			// imageList2
			// 
			this->imageList2->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^  >(resources->GetObject(L"imageList2.ImageStream")));
			this->imageList2->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList2->Images->SetKeyName(0, L"1.jpg");
			this->imageList2->Images->SetKeyName(1, L"2.jpg");
			this->imageList2->Images->SetKeyName(2, L"3.jpg");
			this->imageList2->Images->SetKeyName(3, L"4.jpg");
			this->imageList2->Images->SetKeyName(4, L"6.jpg");
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::White;
			this->label13->Location = System::Drawing::Point(36, 75);
			this->label13->MaximumSize = System::Drawing::Size(15, 0);
			this->label13->MinimumSize = System::Drawing::Size(5, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(15, 210);
			this->label13->TabIndex = 35;
			this->label13->Text = L"A          B            C         D   ";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Transparent;
			this->label14->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Bold));
			this->label14->ForeColor = System::Drawing::Color::White;
			this->label14->Location = System::Drawing::Point(100, 32);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(707, 14);
			this->label14->TabIndex = 47;
			this->label14->Text = L"1                        2                     3                     4           " 
				L"           5                      6                        7                    " 
				L"     8";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->fileToolStripMenuItem, 
				this->helpToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(910, 24);
			this->menuStrip1->TabIndex = 48;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->newGameToolStripMenuItem, 
				this->optionsToolStripMenuItem, this->exitToolStripMenuItem});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// newGameToolStripMenuItem
			// 
			this->newGameToolStripMenuItem->Name = L"newGameToolStripMenuItem";
			this->newGameToolStripMenuItem->Size = System::Drawing::Size(129, 22);
			this->newGameToolStripMenuItem->Text = L"new game";
			this->newGameToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::newGameToolStripMenuItem_Click);
			// 
			// optionsToolStripMenuItem
			// 
			this->optionsToolStripMenuItem->Name = L"optionsToolStripMenuItem";
			this->optionsToolStripMenuItem->Size = System::Drawing::Size(129, 22);
			this->optionsToolStripMenuItem->Text = L"options";
			this->optionsToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::optionsToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(129, 22);
			this->exitToolStripMenuItem->Text = L"exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::exitToolStripMenuItem_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// listBox19
			// 
			this->listBox19->FormattingEnabled = true;
			this->listBox19->Location = System::Drawing::Point(484, 398);
			this->listBox19->Name = L"listBox19";
			this->listBox19->Size = System::Drawing::Size(79, 121);
			this->listBox19->TabIndex = 34;
			// 
			// listBox17
			// 
			this->listBox17->FormattingEnabled = true;
			this->listBox17->Location = System::Drawing::Point(290, 398);
			this->listBox17->Name = L"listBox17";
			this->listBox17->Size = System::Drawing::Size(76, 121);
			this->listBox17->TabIndex = 34;
			// 
			// listBox15
			// 
			this->listBox15->FormattingEnabled = true;
			this->listBox15->Location = System::Drawing::Point(133, 395);
			this->listBox15->Name = L"listBox15";
			this->listBox15->Size = System::Drawing::Size(49, 121);
			this->listBox15->TabIndex = 34;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(910, 741);
			this->Controls->Add(this->listBox19);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->listBox10);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->lstHistory);
			this->Controls->Add(this->groupBox8);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->groupBox7);
			this->Controls->Add(this->listBox4);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->listBox15);
			this->Controls->Add(this->listBox5);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->listBox6);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->listBox17);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->listBox7);
			this->Controls->Add(this->lbMovements);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->listBox8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->listBox9);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"Tab Game";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Form1::Form1_FormClosing);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox5->ResumeLayout(false);
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->picBackground))->EndInit();
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


#pragma endregion  form Initializing Component

#pragma region global variabls
		// tab board and array variables
			 StreamWriter^ sw;
			 String ^ historyDir;
StreamWriter^ swStatics;
int intTestNum;
int HistoSize;
array<int,1> ^ arrSpaceSizeHistogram; 
 
		int intBoardColumns;//columns
		int intBoardRows;//rows
		int intPlayerNum;  
		int intPlayerIndex;
		int columnNum;
		int rowNum;
		//int intSquareNum;
		int intSquareNum2;
		Bitmap^ tabBoard;
		array<int,1> ^ arrBoard; 
		array<int,1> ^ availableSoldiers; 
		array<int,1> ^ frozenSoldiers; 
		array<int,1> ^ deadSoldiers; 
		array<int,1> ^ inContenderZoneSoldiers; 
		array<int,1> ^ allSoldiers; 
		array<int,1> ^ playersStarted; 
		ArrayList ^ arlstFrozenSoldiers;
		ArrayList ^ arlstAvailableSoldiers;
		ArrayList ^ arlstInContenderZoneSoldiers;
		ArrayList ^ arlstMovements;
		int thisTurn;// to play more than one movement in contender zone on same turn
		int intGroupSoldiersMovement;
		int intGroupSoldiersMovementSquare;
		int intGroupSoldiersMovementNumber;
		int intMaxMovementsSequence;
		int intMaxSoldiersNumber;
		int intMaxMovementsSequence2;
		int intMaxSoldiersNumber2;
		double maxSpaceSize;
int stepsAdded;

int continueTest;
bool disableGraphics;

		clock_t gameStartTime,gameEndTime;
		ref struct solution 
		{
		public :ArrayList ^ cromosom;
		public :ArrayList ^ positions;
		public :int cost;
		public :ArrayList ^ board;

		};
		ref struct twoChilde 
		{
		public :ArrayList ^ chiled1;
		public :ArrayList ^ chiled2;
		};

#pragma endregion

// start region all functions
#pragma region all functions



#pragma region other functions
		 void changePlayer()
		 {//called from btnNewGame_Click and play(solution ^ structGAMovements) and btnPlayerChanging_Click
			 bool endGame=true;
			 for(int i = 0;i<32;i++)
				 if(arrBoard[i]*intPlayerNum<0)
					 endGame=false;
			 if(endGame)
			 {
				 timer1->Enabled=false;
				 btnThrowOrNew->Text="new game";
				 //MessageBox::Show("Congratulations\n You winned in this turn \n press new game button to start new Game.");
				 lstHistory->Items->Insert(0,"Congratulations ..." + label17->Text);
				 gameEndTime=clock();
				 //gameBegined=false;
				 lstHistory->Items->Add("The Game ended at : " + gameEndTime);
				 String ^ strTime="Game Duration is ";
				 int gameDuration = gameEndTime-gameStartTime;
			 if (gameDuration>60000)
				strTime +=Convert::ToString((gameDuration-(gameDuration%60000))/60000) + " Minutes and ";
			 gameDuration=gameDuration%60000;
			 if (gameDuration>1000)
				strTime +=Convert::ToString((gameDuration-(gameDuration%1000))/1000) + " Second and ";
			 strTime +=Convert::ToString(gameDuration%1000) ;
	 lstHistory->Items->Add(strTime);
	 lstHistory->Items->Add("max movable soldiers number is : " + intMaxSoldiersNumber);
	 lstHistory->Items->Add("max movements Sequence number is : " + intMaxMovementsSequence );
	 lstHistory->Items->Add("max movements is : " + intMaxSoldiersNumber2 + " and Soldiers is : " + intMaxMovementsSequence2);
	 lstHistory->Items->Add("	maxSpaceSize : " + maxSpaceSize);
StreamWriter^ swHistory;
DateTime dt = DateTime::Now;
String ^ fileName=historyDir+ "\\" + "historyFile "+dt.Day+"-"+dt.Month+"-"+dt.Year+" "+dt.Hour+"-"+dt.Minute+"-"+dt.Second+".txt";
swHistory = gcnew StreamWriter(fileName);
swHistory->WriteLine("Player 1 Level is " + cmbPlayer1Level->Text);
swHistory->WriteLine("Player 2 Level is " + cmbPlayer2Level->Text);
swHistory->WriteLine("Max Movable Soldiers Number is : " + intMaxSoldiersNumber);
swHistory->WriteLine("Max Movements Sequence Number is : " + intMaxMovementsSequence );
swHistory->WriteLine("Max Movements is : " + intMaxSoldiersNumber2 + " and Soldiers is : " + intMaxMovementsSequence2);
int intLine=lstHistory->Items->Count-6;
if(lstHistory->Items[intLine-1]->ToString()->StartsWith("Player1"))
	swHistory->WriteLine("The Game started from Player 1" );
else
	swHistory->WriteLine("The Game started from Player 2" );
if(lstHistory->Items[0]->ToString()->EndsWith("Player 1 "))
	swHistory->WriteLine("The Winner is Player 1" );
else
	swHistory->WriteLine("The Winner is Player 2" );
swHistory->WriteLine(lstHistory->Items[intLine]);
swHistory->WriteLine(lstHistory->Items[intLine+1]);
swHistory->WriteLine(lstHistory->Items[intLine+2]);
while(intLine>0)
	swHistory->WriteLine(lstHistory->Items[--intLine]);
swHistory->Close();

swStatics->WriteLine("the test num is : " + intTestNum++);

swStatics->WriteLine("max movable soldiers number is : " + intMaxSoldiersNumber);
swStatics->WriteLine("max movements Sequence number is : " + intMaxMovementsSequence );
swStatics->WriteLine("max movements is : " + intMaxMovementsSequence2 + " and soldiers is : " + intMaxSoldiersNumber2);
swStatics->WriteLine("space size histogram : ");
for(int i=0;i<HistoSize;i++)
{
	swStatics->WriteLine(" " + i + "\t| "+arrSpaceSizeHistogram[i]);
	arrSpaceSizeHistogram[i]=0;
}

intLine=0;
//while(intLine<listBox10->Items->Count)
//	swStatics->WriteLine(listBox10->Items[intLine++]);
swStatics->WriteLine("- --  ---  -- -");
	 intMaxSoldiersNumber=0;
	 intMaxMovementsSequence=0;
	 intMaxSoldiersNumber2=0;
	 intMaxMovementsSequence2=0;
	 maxSpaceSize=0;
				 if(intPlayerIndex==1)
					 listBox10->Items[0]=Convert::ToInt16(listBox10->Items[0])+1; 
				 else
					 listBox10->Items[1]=Convert::ToInt16(listBox10->Items[1])+1; 
				 listBox10->Items[2]=Convert::ToInt16(listBox10->Items[2])+1; 
intLine=0;
while(intLine<listBox10->Items->Count)
	swStatics->WriteLine(listBox10->Items[intLine++]);
				 if(++continueTest<Convert::ToInt16(textBox2->Text))
					 timer2->Enabled=true;
				 else
					 return;
			 }
			 //listBox1222->Items->Add("endGame is false");
			 intPlayerNum=-1*intPlayerNum ;
			 intPlayerIndex=1-intPlayerIndex ;
			 if(intPlayerNum==-1)
			 {
				 label17->ForeColor=System::Drawing::Color::Red; 
				 label17->Text="Player 2 ";///" + intPlayerNum;
				 label2->ForeColor=System::Drawing::Color::Red; 
				 label2->Text="Player 2 ";// + intPlayerNum;
			 }
			 else
			 {
				 label17->ForeColor=System::Drawing::Color::Blue; 
				 label17->Text="Player 1 ";///" + intPlayerNum;
				 label2->ForeColor=System::Drawing::Color::Blue; 
				 label2->Text="Player 1 ";///" + intPlayerNum;
			 }
		 }
		int getSquareNum(int intRowNum,int intColumnNum)
		{//called from pictureBox1_MouseDown and pictureBox1_MouseMove
			int intSquareNum=-1;
			if(intRowNum>-1 && intColumnNum>-1)
			{   // get square num by row and column.
				if (intRowNum%2==0)//(intRowNum==0 || intRowNum==2)
					 intSquareNum=intRowNum*intBoardColumns+intColumnNum;
				else //if(intRowNum==1 || intRowNum==3)
					 intSquareNum=intRowNum*intBoardColumns+(intBoardColumns-1)-intColumnNum;
			}
			return(intSquareNum);
		}

		int getSquareColumnByCordinates(int X)
		{//called from pictureBox1_MouseDown and pictureBox1_MouseMove
			int intColumnNum=-1;
			if(X<(picBoardLeftMargin+intPicBoardSquareWidth*intBoardColumns))
				// get Column num by mouse cordinates.
				intColumnNum=(X-picBoardLeftMargin)/intPicBoardSquareWidth;
			return(intColumnNum);
		}
		int getSquareRowByCordinates(int Y)
		{//called from pictureBox1_MouseDown and pictureBox1_MouseMove
			int intRowNum=-1;
			if(Y <(picBoardTopMargin+intPicBoardSquareHeight*intBoardRows))
				// get square Row num by mouse cordinates.
				intRowNum=(Y-picBoardTopMargin)/intPicBoardSquareHeight;
			return(intRowNum);
		}
		void throwSticks(ListBox ^lbSteps,Label ^ lblSteps,bool searchStartedPlayTab)
		{// called from btnThrowSticks_Click
			if(!searchStartedPlayTab)
				lblSteps->Text=playersStarted[intPlayerIndex] +" sticks numbers in previous turn is (";
			lbSteps->Items->Clear();
			bool throw_Sticks = true;
			Random ^rnd= gcnew Random();
				int sum = 0;
//if(checkBox6->Checked && playersStarted[intPlayerIndex]==0)
//for(int i=0;i<5;i++)
//lbSteps->Items->Add(1);
//if(checkBox6->Checked && playersStarted[intPlayerIndex]==1)
//for(int i=2;i<5;i++)
//lbSteps->Items->Add(i);
//playersStarted[intPlayerIndex]=1;
			while (throw_Sticks)
			{
				sum = 0;
				sum+=rnd->Next(2);
				sum+=rnd->Next(2);
				sum+=rnd->Next(2);
				sum+=rnd->Next(2);
				if (sum == 0) 
					sum =6;
				lbSteps->Items->Add(sum);
				lblSteps->Text+=sum;
				if (sum == 2 || sum == 3) 
					throw_Sticks= false;
				else
					lblSteps->Text+=" , ";
				if(sum==1)
					 playersStarted[intPlayerIndex]=1;
			}
drawSticks(sum);
listBox4->Items->Clear();
for(int i=0;i<lbSteps->Items->Count;i++)
listBox4->Items->Add(Convert::ToInt16(lbSteps->Items[i]));
			lblSteps->Visible=false;
			sum=1;
			//shourly not good if statement
if(!searchStartedPlayTab)
{

	if(playersStarted[intPlayerIndex]==0 && checkBox6->Checked && lbSteps->Items->Contains(sum)==false)
	{
		//MessageBox::Show("the stickes forced to get one ");
		playersStarted[intPlayerIndex]=1;
		lbSteps->Items->Add(sum);
	}
			if(lbSteps->Items->Contains(sum)==false && allSoldiers[intPlayerIndex]==frozenSoldiers[intPlayerIndex])
				lblSteps->Visible=true;
			lblSteps->Text+=")";
}

		}

#pragma endregion
#pragma endregion all functions
// end region all functions


#pragma region controls events

#pragma region game controls events

	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				 intTestNum=0;
DateTime dt = DateTime::Now;
historyDir=getDir();
String ^ fileName=historyDir+ "\\" + "Statics File "+dt.Day+"-"+dt.Month+"-"+dt.Year+" "+dt.Hour+"-"+dt.Minute+"-"+dt.Second+".txt";
swStatics = gcnew StreamWriter(fileName);
				 drawSticks(1);
cmbPlayer1Level->SelectedIndex=0;
cmbPlayer2Level->SelectedIndex=0;
groupBox7->Visible=true;
continueTest=0;
listBox10->Items->Add("0"); //player1 wins counter
listBox10->Items->Add("0"); //player2  wins counter
listBox10->Items->Add("0"); //games counter
optionsToolStripMenuItem_Click(sender,e);
				 btnNewGame_Click(sender,e);

			 }
	private: System::Void btnNewGame_Click(System::Object^  sender, System::EventArgs^  e) {
				 //called from Form1_Load() and btnThrowSticks_Click()
gameBegined=false;
disableGraphics=checkBox8->Checked;
intMaxMovementsSequence=0;
intMaxSoldiersNumber=0;

BackgroundLeftMargin=44;
  BackgroundTopMargin=25;
BackgroundRightMargin=50;
 BackgroundBottomMargin=30;
  tempSquareNum=0;
picBoardTopMargin=26;
picBoardLeftMargin=50;
picBoardBottomMargin=31;
picBoardRightMargin=58;



groupBox1->Enabled=false;//ÌÃ» «·€«∆Â«
lstHistory->Items->Clear();
if(groupBox1->Enabled)sw->Close();
groupBox2->Visible=true;
//timer1->Enabled=true;
btnThrowOrNew->Focus();
UseWaitCursor=false;
stepsAdded=0;
intGroupSoldiersMovementSquare=-1;
			 intGroupSoldiersMovement=-1;
				 thisTurn=-1;// to play more than one movement in contender zone on same turn
				 groupBox1->Enabled=true;
				 intSquareNum2=-1;				 //initial game 
				 intBoardRows=4; 
				 intBoardColumns=8;

				 tabBoard = gcnew Bitmap(picBackground->Image);
intPicBoardSquareWidth=(pictureBox1->Width-picBoardRightMargin-picBoardLeftMargin)/intBoardColumns;
intPicBoardSquareHeight=(pictureBox1->Height-picBoardBottomMargin-picBoardTopMargin)/intBoardRows;
intBackgroundSquareWidth=(tabBoard->Width-BackgroundRightMargin-BackgroundLeftMargin)/intBoardColumns;
intBackgroundSquareHeight=(tabBoard->Height-BackgroundBottomMargin-BackgroundTopMargin)/intBoardRows;
				 arrBoard =gcnew array<int,1>(intBoardColumns*intBoardRows);
				 availableSoldiers =gcnew array<int,1>(2);
				 frozenSoldiers =gcnew array<int,1>(2);
				 deadSoldiers =gcnew array<int,1>(2);
				 allSoldiers =gcnew array<int,1>(2);
				 playersStarted =gcnew array<int,1>(2);//to show sticks in groupBox2 sticks message
				 inContenderZoneSoldiers =gcnew array<int,1>(2);
				 intPicBoardSquareWidth=(pictureBox1->Width-picBoardRightMargin-picBoardLeftMargin)/intBoardColumns;
				 intPicBoardSquareHeight=(pictureBox1->Height-picBoardBottomMargin-picBoardTopMargin)/intBoardRows;
				 availableSoldiers[0]=0;
				 availableSoldiers[1]=0;
				 playersStarted[0]=0;
				 playersStarted[1]=0;
				 inContenderZoneSoldiers[0]=0;
				 inContenderZoneSoldiers[1]=0;
				 deadSoldiers[0]=0;
				 deadSoldiers[1]=0;
				 allSoldiers[0]=intBoardColumns;
				 allSoldiers[1]=intBoardColumns;
				 frozenSoldiers[0]=intBoardColumns;
				 frozenSoldiers[1]=intBoardColumns;
				 for (int i=0;i<intBoardColumns;i++)
				 {
					 arrBoard[i]=1;
					 arrBoard[intBoardColumns*intBoardRows-i-1]=-1;
				 }
				 for (int i=intBoardColumns;i<intBoardColumns*2;i++)
				 {
					 arrBoard[i]=0;
					 arrBoard[intBoardColumns*intBoardRows-i-1]=0;
				 }
				 for (int intSquareNum=0;intSquareNum<intBoardColumns*intBoardRows;intSquareNum++)
					 drawSpecificSquare(intSquareNum,false);
				 pictureBox1->Image=tabBoard;
				 pictureBox1->Refresh();
				 pictureBox1->Visible=true;
				 intPlayerIndex=1-firstPlayer();
				 if(intPlayerIndex==1)// 1 or 0
					 intPlayerNum=1;// 1 or -1
				 else
					 intPlayerNum=-1;

				 changePlayer();
//				 btnThrowOrNew->Text=" Start Game";
				 timer1->Enabled=false;

			 }
private: System::Void pictureBox1_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
		 {// called from event pictureBox1-MouseMove
if(e->X>picBoardLeftMargin && e->X<(intPicBoardSquareWidth*intBoardColumns)+picBoardLeftMargin && e->Y>picBoardTopMargin && e->Y<(intPicBoardSquareHeight*intBoardRows)+picBoardTopMargin)
{}
else
pictureBox1_MouseLeave(sender,e);
}
private: System::Void pictureBox1_MouseLeave(System::Object^  sender, System::EventArgs^  e) 
		 {//caled by event pictureBox1-MouseLeave
			 drawSpecificSquare(intSquareNum2,false);
			 intSquareNum2=-1;
			 pictureBox1->Image=tabBoard;
		 }
#pragma endregion  game controls events

#pragma region  player controls events

private: System::Void btnThrowSticks_Click(System::Object^  sender, System::EventArgs^  e) 
		 {//called from timer1_Tick and manual player click event

			 pictureBox3->Visible=false;
			 if(groupBox2->Visible==false)
				 return;//TO IGNORE CLICK BY ENTER BUTTON AFTER execute and invisible the frame
			 if(btnThrowOrNew->Text->StartsWith("New"))
			 {
				 btnNewGame_Click(sender,e);
				 btnThrowOrNew->Text="Start Game";
				 label3->Visible=false;
//first player defined in change player if player index ==-1 or player number ==0
//the new game button  set those values
			 }
			 else
			 {
				 groupBox2->Visible=false;
				 //if(!(btnThrowOrNew->Text->StartsWith(" Start")))//«·„”«›… „Â„… ﬁ»· Start
				 if(!gameBegined)
				 {
					 gameBegined=true;
					 gameStartTime=clock();
					 lstHistory->Items->Add("the game started at : " + gameStartTime);
				 }

				 throwSticks(lbMovements,label3,false);
				 btnThrowOrNew->Text="Throw Sticks";
			if(intPlayerNum==1 || checkBox4->Checked==true)
			{
				UseWaitCursor=true;
			}
///// toGA
				 btnThrowSticks->Enabled=false;
				 btnSoldiers->Enabled=true;
				 //lblMsg->Text="please choose solder by steps to know what soldirs you can move";
				 btnSoldiers_Click(sender,e);
				 if(intPlayerNum==1 || (checkBox4->Checked==true && intPlayerNum==-1))
				 {
					 if(checkBox4->Checked==true)
						 btnThrowOrNew->Text="Start Game";
					 else
						 btnThrowOrNew->Text="Throw Sticks";
					 button6_Click(sender,e);
					 button7_Click(sender,e);
				 }
				 else
                     btnThrowOrNew->Text="let PC Play";
			 }
		 }

private: System::Void lbTempMovements_DoubleClick(System::Object^  sender, System::EventArgs^  e) 
		 {//called from event lbTempMovements-DoubleClick
			 if(lbTempMovements->SelectedIndex>-1)
			 {
				 lbMovements->Items->Add(lbTempMovements->SelectedItem->ToString());
			 }
		 }
private: System::Void lbMovements_DoubleClick(System::Object^  sender, System::EventArgs^  e) 
		 {//called by event lbMovements-DoubleClick
			 if(lbMovements->SelectedIndex>-1)
			 {
				 lbMovements->Items->RemoveAt(lbMovements->SelectedIndex);
			 }
			 if(lbMovements->Items->Count>0)
			 {
				 btnSoldiers->Enabled=true;
			 }

		 }
private: System::Void lbMovements_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) 
		 {//called by event lbMovements-SelectedIndexChanged
			 if(lbMovements->Items->Count>0)
			 {
				 btnSoldiers->Enabled=true;
			 }
		 }

private: System::Void btnPlay_Click(System::Object^  sender, System::EventArgs^  e) 
		 {//called from pictureBox1_MouseDown() 
			 if((sender->GetType()->ToString()=="System.Windows.Forms.PictureBox" && lbSoldierTarget->Items->Count>0)||(sender->GetType()->ToString()=="System.Windows.Forms.Button"))
			 {
				 int target;//Convert::ToInt16(lbSoldierTarget->Text);
				 bool ungroupSoldiers=false;
				 if(lbSoldierTarget->Text->StartsWith("All"))
				 {
					 target=Convert::ToInt16(lbSoldierTarget->Text->Substring(7)->Trim());
				 }
				 else if(lbSoldierTarget->Text->StartsWith("One"))
				 {
					 target=Convert::ToInt16(lbSoldierTarget->Text->Substring(7)->Trim());
					 ungroupSoldiers=true;
				 }
				 else
				 {
					 //error in next commented line why????
					 if(lbSoldierTarget->SelectedIndex>-1)
						 target=Convert::ToInt16(lbSoldierTarget->Text);
					 else
					 {
						 if(listBox2->Text->StartsWith("-"))
						 {
							 ungroupSoldiers=true;
							 target=Convert::ToInt16(listBox2->Text->Substring(1)->Trim());
						 }
						 else
						 {
							 target=Convert::ToInt16(listBox2->Text);
						 }
					 }
				 }


				 //update soldiers statics
				 int oldSquare=-1;
				 if (lbMovementSoldiers->SelectedIndex>-1)
					 oldSquare=Convert::ToInt16(lbMovementSoldiers->SelectedItem->ToString());
				 else if(listBox2->SelectedIndex>-1)
					 oldSquare=Convert::ToInt16(listBox2->SelectedItem->ToString());
				 if( arlstFrozenSoldiers->Contains(lbMovementSoldiers->SelectedItem))
				 {
					 frozenSoldiers[intPlayerIndex]--;
////***** update 05-09-15 part 1
//// if the previous square in frozen area is empty because there soldier was killed 
					 while((intPlayerIndex==1 && frozenSoldiers[intPlayerIndex]>0 && arrBoard[frozenSoldiers[intPlayerIndex]-1]!=intPlayerNum)
						 || (intPlayerIndex==0 && frozenSoldiers[intPlayerIndex]>0 && arrBoard[24-1+frozenSoldiers[intPlayerIndex]]!=intPlayerNum))
						 frozenSoldiers[intPlayerIndex]--;
					 
				 }
				 if((arlstFrozenSoldiers->Contains(lbMovementSoldiers->SelectedItem) && arlstFrozenSoldiers->Count==1) || arlstFrozenSoldiers->Count==0)
						 frozenSoldiers[intPlayerIndex]=0;

					 //(target>=24 && target<32 && intPlayerNum>0) =?= rowNum(target)*intPlayerNum==rows-1
				 if ((target>=24 && target<32 && intPlayerNum>0 && (oldSquare==thisTurn || (oldSquare<24 && oldSquare>=16 )))
					 ||
					 (target>=0 && target<8 && intPlayerNum<0 && (oldSquare==thisTurn || (oldSquare<16 && oldSquare>=8 ))))
					 thisTurn=target;
				 //else//ÌÃ» «‰  ﬂÊ‰ Õ—ﬂ« ﬂ ›Ì „‰ÿﬁ… «·Œ’„ „  «·Ì…
					 //thisTurn=-1;



				 if(ungroupSoldiers)
				 {
					 if(arrBoard[target]*intPlayerNum>=0)
						 arrBoard[target]+=intPlayerNum;
					 else 
					 {
						 arrBoard[target]=intPlayerNum;
						 allSoldiers[1-intPlayerIndex]--;
					 }
					 arrBoard[Convert::ToInt16(lbMovementSoldiers->Text)]-=intPlayerNum;
				 }
				 else
				 {
					 if(arrBoard[target]*intPlayerNum>=0)
						 arrBoard[target]+=arrBoard[Convert::ToInt16(lbMovementSoldiers->Text)];
					 else 
					 {
						 arrBoard[target]=arrBoard[Convert::ToInt16(lbMovementSoldiers->Text)];
						 allSoldiers[1-intPlayerIndex]--;
						 if( target>(32-frozenSoldiers[1-intPlayerIndex]))
						 {
							 if(target==(23+frozenSoldiers[1-intPlayerIndex]))
								 frozenSoldiers[1-intPlayerIndex]--;
////***** update 05-09-15 part 1
//// if the previous square in frozen area is empty because there soldier was killed 
							 while(arrBoard[23+frozenSoldiers[1-intPlayerIndex]]!=(intPlayerNum*-1) && frozenSoldiers[1-intPlayerIndex]!=0)
								 frozenSoldiers[1-intPlayerIndex]--;
							 //availableSoldiers[intPlayerIndex]++;
							 //inContenderZoneSoldiers 
							 //deadSoldiers[1-intPlayerIndex]--
						 }				 
					 }
					 arrBoard[Convert::ToInt16(lbMovementSoldiers->Text)]=0;
				 }
				 drawSpecificSquare(Convert::ToInt16(lbMovementSoldiers->Text),false);
				 drawSpecificSquare(target,false);
				 pictureBox1->Image=tabBoard;
				 if(checkBox1->Checked)
				 {
					 if(listBox1->SelectedIndex>-1)
					 {
						 if(lbMovements->Items->Count>0)//&& lbMovements->SelectedIndex>-1)
						 {
							 //lbMovements->Items->Remove(lbSoldierMovements->SelectedItem);
							 for(int i=0;i<lbMovements->Items->Count;i++)
							 {
								 //lbMovements->SelectedIndex=i;
								 if(lbMovements->Items[i]->ToString()==listBox1->SelectedItem->ToString())
								 {
									 lbMovements->Items->RemoveAt(i);
									 i=lbMovements->Items->Count;
								 }
							 }
						 }
					 }
					 else
						 if(lbMovements->Items->Count>0)//&& lbMovements->SelectedIndex>-1)
						 {
							 if(lbSoldierMovements->SelectedIndex>-1)
								 lbMovements->Items->Remove(lbSoldierMovements->SelectedItem);
						 }


					 if(lbMovements->Items->Count>0)
						 lbMovements->SelectedIndex=0;
					 else
					 {
						 //changePlayer();
						 lblInfo->Text="The End of this Turn\r\n Please click change Player";
						 lbMovements->SelectedIndex=-1;
						 btnPlayerChanging->Enabled=true;
					 }
					 lbMovementSoldiers->Items->Clear();
					 lbSoldierMovements->Items->Clear();
					 lbSoldierTarget->Items->Clear();
					 listBox1->Items->Clear();
					 listBox2->Items->Clear();
				 }
				 //if()
				 
				 
				 
				 //getPlayersStatics();





				 if(lbMovements->Items->Count==0)
					 btnSoldiers->Enabled=false;
				 else
					 btnSoldiers_Click(sender,e);

				 btnPlay->Enabled=false;
				 if(lbMovements->Items->Count==0)
				 {
					 btnPlayerChanging->Enabled=true;
				 }
				 

				 //result
				 if(allSoldiers[1-intPlayerIndex]==0)
				 {
					 lblInfo->Text="The Winner Is " + label17->Text ;
					 groupBox1->Enabled=false;
				 }
				 if(checkBox2->Checked)
					 saveLogFile();
			 }
		 }
private: System::Void btnSoldiers_Click(System::Object^  sender, System::EventArgs^  e) 
		 {//called from btnPlay_Click() and btnThrowSticks_Click()
			 arlstFrozenSoldiers= gcnew ArrayList();
			 arlstAvailableSoldiers= gcnew ArrayList();
			 arlstInContenderZoneSoldiers= gcnew ArrayList();
			 arlstMovements= gcnew ArrayList();
			 String ^ str ="";
			 lbMovementSoldiers->Items->Clear();
			 lbSoldierMovements->Items->Clear();
			 lbSoldierTarget->Items->Clear();
			 if(lbMovements->Items->Count>0)
			 {
				 for(int i=0;i<lbMovements->Items->Count;i++)
				 {
					 //lbMovements->SelectedIndex=i;
					 arlstMovements->Add(lbMovements->Items[i]->ToString());//->SelectedItem->ToString()
				 }
				 str+="\r\n";
				 int playerIndex2=intPlayerIndex;
				 int playerNum;
				 if (playerIndex2==0)
					 playerNum=-1;
				 else
					 playerNum=1;
				 if (playerIndex2==intPlayerIndex)
					 str+="CURRENT PLAYER";
				 str+="\r\nplayer " + playerIndex2 + " statics by calculating is :\r\n " ;
				 String ^ strFrozen=" "  ;
				 String ^ strAvailable=" " ;
				 String ^ strContenderZone=" " ;
				 int intFrozen=0;
				 int intAvailabe=0;
				 int intContenderZone=0 ;
				 int asd1=-1;
				 for(int i=0;i<intBoardColumns*intBoardRows;i++)
				 {
					 if(i==asd1)
						 asd1=-1; // for debugging with runtime condition
					 if(arrBoard[i]*playerNum>0)
					 {
						 int x=(playerNum)*i+(1-playerIndex2)*(intBoardColumns*intBoardRows-1);
						 if(x<frozenSoldiers[playerIndex2] && x>=0 && arrBoard[i]*playerNum>0 && playerNum>0)
						 {
							 arlstFrozenSoldiers->Add(i);
							 strFrozen+=i+",";
							 intFrozen++;
						 }
						 else if(x<intBoardColumns && x>=(intBoardColumns-frozenSoldiers[playerIndex2]) && arrBoard[i]*playerNum>0 && playerNum<0)
						 {
							 arlstFrozenSoldiers->Add(i);
							 strFrozen+=i+",";
							 intFrozen++;
						 }
	/*x>frozenSoldiers[playerIndex2]*/	 if(x>frozenSoldiers[playerIndex2]&& x<intBoardColumns*(intBoardRows-1) && playerNum>0)
						 {
							 arlstAvailableSoldiers->Add(i);
							 strAvailable+=i+",";
							 intAvailabe++;
						 }
						 else if((x>=0 && x<(intBoardColumns-frozenSoldiers[playerIndex2]) && playerNum<0)//1st column
							 ||
							 (x>=intBoardColumns && x<intBoardColumns*(intBoardRows-1) && playerNum<0))
						 {
							 arlstAvailableSoldiers->Add(i);
							 strAvailable+=i+",";
							 intAvailabe++;
						 }
						 if( arrBoard[i]*playerNum>0 && x>=intBoardColumns*(intBoardRows-1))
						 {
							 arlstInContenderZoneSoldiers->Add(i);
							 strContenderZone+=i+",";
							 intContenderZone++;
						 }
					 }
				 }
				 str+="\r\n frozen soldiers are " + intFrozen + " , their numbers are " + strFrozen ;
				 str+="\r\n available soldiers are " + intAvailabe + " , their numbers are" + strAvailable;
				 str+= "\r\n soldiers in Contender Zone are : " + intContenderZone + " , their numbers are " + strContenderZone;
				 str+="\r\n dead soldiers number is " + (intBoardColumns-intAvailabe-intFrozen-intContenderZone);
				 lblStatics->Text=str;

				 arlstMovements->Sort();
				 //if(arlstFrozenSoldiers->Count>0 && arlstAvailableSoldiers->Count==0 && arlstInContenderZoneSoldiers->Count==0)
				 bool getAvailable=false;
				 if(Convert::ToInt16(arlstMovements[0])==1)// && arlstMovements[arlstMovements->Count-1]::Convert::ToInt16()==1
				 {//if movements have one 1,1,... add readyToGo frozenSoldiers
					 if(arlstFrozenSoldiers->Count>0)
						 lbMovementSoldiers->Items->Add(arlstFrozenSoldiers[(arlstFrozenSoldiers->Count-1)]);//(intPlayerIndex)*
					 else
						 getAvailable=true;
				 }
				 if(Convert::ToInt16(arlstMovements[arlstMovements->Count-1])>1)
					 getAvailable=true;
				 if(getAvailable)
					 for(int i=0;i<arlstAvailableSoldiers->Count;i++)
						 lbMovementSoldiers->Items->Add(arlstAvailableSoldiers[i]);
				 if(getAvailable && (intAvailabe+intFrozen)==0 && intContenderZone>0)
					 for(int i=0;i<arlstInContenderZoneSoldiers->Count;i++)
						 lbMovementSoldiers->Items->Add(arlstInContenderZoneSoldiers[i]);






					 if(thisTurn>-1 && arrBoard[thisTurn]*intPlayerNum>0)// to play more than one movement in contender zone on same turn
					 {
						 bool notFound=true;
						 for(int i=0;i<lbMovementSoldiers->Items->Count;i++)
							 if(lbMovementSoldiers->Items[i]->ToString()==thisTurn.ToString())
								 notFound=false;
						 if(notFound)
							lbMovementSoldiers->Items->Add(thisTurn);
					 }





				 if(lbMovementSoldiers->Items->Count==0)
				 {
					 btnPlayerChanging->Enabled=true;
					 btnPlayerChanging_Click(sender,e);
					 lbMovements->Items->Clear();
					 btnSoldiers->Enabled=false;
					 groupBox2->Visible=true;
					 timer1->Enabled=true;
					 btnThrowOrNew->Focus();
					 UseWaitCursor=false;
				 }
			 }

			 for (int i=0;i<lbMovementSoldiers->Items->Count;i++)
				 highlightAvailableSoldiers(Convert::ToInt16(lbMovementSoldiers->Items[i]),false);
			 //stamping solders
			 for (int i=0;i<arlstAvailableSoldiers->Count;i++)
				 drawStamp(Convert::ToInt16(arlstAvailableSoldiers[i]),'A',Color::Yellow);
			 for (int i=0;i<arlstFrozenSoldiers->Count;i++)
				 drawStamp(Convert::ToInt16(arlstFrozenSoldiers[i]),'F',Color::Yellow);
			 for (int i=0;i<arlstInContenderZoneSoldiers->Count;i++)
				 drawStamp(Convert::ToInt16(arlstInContenderZoneSoldiers[i]),'F',Color::Yellow);
			 pictureBox1->Image=tabBoard;



///// toGA

listBox4->Items->Clear();
for(int i=0;i<lbMovements->Items->Count;i++)
listBox4->Items->Add(lbMovements->Items[i]);

listBox5->Items->Clear();
listBox15->Items->Clear();
for(int i=0;i<lbMovementSoldiers->Items->Count;i++)
{
	listBox5->Items->Add(lbMovementSoldiers->Items[i]);
	listBox15->Items->Add(stringAddress(Convert::ToInt16(lbMovementSoldiers->Items[i])));
}


		 }
private: System::Void lbMovementSoldiers_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) 
		 {//caled from pictureBox1_MouseDown and event lbMovementSoldiers-SelectedIndexChanged
			 btnPlay->Enabled=false;
			 lbSoldierMovements->Items->Clear();
			 lbSoldierTarget->Items->Clear();
			 bool noFrozen=false;
			 if(lbMovementSoldiers->SelectedIndex>-1)
			 {
				 if(arlstFrozenSoldiers->Contains(lbMovementSoldiers->SelectedItem))
					 lbSoldierMovements->Items->Add(1);
				 else
				 {
					 if (arlstFrozenSoldiers->Count==0)
						 noFrozen=true;
					 for(int i=0;i<arlstMovements->Count;i++)
					 {
						 if(noFrozen && Convert::ToInt16(arlstMovements[i])==1)
							 lbSoldierMovements->Items->Add(arlstMovements[i]);
						 else if(Convert::ToInt16(arlstMovements[i])>1)
							 lbSoldierMovements->Items->Add(arlstMovements[i]);
					 }
				 }
			 }
		 }

private: System::Void btnPlayerChanging_Click(System::Object^  sender, System::EventArgs^  e) 
		 {//called from  btnSoldiers_Click() and pictureBox1_MouseDown()
			 thisTurn=-1;// to play more than one movement in contender zone on same turn
			 changePlayer();
			 btnPlayerChanging->Enabled=false;
			 btnThrowSticks->Enabled=true;
			 lblInfo->Text="Click Throw Sticks";
		 }
private: System::Void lbSoldierMovements_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) 
		 {//called from pictureBox1_MouseDown and event lbSoldierMovements-SelectedIndexChanged
			 btnPlay->Enabled=false;
			 lbSoldierTarget->Items->Clear();
			 bool oneOrAll=false;
			 if(lbSoldierMovements->SelectedIndex>-1)
			 {
				 if(intPlayerNum>0)
				 {
					 int movement  = Convert::ToInt16(lbSoldierMovements->SelectedItem->ToString());
					 int oldSquare = Convert::ToInt16(lbMovementSoldiers->SelectedItem->ToString());
					 int newSquare=oldSquare+(intPlayerNum*movement);
					 int newSquare2=-1;
					 if(movement==1 && arrBoard[oldSquare]*intPlayerNum>1)
					 {
						 oneOrAll=true;
					 }
					 while(newSquare>=intBoardColumns*intBoardRows)
						 newSquare-=(intBoardColumns*2);//(intBoardColumns*2-1)
					 while(newSquare<0)
						 newSquare+=(intBoardColumns*2);
					 if(newSquare<32 && newSquare>=24 && intPlayerNum>0 && oldSquare<24 && oldSquare>=16 )
					 {
						 newSquare2=newSquare-(intBoardColumns*2);
						 //thisTurn=newSquare;// to play more than one movement in contender zone on same turn
					 }
					 if(newSquare<32 && newSquare>=24 && intPlayerNum>0 && oldSquare<32 && oldSquare>=24 )
						 newSquare2=-1;//if oldSquare in contenderZone 
					 if(newSquare<8 && newSquare>=0 && intPlayerNum<0)
						 newSquare2=newSquare+(intBoardColumns*2);
					 if(oneOrAll)// && newSquare2==-1
					 { 
						 //MessageBox::Show("make checkbox to choice ungrouping");
						 lbSoldierTarget->Items->Add("one to " + newSquare);//how i add solder value to hold movement
						 lbSoldierTarget->Items->Add("all to " + newSquare);//how i add solder value to hold movement
					 }
					 if (oneOrAll && newSquare2>-1)
					 {
						 lbSoldierTarget->Items->Add("one to " + newSquare2);//how i add solder value to hold movement
						 lbSoldierTarget->Items->Add("all to " + newSquare2);//how i add solder value to hold movement
					 }
					 if(oneOrAll==false)
					 {
						 lbSoldierTarget->Items->Add(newSquare);
						 if (newSquare2>-1)
						 {
							 //KeyValuePair^ KeyValuePair2=gcnew KeyValuePair(newSquare2, newSquare2);
							 //lbSoldierTarget->Items->Add(KeyValuePair2);		 

							 lbSoldierTarget->Items->Add(newSquare2);//how i add solder value to hold movement 
						 }
					 }
				 }
				 else
				 {
					 int movement  = Convert::ToInt16(lbSoldierMovements->SelectedItem->ToString());
					 int oldSquare = Convert::ToInt16(lbMovementSoldiers->SelectedItem->ToString());
					 int newSquare=oldSquare+(movement);
					 int newSquare2=-1;
					 if(movement==1 && arrBoard[oldSquare]*intPlayerNum>1)
					 {
						 oneOrAll=true;
					 }
					 while(newSquare>=intBoardColumns*intBoardRows)
						 newSquare-=(intBoardColumns*2);
					 while(newSquare<0)
						 newSquare+=(intBoardColumns*2);
					 //if(newSquare<32 && newSquare>=24 && intPlayerNum<0)
						// newSquare-=(intBoardColumns*2);
					 if(newSquare<32 && newSquare>=24 && intPlayerNum>0)
						 newSquare2=newSquare-(intBoardColumns*2);
					 if( newSquare<8 && newSquare>=0 &&  intPlayerNum<0  && oldSquare<16 && oldSquare>=8 ) //&& (this turn || old square))
					 {
						 newSquare2=newSquare+(intBoardColumns*2);
						 //thisTurn=newSquare;// to play more than one movement in contender zone on same turn
					 }
					 if( oldSquare<8 && oldSquare>=0 &&  intPlayerNum<0 )// && (this turn || old square))
						 newSquare2=-1;//if oldSquare in contenderZone 
					 if(newSquare<24 && newSquare>=16 && oldSquare>=8 && oldSquare < 16 && intPlayerNum<0)
						 newSquare2=newSquare-(intBoardColumns*2);
					 if(newSquare>=24 && newSquare<32 && oldSquare>=16 && oldSquare < 24 && intPlayerNum<0)
						 newSquare=newSquare-(intBoardColumns*2);
					 if(oneOrAll)// && newSquare2==-1
					 { 
						 //MessageBox::Show("make checkbox to choice ungrouping");
						 lbSoldierTarget->Items->Add("one to " + newSquare);//how i add solder value to hold movement
						 lbSoldierTarget->Items->Add("all to " + newSquare);//how i add solder value to hold movement
					 }
					 if (oneOrAll && newSquare2>-1)
					 {
						 lbSoldierTarget->Items->Add("one to " + newSquare2);//how i add solder value to hold movement
						 lbSoldierTarget->Items->Add("all to " + newSquare2);//how i add solder value to hold movement
					 }
					 if(oneOrAll==false)
					 {
						 lbSoldierTarget->Items->Add(newSquare);
						 if (newSquare2>-1)
						 {
							 lbSoldierTarget->Items->Add(newSquare2);//how i add solder value to hold movement
						 }
					 }
				 }
			 }
		 }
private: System::Void lbSoldierTarget_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) 
		 {//called from event lbSoldierTarget-SelectedIndexChanged
			 if(lbSoldierTarget->SelectedIndex>-1)
				 btnPlay->Enabled=true;
		 }

#pragma endregion  player controls events

#pragma endregion  controls events
// end region  controls events
		 
private: System::Void pictureBox1_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
		 {//by event pictureBox1-MouseDown and recursive
			 if(e->X>picBoardLeftMargin && e->X<(intPicBoardSquareWidth*intBoardColumns)+picBoardLeftMargin && e->Y>picBoardTopMargin && e->Y<(intPicBoardSquareHeight*intBoardRows)+picBoardTopMargin)
			 {   // get square num by mouse cordinates.
				 pictureBox3->Visible=false;
				 int intThisColumn=getSquareColumnByCordinates(e->X);
				 int intThisRow=getSquareRowByCordinates(e->Y);
				 int intSquareNum=getSquareNum(intThisRow,intThisColumn);
				 label1->Text="x = " + Convert::ToString(e->X) + " - y = " + Convert::ToString(e->Y) + " square row is " +Convert::ToString(intThisRow)+ " and column is " + Convert::ToString(intThisColumn) + " , Square index is : " + Convert::ToString(intSquareNum) ;
				 if(listBox2->Items->Contains(intSquareNum))
				 {
for(int i=0;i<listBox2->Items->Count;i++)
	drawSpecificSquare(Convert::ToInt16(listBox2->Items[i]),true);
for(int i=0;i<lbMovementSoldiers->Items->Count;i++)
	drawSpecificSquare(Convert::ToInt16(lbMovementSoldiers->Items[i]),false);
int oldSoldier=Convert::ToInt16(lbMovementSoldiers->Text);
					 
addHistory(oldSoldier,intSquareNum);
 
bool resetGroupSoldiersMovement=false;
int tempGroupSoldiersMovement=-1;	
int tempstepGroupSoldiersMovement=-1;	
if(arrBoard[intSquareNum]<0 && intGroupSoldiersMovementNumber==0 && lbMovements->Items->Count>1)
{
	intGroupSoldiersMovement=-1;
						 groupBox5->Visible=true;
						 groupBox5->Location=System::Drawing::Point(e->X,e->Y);
						 if(groupBox5->Text=="")
							 groupBox5->Text="0";
						 groupBox5->Text=Convert::ToString(Convert::ToInt16(groupBox5->Text)+1);
						 while(groupBox5->Visible)
							 Application::DoEvents();
						 pictureBox1->Enabled=true;
						 if(intGroupSoldiersMovement==2)//grouping
						 {
intSquareNum=intSquareNum;

						 }
						 else if(intGroupSoldiersMovement==1)//continue
							 //strNegativeSquareNum=strNegativeSquareNum;
 {
	intGroupSoldiersMovementSquare=	intSquareNum;//«·„—»⁄ «·–Ì ÌÃ» «‰  À»  „Õ ÊÌ« Â
	intGroupSoldiersMovementNumber=arrBoard[intGroupSoldiersMovementSquare];

}
else if(intGroupSoldiersMovement==0)//cancel
	return;

						 
						 
						 
}
else if(arrBoard[intSquareNum]<0 && intGroupSoldiersMovementNumber<0 && intGroupSoldiersMovementSquare>=0)
{
	arrBoard[intGroupSoldiersMovementSquare]-=	intGroupSoldiersMovementNumber;
	tempGroupSoldiersMovement=intGroupSoldiersMovementSquare;
	 tempstepGroupSoldiersMovement=	intGroupSoldiersMovementNumber;
	intGroupSoldiersMovementSquare=	intSquareNum;//«·„—»⁄ «·–Ì ÌÃ» «‰  À»  „Õ ÊÌ« Â
	intGroupSoldiersMovementNumber=arrBoard[intGroupSoldiersMovementSquare];
}
else if(intGroupSoldiersMovementSquare>=0  )
{
	arrBoard[intGroupSoldiersMovementSquare]-=	intGroupSoldiersMovementNumber;
	resetGroupSoldiersMovement=true;
}



	pictureBox1->Enabled=true;
					 String ^ strNegativeSquareNum="-"+intSquareNum;
					 if(listBox2->Items->Contains(strNegativeSquareNum))
					 {
						 intGroupSoldiersMovement=-1; //to remaind player desission
						 pictureBox1->Enabled=false;
						 groupBox3->Visible=true;
						 groupBox3->Location=System::Drawing::Point(e->X,e->Y);
						 if(groupBox3->Text=="")
							 groupBox3->Text="0";
						 groupBox3->Text=Convert::ToString(Convert::ToInt16(groupBox3->Text)+1);
						 while(groupBox3->Visible)
							 Application::DoEvents();
						 pictureBox1->Enabled=true;
						 if(intGroupSoldiersMovement==2)//move all
							 strNegativeSquareNum=Convert::ToString(intSquareNum);
						 //else if(intGroupSoldiersMovement==1)//move one
							 //strNegativeSquareNum=strNegativeSquareNum;
						 else if(intGroupSoldiersMovement==0)//cancel
							 return;
					 }
					 else
						 strNegativeSquareNum=Convert::ToString(intSquareNum);

					 for(int i=0;i<listBox2->Items->Count;i++)
						 if(Convert::ToString(listBox2->Items[i])==strNegativeSquareNum)
						 {
							 listBox2->SelectedIndex=i;
							 listBox1->SelectedIndex=i;
							 
							 btnPlay_Click(sender,e);
							 i=listBox2->Items->Count;
if(resetGroupSoldiersMovement)
{
	arrBoard[intGroupSoldiersMovementSquare]+=	intGroupSoldiersMovementNumber;
	drawSpecificSquare(intGroupSoldiersMovementSquare,false);
	pictureBox1->Image=tabBoard;
	intGroupSoldiersMovementSquare=-1;
	intGroupSoldiersMovementNumber=0;
	resetGroupSoldiersMovement=false;
}
else if(tempGroupSoldiersMovement>-1)
{
	arrBoard[tempGroupSoldiersMovement]+=	tempstepGroupSoldiersMovement;
	drawSpecificSquare(tempGroupSoldiersMovement,false);
	pictureBox1->Image=tabBoard;
	tempGroupSoldiersMovement=-1;
	tempstepGroupSoldiersMovement=0;
}
						 }
				 }
				 else if(lbMovementSoldiers->Items->Contains(intSquareNum))
				 {
asdasdqwe:
if(intGroupSoldiersMovementSquare==intSquareNum)
{
	//intGroupSoldiersMovementNumber=arrBoard[intSquareNum];
}
					 listBox1->Items->Clear();
					 listBox2->Items->Clear();
					 for(int i=0;i<lbMovementSoldiers->Items->Count;i++)
						 if(Convert::ToInt16(lbMovementSoldiers->Items[i])==intSquareNum)
						 {
							 lbMovementSoldiers->SelectedIndex=i;
							 lbMovementSoldiers_SelectedIndexChanged(sender,e);
							 for(int j=0;j<lbSoldierMovements->Items->Count;j++)
							 {
								 lbSoldierMovements->SelectedIndex=j;
								 lbSoldierMovements_SelectedIndexChanged(sender,e);
								 for(int z=0;z<lbSoldierTarget->Items->Count;z++)
								 {int target;
								 bool ungroupSoldiers=false;
			 if(lbSoldierTarget->Items[z]->ToString()->StartsWith("all"))
			 {
				 target=Convert::ToInt16(lbSoldierTarget->Items[z]->ToString()->Substring(7)->Trim());
				 drawStampO(target,Color::Yellow);
									 //String^ s = String::Format("{0}   {1}",)
									 listBox1->Items->Add(lbSoldierMovements->Items[j]);
									 listBox2->Items->Add(target);
			 }
			 else if(lbSoldierTarget->Items[z]->ToString()->StartsWith("one"))
			 {
				 //MessageBox::Show("—”«·… ›ﬂ «· Ã„Ì⁄ & int target & bool ungroupSoldiers");
				 target=Convert::ToInt16(lbSoldierTarget->Items[z]->ToString()->Substring(7)->Trim());
				 ungroupSoldiers=true;
				 drawStampO(target,Color::Yellow);
									 //String^ s = String::Format("{0}   {1}",)
									 listBox1->Items->Add(lbSoldierMovements->Items[j]);
									 listBox2->Items->Add("-" + target);
			 }
			 else//„ƒﬁ  ·„‰⁄ Œÿ√ «· ÕÊÌ· „‰ ‰’Ì «·Ï —ﬁ„Ì 
			 {
				 drawStampO(Convert::ToInt16(lbSoldierTarget->Items[z]),Color::Yellow);
									 //String^ s = String::Format("{0}   {1}",)
									 listBox1->Items->Add(lbSoldierMovements->Items[j]);
									 listBox2->Items->Add(lbSoldierTarget->Items[z]);
			 }
								 }
							 }
						 }
				 }
				 else
					 pictureBox3->Visible=true;//SystemSounds::Question->Play();
if(intGroupSoldiersMovement==1)//continue	
{
	intGroupSoldiersMovement=0;
	pictureBox1_MouseDown(sender,e);
}				 if(lbMovements->Items->Count==0 && groupBox2->Visible==false)
				 {
					 groupBox2->Visible=true;
					 timer1->Enabled=true;
					 btnThrowOrNew->Focus();
					 UseWaitCursor=false;
					 btnPlayerChanging_Click(sender,e);
				 }
			 }
		 }
void saveLogFile()
{//called from btnPlay_Click
	// must be calling from play
			 String^ str="arrBoard:(";
			 for(int i=0;i<arrBoard->Length;i++)
				 str+=Convert::ToString(arrBoard[i]) + ",";
			 str+=")\r\n";
			 str+="intPlayerIndex:"+Convert::ToString(intPlayerIndex)+"\r\n";
			 str+="intPlayerNum:"+Convert::ToString(intPlayerNum)+"\r\n";
			 //str+="intSquareNum:"+Convert::ToString(intSquareNum)+"\r\n";
			 str+="intSquareNum2:"+Convert::ToString(intSquareNum2)+"\r\n";
			 str+="thisTurn:"+Convert::ToString(thisTurn)+"\r\n";
			 str+="(players) array<int,1>\r\n";
			 str+="allSoldiers:(";
			 for(int i=0;i<allSoldiers->Length;i++)
			 {
				 str+=Convert::ToString(allSoldiers[i]) + ",";
			 }
			 str+=")\r\n";
			 str+="availableSoldiers:(";
			 for(int i=0;i<availableSoldiers->Length;i++)
			 {
				 str+=Convert::ToString(availableSoldiers[i]) + ",";
			 }
			 str+=")\r\n";
			 str+="frozenSoldiers:(";
			 for(int i=0;i<frozenSoldiers->Length;i++)
			 {
				 str+=Convert::ToString(frozenSoldiers[i]) + ",";
			 }
			 str+=")\r\n";
			 str+="deadSoldiers:(";
			 for(int i=0;i<deadSoldiers->Length;i++)
			 {
				 str+=Convert::ToString(deadSoldiers[i]) + ",";
			 }
			 str+=")\r\n";
			 str+="inContenderZoneSoldiers:(";
			 for(int i=0;i<inContenderZoneSoldiers->Length;i++)
			 {
				 str+=Convert::ToString(inContenderZoneSoldiers[i]) + ",";
			 }
			 str+=")\r\n";
			 str+="(current player) ArrayList\r\n";
			 str+="arlstAvailableSoldiers:(";
			 for(int i=0;i<arlstAvailableSoldiers->Count;i++)
			 {
				 str+=Convert::ToString(arlstAvailableSoldiers[i]) + ",";
			 }
			 str+=")\r\n";
			 str+="arlstFrozenSoldiers:(";
			 for(int i=0;i<arlstFrozenSoldiers->Count;i++)
			 {
				 str+=Convert::ToString(arlstFrozenSoldiers[i]) + ",";
			 }
			 str+=")\r\n";
			 str+="arlstInContenderZoneSoldiers:(";
			 for(int i=0;i<arlstInContenderZoneSoldiers->Count;i++)
			 {
				 str+=Convert::ToString(arlstInContenderZoneSoldiers[i]) + ",";
			 }
			 str+=")\r\n";
			 str+="arlstMovements:(";
			 for(int i=0;i<arlstMovements->Count;i++)
			 {
				 str+=Convert::ToString(arlstMovements[i]) + ",";
			 }
			 str+=")\r\n";
			 textBox1->Text=str;
			 if(checkBox2->Checked)
				 listBox3->Items->Add(str);
			 //if(checkBox3->Checked)
				// sw->WriteLine(str);// real time 
}
private: System::Void listBox3_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) 
		 {//called by event listBox3-SelectedIndexChanged
			 textBox1->Text=listBox3->SelectedItem->ToString();
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) 
		 {//called from btnThrowSticks_Click
		 // calculate free soldiers after doing unfroze by tabs
			 listBox6->Items->Clear();
			 listBox7->Items->Clear();
			 listBox17->Items->Clear();
			 int tabCounter=0;
			 bool addAvailableSolders=false;
			 listBox4->Sorted=true;
			 for(int i=0;i<listBox4->Items->Count;i++)
				 if(listBox4->Items[i]->ToString()=="1")// listbox4 sorted
					 tabCounter++;
				 else
				 {
					 addAvailableSolders=true;// impossible all movements is ones
					 i=listBox4->Items->Count;
				 }
			 listBox4->Sorted=false;
			 addReadyToGoFrozenSolders(tabCounter);
			 tabCounter=arlstFrozenSoldiers->Count;
			 for(int i=0;i<listBox4->Items->Count;i++)
				 if(listBox4->Items[i]->ToString()=="1" && tabCounter>0)
					 tabCounter--;
				 else
				 {
					 listBox6->Items->Add(listBox4->Items[i]);
					 addAvailableSolders=true;
				 }
			 if(addAvailableSolders)
				 addAllAvailableSolders();
if(intMaxSoldiersNumber<listBox7->Items->Count)
	intMaxSoldiersNumber=listBox7->Items->Count;
if(intMaxMovementsSequence<listBox6->Items->Count)
	intMaxMovementsSequence=listBox6->Items->Count;
double dblMaxSpaceSize=spaceSize(listBox7->Items->Count,listBox6->Items->Count);
if(maxSpaceSize<dblMaxSpaceSize)
{
	intMaxSoldiersNumber2=listBox7->Items->Count;
	intMaxMovementsSequence2=listBox6->Items->Count;
	maxSpaceSize=dblMaxSpaceSize;
	lstHistory->Items->Insert(0,"max movements is : " + intMaxMovementsSequence2 + " and soldiers is : " + intMaxSoldiersNumber2+"	maxSpaceSize : " + maxSpaceSize);
	swStatics->WriteLine("max movements is : " + intMaxMovementsSequence2 + " and soldiers is : " + intMaxSoldiersNumber2 +"	maxSpaceSize : " + maxSpaceSize);
}
	if(dblMaxSpaceSize>0)
		arrSpaceSizeHistogram[Convert::ToInt64(Math::Log10(Convert::ToInt64(dblMaxSpaceSize)))]++; 	
	else
		int sssdfasdafssss=0;
		 }
	 void addReadyToGoFrozenSolders(int tabsNumber)
	 {//called from button6_Click() only
if(arlstFrozenSoldiers->Count-tabsNumber>=0)
	tabsNumber=arlstFrozenSoldiers->Count-tabsNumber;
else
	tabsNumber=0;

for(int i=arlstFrozenSoldiers->Count-1;i>=tabsNumber;i--)
{
	int x=Convert::ToInt16(arlstFrozenSoldiers[i])+1;
	if(x==32)
		x=16;
	listBox7->Items->Add(x);
	listBox17->Items->Add(stringAddress(x));
	arrBoard[x]=arrBoard[Convert::ToInt16(arlstFrozenSoldiers[i])];//1;//updated 22/10/15
	arrBoard[Convert::ToInt16(arlstFrozenSoldiers[i])]=0;
	frozenSoldiers[intPlayerIndex]--;
	drawSpecificSquare(Convert::ToInt16(arlstFrozenSoldiers[i]),false);
	drawSpecificSquare(x,false);
}
	 }


	 void addAllAvailableSolders()
	 {//calld from button6_Click() only
if(arlstAvailableSoldiers->Count>0)
	for(int i=0;i<arlstAvailableSoldiers->Count;i++)
	{
		listBox7->Items->Add(arlstAvailableSoldiers[i]);
		listBox17->Items->Add(stringAddress(Convert::ToInt16(arlstAvailableSoldiers[i])));
	}
else if(arlstFrozenSoldiers->Count==0)
	for(int i=0;i<arlstInContenderZoneSoldiers->Count;i++)
	{
		listBox7->Items->Add(arlstInContenderZoneSoldiers[i]);
		listBox17->Items->Add(stringAddress(Convert::ToInt16(arlstInContenderZoneSoldiers[i])));
	}
	 }

/***************************************************************************/

	 // GA ahmad tr

	    

		//ArrayList ^ sol;
        ArrayList ^ seuq;
        ArrayList ^ players;
        ArrayList ^ player;
        ArrayList ^ temp;
        Random rand;

//ArrayList ^ sol1;
		array<int,1> ^ GAarrBoard; 
		//ArrayList ^ GAarrBoard; 
int maxFit;
       //List<solution> pup = new List<solution>();
 //*/

private: System::Void btnContinueMoving_Click(System::Object^  sender, System::EventArgs^  e) {
			 intGroupSoldiersMovement=1;
			 groupBox5->Visible=false;
		 }
private: System::Void btnGrouping_Click(System::Object^  sender, System::EventArgs^  e) {
			 intGroupSoldiersMovement=2;
			 groupBox5->Visible=false;
		 }
private: System::Void btnCancel_Click(System::Object^  sender, System::EventArgs^  e) {
			 intGroupSoldiersMovement=0;
			 groupBox5->Visible=false;
		 }

private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) 
		 {//called by event timer1-Tick
			 timer1->Enabled=false;
			 btnThrowSticks_Click(sender,e);
		 }

		 

private: System::Void btnMoveOneSoldier_Click(System::Object^  sender, System::EventArgs^  e) {
			 intGroupSoldiersMovement=1;
			 groupBox3->Visible=false;
		 }
private: System::Void btnMoveAllSoldiers_Click(System::Object^  sender, System::EventArgs^  e) {
			 intGroupSoldiersMovement=2;
			 groupBox3->Visible=false;
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 intGroupSoldiersMovement=0;
			 groupBox3->Visible=false;
		 }




#pragma region drawing functions
void drawSquareUp(int intSquareNum)
	{}
	void drawSquareDown(int intSquareNum)
	{}
	void drawStamp(int intSquareNum,char stamp,Color stampColor)
	{// called from pictureBox1_MouseDown and pictureBox1_MouseMove and btnSoldiers_Click
		 //draw filter
		if (disableGraphics)
			return;
		drawSpecificSquare(intSquareNum,true);
		int stampWidth=8;
		int stampHeight=8;
		int stampTop=2;
		int stampLeft=2;
		

		 int stampM[8][8]={//M
			  {1,1,1,1,1,1,1,1}
			 ,{1,1,1,1,1,1,1,1}
			 ,{1,1,0,1,1,0,1,1}
			 ,{1,1,0,1,1,0,1,1}
			 ,{1,1,0,1,1,0,1,1}//4
			 ,{1,1,0,1,1,0,1,1}
			 ,{1,1,0,1,1,0,1,1}
			 ,{1,1,0,1,1,0,1,1}
		 };
		 int stampA[8][8]={//A
			  {0,1,1,1,1,1,1,1}
			 ,{0,1,1,1,1,1,1,1}
			 ,{0,1,1,0,0,0,1,1}
			 ,{0,1,1,0,0,0,1,1}
			 ,{0,1,1,1,1,1,1,1}//4
			 ,{0,1,1,0,0,0,1,1}
			 ,{0,1,1,0,0,0,1,1}
			 ,{0,1,1,0,0,0,1,1}
		 };		 
		 int stampF[8][8]={//F
			  {0,0,1,1,1,1,1,1}
			 ,{0,0,1,1,1,1,1,1}
			 ,{0,0,1,1,0,0,0,0}
			 ,{0,0,1,1,1,1,1,1}//4
			 ,{0,0,1,1,1,1,1,1}//5
			 ,{0,0,1,1,0,0,0,0}
			 ,{0,0,1,1,0,0,0,0}
			 ,{0,0,1,1,0,0,0,0}
		 };
		if(intSquareNum>-1 && intSquareNum<intBoardColumns*intBoardRows)
		{
			columnNum=intSquareNum/intBoardColumns;
			 if ((columnNum%2)==1)
			 {
				 rowNum=columnNum*intBoardColumns+(intBoardColumns-1)-intSquareNum;
			 }
			 else
			 { 
				 rowNum=-(columnNum*intBoardColumns-intSquareNum);
			 }
			 for (int ii=0;ii<stampWidth;ii++)
			 {
				 int i=stampLeft+ii;
				 for(int jj=0;jj<stampHeight;jj++)
				 {
					 int j=stampTop+jj;
					 int x = i+rowNum*intBackgroundSquareWidth+BackgroundLeftMargin;
					 int y = j+columnNum*intBackgroundSquareHeight+BackgroundTopMargin;
					 if((stampA[jj][ii]==1 && stamp=='A')||(stampF[jj][ii]==1 && stamp=='F')||(stampM[jj][ii]==1 && stamp=='M'))
						 tabBoard->SetPixel(x,y,stampColor);
					
				 }
			 }
		}
	}

	void drawStampO(int intSquareNum,Color stampColor)
	{// called from pictureBox1_MouseDown and pictureBox1_MouseMove and btnSoldiers_Click
		if (disableGraphics)
			return;
		drawSpecificSquare(intSquareNum,true);
		 //draw filter
		 int stampWidth=8;
		 int stampHeight=8;
		 int stampTop=2;
		 int stampLeft=8;
		 int stampO[8][8]={//A
			  {1,1,1,1,1,1,1,1}
			 ,{1,1,1,1,1,1,1,1}
			 ,{1,1,0,0,0,0,1,1}
			 ,{1,1,0,0,0,0,1,1}
			 ,{1,1,0,0,1,0,1,1}//4
			 ,{1,1,0,0,0,0,1,1}
			 ,{1,1,1,1,1,1,1,1}
			 ,{1,1,1,1,1,1,1,1}
		 };		 
		if(intSquareNum>-1 && intSquareNum<intBoardColumns*intBoardRows)
		{
			columnNum=intSquareNum/intBoardColumns;
			 if ((columnNum%2)==1)
			 {
				 rowNum=columnNum*intBoardColumns+(intBoardColumns-1)-intSquareNum;
			 }
			 else
			 { 
				 rowNum=-(columnNum*intBoardColumns-intSquareNum);
			 }
			 for (int ii=0;ii<stampWidth;ii++)
			 {
				 int i=stampLeft+ii;
				 for(int jj=0;jj<stampHeight;jj++)
				 {
					 int j=stampTop+jj;
					 int x = i+rowNum*intBackgroundSquareWidth+BackgroundLeftMargin;
					 int y = j+columnNum*intBackgroundSquareHeight+BackgroundTopMargin;
					 if(stampO[jj][ii]==1 )
						 tabBoard->SetPixel(x,y,stampColor);
					
				 }
			 }
		}
	}

	void drawSpecificSquareold(int intSquareNum)
	{//called from addReadyToGoFrozenSolders and  pictureBox1_MouseDown and btnPlay_Click and  pictureBox1_MouseLeave and  pictureBox1_MouseMove and  btnNewGame_Click and play(solution ^ structGAMovements) and highlightSpecificSquare
		if (disableGraphics)
			return;
		if(intSquareNum>-1 && intSquareNum<intBoardColumns*intBoardRows)
		{
			columnNum=intSquareNum/intBoardColumns;
			 if ((columnNum%2)==1)
			 {
				 rowNum=columnNum*intBoardColumns+(intBoardColumns-1)-intSquareNum;
			 }
			 else
			 { 
				 rowNum=-(columnNum*intBoardColumns-intSquareNum);
			 }
			 for (int x=1;x<intBackgroundSquareWidth;x++)
			 {
				 for(int y=1;y<intBackgroundSquareHeight;y++)
				 { 
					 int i=x+rowNum*intBackgroundSquareWidth+BackgroundLeftMargin;
					 int j=y+columnNum*intBackgroundSquareHeight+BackgroundTopMargin;
					 //Color c=background->GetPixel(x,y);
					 //tabBoard->SetPixel(x,y,Color::Black);
					 if(i%Convert::ToInt32(intBackgroundSquareWidth/(Math::Abs(arrBoard[intSquareNum])+1))==0 && j > 4 && j < intBackgroundSquareHeight-4 && (i<intBackgroundSquareWidth-(intBackgroundSquareWidth/(Math::Abs(arrBoard[intSquareNum])+1)) || Math::Abs(arrBoard[intSquareNum])==1))
						 //drawing Soldiers (black lines)
						 tabBoard->SetPixel(i,j,Color::Black);
					 else if(arrBoard[intSquareNum]>0)
						 tabBoard->SetPixel(i,j,Color::Blue);
					 else if(arrBoard[intSquareNum]<0)
						 tabBoard->SetPixel(i,j,Color::Red);
					 else if(arrBoard[intSquareNum]==0)
						 tabBoard->SetPixel(i,j,Color::White);
				 }
			 }
		}
	}

	void highlightSpecificSquare(int intSquareNum)
	{//called from pictureBox1_MouseMove
		if(intSquareNum2!=intSquareNum)
		{
			columnNum=intSquareNum/intBoardColumns;
			 if ((columnNum%2)==1)
			 {
				 rowNum=columnNum*intBoardColumns+(intBoardColumns-1)-intSquareNum;
			 }
			 else
			 { 
				 rowNum=-(columnNum*intBoardColumns-intSquareNum);
			 }
			 for (int i=1;i<intPicBoardSquareWidth;i++)
			 {
				 for(int j=1;j<intPicBoardSquareHeight;j++)
				 {
					 if(i%Convert::ToInt32(intPicBoardSquareWidth/(Math::Abs(arrBoard[intSquareNum])+1))==0 && j > 4 && j < intPicBoardSquareHeight-4 && (i<intPicBoardSquareWidth-(intPicBoardSquareWidth/(Math::Abs(arrBoard[intSquareNum])+1)) || Math::Abs(arrBoard[intSquareNum])==1))
						 tabBoard->SetPixel(i+rowNum*intPicBoardSquareWidth,j+columnNum*intPicBoardSquareHeight,Color::Yellow);
					 else if(arrBoard[intSquareNum]>0)
						 tabBoard->SetPixel(i+rowNum*intPicBoardSquareWidth,j+columnNum*intPicBoardSquareHeight,Color::Wheat);
					 else if(arrBoard[intSquareNum]<0)
						 tabBoard->SetPixel(i+rowNum*intPicBoardSquareWidth,j+columnNum*intPicBoardSquareHeight,Color::Wheat);
					 else if(arrBoard[intSquareNum]==0)
						 tabBoard->SetPixel(i+rowNum*intPicBoardSquareWidth,j+columnNum*intPicBoardSquareHeight,Color::Wheat);
				 }
			 }
			 if (intSquareNum2>-1&&intSquareNum2!=intSquareNum)
				drawSpecificSquare(intSquareNum2,false);
			 intSquareNum2=intSquareNum;
			 pictureBox1->Image=tabBoard;
		 }
	}

#pragma endregion


#pragma region GA functions

private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) 
		 {//called from btnThrowSticks_Click
		 //start GA 
/**/			 ArrayList ^ arlstGAMovements= gcnew ArrayList();
			 for (int ii = 0; ii <listBox6->Items->Count  ; ii++)
				 {
					 int square = Convert::ToInt16(listBox6->Items[ii]->ToString());
					 arlstGAMovements->Add(square);
				 }
			 ArrayList ^ arlstGASoldiers= gcnew ArrayList();
				 for (int ii = 0; ii < listBox7->Items->Count ; ii++)
				 {
					 int stick = Convert::ToInt16(listBox7->Items[ii]->ToString());
					 arlstGASoldiers->Add(stick);
				 }
			 findBestMovemntsSequenceByGA(arlstGASoldiers,arlstGAMovements);
				 return;/**/
ArrayList ^ pup;
int maxIndex=-1;
maxFit=-111;
 			 solution ^ stemp =gcnew solution;
			 //sol = gcnew ArrayList();
			 seuq = gcnew ArrayList();
			 player = gcnew ArrayList();
			 temp = gcnew ArrayList();
			 pup = gcnew ArrayList();
//			 cost = gcnew ArrayList();

//			 sol1 =gcnew ArrayList();
solution ^solve=gcnew solution;
			 int numofsequ = listBox6->Items->Count;
			 int numofplayer = listBox7->Items->Count;//Convert.ToInt16(player.Count.ToString());
			 if(numofplayer==0)
				 return;
if (intPlayerNum==-1)
	revarseBoard();
			 int numofpup = 5000;
			 for (int i = 0; i < numofpup; i++)
			 {
				 solve=gcnew solution;
				 players = gcnew ArrayList();
				 for (int ii = 0; ii < numofsequ ; ii++)
				 {
					 int stick = Convert::ToInt16(listBox6->Items[ii]->ToString());
					 seuq->Add(stick);
				 }
				 for (int j = 0; j < numofplayer; j++)
				 {
					 player = gcnew ArrayList();
					 players->Add(player);
				 }
				 while (seuq->Count > 0)
				 {
					 int random1 = rand.Next(0, seuq->Count);// - 1
					 int random2 = rand.Next(0, numofplayer);
dynamic_cast < ArrayList^ >(players[random2])->Add(seuq[random1]);
					 seuq->RemoveAt(random1);
				 }
				 stemp = gcnew solution;
				 twoChilde ^ newchi=gcnew twoChilde;
				 

				 solve->cromosom = gcnew ArrayList(players);
getGAPosititions(solve);


if(maxFit<solve->cost)
{
	maxFit=solve->cost;
	maxIndex=i;
}
				 pup->Add(solve); // my struct


			 }
//////////////////////// adding call crossover3 (new crossover with 2 parents)
twoChilde ^ oldParents=gcnew twoChilde ;
int p1=rand.Next(0,numofpup);
int p2=rand.Next(0,numofpup);
solve=dynamic_cast <solution ^ > (pup[p1]);
oldParents->chiled1= gcnew ArrayList(dynamic_cast <ArrayList ^> (solve->cromosom));
solve=dynamic_cast <solution ^ > (pup[p2]);
oldParents->chiled2= gcnew ArrayList(dynamic_cast <ArrayList ^> (solve->cromosom));
twoChilde ^ newChileds=gcnew twoChilde ;
newChileds=crossover3(oldParents);
solution ^ newChiled1=gcnew solution;//= gcnew ArrayList(oldParents->chiled1);
solution ^ newChiled2=gcnew solution;//= gcnew ArrayList(oldParents->chiled2);
newChiled1->cromosom=gcnew ArrayList( newChileds->chiled1);
newChiled2->cromosom=gcnew ArrayList( newChileds->chiled2);
pup->Add(newChiled1);
pup->Add(newChiled2);
//////////////////////////////////////////////////////////////////////////////

			 solve=dynamic_cast <solution ^ > (pup[maxIndex]);




if (intPlayerNum==22)
{
	revarseBoard();
	revarseSolve(solve);
}
play(solve);


			 delete pup;
		 }
		

twoChilde ^ crossover3(twoChilde ^ parents)
{
	int hist1[5]={0};
	int hist2[5]={0};
	ArrayList ^ test1=gcnew ArrayList(dynamic_cast <ArrayList ^>(parents->chiled1));
	ArrayList ^ test2=gcnew ArrayList(dynamic_cast <ArrayList ^>(parents->chiled2));
		ArrayList ^ histTest1;
		ArrayList ^ histTest2;
	for(int i=0;i<test1->Count;i++)
	{
		histTest1=gcnew ArrayList(dynamic_cast <ArrayList ^>(test1[i]));
		histTest2=gcnew ArrayList(dynamic_cast < ArrayList ^>(test2[i]));
		for(int j=0;j<histTest1->Count;j++)
		{
			int currentStick=Convert::ToInt16(histTest1[j]);
			if(currentStick==1)
				hist1[0]++;
			else if(currentStick==2)
				hist1[1]++;
			else if(currentStick==3)
				hist1[2]++;
			else if(currentStick==4)
				hist1[3]++;
			else
				hist1[4]++;
		}
		for(int j=0;j<histTest2->Count;j++)
		{
			int currentStick=Convert::ToInt16(histTest2[j]);
			if(currentStick==1)
				hist2[0]++;
			else if(currentStick==2)
				hist2[1]++;
			else if(currentStick==3)
				hist2[2]++;
			else if(currentStick==4)
				hist2[3]++;
			else
				hist2[4]++;
		}
	}
	int random1=rand.Next(0,parents->chiled1->Count);
	int random2=rand.Next(0,parents->chiled2->Count);
	ArrayList ^ crosstemp=gcnew ArrayList(dynamic_cast <ArrayList ^>(test1[random1]));
	test1[random1]=gcnew ArrayList(dynamic_cast <ArrayList ^>(test2[random2]));
	test2[random2]=crosstemp;
	for(int i=0;i<test1->Count;i++)
	{
		histTest1=gcnew ArrayList(dynamic_cast <ArrayList ^>(test1[i]));
		histTest2=gcnew ArrayList(dynamic_cast <ArrayList ^>(test2[i]));
		int count1=histTest1->Count;
		int count2=histTest2->Count;
		for(int j=0;j<count1;j++)
		{
			int currentStick=Convert::ToInt16(histTest1[j]);
			if(currentStick==1)
			{
				if(hist1[0]>0)
					hist1[0]--;
				else
				{
					histTest1->RemoveAt(j);
					j--;
					count1--;
				}
			}
			else if(currentStick==2)
			{
				if(hist1[1]>0)
					hist1[1]--;
				else
				{
					histTest1->RemoveAt(j);
					j--;
					count1--;
				}
			}
			else if(currentStick==3)
			{
				if(hist1[2]>0)
					hist1[2]--;
				else
				{
					histTest1->RemoveAt(j);
					j--;
					count1--;
				}
			}
			else if(currentStick==4)
			{
				if(hist1[3]>0)
					hist1[3]--;
				else
				{
					histTest1->RemoveAt(j);
					j--;
					count1--;
				}
			}
			else
			{
				if(hist1[4]>0)
					hist1[4]--;
				else
				{
					histTest1->RemoveAt(j);
					j--;
					count1--;
				}
			}
		}
///////////// for chiled 2		
		for(int j=0;j<count2;j++)
		{
			int currentStick=Convert::ToInt16(histTest2[j]);
			if(currentStick==1)
			{
				if(hist2[0]>0)
					hist2[0]--;
				else
				{
					histTest2->RemoveAt(j);
					j--;
					count2--;
				}
			}
			else if(currentStick==2)
			{
				if(hist2[1]>0)
					hist2[1]--;
				else
				{
					histTest2->RemoveAt(j);
					j--;
					count2--;
				}
			}
			else if(currentStick==3)
			{
				if(hist2[2]>0)
					hist2[2]--;
				else
				{
					histTest2->RemoveAt(j);
					j--;
					count2--;
				}
			}
			else if(currentStick==4)
			{
				if(hist2[3]>0)
					hist2[3]--;
				else
				{
					histTest2->RemoveAt(j);
					j--;
					count2--;
				}
			}
			else
			{
				if(hist2[4]>0)
					hist2[4]--;
				else
				{
					histTest2->RemoveAt(j);
					j--;
					count2--;
				}
			}
		}
		test1[i]=gcnew ArrayList(histTest1);
		test2[i]=gcnew ArrayList(histTest2);
	}
////////// fix chiled1
	for(int k=0;k<5;k++)
	{
		if(hist1[k]>0)
		{
			for(int l=0;l<hist1[k];l++)
			{
				int random3=rand.Next(0,test1->Count);
				if(k==0)
					dynamic_cast < ArrayList^ >(test1[random3])->Add(1);
				else if(k==1)
					dynamic_cast < ArrayList^ >(test1[random3])->Add(2);
				else if(k==2)
					dynamic_cast < ArrayList^ >(test1[random3])->Add(3);
				else if(k==3)
					dynamic_cast < ArrayList^ >(test1[random3])->Add(4);
				else
					dynamic_cast < ArrayList^ >(test1[random3])->Add(6);
			}
		}
	}
////////// fix chiled2
	for(int k=0;k<5;k++)
	{
		if(hist2[k]>0)
		{
			for(int l=0;l<hist2[k];l++)
			{
				int random3=rand.Next(0,test2->Count);
				if(k==0)
					dynamic_cast < ArrayList^ >(test2[random3])->Add(1);
				else if(k==1)
					dynamic_cast < ArrayList^ >(test2[random3])->Add(2);
				else if(k==2)
					dynamic_cast < ArrayList^ >(test2[random3])->Add(3);
				else if(k==3)
					dynamic_cast < ArrayList^ >(test2[random3])->Add(4);
				else
					dynamic_cast < ArrayList^ >(test2[random3])->Add(6);
			}
		}
	}
twoChilde ^ newchiled=gcnew twoChilde;
newchiled->chiled1=test1;
newchiled->chiled2=test2;
return (newchiled);



}

void mutation()
        {
            ArrayList ^ temp1;
            ArrayList ^ temp2;
           
            int element = players->Count;

            for (int i = 0; i < element; i++)
            {

            b:
                int rando1 = rand.Next(0, element); // - 1
                int rando2 = rand.Next(0, element);// - 1
                if (rando1 == rando2)
                {
                    goto b;
                }

                temp1 = dynamic_cast < ArrayList^ >(players[rando1]);
                temp2 = dynamic_cast < ArrayList^ >(players[rando2]);
                int temp3;
                int max1 = temp1->Count;
                int max2 = temp2->Count;
                if (max1 < 0)
                    max1 = 0;
                if (max2 < 0)
                    max2 = 0;
                if (max1 == 0 && max2==0)
                    goto b;
                c:
                int rando3 = rand.Next(0, max1+1);
                int rando4 = rand.Next(0, max2+1);

                if (rando3 == max1  && rando4 == max2 )
                {
                    goto c;
                }
                else if (rando3 == max1)
                {
                    temp1->Add(temp2[rando4]);
                    temp2->RemoveAt(rando4);
                    goto d;
                }
                else if (rando4 == max2)
                {
                    temp2->Add(temp1[rando3]);
                    temp1->RemoveAt(rando3);
                    goto d;
                }


                else if (temp1->Count == 0 && temp2->Count == 0)
                {
                    goto b;
                }
                else if (temp1->Count == 0 && temp2->Count != 0)
                {
                    temp1->Add(temp2[rando4]);
                    temp2->RemoveAt(rando4);
                }
                else if (temp1->Count != 0 && temp2->Count == 0)
                {
                    temp2->Add(temp1[rando3]);
                    temp1->RemoveAt(rando3);

                }
                else
                {
                    temp3 = Convert::ToInt32(temp1[rando3]);
                    temp1[rando3] = temp2[rando4];
                    temp2[rando4] = temp3;
                   
                }
            d:
                players[rando1] = temp1;
                players[rando2] = temp2;


            }

        }

       void getGALast(solution ^ temp3)
        {
			listBox8->Items->Clear();
			listBox9->Items->Clear();
			listBox19->Items->Clear();
            ArrayList ^ temp1;

			for (int i = 0; i <temp3->cromosom->Count; i++)
            {
				String ^str="";
                temp1 = dynamic_cast < ArrayList^ >(temp3->cromosom[i]);
			    for (int j = 0; j < temp1->Count; j++)
				{
					str+= temp1[j] + " ";
				}
				if(temp1->Count==0)
					str="-";
				listBox8->Items->Add(str);
            }



			for (int i = 0; i <temp3->positions->Count; i++)
            {
				String ^str="";
				String ^str3="";
                temp1 = dynamic_cast < ArrayList^ >(temp3->positions[i]);
			    for (int j = 0; j < temp1->Count; j++)
				{
					str+= temp1[j] + " ";
					str3+=stringAddress(Convert::ToInt16(temp1[j])) + " ";
				}
				if(temp1->Count==0)
				{
					str="-";
					str3="-";
				}
				listBox9->Items->Add(str);
				listBox19->Items->Add(str);
            }

        }

       void getGAPosititions(solution ^ temp3)
        {
            ArrayList ^ temp1; // for movments
			ArrayList ^ temp2; // for positions
beginCalculatePositions: //restert operation after fixing illegal movements ::: if(GAarrBoard[soldierSquare]==0 && temp1->Count>0)
temp3->cost=0;
			temp3->positions = gcnew ArrayList();
			GAarrBoard =gcnew array<int,1>(intBoardColumns*intBoardRows);

			for (int i=0;i<intBoardColumns*intBoardRows;i++)
				GAarrBoard[i]=arrBoard[i];

            for (int i = 0; i < temp3->cromosom->Count; i++)
			{
				String ^str="";
				int soldierSquare=-1;
				int soldierSquare2=-1;
				int soldierMovement=-1;
                temp1 = dynamic_cast < ArrayList^ >(temp3->cromosom[i]);
				temp2=gcnew ArrayList();

					soldierSquare= Convert::ToInt16(listBox7->Items[i]);
					if(GAarrBoard[soldierSquare]==0 && temp1->Count>0)//if this soldier have movements and was grouped with this chromosome previous movements 
					{
						String ^ strNote="critical state before fixing\n\n\n";
			//			saveThisState(strNote,temp3,GAarrBoard,arrBoard,soldierSquare);
						strNote="\n\n\n\n critical state after fixing\n\n\n";
						if(i ==0 && i < temp3->cromosom->Count-1)//if still waited soldiers 
						{
							ArrayList ^ arlstTmpMovements=dynamic_cast < ArrayList^ >(temp3->cromosom[i+1]);
							for (int j = 0; j < temp1->Count; j++)
							{
								arlstTmpMovements->Add(Convert::ToInt16(temp1[j]));
							}
							temp1->Clear();
							temp3->cromosom[i]=temp1;
							temp3->cromosom[i+1]=arlstTmpMovements;
				//		saveThisState(strNote,temp3,GAarrBoard,arrBoard,soldierSquare);
							temp3->positions->Clear();
							goto beginCalculatePositions;
						}
						else if(i >0)
						{
							ArrayList ^ arlstTmpMovements=dynamic_cast < ArrayList^ >(temp3->cromosom[i-1]);
							for (int j = 0; j < temp1->Count; j++)
							{
								arlstTmpMovements->Add(Convert::ToInt16(temp1[j]));
							}
							temp1->Clear();
							temp3->cromosom[i]=temp1;
							temp3->cromosom[i-1]=arlstTmpMovements;
							temp3->positions->Clear();
			//			saveThisState(strNote,temp3,GAarrBoard,arrBoard,soldierSquare);
							goto beginCalculatePositions;
						}
						else
						{
							strNote="why ?????? ";
							temp3->cost=-11111111;
						}
			//			saveThisState(strNote,temp3,GAarrBoard,arrBoard,soldierSquare);
					}
					soldierSquare2=soldierSquare;
	int tempSoldierSquare=GAarrBoard[soldierSquare2];
	int tempSoldierSquare2=GAarrBoard[soldierSquare2];
			    for (int j = 0; j < temp1->Count; j++)
				{
					if(soldierSquare==32) soldierSquare=16;
					soldierMovement= Convert::ToInt16(temp1[j]);
					int tempOldSquare=soldierSquare;//for ungrouped soldiers
					soldierSquare=getGAPosititionOf(soldierSquare,soldierMovement);//here
					temp2->Add(soldierSquare);
					//intKillFitness+=killFitness(soldierSquare);
					//intPositionFitness+=positionFitness(soldierSquare);
					str+=soldierSquare + " ";
					if(soldierSquare<0)
					{
						tempSoldierSquare2=1;
						tempSoldierSquare--;
						GAarrBoard[soldierSquare2]=0;
						GAarrBoard[tempOldSquare]=tempSoldierSquare;
						soldierSquare2=soldierSquare*-1;
						soldierSquare=soldierSquare2;
						GAarrBoard[soldierSquare]=1;
					}
					else if(GAarrBoard[soldierSquare]*intPlayerNum<0)
						GAarrBoard[soldierSquare]=0;

				}
//applayToArray
				if(temp1->Count==0)
					str="-";
				else
				{
	GAarrBoard[soldierSquare]+=tempSoldierSquare2;
	GAarrBoard[soldierSquare2]-=tempSoldierSquare2;
				}
				//listBox9->Items->Add(str);
				temp3->positions->Add(temp2);
            }

if(temp3->cost>-11111111)
{
	//cmbPlayer1Level
	//cmbPlayer2Level
	if((label17->Text=="Player 1 " && cmbPlayer1Level->SelectedIndex<2)||(label17->Text=="Player 2 " && cmbPlayer2Level->SelectedIndex<2))
		temp3->cost=getBeginnerCost();//getCost2();
	else 
		temp3->cost=getCost(); //intKillFitness+intPositionFitness;
}
temp3->board = gcnew ArrayList(GAarrBoard); //intKillFitness+intPositionFitness;

		
	   }

       int getGAPosititionOf(int intSoldierSquare , int intSoldierMovement)
        {//caled from play(solution ^ structGAMovements) and getGAPosititions(solution ^ temp3)
			 listBox11->Items->Clear();
			 bool oneOrAll=false;
			 if(intSoldierSquare>-1 && intSoldierMovement>0)
			 {
				 if(intPlayerNum>0)
				 {
					 int movement  = intSoldierMovement;
					 int oldSquare = intSoldierSquare;
					 int newSquare=oldSquare+movement;
					 int newSquare2=-1;
					 if(movement==1 && arrBoard[oldSquare]>1)
					 {
						 oneOrAll=true;
					 }

					 if(newSquare>=intBoardColumns*intBoardRows)
						 newSquare-=(intBoardColumns*2);//(intBoardColumns*2-1)

					 if(newSquare<32 && newSquare>=24 && intPlayerNum>0 && oldSquare<24 && oldSquare>=16 )
					 {
						 newSquare2=newSquare-(intBoardColumns*2);
						 //thisTurn=newSquare;// to play more than one movement in contender zone on same turn
					 }

					 if(oneOrAll)// && newSquare2==-1
					 { 

						 listBox11->Items->Add("one to " + newSquare);//how i add solder value to hold movement
						 listBox11->Items->Add("all to " + newSquare);//how i add solder value to hold movement
					 }
					 if (oneOrAll && newSquare2>-1)
					 {
						 listBox11->Items->Add("one to " + newSquare2);//how i add solder value to hold movement
						 listBox11->Items->Add("all to " + newSquare2);//how i add solder value to hold movement
					 }
					 if(oneOrAll==false)
					 {
						 listBox11->Items->Add(newSquare);
						 if (newSquare2>-1)
						 {
								 

							 listBox11->Items->Add(newSquare2);//how i add solder value to hold movement 
						 }
					 }
				 }
			
			 }
					int GAMovementIndex = rand.Next(0, listBox11->Items->Count);	 
					int GANewSquare=-2;//Convert::ToInt16(listBox11->Items[GAMovementIndex]);

//					return GANewSquare;
if(listBox11->Items->Count>0)					
{
	if(listBox11->Items[GAMovementIndex]->ToString()->StartsWith("all"))
	GANewSquare=Convert::ToInt16(listBox11->Items[GAMovementIndex]->ToString()->Substring(7)->Trim());
	else if( listBox11->Items[GAMovementIndex]->ToString()->StartsWith("one") )
	GANewSquare=-1*(Convert::ToInt16(listBox11->Items[GAMovementIndex]->ToString()->Substring(7)->Trim()));
	else
	GANewSquare=Convert::ToInt16(listBox11->Items[GAMovementIndex]);
}
else
	int aaaaaa=0;//·« ÌÊÃœ Õ—ﬂ« 
					String ^ strNegativeSquareNum="-"+GANewSquare;
					
return GANewSquare;

        }


int getCost()
			{// called from getGAPosititions and play(solution ^ structGAMovements)
				//if(!(lstHistory->Items[0]->ToString()->StartsWith("cost1")))lstHistory->Items->Insert(0,"cost1");
				int fit=0;
				int sum=0;
				for (int i=0;i<32;i++)
				{
					if (GAarrBoard[i]<0)
						sum-=(GAarrBoard[i]);
				}
				for (int i=0;i<32;i++)
				{
					if(0==Convert::ToInt16(i/intBoardColumns))
						fit+=GAarrBoard[i]*4;
					else
						fit+=GAarrBoard[i]*2;

					if (GAarrBoard[i]>0 && i > 12 && i<=15)
						  fit+=GAarrBoard[i]*2;

					if (GAarrBoard[i]>1)
						fit-=GAarrBoard[i]*4;            // avoid grouping the soldier 

					if(i>=24&&GAarrBoard[i]>0)
						fit+=GAarrBoard[i]*((GAarrBoard->Length)-i);						

					if(GAarrBoard[i]>0)//Œ’„ ‰ﬁÿ Ì‰ ⁄‰ ﬂ· Œ«‰Â ›ÌÂ« Ã‰Êœ ›Ì «·Œ«‰«  «·Œ„”… «·”«»ﬁ…
					{
						int x=0;
						if(i>5)
							x=i-5;
						for(int j=i;j>=x;j--)//«·Ê÷⁄ «·ÿ»Ì⁄Ì
						{
							if(GAarrBoard[j]<0)
								fit-=2;
						}
					    if(i<5)//«·«” À‰«¡« 
						{
							for(int j=10+i;j<16;j++)
								if(GAarrBoard[j]<0)
									fit-=2;
						}
					    else if(i>7 && i<=12)
						{
							for(int j=24-(13-i);j<24;j++)
								if(GAarrBoard[j]<0)
									fit-=2;
						}
					    else if(i>15 && i<=20)
						{
							for(int j=32-(21-i);j<32;j++)
								if(GAarrBoard[j]<0)
									fit-=2;
						}
					}//
					if((3==Convert::ToInt16(i/intBoardColumns))&& sum<4&&GAarrBoard[i]>0)	
						fit-=GAarrBoard[i]*3;                           //  Ã‰» «·œŒÊ· «·Ï „‰ÿﬁ… «·⁄œÊ «–« ﬂ«‰ ⁄œœ Ã‰Êœ «·⁄œÊ ﬁ·Ì·«
				
				}
				return fit;
			}
int getBeginnerCost()
			{// called from getGAPosititions and play(solution ^ structGAMovements)
				//if(!(lstHistory->Items[0]->ToString()->StartsWith("BeginnerCost")))lstHistory->Items->Insert(0,"BeginnerCost");
				int fit=0;
int sum=0;
				for (int i=0;i<32;i++)
				{
					if (GAarrBoard[i]<0)
				    sum+=GAarrBoard[i];

				}
				fit=sum;	

				return fit;
			}
int getCost2()
			{// called from getGAPosititions and play(solution ^ structGAMovements)
				//beginner fitness 
				//if(!(lstHistory->Items[0]->ToString()->StartsWith("cost2")))lstHistory->Items->Insert(0,"cost2");
				int fit=0;
				int sum=0;
				int sum2=0;
				for (int i=0;i<32;i++)
				{
					if (GAarrBoard[i]<0)
				    sum-=Math::Abs((GAarrBoard[i]));
					if(i>7&&i<24)
					{
						if(GAarrBoard[i]>0)
						sum2+=GAarrBoard[i];
					}
				}
					
				for (int i=0;i<32;i++)
				{
					if(0==Convert::ToInt16(i/intBoardColumns))
						fit+=GAarrBoard[i]*4;
					else if(1==Convert::ToInt16(i/intBoardColumns))
						fit+=GAarrBoard[i]*2;
					else if(2==Convert::ToInt16(i/intBoardColumns))
						fit+=GAarrBoard[i]*2;
					else if(3==Convert::ToInt16(i/intBoardColumns))
					{
						fit+=GAarrBoard[i]*2;
						if(GAarrBoard[24]>0)
						{
							fit+=2;
						}
					}
		            if (GAarrBoard[i]>0&&i > 12 && i<=15)
					  {
						  fit+=GAarrBoard[i]*1;
			          }
					if(GAarrBoard[i]<0)
					{
						sum-=Math::Abs((GAarrBoard[i])); // the priority for kill whenever the number of enemy soldier lesser 1
					}
					if (GAarrBoard[i]>1)
					{
						fit-=GAarrBoard[i]*1;            // avoid grouping the soldier 
					}
					if(i>=24&&GAarrBoard[i]>0)
					{
						fit+=GAarrBoard[i]*((i-(GAarrBoard->Length-1))-GAarrBoard[i]);						
					}
					if(GAarrBoard[i]>0&&i>5)//
					  {
					   for(int j=i;j>=(i-5);j--)
					     {
						if(GAarrBoard[j]<0)
							fit+=GAarrBoard[j]*2;
					      }

					   }//
					if((3==Convert::ToInt16(i/intBoardColumns))&& Math::Abs(sum)<4&&GAarrBoard[i]>0)	
						fit-=GAarrBoard[i]*3;                           //  Ã‰» «·œŒÊ· «·Ï „‰ÿﬁ… «·⁄œÊ «–« ﬂ«‰ ⁄œœ Ã‰Êœ «·⁄œÊ ﬁ·Ì·«
				
				}

				fit+=(sum+8)*4; // the priority for kill whenever the number of enemy soldier lesser 2
				fit-=sum2^3;
				return fit;
			}
int getCost3()
			{//not used
				//if(!(lstHistory->Items[0]->ToString()->StartsWith("cost3")))lstHistory->Items->Insert(0,"cost3");
				int fit=0;
				int sum=0;
				int sum2=0;
				for (int i=0;i<32;i++)
				{
					if(0==Convert::ToInt16(i/intBoardColumns))
						fit+=GAarrBoard[i]*4;
					else if(1==Convert::ToInt16(i/intBoardColumns))
						fit+=GAarrBoard[i]*2;
					else if(2==Convert::ToInt16(i/intBoardColumns))
						fit+=GAarrBoard[i]*2;
					else if(3==Convert::ToInt16(i/intBoardColumns))
					{
						fit+=GAarrBoard[i]*2;
						if(GAarrBoard[i]>0 && i==24)
						{
							fit+=2;
						}
					}
		            if (GAarrBoard[i]>0&&i > 12 && i<=15)//
					  {
						  fit+=GAarrBoard[i]*2;
			          }
					if(GAarrBoard[i]<0)
					{
						sum-=Math::Abs((GAarrBoard[i])); // the priority for kill whenever the number of enemy soldier lesser 1
					}
					if (GAarrBoard[i]>1)
					{
						fit-=GAarrBoard[i]*2; // avoid grouping the soldier 
					}
					if(i>=24&&GAarrBoard[i]>0)
					{
						fit+=GAarrBoard[i]*((i-(GAarrBoard->Length-1))-GAarrBoard[i]);						
					}
					if(GAarrBoard[i]>0&&i>5)//
					  {
					   for(int j=i;j>=(i-5);j--)
					     {
						if(GAarrBoard[j]<0)
							fit+=GAarrBoard[j]*2;
					      }

					   }//
					if((3==Convert::ToInt16(i/intBoardColumns))&&sum>-4)
						fit-=GAarrBoard[i]*2;                           //  Ã‰» «·œŒÊ· «·Ï „‰ÿﬁ… «·⁄œÊ «–« ﬂ«‰ ⁄œœ Ã‰Êœ «·⁄œÊ ﬁ·Ì·«

					if(i>7&&i<24)
					{
						if(GAarrBoard[i]>0)
						sum2+=GAarrBoard[i];
					}


				}

				fit+=(sum+8)*4; // the priority for kill whenever the number of enemy soldier lesser 2
				fit-=sum2^3;//  „‰⁄ œŒÊ· «ﬂÀ— „‰ Ã‰œÌÌ‰ «·Ï «·”«Õ…
				return fit;
			}







void play(solution ^ structGAMovements)
{// called from button7_Click

///// **** getGALast(solve);
	listBox8->Items->Clear();
	listBox9->Items->Clear();
	listBox19->Items->Clear();


	ArrayList ^ temp1;
	ArrayList ^ temp11;
	for (int i = 0; i <structGAMovements->cromosom->Count; i++)
	{
		String ^str="";
		String ^str2="";
		String ^str3="";
		temp1 = dynamic_cast < ArrayList^ >(structGAMovements->cromosom[i]);
		temp11 = dynamic_cast < ArrayList^ >(structGAMovements->positions[i]);
		for (int j = 0; j < temp1->Count; j++)
		{
			str+= temp1[j] + " ";
			str2+= temp11[j] + " ";
			str3+=stringAddress(Convert::ToInt16(temp11[j])) + " ";
		}
		if(temp1->Count==0)
		{
			str="-";
			str2="-";
			str3="-";
		}
		listBox8->Items->Add(str);
		listBox9->Items->Add(str2);
		listBox19->Items->Add(str3);
	}
	listBox9->Items->Add("=" + structGAMovements->cost);
	listBox19->Items->Add("=" + structGAMovements->cost);
// what about tab movements ??????????

GAarrBoard =gcnew array<int,1>(intBoardColumns*intBoardRows);
for (int i=0;i<intBoardColumns*intBoardRows;i++)
	GAarrBoard[i]=arrBoard[i];


// new 21/21 12:31 am
	for (int i = 0; i <structGAMovements->positions->Count; i++)
	{
		int delayTime=500;
		pictureBox1->Image=tabBoard;
		temp1 = dynamic_cast < ArrayList^ >(structGAMovements->positions[i]);
		int oldSoldier= Convert::ToInt16(listBox7->Items[i]);
		for (int j = 0; j < temp1->Count; j++)
		{
			if(oldSoldier==32)
				oldSoldier=16;
			int newSoldier= Convert::ToInt16(temp1[j]);
			drawSquareUp(oldSoldier);
			pictureBox1->Image=tabBoard;
			Application::DoEvents();
			if(newSoldier>0)
			{
			drawSquareDown(newSoldier);
				if(arrBoard[newSoldier]*intPlayerNum>0)
					arrBoard[newSoldier]+=arrBoard[oldSoldier];
				else
					arrBoard[newSoldier]=arrBoard[oldSoldier];
				arrBoard[oldSoldier]=0;
			}
			else
			{
				newSoldier=newSoldier*-1;
			drawSquareDown(newSoldier);
				if(arrBoard[newSoldier]*intPlayerNum>0)
				{
					arrBoard[newSoldier]+=intPlayerNum;
					arrBoard[oldSoldier]-=intPlayerNum;
				}
				else
				{
					arrBoard[newSoldier]=intPlayerNum;
					arrBoard[oldSoldier]-=intPlayerNum;
				}
			}
			pictureBox1->Image=tabBoard;
	highlightPath(oldSoldier,newSoldier);
addHistory(oldSoldier,newSoldier);
			Application::DoEvents();
			Threading::Thread::Sleep(delayTime);
			drawSpecificSquare(oldSoldier,false);
	removeHighlightPath(oldSoldier,newSoldier);
			pictureBox1->Image=tabBoard;
			Application::DoEvents();
//			Threading::Thread::Sleep(100);
			oldSoldier= newSoldier;
bool endGame=true;
 for(int i = 0;i<32;i++)
	 if(arrBoard[i]*intPlayerNum<0)
		 endGame=false;

if(endGame)
{

	goto lblExitGame;
}
		}
			drawSpecificSquare(oldSoldier,false);
	}
for(int i=0;i<32;i++)
{
//	arrBoard[i]=GAarrBoard[i];
	drawSpecificSquare(i,false);
}
lbMovements->Items->Clear();
				 if(lbMovements->Items->Count==0 && groupBox2->Visible==false)
				 {
					 if (checkBox4->Checked==true)
						 timer1->Enabled=true;
			 changePlayer();
					 groupBox2->Visible=true;
					 btnThrowOrNew->Focus();
					 UseWaitCursor=false;
					 //throwSticks(lbMovements,label3);
					 //btnPlayerChanging_Click(sender,e);
					 			 thisTurn=-1;// to play more than one movement in contender zone on same turn
			 btnPlayerChanging->Enabled=false;
			 btnThrowSticks->Enabled=true;
			 lblInfo->Text="Click Throw Sticks";
				 }

pictureBox1->Image=tabBoard;

return;
lblExitGame:
pictureBox1->Image=tabBoard;
					 if (checkBox4->Checked==true)
						 timer1->Enabled=true;
			 changePlayer();
					 groupBox2->Visible=true;
					 btnThrowOrNew->Focus();
					 UseWaitCursor=false;
					 //throwSticks(lbMovements,label3);
					 //btnPlayerChanging_Click(sender,e);
					 			 thisTurn=-1;// to play more than one movement in contender zone on same turn
			 btnPlayerChanging->Enabled=false;
			 btnThrowSticks->Enabled=true;
			 lblInfo->Text="Click Throw Sticks";
}
void revarseBoard()
{//called from button7_Click
	if(intPlayerNum==-1)
		intPlayerNum=22;
	else
		intPlayerNum=-1;

	for(int i=0;i<8;i++)
	{
		int temp=arrBoard[i]*-1;
		arrBoard[i]=arrBoard[i+24]*-1;
		arrBoard[i+24]=temp;
	}
	for(int i=8;i<16;i++)
	{
		int temp=arrBoard[i]*-1;
		arrBoard[i]=arrBoard[8+i]*-1;//31-i
		arrBoard[8+i]=temp;//31-i
	}
	//reverse movable soliers in listBox7
	for(int i=0;i<listBox7->Items->Count;i++)
	{
		int soldierNum=Convert::ToInt16(listBox7->Items[i]);
		if(soldierNum<8)
			soldierNum+=24;
		else if(soldierNum<16)
			soldierNum+=8;
		else if(soldierNum<24)
			soldierNum-=8;
		else 
			soldierNum-=24;
		listBox7->Items[i]=soldierNum;
	}
	for(int i=0;i<arlstFrozenSoldiers->Count;i++)
	{
		int soldierNum=Convert::ToInt16(arlstFrozenSoldiers[i]);
		if(soldierNum<8)
			soldierNum+=24;
		else if(soldierNum<16)
			soldierNum+=8;
		else if(soldierNum<24)
			soldierNum-=8;
		else 
			soldierNum-=24;
		arlstFrozenSoldiers[i]=soldierNum;
	}
	for(int i=0;i<arlstAvailableSoldiers->Count;i++)
	{
		int soldierNum=Convert::ToInt16(arlstAvailableSoldiers[i]);
		if(soldierNum<8)
			soldierNum+=24;
		else if(soldierNum<16)
			soldierNum+=8;
		else if(soldierNum<24)
			soldierNum-=8;
		else 
			soldierNum-=24;
		arlstAvailableSoldiers[i]=soldierNum;
	}
	for(int i=0;i<arlstInContenderZoneSoldiers->Count;i++)
	{
		int soldierNum=Convert::ToInt16(arlstInContenderZoneSoldiers[i]);
		if(soldierNum<8)
			soldierNum+=24;
		else if(soldierNum<16)
			soldierNum+=8;
		else if(soldierNum<24)
			soldierNum-=8;
		else 
			soldierNum-=24;
		arlstInContenderZoneSoldiers[i]=soldierNum;
	}
}
void revarseSolve(solution ^ solve)
{//called from button7_Click
	for(int i=0;i<solve->positions->Count;i++)
	{
		ArrayList ^ temp1 = dynamic_cast < ArrayList^ >(solve->positions[i]);
		for(int j=0;j<temp1->Count;j++)
		{
			bool negative=false;
			int x=Convert::ToInt16(temp1[j]);
			if(x<0)
			{
				x=x*-1;
				negative=true;
			}
			if(x<8)
				x=24+x;
			else if(x<16)
				x=x+8;
			else if (x<24)
				x=x-8;
			else
				x=x-24;
			if(negative)
				x=x*-1;
			temp1[j]=x;

		}
	}
}
#pragma endregion

#pragma region Prepare to GA functions

#pragma endregion

////////////////// demos
void highlightPath(int intSquareNum,int intSquareNum2)
{
		if (disableGraphics)
			return;
		if (imageList1->Images->Count==0)
		return; //if game closed 

		highlightSquare(intSquareNum);
		highlightSquare(intSquareNum2);
			
}
void highlightSquare(int intSquareNum)
{
			
Bitmap ^ im1=tabBoard;
		if(intSquareNum>-1 && intSquareNum<intBoardColumns*intBoardRows)
		{
			columnNum=intSquareNum/intBoardColumns;
			 if ((columnNum%2)==1)
			 {
				 rowNum=columnNum*intBoardColumns+(intBoardColumns-1)-intSquareNum;
			 }
			 else
			 { 
				 rowNum=-(columnNum*intBoardColumns-intSquareNum);
			 }
		int i=rowNum*intBackgroundSquareWidth+BackgroundLeftMargin;
		int j=columnNum*intBackgroundSquareHeight+BackgroundTopMargin;
int ii=0;
int jj=0;

int imageIndex=0;
ii=i;
jj=j;
Bitmap ^ im2=gcnew Bitmap(imageList1->Images[imageIndex]);
		int w=im2->Width;
		int h=im2->Height;
	im2=gcnew Bitmap(im1);
		Bitmap ^ im3=gcnew Bitmap(im1);
		for (int x=0;x<w;x++)
			for (int y=0;y<h;y++){
				Color c=im2->GetPixel(x+ii,y+jj);
				int b=c.R+20;
				int g=c.G+20;
				int r=c.R+20;
				if (r>255)
					r=255;
				if (g>255)
					g=255;
				if (b>255)
					b=255;
				im3->SetPixel(x+i,y+j,Color::FromArgb(r,g,b));
			}
tabBoard=im3;
pictureBox1->Image=tabBoard;
				 }
}
void removeHighlightPath(int intSquareNum,int intSquareNum2)
{
		if (disableGraphics)
			return;

		if (imageList1->Images->Count==0)
		return; //if game closed 
		drawSpecificSquare(intSquareNum,false);
		drawSpecificSquare(intSquareNum2,false);
}
void drawSpecificSquare(int intSquareNum,bool clearStamp)
	{//demo to merge soldiers with background
		if (disableGraphics)
			return;
		if (imageList1->Images->Count==0)
			return; //if game closed 
		if(intSquareNum>-1 && intSquareNum<intBoardColumns*intBoardRows)
		{
			columnNum=intSquareNum/intBoardColumns;
			 if ((columnNum%2)==1)
			 {
				 rowNum=columnNum*intBoardColumns+(intBoardColumns-1)-intSquareNum;
			 }
			 else
			 { 
				 rowNum=-(columnNum*intBoardColumns-intSquareNum);
			 }
			 Bitmap ^ background=  gcnew Bitmap(picBackground->Image); 
		int i=rowNum*intBackgroundSquareWidth+BackgroundLeftMargin;
		int j=columnNum*intBackgroundSquareHeight+BackgroundTopMargin;
int ii=0;
int jj=0;

int imageIndex;
if(arrBoard[intSquareNum]<0)
{drawSpecificSquareEmpty(intSquareNum,clearStamp);
	if (-1*arrBoard[intSquareNum]<7)
imageIndex=-1*arrBoard[intSquareNum]-1;
else
imageIndex=5;
}
else if(arrBoard[intSquareNum]>0)
{drawSpecificSquareEmpty(intSquareNum,clearStamp);
	if (arrBoard[intSquareNum]<7)
imageIndex=5+arrBoard[intSquareNum];
else
imageIndex=11;
}
else
{
ii=i;
jj=j;
}
		Bitmap ^ im1=tabBoard;
Bitmap ^ im2=gcnew Bitmap(imageList1->Images[imageIndex]);
		int w=im2->Width;
		int h=im2->Height;
if(arrBoard[intSquareNum]==0)
	im2=gcnew Bitmap(picBackground->Image);
		Bitmap ^ im3=gcnew Bitmap(im1);

			
if (clearStamp)
{//stamp width + margins
	w=16;
	h=10;
}

		for (int x=0;x<w;x++)
			for (int y=0;y<h;y++){
				Color c1=im1->GetPixel(x+i,y+j);
				Color c2=im2->GetPixel(x+ii,y+jj);
				int r=c2.R;
				int g=c2.G;
				int b=c2.B;
				if(b>130)
					im3->SetPixel(x+i,y+j,c1);
				else
					im3->SetPixel(x+i,y+j,c2);
			}
tabBoard=im3;
pictureBox1->Image=tabBoard;
				 }
			 }

void drawSpecificSquareEmpty(int intSquareNum,bool clearStamp)//,, int minBlueShading, int maxBlueShading, int minRedShading, int maxRedShading, int minGreenShading, int maxGreenShading)
	{//demo to merge soldiers with background
		if (disableGraphics)
			return;
		Bitmap ^ im1=tabBoard;
		if(intSquareNum>-1 && intSquareNum<intBoardColumns*intBoardRows)
		{
			columnNum=intSquareNum/intBoardColumns;
			 if ((columnNum%2)==1)
			 {
				 rowNum=columnNum*intBoardColumns+(intBoardColumns-1)-intSquareNum;
			 }
			 else
			 { 
				 rowNum=-(columnNum*intBoardColumns-intSquareNum);
			 }
			 Bitmap ^ background=  gcnew Bitmap(picBackground->Image); //ahmed
		int i=rowNum*intBackgroundSquareWidth+BackgroundLeftMargin;
		int j=columnNum*intBackgroundSquareHeight+BackgroundTopMargin;
int ii=0;
int jj=0;

int imageIndex=0;
ii=i;
jj=j;
//}
Bitmap ^ im2=gcnew Bitmap(imageList1->Images[imageIndex]);
		int w=im2->Width;
		int h=im2->Height;
//if(arrBoard[intSquareNum]==0)
	im2=gcnew Bitmap(picBackground->Image);
		Bitmap ^ im3=gcnew Bitmap(im1);
if (clearStamp)
{//stamp width + margins
	w=10;
	h=10;
}

			

		for (int x=0;x<w;x++)
			for (int y=0;y<h;y++){
				Color c2=im2->GetPixel(x+ii,y+jj);
					im3->SetPixel(x+i,y+j,c2);
			}
tabBoard=im3;
pictureBox1->Image=tabBoard;
				 }
			 }
void drawSticks(int intStick)
	{
		if (disableGraphics)
			return;

		if (imageList1->Images->Count==0)
			return; //if game closed 

int imageIndex=intStick;
if(imageIndex==6)
	imageIndex--;

Bitmap ^ im2=gcnew Bitmap(imageList2->Images[--imageIndex]);
Bitmap ^ im3=gcnew Bitmap(im2);
		int w=im2->Width;
		int h=im2->Height;
		for (int x=0;x<w;x++)
			for (int y=0;y<h;y++){
				Color c2=im2->GetPixel(x,y);
				int r=c2.R;
				int g=c2.G;
				int b=c2.B;
				if(b>50 && r<50)
					im3->SetPixel(x,y,Color::Transparent);
				else
					im3->SetPixel(x,y,c2);
			}
			pictureBox2->Image=im3;
				 }


private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
pictureBox1->Image=picBackground->Image;
tabBoard=gcnew Bitmap(picBackground->Image);
	 pictureBox1->Image=tabBoard;

return;
tabBoard=gcnew Bitmap(picBackground->Image);
  drawSpecificNewSquare(tempSquareNum++);
			 pictureBox1->Image=tabBoard;
		 }
int BackgroundLeftMargin;
int  BackgroundTopMargin;
int BackgroundRightMargin;
int  BackgroundBottomMargin;
	int intBackgroundSquareWidth;//for redraw squares from background
	int intBackgroundSquareHeight;//for redraw squares from background
int picBoardTopMargin;
int picBoardLeftMargin;
int picBoardBottomMargin;
int picBoardRightMargin;
	int intPicBoardSquareWidth;
	int intPicBoardSquareHeight;
bool gameBegined;

int tempSquareNum;
	void drawSpecificNewSquare(int intSquareNum)
	{
		if (disableGraphics)
			return;
		if(intSquareNum>-1 && intSquareNum<intBoardColumns*intBoardRows)
		{
			 columnNum=intSquareNum/intBoardColumns;
			 if ((columnNum%2)==1)
			 {
				 rowNum=columnNum*intBoardColumns+(intBoardColumns-1)-intSquareNum;
			 }
			 else
			 { 
				 rowNum=-(columnNum*intBoardColumns-intSquareNum);
			 }
			 Bitmap ^ background=  gcnew Bitmap(picBackground->Image); //ahmed
			 for (int i=1;i<intPicBoardSquareWidth;i++)
			 {
				 for(int j=1;j<intPicBoardSquareHeight;j++)
				 {
					 int x=i+rowNum*intPicBoardSquareWidth+BackgroundLeftMargin;
					 int y=j+columnNum*intPicBoardSquareHeight+BackgroundTopMargin;
					 Color c=background->GetPixel(x,y);
					 tabBoard->SetPixel(x,y,Color::Black);
				 }
			 }
		}
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 //for (int i=0;i<intBoardColumns;i++)//*intBoardRows
			 //{
				// arrBoard[i]=0;
			 //}
			 for (int intSquareNum=0;intSquareNum<32;intSquareNum++)
				 arrBoard[intSquareNum]=0;
			 for (int intSquareNum=0;intSquareNum<5;intSquareNum++)
				 arrBoard[intSquareNum]=1;
			 for (int intSquareNum=24;intSquareNum<28;intSquareNum++)
				 arrBoard[intSquareNum]=-1;
			 arrBoard[18]=1;
			 arrBoard[21]=1;
			 arrBoard[7]=0;
			 arrBoard[6]=0;
			 arrBoard[30]=0;
			 arrBoard[16]=-1;
			 arrBoard[14]=1;
			 arrBoard[18]=1;
			 arrBoard[15]=-1;
			 arrBoard[9]=-1;
			 arrBoard[31]=0;
//			 MessageBox::Show("Œÿ√ ›Ì Õ–› ⁄œœ «·„ﬁ Ê·Ì‰  „‰ ⁄œœ «·Ã‰Êœ «·ﬂ«„·");
			 for (int intSquareNum=0;intSquareNum<intBoardColumns*intBoardRows;intSquareNum++)
				 drawSpecificSquare(intSquareNum,false);
			 pictureBox1->Image=tabBoard;
			 frozenSoldiers[0]=5;
			 frozenSoldiers[1]=5;
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
DateTime dt = DateTime::Now;
String^ fileName = historyDir+ "\\" + "tabGame "+dt.Day+"-"+dt.Month+"-"+dt.Year+" "+dt.Hour+"-"+dt.Minute+"-"+dt.Second+".txt";
sw = gcnew StreamWriter(fileName);
			for(int i=0;i<listBox3->Items->Count;i++)
				sw->WriteLine(listBox3->Items[i]);
sw->Close();
//Bitmap^ tabBoard;
		 }
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			 revarseBoard();
			 for(int i =0; i<32; i++)
				 drawSpecificSquare(i,false);
			 pictureBox1->Image=tabBoard;
		 }
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
			 int xxxx=lbMovements->Items->IndexOf(2);
			 //MessageBox::Show("found in " + xxxx);
		 }
void addHistory(int oldSoldier,int newSoldier)
{
	ArrayList ^ columnChar=gcnew ArrayList();
	columnChar->Add("A");
	columnChar->Add("B");
	columnChar->Add("C");
	columnChar->Add("D");

	String ^ str = "";
	if (intPlayerNum==1)
		str="Player1 ";
	else
		str="Player2 ";
	str+="moving from ";
	columnNum=oldSoldier/intBoardColumns;
	str += Convert::ToString(columnChar[columnNum]);
			 if ((columnNum%2)==1)
			 {
				 rowNum=columnNum*intBoardColumns+(intBoardColumns-1)-oldSoldier;
			 }
			 else
			 { 
				 rowNum=-(columnNum*intBoardColumns-oldSoldier);
			 }
	str += ++rowNum;
	str+=" To ";
	columnNum=newSoldier/intBoardColumns;
	str += Convert::ToString(columnChar[columnNum]);
			 if ((columnNum%2)==1)
			 {
				 rowNum=columnNum*intBoardColumns+(intBoardColumns-1)-newSoldier;
			 }
			 else
			 { 
				 rowNum=-(columnNum*intBoardColumns-newSoldier);
			 }
	str += ++rowNum;
	lstHistory->Items->Insert(0,str);//Add(str);
}

void findBestMovemntsSequenceByGA(ArrayList ^ arlstGASoldiers,ArrayList ^ arlstGAMovements)
{
//parameter or public : arlstGAMovements//list6
//parameter or public : arlstGASoldiers//list7
			 int numOfSoldiers = arlstGASoldiers->Count;
			 int numOfMovements = arlstGAMovements->Count;
			 if(numOfSoldiers==0 || numOfMovements==0)
				 return;


			 
int numOfPopulation = 500;

int generationsNumFactor1=cmbPlayer1Level->SelectedIndex;
int generationsNumFactor2=50;
if(generationsNumFactor1>0)
	generationsNumFactor1=2;
int generationsNum  = generationsNumFactor2*Math::Pow(2,generationsNumFactor1);//generationsNum  = (5,2)5,10,20 <->(10,3)10,30,90

generationsNumFactor1=cmbPlayer2Level->SelectedIndex;
if(generationsNumFactor1>0)
	generationsNumFactor1=2;
if(intPlayerNum==-1)
	generationsNum  = generationsNumFactor2*Math::Pow(2,generationsNumFactor1);//generationsNum  = (5,2)5,10,20 <->(10,3)10,30,90

//if(!(lstHistory->Items[0]->ToString()->StartsWith("generationsNum: ")))
//	lstHistory->Items->Insert(0,"generationsNum: "+generationsNum);
int probabilityPercentOfMotation=15;//0;
int maxFit=-111111;
int maxIndex=-1;
if (intPlayerNum==-1)
	revarseBoard();

	// initalize GA
	ArrayList ^ arlstPopulation = gcnew ArrayList();
	ArrayList ^ arlstCost = gcnew ArrayList();
	ArrayList ^ arlstTempMovements = gcnew ArrayList();
	ArrayList ^ arlstTempSoldier = gcnew ArrayList();//not used out of if(numOfSoldiers==1 && numOfMovements==1)
	ArrayList ^ arlstSoldiers = gcnew ArrayList();
	solution ^ tempSolution;
int NumOfGeneration=0;

	tempSolution=gcnew solution;

if(numOfSoldiers==1 && numOfMovements==1)
{// do you want ignore GA
	int soldierSquare=Convert::ToInt16(arlstGASoldiers[0]);
	int soldierMovement=Convert::ToInt16(arlstGAMovements[0]);
	int x=getGAPosititionOf(soldierSquare,soldierMovement);
if(listBox11->Items->Count==1)
{
	//create solution with 1 movement
	tempSolution->cromosom=gcnew ArrayList();
	arlstTempSoldier->Add(soldierMovement);
	tempSolution->cromosom->Add(arlstTempSoldier);

	getGAPosititions(tempSolution);//to add cost
	goto playTempSolutionLabel;
}

}


/*
create initialize generation of solutions and store there in pubulation list
store there cost in cost list
*/
	for(int i=0;i<numOfPopulation;i++)
	{
		tempSolution = gcnew solution;
				 arlstSoldiers = gcnew ArrayList();
				 for (int j = 0; j < numOfMovements ; j++)
				 {
					 arlstTempMovements->Add(Convert::ToInt16(arlstGAMovements[j]));
				 }
				 for (int j = 0; j < numOfSoldiers; j++)
				 {
					 arlstSoldiers->Add(gcnew ArrayList());// adding arlstTempSoldier
				 }
				 while (arlstTempMovements->Count > 0)
				 {
					 int random1 = rand.Next(0, arlstTempMovements->Count);
					 int random2 = rand.Next(0, numOfSoldiers);

					 dynamic_cast < ArrayList^ >(arlstSoldiers[random2])->Add(Convert::ToInt16(arlstTempMovements[random1]));
					 arlstTempMovements->RemoveAt(random1);
				 }
		
				 tempSolution->cromosom = gcnew ArrayList(arlstSoldiers);

getGAPosititions(tempSolution);//getPosititionsToGASolution(tempSolution);
arlstCost->Add(tempSolution->cost);

if(tempSolution->cost > maxFit)
{
	maxFit=tempSolution->cost;
	maxIndex=i;
}
				 arlstPopulation->Add(tempSolution); // my struct

if(i==numOfPopulation-1)
	i=i;//temporary to debug

	}//end of for(int i=0;i<numOfPopulation;i++)
//check null chromosome

//if(checkErrorNullChromosomeInPopulation(arlstPopulation,numOfMovements))
//MessageBox::Show(" found chromosome with no movements in arlstPopulation");


/*
while(i<generationsNum)
{
	while(j<pubulationNum/2)
	{
		choose 2 parents index less than (pubulationNum) from  pubulation list
		cross over 2 parents
*/
while(NumOfGeneration++<generationsNum)
{
	//check null chromosome




	for(int i=0;i<numOfPopulation/2;i++)
	{



twoChilde ^ oldParents=gcnew twoChilde;
twoChilde ^ newChileds=gcnew twoChilde ;
solution ^ newChiled1=gcnew solution;
solution ^ newChiled2=gcnew solution;
int p1=rand.Next(0,numOfPopulation);
// to deny cross same parent with him self
int p2=rand.Next(0,numOfPopulation-1);
if(p2>=p1 && p1<numOfPopulation-1)
	p2++;

tempSolution=gcnew solution;
tempSolution=copyPartlyNewSolution(dynamic_cast <solution ^ > (arlstPopulation[p1]));
oldParents->chiled1= gcnew ArrayList(dynamic_cast <ArrayList ^> (tempSolution->cromosom));
tempSolution=gcnew solution;
tempSolution=copyPartlyNewSolution(dynamic_cast <solution ^ > (arlstPopulation[p2]));
oldParents->chiled2= gcnew ArrayList(dynamic_cast <ArrayList ^> (tempSolution->cromosom));

newChileds=crossover3(oldParents);






if(probabilityPercentOfMotation>rand.Next(0,100))
	mutation(newChileds->chiled1);



newChiled1->cromosom=gcnew ArrayList( newChileds->chiled1);
getGAPosititions(newChiled1);//getPosititionsToGASolution(tempSolution);
arlstCost->Add(newChiled1->cost);

if(newChiled1->cost > maxFit)
{
	maxFit=newChiled1->cost;
	maxIndex=arlstPopulation->Count;
}
if(probabilityPercentOfMotation>rand.Next(0,100))
	mutation(newChileds->chiled2);
newChiled2->cromosom=gcnew ArrayList( newChileds->chiled2);
getGAPosititions(newChiled2);
arlstPopulation->Add(newChiled1);


arlstCost->Add(newChiled2->cost);
if(newChiled2->cost > maxFit)
{
	maxFit=newChiled2->cost;
	maxIndex=arlstPopulation->Count;
}

arlstPopulation->Add(newChiled2);
//if(checkErrorNullChromosomeInPopulation(arlstPopulation,numOfMovements))
//MessageBox::Show(" found chromosome with no movements in arlstPopulation");


	}//for(int i=0;i<numOfPopulation/2;i++)
	//remove half pubulation by there cost
arlstCost->Sort();
//to debug



int arlstCost_count=arlstCost->Count;
int arlstPubu_count=arlstPopulation->Count;



arlstCost->Sort();
int costMedian=Convert::ToInt16(arlstCost[arlstCost->Count/2]);
bool continueRemoving=true;
int iii=0;
while(continueRemoving)
{
if(maxIndex==iii)
	iii++;
	tempSolution=gcnew solution;
	tempSolution=copyPartlyNewSolution( dynamic_cast <solution ^ > (arlstPopulation[iii++]));
	if(tempSolution->cost<=costMedian && arlstPopulation->Count>numOfPopulation)
	{//what if last soluton is minimum and more than numOfPopulation is less than or equal costMedian
		if(maxIndex>=iii)
			maxIndex--;
		arlstCost->Remove(tempSolution->cost);
	tempSolution=gcnew solution;
		arlstPopulation->RemoveAt(--iii);
	}
	if(arlstPopulation->Count<=numOfPopulation)
		continueRemoving=false;
}//while(continueRemoving)






arlstCost_count=arlstCost->Count;
arlstPubu_count=arlstPopulation->Count;

}



	solution ^ toCompareTemporarySolution=gcnew solution;
	toCompareTemporarySolution=copyNewCompleteSolution(dynamic_cast <solution ^ > (arlstPopulation[maxIndex]));//is this always equal of do while search
int checkingCounter=0;

do
{
	if(arlstPopulation->Count==checkingCounter)
		break;//ther is problem in maxFit calculation // why its running evrey each time
	tempSolution=gcnew solution;
	//tempSolution=copyNewSolution(dynamic_cast <solution ^ > (arlstPopulation[i++]));
	tempSolution=dynamic_cast <solution ^ > (arlstPopulation[checkingCounter++]);
}while(tempSolution->cost!=maxFit);


playTempSolutionLabel:
if (intPlayerNum==22)
{
	revarseBoard();
	revarseSolve(tempSolution);
}
	getGALast(tempSolution);
play(tempSolution);


// reset GA
	delete arlstPopulation;

}


void mutation(ArrayList ^ players)
        {
            ArrayList ^ temp1;
            ArrayList ^ temp2;

if (checkChromosomeNullAllPlayersError(players,listBox6->Items->Count))
	return;
            int element = players->Count;
//why  repeating mutation
            for (int i = 0; i < element; i++)
            {
// why element - 1
            b:
                int rando1 = rand.Next(0, element); 
                int rando2 = rand.Next(0, element-1);//element); 
                if (rando2 >= rando1 && rando1<element-1)
                {
                    rando2++;//goto b;
                }
//what if only soldier have moves and random soldiers get tow didnt have any movement...!
                temp1 = dynamic_cast < ArrayList^ >(players[rando1]);
                temp2 = dynamic_cast < ArrayList^ >(players[rando2]);
                int temp3;
                int max1 = temp1->Count;
                int max2 = temp2->Count;
                if (max1 < 0)
                    max1 = 0;
                if (max2 < 0)
                    max2 = 0;
                if (max1 == 0 && max2==0)
                    goto b;//choose new soldiers because both choosen soldiers have no movemevts
                c:
                int rando3 = rand.Next(0, max1+1);
                int rando4 = rand.Next(0, max2+1);

                if (rando3 == max1  && rando4 == max2 )
                {//if both movenents is null 
                    goto c;// why not cancel mutation
                }
                else if (rando3 == max1)
                {
                    temp1->Add(temp2[rando4]);
                    temp2->RemoveAt(rando4);
                    goto d;
                }
                else if (rando4 == max2)
                {
                    temp2->Add(temp1[rando3]);
                    temp1->RemoveAt(rando3);
                    goto d;
                }
                else if (temp1->Count == 0 && temp2->Count == 0)
                {//is this possible??
                    goto b;
                }
                else if (temp1->Count == 0 && temp2->Count != 0)
                {//is this same of (rando3 == max1)??
                    temp1->Add(temp2[rando4]);
                    temp2->RemoveAt(rando4);
                }
                else if (temp1->Count != 0 && temp2->Count == 0)
                {//is this same of (rando4 == max2)??
                    temp2->Add(temp1[rando3]);
                    temp1->RemoveAt(rando3);

                }
                else
                {
                    temp3 = Convert::ToInt32(temp1[rando3]);
                    temp1[rando3] = temp2[rando4];
                    temp2[rando4] = temp3;
                   
                }
            d:
                players[rando1] = temp1;
                players[rando2] = temp2;


            }

        }
bool checkErrorNullChromosomeInPopulation(ArrayList ^ arlstPopulation2,int numOfMovements2)
{
for(int jj=0;jj<arlstPopulation2->Count;jj++)
{solution ^ tempSolution=gcnew solution;
tempSolution=dynamic_cast <solution ^>(arlstPopulation2[jj]);
//tempSolution->cromosom=gcnew ArrayList(dynamic_cast <ArrayList ^>(pup[i]));
if (checkChromosomeNullAllPlayersError(tempSolution->cromosom,numOfMovements2))
{
return true;
}
}
return false;
}
bool checkChromosomeNullAllPlayersError(ArrayList ^ players,int numOfMovements2)
{
	ArrayList ^ temp1;
int doi=0;int dox = 0; do
{
	temp1 = dynamic_cast < ArrayList^ >(players[doi++]);
	dox+=temp1->Count;
}while( doi<players->Count);
if (dox==0)
{	
return true;
}else
{
	if(dox!=numOfMovements2)
	{		
return true;
	}
return false;
}}

solution ^ copyPartlyNewSolution(solution ^ tempStoredSolution)
{
	solution ^ tempCopySolution=gcnew solution;
	ArrayList ^ arlstTempSoldiers=gcnew ArrayList(tempStoredSolution->cromosom);
	ArrayList ^ arlstTempCopySoldiers=gcnew ArrayList();
	for(int i=0;i<arlstTempSoldiers->Count;i++)
	{
		ArrayList ^ arlstTempMovements=dynamic_cast <ArrayList ^ > (arlstTempSoldiers[i]);
		ArrayList ^ arlstTempCopyMovements=gcnew ArrayList();
		for(int j=0;j<arlstTempMovements->Count;j++)
		{
			int intTempMovements=Convert::ToInt16(arlstTempMovements[j]);
			arlstTempCopyMovements->Add(intTempMovements);
		}
		arlstTempCopySoldiers->Add(arlstTempCopyMovements);
	}
	tempCopySolution->cromosom=gcnew ArrayList(arlstTempCopySoldiers);
	tempCopySolution->cost=tempStoredSolution->cost;
	return tempCopySolution;
}
solution ^ copyNewCompleteSolution(solution ^ tempStoredSolution)
{
	solution ^ tempCopySolution=gcnew solution;
	ArrayList ^ arlstTempSoldiers=gcnew ArrayList(tempStoredSolution->cromosom);
	ArrayList ^ arlstTempCopySoldiers=gcnew ArrayList();
	for(int i=0;i<arlstTempSoldiers->Count;i++)
	{
		ArrayList ^ arlstTempMovements=dynamic_cast <ArrayList ^ > (arlstTempSoldiers[i]);
		ArrayList ^ arlstTempCopyMovements=gcnew ArrayList();
		for(int j=0;j<arlstTempMovements->Count;j++)
		{
			int intTempMovements=Convert::ToInt16(arlstTempMovements[j]);
			arlstTempCopyMovements->Add(intTempMovements);
		}
		arlstTempCopySoldiers->Add(arlstTempCopyMovements);
	}
	tempCopySolution->cromosom=gcnew ArrayList(arlstTempCopySoldiers);


	tempCopySolution->cost=tempStoredSolution->cost;


	ArrayList ^ arlstTempSoldiers2=gcnew ArrayList(tempStoredSolution->positions);
	ArrayList ^ arlstTempCopySoldiers2=gcnew ArrayList();
	for(int i=0;i<arlstTempSoldiers2->Count;i++)
	{
		ArrayList ^ arlstTempMovements2=dynamic_cast <ArrayList ^ > (arlstTempSoldiers2[i]);
		ArrayList ^ arlstTempCopyMovements2=gcnew ArrayList();
		for(int j=0;j<arlstTempMovements2->Count;j++)
		{
			int intTempMovements2=Convert::ToInt16(arlstTempMovements2[j]);
			arlstTempCopyMovements2->Add(intTempMovements2);
		}
		arlstTempCopySoldiers2->Add(arlstTempCopyMovements2);
	}
	tempCopySolution->positions=gcnew ArrayList(arlstTempCopySoldiers2);


	return tempCopySolution;
}	int firstPlayer()
	{
			int sum1 = 0;
			int sum2 = 0;
			Random ^ rnd= gcnew Random();
			while(sum1==sum2)
			{
				sum1+=rnd->Next(2);
				sum1+=rnd->Next(2);
				sum2+=rnd->Next(2);
				sum2+=rnd->Next(2);
			}
			if(sum1>sum2)
				return (0);
			else
				return (1);
	}

private: System::Void checkBox7_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(checkBox7->Checked)
				 textBox2->Text="100";
			 else
				 textBox2->Text="0";
		 }
private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) {
			 //called if continuous testing only
			 timer2->Enabled=false;
			 playersStarted[0]=0;
			 playersStarted[1]=0;
				 btnNewGame_Click(sender,e);
				 btnThrowOrNew->Text="Throw Sticks";
			 btnThrowSticks_Click(sender,e);
		 }

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 highlightAvailableSoldiers(7,false);
			 highlightAvailableSoldiers(31,false);
		 }
void highlightAvailableSoldiers(int intSquareNum,bool clearStamp)
	{//demo to merge soldiers with background
		if (disableGraphics)
			return;
		if (imageList1->Images->Count==0)
			return; //if game closed 
		if(intSquareNum>-1 && intSquareNum<intBoardColumns*intBoardRows)
		{
			columnNum=intSquareNum/intBoardColumns;
			 if ((columnNum%2)==1)
			 {
				 rowNum=columnNum*intBoardColumns+(intBoardColumns-1)-intSquareNum;
			 }
			 else
			 { 
				 rowNum=-(columnNum*intBoardColumns-intSquareNum);
			 }
			 Bitmap ^ background=  gcnew Bitmap(picBackground->Image); 
		int i=rowNum*intBackgroundSquareWidth+BackgroundLeftMargin;
		int j=columnNum*intBackgroundSquareHeight+BackgroundTopMargin;
int ii=0;
int jj=0;

int imageIndex;
if(arrBoard[intSquareNum]<0)
{drawSpecificSquareEmpty(intSquareNum,clearStamp);
	if (-1*arrBoard[intSquareNum]<7)
imageIndex=-1*arrBoard[intSquareNum]-1;
else
imageIndex=5;
}
else if(arrBoard[intSquareNum]>0)
{drawSpecificSquareEmpty(intSquareNum,clearStamp);
	if (arrBoard[intSquareNum]<7)
imageIndex=5+arrBoard[intSquareNum];
else
imageIndex=11;
}
else
{
ii=i;
jj=j;
}
		Bitmap ^ im1=tabBoard;
Bitmap ^ im2=gcnew Bitmap(imageList1->Images[imageIndex]);
		int w=im2->Width;
		int h=im2->Height;
if(arrBoard[intSquareNum]==0)
	im2=gcnew Bitmap(picBackground->Image);
		Bitmap ^ im3=gcnew Bitmap(im1);

			
if (clearStamp)
{//stamp width + margins
	w=10;
	h=10;
}

		for (int x=0;x<w;x++)
			for (int y=0;y<h;y++){
				Color c1=im1->GetPixel(x+i,y+j);
				Color c2=im2->GetPixel(x+ii,y+jj);
				int r=c2.R;
				int g=c2.G+50;
				if (g>255)
					g=255;
				int b=c2.B;
				if(b>130)//!(( b < minBlueShading || b > maxBlueShading) && (r<minRedShading  || r>maxRedShading) && (g<minGreenShading || g>maxGreenShading)))
					im3->SetPixel(x+i,y+j,c1);
				else
					im3->SetPixel(x+i,y+j,Color::FromArgb(r,g,b));
			}
tabBoard=im3;
pictureBox1->Image=tabBoard;
//		return im3;
				 }
			 }
private: System::Void button3_Click_1(System::Object^  sender, System::EventArgs^  e) {
				 HistoSize=10;
				 arrSpaceSizeHistogram=gcnew array<int,1>(HistoSize); 
				 for(int ii=0;ii<HistoSize;ii++)
					 arrSpaceSizeHistogram[ii]=0;

swStatics->WriteLine("Player 1 level is " + cmbPlayer1Level->Text);
swStatics->WriteLine("Player 2 level is " + cmbPlayer2Level->Text);
			 bool boolEnabled=true;
			 pictureBox1->Enabled=boolEnabled;
			 groupBox2->Enabled=boolEnabled;
			 pictureBox3->Visible=boolEnabled;
			 groupBox7->Visible=!boolEnabled;
		 }
private: System::Void newGameToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 btnNewGame_Click(sender,e);
		 }
private: System::Void optionsToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 bool boolEnabled=false;
			 pictureBox1->Enabled=boolEnabled;
			 groupBox2->Enabled=boolEnabled;
			 pictureBox3->Visible=boolEnabled;
			 groupBox7->Visible=!boolEnabled;
		 }
private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 Application::Exit();
		 }
private: System::Void Form1_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
			 swStatics->Close();
		 }
private: System::Void checkBox8_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 disableGraphics=checkBox8->Checked;
		 }

		 
double spaceSize(int soldiers,int movements )
{
	if(soldiers<1 || movements<1)
		return 0;
	else
		return(factorial((double)(soldiers+movements-1))/factorial((double)(soldiers-1)));
}
double factorial(double n)
{
    if (n == 1.0 || n == 0.0)
        return (1.0);
    else
        return ((double)(n * factorial(n - 1)));
}
String ^ getDir()
{
	int i=1;
	DateTime dt = DateTime::Now;
	String ^ dirName="test ( " + i + " ) " + dt.Day+"-"+dt.Month+"-"+dt.Year;
	while (Directory::Exists( dirName ))
	{
		dirName="test  " + dt.Day+"-"+dt.Month+"-"+dt.Year+"( " + ++i + " )";
	}
	DirectoryInfo^ di = Directory::CreateDirectory( dirName );
	
	return (dirName);
}
String ^ stringAddress(int square)
{
	square=Math::Abs(square);
	ArrayList ^ columnChar=gcnew ArrayList();
	columnChar->Add("A");
	columnChar->Add("B");
	columnChar->Add("C");
	columnChar->Add("D");

	String ^ str = "";
	columnNum=square/intBoardColumns;
	str += Convert::ToString(columnChar[columnNum]);
			 if ((columnNum%2)==1)
			 {
				 rowNum=columnNum*intBoardColumns+(intBoardColumns-1)-square;
			 }
			 else
			 { 
				 rowNum=-(columnNum*intBoardColumns-square);
			 }
	str += ++rowNum;
	return str;
}
};
}
