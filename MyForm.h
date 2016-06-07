#include "Header1.h"

namespace Проект1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		double num = char("");
		String^ digit = "0123456789";
		String^ alphabet = "abcdefghijklnoqprstwyuxyz";
		String^ operation = "/*-+^";
	private: System::Windows::Forms::Button^  button21;
	public:
	private: System::Windows::Forms::Button^  button22;
	private: System::Windows::Forms::Button^  button23;
	private: System::Windows::Forms::Button^  button24;
	private: System::Windows::Forms::Button^  button25;
	private: System::Windows::Forms::Button^  button26;
	private: System::Windows::Forms::Button^  button27;
	private: System::Windows::Forms::Button^  button28;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Button^  button29;
	private: System::Windows::Forms::Button^  button30;
	private: System::Windows::Forms::Button^  button31;
	private: System::Windows::Forms::Button^  button33;
	private: System::Windows::Forms::Button^  button32;
	private: System::Windows::Forms::Button^  button34;
	private: System::Windows::Forms::Button^  button35;
	private: System::Windows::Forms::Button^  button36;
	private: System::Windows::Forms::Button^  button37;
	private: System::Windows::Forms::Button^  button38;
	private: System::Windows::Forms::Button^  button39;
	private: System::Windows::Forms::TextBox^  textBox2;

	public:

	public:

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
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button19;
	private: System::ComponentModel::IContainer^  components;
	protected:

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(2, 234);
			this->button1->Margin = System::Windows::Forms::Padding(2, 5, 2, 5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(59, 37);
			this->button1->TabIndex = 0;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(62, 234);
			this->button2->Margin = System::Windows::Forms::Padding(2, 5, 2, 5);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(59, 37);
			this->button2->TabIndex = 1;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(122, 234);
			this->button3->Margin = System::Windows::Forms::Padding(2, 5, 2, 5);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(59, 37);
			this->button3->TabIndex = 2;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(2, 196);
			this->button4->Margin = System::Windows::Forms::Padding(2, 5, 2, 5);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(59, 37);
			this->button4->TabIndex = 3;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(62, 196);
			this->button5->Margin = System::Windows::Forms::Padding(2, 5, 2, 5);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(59, 37);
			this->button5->TabIndex = 4;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::White;
			this->button6->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->button6->Location = System::Drawing::Point(122, 196);
			this->button6->Margin = System::Windows::Forms::Padding(2, 5, 2, 5);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(59, 37);
			this->button6->TabIndex = 5;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::White;
			this->button7->Cursor = System::Windows::Forms::Cursors::Default;
			this->button7->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->button7->Location = System::Drawing::Point(2, 158);
			this->button7->Margin = System::Windows::Forms::Padding(2, 5, 2, 5);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(59, 37);
			this->button7->TabIndex = 6;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::White;
			this->button8->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->button8->Location = System::Drawing::Point(62, 158);
			this->button8->Margin = System::Windows::Forms::Padding(2, 5, 2, 5);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(59, 37);
			this->button8->TabIndex = 7;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::White;
			this->button9->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->button9->Location = System::Drawing::Point(122, 158);
			this->button9->Margin = System::Windows::Forms::Padding(2, 5, 2, 5);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(59, 37);
			this->button9->TabIndex = 8;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::White;
			this->button10->Location = System::Drawing::Point(62, 272);
			this->button10->Margin = System::Windows::Forms::Padding(2, 5, 2, 5);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(59, 37);
			this->button10->TabIndex = 9;
			this->button10->Text = L"0";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button11->Location = System::Drawing::Point(220, 196);
			this->button11->Margin = System::Windows::Forms::Padding(2, 5, 2, 5);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(37, 37);
			this->button11->TabIndex = 10;
			this->button11->Text = L"*";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button12->Location = System::Drawing::Point(182, 196);
			this->button12->Margin = System::Windows::Forms::Padding(2, 5, 2, 5);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(37, 37);
			this->button12->TabIndex = 11;
			this->button12->Text = L"/";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button13->Location = System::Drawing::Point(182, 234);
			this->button13->Margin = System::Windows::Forms::Padding(2, 5, 2, 5);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(37, 37);
			this->button13->TabIndex = 12;
			this->button13->Text = L"+";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button14->Location = System::Drawing::Point(220, 234);
			this->button14->Margin = System::Windows::Forms::Padding(2, 5, 2, 5);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(37, 37);
			this->button14->TabIndex = 13;
			this->button14->Text = L"-";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button15->Location = System::Drawing::Point(182, 272);
			this->button15->Margin = System::Windows::Forms::Padding(2, 5, 2, 5);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(75, 37);
			this->button15->TabIndex = 14;
			this->button15->Text = L"=";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->textBox1->Cursor = System::Windows::Forms::Cursors::Default;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(3, 5);
			this->textBox1->Margin = System::Windows::Forms::Padding(2, 5, 2, 5);
			this->textBox1->MaxLength = 10;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(253, 26);
			this->textBox1->TabIndex = 15;
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::White;
			this->button16->Location = System::Drawing::Point(122, 272);
			this->button16->Margin = System::Windows::Forms::Padding(2, 5, 2, 5);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(59, 37);
			this->button16->TabIndex = 17;
			this->button16->Text = L",";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button17->Location = System::Drawing::Point(182, 126);
			this->button17->Margin = System::Windows::Forms::Padding(2, 5, 2, 5);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(37, 31);
			this->button17->TabIndex = 18;
			this->button17->Text = L"(";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button18->Location = System::Drawing::Point(219, 126);
			this->button18->Margin = System::Windows::Forms::Padding(2, 5, 2, 5);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(37, 31);
			this->button18->TabIndex = 19;
			this->button18->Text = L")";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button19->Location = System::Drawing::Point(182, 158);
			this->button19->Margin = System::Windows::Forms::Padding(2, 5, 2, 5);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(37, 37);
			this->button19->TabIndex = 20;
			this->button19->Text = L"^";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button21->Location = System::Drawing::Point(92, 110);
			this->button21->Margin = System::Windows::Forms::Padding(2, 5, 2, 5);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(44, 23);
			this->button21->TabIndex = 22;
			this->button21->Text = L"cos()";
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button22->Location = System::Drawing::Point(2, 134);
			this->button22->Margin = System::Windows::Forms::Padding(2, 5, 2, 5);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(44, 23);
			this->button22->TabIndex = 23;
			this->button22->Text = L"ln";
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click);
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button23->Location = System::Drawing::Point(47, 110);
			this->button23->Margin = System::Windows::Forms::Padding(2, 5, 2, 5);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(44, 23);
			this->button23->TabIndex = 24;
			this->button23->Text = L"sin()";
			this->button23->UseVisualStyleBackColor = false;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click);
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button24->Location = System::Drawing::Point(47, 134);
			this->button24->Margin = System::Windows::Forms::Padding(2, 5, 2, 5);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(44, 23);
			this->button24->TabIndex = 25;
			this->button24->Text = L"lg";
			this->button24->UseVisualStyleBackColor = false;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click);
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button25->Location = System::Drawing::Point(2, 110);
			this->button25->Margin = System::Windows::Forms::Padding(2, 5, 2, 5);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(44, 23);
			this->button25->TabIndex = 26;
			this->button25->Text = L"tan()";
			this->button25->UseVisualStyleBackColor = false;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::button25_Click);
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::Color::White;
			this->button26->Location = System::Drawing::Point(2, 272);
			this->button26->Margin = System::Windows::Forms::Padding(2, 5, 2, 5);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(59, 37);
			this->button26->TabIndex = 27;
			this->button26->Text = L"C";
			this->button26->UseVisualStyleBackColor = false;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::button26_Click);
			// 
			// button27
			// 
			this->button27->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button27->Location = System::Drawing::Point(219, 62);
			this->button27->Margin = System::Windows::Forms::Padding(2, 5, 2, 5);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(37, 31);
			this->button27->TabIndex = 28;
			this->button27->Text = L"<-";
			this->button27->UseVisualStyleBackColor = false;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::button27_Click);
			// 
			// button28
			// 
			this->button28->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button28->Location = System::Drawing::Point(219, 94);
			this->button28->Margin = System::Windows::Forms::Padding(2, 5, 2, 5);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(37, 31);
			this->button28->TabIndex = 29;
			this->button28->Text = L"e";
			this->button28->UseVisualStyleBackColor = false;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm::button28_Click);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(3, 34);
			this->textBox2->Margin = System::Windows::Forms::Padding(2, 5, 2, 5);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(253, 26);
			this->textBox2->TabIndex = 30;
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button20->Location = System::Drawing::Point(182, 62);
			this->button20->Margin = System::Windows::Forms::Padding(2, 5, 2, 5);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(37, 31);
			this->button20->TabIndex = 31;
			this->button20->Text = L"x!";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// button29
			// 
			this->button29->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button29->Location = System::Drawing::Point(182, 94);
			this->button29->Margin = System::Windows::Forms::Padding(2, 5, 2, 5);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(37, 31);
			this->button29->TabIndex = 32;
			this->button29->Text = L"pi";
			this->button29->UseVisualStyleBackColor = false;
			this->button29->Click += gcnew System::EventHandler(this, &MyForm::button29_Click);
			// 
			// button30
			// 
			this->button30->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button30->Location = System::Drawing::Point(220, 158);
			this->button30->Margin = System::Windows::Forms::Padding(2, 5, 2, 5);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(37, 37);
			this->button30->TabIndex = 33;
			this->button30->Text = L"√";
			this->button30->UseVisualStyleBackColor = false;
			this->button30->Click += gcnew System::EventHandler(this, &MyForm::button30_Click);
			// 
			// button31
			// 
			this->button31->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button31->Location = System::Drawing::Point(137, 134);
			this->button31->Margin = System::Windows::Forms::Padding(2, 5, 2, 5);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(44, 23);
			this->button31->TabIndex = 34;
			this->button31->Text = L"x^3";
			this->button31->UseVisualStyleBackColor = false;
			this->button31->Click += gcnew System::EventHandler(this, &MyForm::button31_Click);
			// 
			// button33
			// 
			this->button33->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button33->Location = System::Drawing::Point(92, 134);
			this->button33->Margin = System::Windows::Forms::Padding(2, 5, 2, 5);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(44, 23);
			this->button33->TabIndex = 36;
			this->button33->Text = L"x^2";
			this->button33->UseVisualStyleBackColor = false;
			this->button33->Click += gcnew System::EventHandler(this, &MyForm::button33_Click);
			// 
			// button32
			// 
			this->button32->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button32->Location = System::Drawing::Point(2, 86);
			this->button32->Margin = System::Windows::Forms::Padding(2, 5, 2, 5);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(59, 23);
			this->button32->TabIndex = 37;
			this->button32->Text = L"arctan()";
			this->button32->UseVisualStyleBackColor = false;
			this->button32->Click += gcnew System::EventHandler(this, &MyForm::button32_Click);
			// 
			// button34
			// 
			this->button34->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button34->Location = System::Drawing::Point(62, 86);
			this->button34->Margin = System::Windows::Forms::Padding(2, 5, 2, 5);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(59, 23);
			this->button34->TabIndex = 38;
			this->button34->Text = L"arcsin()";
			this->button34->UseVisualStyleBackColor = false;
			this->button34->Click += gcnew System::EventHandler(this, &MyForm::button34_Click);
			// 
			// button35
			// 
			this->button35->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button35->Location = System::Drawing::Point(122, 86);
			this->button35->Margin = System::Windows::Forms::Padding(2, 5, 2, 5);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(59, 23);
			this->button35->TabIndex = 39;
			this->button35->Text = L"arccos()";
			this->button35->UseVisualStyleBackColor = false;
			this->button35->Click += gcnew System::EventHandler(this, &MyForm::button35_Click);
			// 
			// button36
			// 
			this->button36->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button36->Location = System::Drawing::Point(2, 62);
			this->button36->Margin = System::Windows::Forms::Padding(2, 5, 2, 5);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(59, 23);
			this->button36->TabIndex = 40;
			this->button36->Text = L"tanh()";
			this->button36->UseVisualStyleBackColor = false;
			this->button36->Click += gcnew System::EventHandler(this, &MyForm::button36_Click);
			// 
			// button37
			// 
			this->button37->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button37->Location = System::Drawing::Point(62, 62);
			this->button37->Margin = System::Windows::Forms::Padding(2, 5, 2, 5);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(59, 23);
			this->button37->TabIndex = 41;
			this->button37->Text = L"sinh()";
			this->button37->UseVisualStyleBackColor = false;
			this->button37->Click += gcnew System::EventHandler(this, &MyForm::button37_Click);
			// 
			// button38
			// 
			this->button38->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button38->Location = System::Drawing::Point(122, 62);
			this->button38->Margin = System::Windows::Forms::Padding(2, 5, 2, 5);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(59, 23);
			this->button38->TabIndex = 42;
			this->button38->Text = L"cosh()";
			this->button38->UseVisualStyleBackColor = false;
			this->button38->Click += gcnew System::EventHandler(this, &MyForm::button38_Click);
			// 
			// button39
			// 
			this->button39->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button39->Location = System::Drawing::Point(137, 110);
			this->button39->Margin = System::Windows::Forms::Padding(2, 5, 2, 5);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(44, 23);
			this->button39->TabIndex = 43;
			this->button39->Text = L"ctg()";
			this->button39->UseVisualStyleBackColor = false;
			this->button39->Click += gcnew System::EventHandler(this, &MyForm::button39_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 14);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gainsboro;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(609, 313);
			this->Controls->Add(this->button39);
			this->Controls->Add(this->button38);
			this->Controls->Add(this->button37);
			this->Controls->Add(this->button36);
			this->Controls->Add(this->button35);
			this->Controls->Add(this->button34);
			this->Controls->Add(this->button32);
			this->Controls->Add(this->button33);
			this->Controls->Add(this->button31);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Font = (gcnew System::Drawing::Font(L"Cambria", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2, 5, 2, 5);
			this->Name = L"MyForm";
			this->Text = L"Calculator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (textBox1->Text != "")
					 num = (char)textBox1->Text[textBox1->Text->Length - 1];
				 if ((num == (char)"") || (num == (char)',') || (digit->IndexOf(num) != -1) || (num == (char)'(') || (operation->IndexOf(num) != -1))
					 textBox1->Text = textBox1->Text + 1;
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (textBox1->Text != "")
					 num = (char)textBox1->Text[textBox1->Text->Length - 1];
				 if ((num == (char)"") || (num == (char)',') || (digit->IndexOf(num) != -1) || (num == (char)'(') || (operation->IndexOf(num) != -1))
					 textBox1->Text = textBox1->Text + 2;
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (textBox1->Text != "")
					 num = (char)textBox1->Text[textBox1->Text->Length - 1];
				 if ((num == (char)"") || (num == (char)',') || (digit->IndexOf(num) != -1) || (num == (char)'(') || (operation->IndexOf(num) != -1))
					 textBox1->Text = textBox1->Text + 3;
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (textBox1->Text != "")
					 num = (char)textBox1->Text[textBox1->Text->Length - 1];
				 if ((num == (char)"") || (num == (char)',') || (digit->IndexOf(num) != -1) || (num == (char)'(') || (operation->IndexOf(num) != -1))
					 textBox1->Text = textBox1->Text + 4;
	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (textBox1->Text != "")
					 num = (char)textBox1->Text[textBox1->Text->Length - 1];
				 if ((num == (char)"") || (num == (char)',') || (digit->IndexOf(num) != -1) || (num == (char)'(') || (operation->IndexOf(num) != -1))
					 textBox1->Text = textBox1->Text + 5;
	}
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (textBox1->Text != "")
					 num = (char)textBox1->Text[textBox1->Text->Length - 1];
				 if ((num == (char)"") || (num == (char)',') || (digit->IndexOf(num) != -1) || (num == (char)'(') || (operation->IndexOf(num) != -1))
					 textBox1->Text = textBox1->Text + 6;
	}
	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (textBox1->Text != "")
					 num = (char)textBox1->Text[textBox1->Text->Length - 1];
				 if ((num == (char)"") || (num == (char)',') || (digit->IndexOf(num) != -1) || (num == (char)'(') || (operation->IndexOf(num) != -1))
					 textBox1->Text = textBox1->Text + 7;
	}
	private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (textBox1->Text != "")
					 num = (char)textBox1->Text[textBox1->Text->Length - 1];
				 if ((num == (char)"") || (num == (char)',') || (digit->IndexOf(num) != -1) || (num == (char)'(') || (operation->IndexOf(num) != -1))
					 textBox1->Text = textBox1->Text + 8;
	}
	private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (textBox1->Text != "")
					 num = (char)textBox1->Text[textBox1->Text->Length - 1];
				 if ((num == (char)"") || (num == (char)',') || (digit->IndexOf(num) != -1) || (num == (char)'(') || (operation->IndexOf(num) != -1))
					 textBox1->Text = textBox1->Text + 9;
	}
	private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (textBox1->Text != "")
					 num = (char)textBox1->Text[textBox1->Text->Length - 1];
				 if ((num == (char)"") || (num == (char)',') || (digit->IndexOf(num) != -1) || (num == (char)'(') || (operation->IndexOf(num) != -1))
					 textBox1->Text = textBox1->Text + "0";
	}
	private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (textBox1->Text != "")
					 num = (char)textBox1->Text[textBox1->Text->Length - 1];
				 if ((((num == (char)')') || (num == (char)'e') || (num == (char)'i') || (digit->IndexOf(num) != -1)) || (num == (char)"") || ((num != (char)',') && (operation->IndexOf(num) == -1))) && (num != '('))
					 textBox1->Text = textBox1->Text + "*";
	}
	private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (textBox1->Text != "")
					 num = (char)textBox1->Text[textBox1->Text->Length - 1];
				 if ((((num == (char)')') || (num == (char)'e') || (num == (char)'i') || (digit->IndexOf(num) != -1)) || (num == (char)"") || ((num != (char)',') && (operation->IndexOf(num) == -1))) && (num != '('))
					 textBox1->Text = textBox1->Text + "/";
	}
	private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (textBox1->Text != "")
					 num = (char)textBox1->Text[textBox1->Text->Length - 1];
				 if ((((num == (char)')') || (num == (char)'e') || (num == (char)'i') || (digit->IndexOf(num) != -1)) || (num == (char)"") || ((num != (char)',') && (operation->IndexOf(num) == -1))) && (num != '('))
					 textBox1->Text = textBox1->Text + "+";

	}
	private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (textBox1->Text != "")
					 num = (char)textBox1->Text[textBox1->Text->Length - 1];
				 if (((num == (char)')') || (num == (char)'e') || (num == (char)'i') || (num == (char)'(') || (digit->IndexOf(num) != -1)) || (num == (char)"") || ((num != (char)',') && (operation->IndexOf(num) == -1)))
					 textBox1->Text = textBox1->Text + "-";
	}
	private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (textBox1->Text != "")
					 num = (char)textBox1->Text[textBox1->Text->Length - 1];
				 if (digit->IndexOf(num) != -1)
					 textBox1->Text = textBox1->Text + ",";

	}
	private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e)
	{
				 double finalResult;
				 wchar_t lastSymbol;
				 String^ error = "";
				 textBox2->Clear();
				 textBox2->Text = "";
				 String^ initialString;
				
				 if ( textBox1->Text != "")
				 {
					 lastSymbol = textBox1->Text[textBox1->Text->Length - 1];
					 if ((FunctionHolder::isCharFoundInString(lastSymbol, digit) != 0) || (FunctionHolder::isCharFoundInString(lastSymbol, ")ie!") != 0))
					 {
						 initialString = textBox1->Text;
						 initialString = FunctionHolder::checkBrackets(initialString);
						 textBox1->Text = initialString;
						 finalResult = FunctionHolder::mainFunction(initialString);
						 error = FunctionHolder::checkError();
						 if (error == "")
						 {
							 initialString = Convert::ToString(finalResult);
							 textBox2->Text = initialString;
						 } 
						 else
							 textBox2->Text = error;
					 }
					 else
						 textBox2->Text = "error in conditions";
				 }
				 else
					 textBox2->Text = "write expretion";
}
	private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (textBox1->Text != "")
			 num = (char)textBox1->Text[textBox1->Text->Length - 1];
			 if ((num == (char)"") || ((num != (char)'i') && (num != (char)'e')&&(num != (char)'!') && (num != (char)')') && (num != (char)',') && (digit->IndexOf(num) == -1)))
			 textBox1->Text = textBox1->Text + "(";
}
	private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (textBox1->Text != "")
			 num = (char)textBox1->Text[textBox1->Text->Length - 1];
			 if ((num != (char)'(') && (operation->IndexOf(num) == -1) && (num != (char)"") && (num != (char)','))
				 textBox1->Text = textBox1->Text + "^";
}
	private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (textBox1->Text != "")
			 num = (char)textBox1->Text[textBox1->Text->Length - 1];
			 if ((digit->IndexOf(num) != -1) || (num == (char)')') || (num == (char)'e') || (num == (char)'i'))
			 textBox1->Text = textBox1->Text + ")";
}
	private: System::Void button26_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Text = "";
			 num = (char)"";
}
	private: System::Void button27_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ localString;
			 int  index;
			 if (textBox1->Text->Length != 0)
			 {
				 localString = textBox1->Text;
				 index = localString->Length - 1;
				 if (FunctionHolder::isCharFoundInString(textBox1->Text[textBox1->Text->Length - 1], "scng") != 0)
					 index = localString->Length - 3;
				 if ((textBox1->Text[textBox1->Text->Length - 1] == 'i') || ((FunctionHolder::isCharFoundInString(textBox1->Text[textBox1->Text->Length - 1], "gn") != 0) && (textBox1->Text[textBox1->Text->Length - 2] == 'l')))
					 index = localString->Length - 2;
				 if (textBox1->Text[textBox1->Text->Length - 1] == 'h')
					 index = localString->Length - 4;
			 }
			 textBox1->Text = "";
			 for (int i = 0; i < index; i++)
				 textBox1->Text = textBox1->Text + localString[i];
}
	private: System::Void button21_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (textBox1->Text != "")
				 num = (char)textBox1->Text[textBox1->Text->Length - 1];
			 if ((num == (char)"") || (operation->IndexOf(num) != -1) || ((num != (char)'i') && (num != (char)'e') && (num != (char)'!') && (num != (char)')') && (num != (char)',') && (digit->IndexOf(num) == -1)))
				 textBox1->Text = textBox1->Text + "cos(";
}
	private: System::Void button23_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (textBox1->Text != "")
				 num = (char)textBox1->Text[textBox1->Text->Length - 1];
			 if ((num == (char)"") || (operation->IndexOf(num) != -1) || ((num != (char)'i') && (num != (char)'e') && (num != (char)'!') && (num != (char)')') && (num != (char)',') && (digit->IndexOf(num) == -1)))
			 textBox1->Text = textBox1->Text + "sin(";
}
	private: System::Void button25_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (textBox1->Text != "")
				 num = (char)textBox1->Text[textBox1->Text->Length - 1];
			 if ((num == (char)"") || (operation->IndexOf(num) != -1) || ((num != (char)'i') && (num != (char)'e') && (num != (char)'!') && (num != (char)')') && (num != (char)',') && (digit->IndexOf(num) == -1)))
			 textBox1->Text = textBox1->Text + "tan(";
}
	private: System::Void button28_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (textBox1->Text != "")
				 num = (char)textBox1->Text[textBox1->Text->Length - 1];
			 if ((num == (char)"") || (operation->IndexOf(num) != -1) || ((num != (char)'i') && (num != (char)'e') && (num != (char)'!') && (num != (char)')') && (num != (char)',') && (digit->IndexOf(num) == -1)))
			 textBox1->Text = textBox1->Text + "e";
}
	private: System::Void button29_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (textBox1->Text != "")
				 num = (char)textBox1->Text[textBox1->Text->Length - 1];
			 if ((num == (char)"") || (operation->IndexOf(num) != -1) || ((num != (char)'i') && (num != (char)'e') && (num != (char)'!') && (num != (char)')') && (num != (char)',') && (digit->IndexOf(num) == -1)))
				 textBox1->Text = textBox1->Text + "pi";
}
	private: System::Void button24_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (textBox1->Text != "")
				 num = (char)textBox1->Text[textBox1->Text->Length - 1];
			 if ((num == (char)"") || (operation->IndexOf(num) != -1) || ((num != (char)'i') && (num != (char)'e') && (num != (char)'!') && (num != (char)')') && (num != (char)',') && (digit->IndexOf(num) == -1)))
				 textBox1->Text = textBox1->Text + "lg(";
}
	private: System::Void button22_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (textBox1->Text != "")
				 num = (char)textBox1->Text[textBox1->Text->Length - 1];
			 if ((num == (char)"") || (operation->IndexOf(num) != -1) || ((num != (char)'i') && (num != (char)'e') && (num != (char)'!') && (num != (char)')') && (num != (char)',') && (digit->IndexOf(num) == -1)))
				 textBox1->Text = textBox1->Text + "ln(";
}
	private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (textBox1->Text != "")
				 num = (char)textBox1->Text[textBox1->Text->Length - 1];
			 if (((digit->IndexOf(num) != -1) || (num == (char)')')) && ((num != (char)'i') && (num != (char)'e')))
				 textBox1->Text = textBox1->Text + "!";
}
	private: System::Void button33_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (textBox1->Text != "")
				 num = (char)textBox1->Text[textBox1->Text->Length - 1];
			 if ((digit->IndexOf(num) != -1) || (num == (char)')'))
				 textBox1->Text = textBox1->Text + "^(2)";
}
	private: System::Void button31_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (textBox1->Text != "")
				 num = (char)textBox1->Text[textBox1->Text->Length - 1];
			 if ((digit->IndexOf(num) != -1) || (num == (char)')'))
				 textBox1->Text = textBox1->Text + "^(3)";
}
	private: System::Void button30_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (textBox1->Text != "")
				 num = (char)textBox1->Text[textBox1->Text->Length - 1];
			 if ((operation->IndexOf(num) != -1) || (num == (char)"") || (num == (char)'('))
			 textBox1->Text = textBox1->Text + L"√(";
}
	private: System::Void button39_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (textBox1->Text != "")
				 num = (char)textBox1->Text[textBox1->Text->Length - 1];
			 if ((num == (char)"") || (operation->IndexOf(num) != -1) || ((num != (char)'i') && (num != (char)'e') && (num != (char)'!') && (num != (char)')') && (num != (char)',') && (digit->IndexOf(num) == -1)))
				 textBox1->Text = textBox1->Text + "ctg(";
}
	private: System::Void button36_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (textBox1->Text != "")
				 num = (char)textBox1->Text[textBox1->Text->Length - 1];
			 if ((num == (char)"") || (operation->IndexOf(num) != -1) || ((num != (char)'i') && (num != (char)'e') && (num != (char)'!') && (num != (char)')') && (num != (char)',') && (digit->IndexOf(num) == -1)))
				 textBox1->Text = textBox1->Text + "tanh(";
}
	private: System::Void button37_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (textBox1->Text != "")
				 num = (char)textBox1->Text[textBox1->Text->Length - 1];
			 if ((num == (char)"") || (operation->IndexOf(num) != -1) || ((num != (char)'i') && (num != (char)'e') && (num != (char)'!') && (num != (char)')') && (num != (char)',') && (digit->IndexOf(num) == -1)))
				 textBox1->Text = textBox1->Text + "sinh(";
}
	private: System::Void button32_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (textBox1->Text != "")
				 num = (char)textBox1->Text[textBox1->Text->Length - 1];
			 if ((num == (char)"") || (operation->IndexOf(num) != -1) || ((num != (char)'i') && (num != (char)'e') && (num != (char)'!') && (num != (char)')') && (num != (char)',') && (digit->IndexOf(num) == -1)))
				 textBox1->Text = textBox1->Text + "arctan(";
}
	private: System::Void button38_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (textBox1->Text != "")
				 num = (char)textBox1->Text[textBox1->Text->Length - 1];
			 if ((num == (char)"") || (operation->IndexOf(num) != -1) || ((num != (char)'i') && (num != (char)'e') && (num != (char)'!') && (num != (char)')') && (num != (char)',') && (digit->IndexOf(num) == -1)))
				 textBox1->Text = textBox1->Text + "cosh(";
}
	private: System::Void button34_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (textBox1->Text != "")
				 num = (char)textBox1->Text[textBox1->Text->Length - 1];
			 if ((num == (char)"") || (operation->IndexOf(num) != -1) || ((num != (char)'i') && (num != (char)'e') && (num != (char)'!') && (num != (char)')') && (num != (char)',') && (digit->IndexOf(num) == -1)))
				 textBox1->Text = textBox1->Text + "arcsin(";
}
	private: System::Void button35_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (textBox1->Text != "")
				 num = (char)textBox1->Text[textBox1->Text->Length - 1];
			 if ((num == (char)"") || (operation->IndexOf(num) != -1) || ((num != (char)'i') && (num != (char)'e') && (num != (char)'!') && (num != (char)')') && (num != (char)',') && (digit->IndexOf(num) == -1)))
				 textBox1->Text = textBox1->Text + "arсcos(";
}	
};
}
