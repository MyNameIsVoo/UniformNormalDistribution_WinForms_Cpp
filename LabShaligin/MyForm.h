#pragma once
#include <Windows.h>

namespace UniformNormalDistribution {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	//---------

	ref class MyForm;

	//----------

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();

			this->comboBox1->SelectedIndex = 0;
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
	private: System::Windows::Forms::TabControl^  tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TabControl^  tabControl2;
	private: System::Windows::Forms::TabPage^  tabPage4;
	private: System::Windows::Forms::TabPage^  tabPage5;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart3;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart4;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart5;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TabControl^  tabControl3;
	private: System::Windows::Forms::TabPage^  tabPage6;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart6;
	private: System::Windows::Forms::TabPage^  tabPage7;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart7;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart8;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::RichTextBox^  richTextBox2;
	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::RichTextBox^  richTextBox3;
	private: System::Windows::Forms::TabControl^  tabControl4;
	private: System::Windows::Forms::TabPage^  tabPage8;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart9;
	private: System::Windows::Forms::TabPage^  tabPage9;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart10;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart11;
	private: System::Windows::Forms::TabControl^  tabControl5;
	private: System::Windows::Forms::TabPage^  tabPage10;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart12;
	private: System::Windows::Forms::TabPage^  tabPage11;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart13;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart14;
	private: System::Windows::Forms::TabControl^  tabControl6;
	private: System::Windows::Forms::TabPage^  tabPage12;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart15;
	private: System::Windows::Forms::TabPage^  tabPage13;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart16;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart17;
	private: System::Windows::Forms::GroupBox^  groupBox6;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::GroupBox^  groupBox7;
	private: System::Windows::Forms::RichTextBox^  richTextBox4;
	private: System::Windows::Forms::TabControl^  tabControl7;
	private: System::Windows::Forms::TabPage^  tabPage14;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart18;
	private: System::Windows::Forms::TabPage^  tabPage15;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart19;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart20;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel2;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel3;
	private: System::Windows::Forms::StatusStrip^  statusStrip2;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel4;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel5;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel6;



private: System::Windows::Forms::TabPage^  tabPage16;
private: System::Windows::Forms::TabPage^  tabPage18;
private: System::Windows::Forms::Label^  label8;
private: System::Windows::Forms::ComboBox^  comboBox1;
private: System::Windows::Forms::Label^  label10;
private: System::Windows::Forms::TextBox^  textBox12;
private: System::Windows::Forms::Label^  label9;
private: System::Windows::Forms::TextBox^  textBox11;
private: System::Windows::Forms::CheckBox^  checkBox4;
private: System::Windows::Forms::CheckBox^  checkBox3;
private: System::Windows::Forms::CheckBox^  checkBox2;
private: System::Windows::Forms::CheckBox^  checkBox1;
private: System::Windows::Forms::GroupBox^  groupBox10;
private: System::Windows::Forms::Label^  label22;
private: System::Windows::Forms::Label^  label21;
private: System::Windows::Forms::Label^  label20;
private: System::Windows::Forms::CheckBox^  checkBox6;
private: System::Windows::Forms::Label^  label24;
private: System::Windows::Forms::Label^  label35;


	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series7 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea4 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series8 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series9 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea5 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series10 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series11 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series12 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea6 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series13 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series14 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series15 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea7 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend7 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series16 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea8 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend8 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series17 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series18 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series19 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea9 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend9 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series20 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series21 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series22 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->chart5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl6 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage12 = (gcnew System::Windows::Forms::TabPage());
			this->chart15 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabPage13 = (gcnew System::Windows::Forms::TabPage());
			this->chart16 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart17 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl7 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage14 = (gcnew System::Windows::Forms::TabPage());
			this->chart18 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabPage15 = (gcnew System::Windows::Forms::TabPage());
			this->chart19 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart20 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->richTextBox4 = (gcnew System::Windows::Forms::RichTextBox());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->statusStrip2 = (gcnew System::Windows::Forms::StatusStrip());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabControl2->SuspendLayout();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->tabPage5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart4))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabControl6->SuspendLayout();
			this->tabPage12->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart15))->BeginInit();
			this->tabPage13->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart17))->BeginInit();
			this->groupBox5->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabControl7->SuspendLayout();
			this->tabPage14->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart18))->BeginInit();
			this->tabPage15->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart20))->BeginInit();
			this->groupBox7->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->SuspendLayout();
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(12, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(965, 602);
			this->tabControl1->TabIndex = 0;
			this->tabPage1->Controls->Add(this->tabControl2);
			this->tabPage1->Controls->Add(this->groupBox2);
			this->tabPage1->Controls->Add(this->groupBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(957, 576);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Равномерное распределение";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabControl2->Controls->Add(this->tabPage4);
			this->tabControl2->Controls->Add(this->tabPage5);
			this->tabControl2->Location = System::Drawing::Point(478, 6);
			this->tabControl2->Name = L"tabControl2";
			this->tabControl2->SelectedIndex = 0;
			this->tabControl2->Size = System::Drawing::Size(473, 564);
			this->tabControl2->TabIndex = 2;
			this->tabPage4->Controls->Add(this->chart1);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(465, 538);
			this->tabPage4->TabIndex = 0;
			this->tabPage4->Text = L"Rav";
			this->tabPage4->UseVisualStyleBackColor = true;
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(6, 78);
			this->chart1->Name = L"chart1";
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Grayscale;
			series1->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			series1->ChartArea = L"ChartArea1";
			series1->CustomProperties = L"PointWidth=1";
			series1->Legend = L"Legend1";
			series1->Name = L"Rav";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(453, 342);
			this->chart1->TabIndex = 2;
			this->chart1->Text = L"chart1";
			this->tabPage5->Controls->Add(this->chart5);
			this->tabPage5->Controls->Add(this->chart4);
			this->tabPage5->Location = System::Drawing::Point(4, 22);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(465, 538);
			this->tabPage5->TabIndex = 1;
			this->tabPage5->Text = L"Сигма коридор";
			this->tabPage5->UseVisualStyleBackColor = true;
			chartArea2->Name = L"ChartArea1";
			this->chart5->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart5->Legends->Add(legend2);
			this->chart5->Location = System::Drawing::Point(6, 274);
			this->chart5->Name = L"chart5";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series2->Legend = L"Legend1";
			series2->Name = L"D(g)";
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series3->Legend = L"Legend1";
			series3->Name = L"e(g)";
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series4->Legend = L"Legend1";
			series4->Name = L"-e(g)";
			this->chart5->Series->Add(series2);
			this->chart5->Series->Add(series3);
			this->chart5->Series->Add(series4);
			this->chart5->Size = System::Drawing::Size(453, 258);
			this->chart5->TabIndex = 1;
			this->chart5->Text = L"chart5";
			chartArea3->Name = L"ChartArea1";
			this->chart4->ChartAreas->Add(chartArea3);
			legend3->Name = L"Legend1";
			this->chart4->Legends->Add(legend3);
			this->chart4->Location = System::Drawing::Point(6, 10);
			this->chart4->Name = L"chart4";
			series5->ChartArea = L"ChartArea1";
			series5->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series5->Legend = L"Legend1";
			series5->Name = L"m(g)";
			series6->ChartArea = L"ChartArea1";
			series6->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series6->Legend = L"Legend1";
			series6->Name = L"w(g)";
			series7->ChartArea = L"ChartArea1";
			series7->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series7->Legend = L"Legend1";
			series7->Name = L"-w(g)";
			this->chart4->Series->Add(series5);
			this->chart4->Series->Add(series6);
			this->chart4->Series->Add(series7);
			this->chart4->Size = System::Drawing::Size(453, 258);
			this->chart4->TabIndex = 0;
			this->chart4->Text = L"chart4";
			this->groupBox2->Controls->Add(this->richTextBox1);
			this->groupBox2->Location = System::Drawing::Point(6, 130);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(466, 440);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Промежуточный результат";
			this->richTextBox1->Location = System::Drawing::Point(6, 19);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(454, 415);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(6, 6);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(466, 118);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Начальные данные";
			this->button1->Location = System::Drawing::Point(360, 84);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 28);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Старт";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			this->textBox3->Location = System::Drawing::Point(128, 71);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(48, 20);
			this->textBox3->TabIndex = 4;
			this->textBox3->Text = L"1";
			this->textBox2->Location = System::Drawing::Point(32, 71);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(48, 20);
			this->textBox2->TabIndex = 3;
			this->textBox2->Text = L"0";
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(10, 55);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(191, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Параметры распределения Rav[0,1]";
			this->textBox1->Location = System::Drawing::Point(78, 32);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(53, 20);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"100";
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(195, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Количество моделируемых значений";
			this->tabPage2->Controls->Add(this->tabControl6);
			this->tabPage2->Controls->Add(this->groupBox5);
			this->tabPage2->Controls->Add(this->groupBox3);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(957, 576);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Нормальное (Гауссовское) распределение";
			this->tabPage2->UseVisualStyleBackColor = true;
			this->tabControl6->Controls->Add(this->tabPage12);
			this->tabControl6->Controls->Add(this->tabPage13);
			this->tabControl6->Location = System::Drawing::Point(478, 6);
			this->tabControl6->Name = L"tabControl6";
			this->tabControl6->SelectedIndex = 0;
			this->tabControl6->Size = System::Drawing::Size(473, 564);
			this->tabControl6->TabIndex = 3;
			this->tabPage12->Controls->Add(this->chart15);
			this->tabPage12->Location = System::Drawing::Point(4, 22);
			this->tabPage12->Name = L"tabPage12";
			this->tabPage12->Padding = System::Windows::Forms::Padding(3);
			this->tabPage12->Size = System::Drawing::Size(465, 538);
			this->tabPage12->TabIndex = 0;
			this->tabPage12->Text = L"Norm";
			this->tabPage12->UseVisualStyleBackColor = true;
			chartArea4->Name = L"ChartArea1";
			this->chart15->ChartAreas->Add(chartArea4);
			legend4->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			legend4->Name = L"Legend1";
			this->chart15->Legends->Add(legend4);
			this->chart15->Location = System::Drawing::Point(6, 78);
			this->chart15->Name = L"chart15";
			this->chart15->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Grayscale;
			series8->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			series8->ChartArea = L"ChartArea1";
			series8->CustomProperties = L"PointWidth=1";
			series8->LabelBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			series8->Legend = L"Legend1";
			series8->Name = L"Norm";
			series9->ChartArea = L"ChartArea1";
			series9->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series9->Color = System::Drawing::Color::Black;
			series9->LabelBorderColor = System::Drawing::Color::Black;
			series9->Legend = L"Legend1";
			series9->Name = L"f";
			series9->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Grayscale;
			series9->ShadowColor = System::Drawing::Color::Black;
			this->chart15->Series->Add(series8);
			this->chart15->Series->Add(series9);
			this->chart15->Size = System::Drawing::Size(453, 342);
			this->chart15->TabIndex = 2;
			this->chart15->Text = L"chart15";
			this->tabPage13->Controls->Add(this->chart16);
			this->tabPage13->Controls->Add(this->chart17);
			this->tabPage13->Location = System::Drawing::Point(4, 22);
			this->tabPage13->Name = L"tabPage13";
			this->tabPage13->Padding = System::Windows::Forms::Padding(3);
			this->tabPage13->Size = System::Drawing::Size(465, 538);
			this->tabPage13->TabIndex = 1;
			this->tabPage13->Text = L"Сигма коридор";
			this->tabPage13->UseVisualStyleBackColor = true;
			chartArea5->Name = L"ChartArea1";
			this->chart16->ChartAreas->Add(chartArea5);
			legend5->Name = L"Legend1";
			this->chart16->Legends->Add(legend5);
			this->chart16->Location = System::Drawing::Point(6, 274);
			this->chart16->Name = L"chart16";
			series10->ChartArea = L"ChartArea1";
			series10->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series10->Legend = L"Legend1";
			series10->Name = L"D(g)";
			series11->ChartArea = L"ChartArea1";
			series11->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series11->Legend = L"Legend1";
			series11->Name = L"e(g)";
			series12->ChartArea = L"ChartArea1";
			series12->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series12->Legend = L"Legend1";
			series12->Name = L"-e(g)";
			this->chart16->Series->Add(series10);
			this->chart16->Series->Add(series11);
			this->chart16->Series->Add(series12);
			this->chart16->Size = System::Drawing::Size(453, 258);
			this->chart16->TabIndex = 1;
			this->chart16->Text = L"chart16";
			chartArea6->Name = L"ChartArea1";
			this->chart17->ChartAreas->Add(chartArea6);
			legend6->Name = L"Legend1";
			this->chart17->Legends->Add(legend6);
			this->chart17->Location = System::Drawing::Point(6, 10);
			this->chart17->Name = L"chart17";
			series13->ChartArea = L"ChartArea1";
			series13->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series13->Legend = L"Legend1";
			series13->Name = L"m(g)";
			series14->ChartArea = L"ChartArea1";
			series14->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series14->Legend = L"Legend1";
			series14->Name = L"w(g)";
			series15->ChartArea = L"ChartArea1";
			series15->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series15->Legend = L"Legend1";
			series15->Name = L"-w(g)";
			this->chart17->Series->Add(series13);
			this->chart17->Series->Add(series14);
			this->chart17->Series->Add(series15);
			this->chart17->Size = System::Drawing::Size(453, 258);
			this->chart17->TabIndex = 0;
			this->chart17->Text = L"chart17";
			this->groupBox5->Controls->Add(this->richTextBox3);
			this->groupBox5->Location = System::Drawing::Point(6, 130);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(466, 440);
			this->groupBox5->TabIndex = 2;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Промежуточный результат";
			this->richTextBox3->Location = System::Drawing::Point(6, 19);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->Size = System::Drawing::Size(454, 415);
			this->richTextBox3->TabIndex = 0;
			this->richTextBox3->Text = L"";
			this->groupBox3->Controls->Add(this->label10);
			this->groupBox3->Controls->Add(this->textBox12);
			this->groupBox3->Controls->Add(this->label9);
			this->groupBox3->Controls->Add(this->textBox11);
			this->groupBox3->Controls->Add(this->label8);
			this->groupBox3->Controls->Add(this->comboBox1);
			this->groupBox3->Controls->Add(this->button2);
			this->groupBox3->Controls->Add(this->textBox4);
			this->groupBox3->Controls->Add(this->textBox5);
			this->groupBox3->Controls->Add(this->label3);
			this->groupBox3->Controls->Add(this->textBox6);
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Location = System::Drawing::Point(6, 6);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(466, 118);
			this->groupBox3->TabIndex = 1;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Начальные данные";
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(290, 55);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(31, 13);
			this->label10->TabIndex = 11;
			this->label10->Text = L"betta";
			this->textBox12->Location = System::Drawing::Point(293, 71);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(48, 20);
			this->textBox12->TabIndex = 10;
			this->textBox12->Text = L"1";
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(216, 55);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(34, 13);
			this->label9->TabIndex = 9;
			this->label9->Text = L"sigma";
			this->textBox11->Location = System::Drawing::Point(219, 71);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(48, 20);
			this->textBox11->TabIndex = 8;
			this->textBox11->Text = L"1";
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(207, 15);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(120, 13);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Метод распределения";
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Нормальное распределение", L"Распределение с заданной плотностью" });
			this->comboBox1->Location = System::Drawing::Point(207, 31);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(253, 21);
			this->comboBox1->TabIndex = 6;
			this->button2->Location = System::Drawing::Point(360, 84);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 28);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Старт";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click_1);
			this->textBox4->Location = System::Drawing::Point(128, 71);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(48, 20);
			this->textBox4->TabIndex = 4;
			this->textBox4->Text = L"1";
			this->textBox5->Location = System::Drawing::Point(32, 71);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(48, 20);
			this->textBox5->TabIndex = 3;
			this->textBox5->Text = L"0";
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(10, 55);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(196, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Параметры распределения Norm[0,1]";
			this->textBox6->Location = System::Drawing::Point(78, 32);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(53, 20);
			this->textBox6->TabIndex = 1;
			this->textBox6->Text = L"100";
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 16);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(195, 13);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Количество моделируемых значений";
			this->tabPage3->Controls->Add(this->tabControl7);
			this->tabPage3->Controls->Add(this->groupBox7);
			this->tabPage3->Controls->Add(this->groupBox6);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(957, 576);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Распределение Хи-квадрат";
			this->tabPage3->UseVisualStyleBackColor = true;
			this->tabControl7->Controls->Add(this->tabPage14);
			this->tabControl7->Controls->Add(this->tabPage15);
			this->tabControl7->Location = System::Drawing::Point(478, 6);
			this->tabControl7->Name = L"tabControl7";
			this->tabControl7->SelectedIndex = 0;
			this->tabControl7->Size = System::Drawing::Size(473, 564);
			this->tabControl7->TabIndex = 4;
			this->tabPage14->Controls->Add(this->chart18);
			this->tabPage14->Location = System::Drawing::Point(4, 22);
			this->tabPage14->Name = L"tabPage14";
			this->tabPage14->Padding = System::Windows::Forms::Padding(3);
			this->tabPage14->Size = System::Drawing::Size(465, 538);
			this->tabPage14->TabIndex = 0;
			this->tabPage14->Text = L"Xи^2";
			this->tabPage14->UseVisualStyleBackColor = true;
			chartArea7->Name = L"ChartArea1";
			this->chart18->ChartAreas->Add(chartArea7);
			legend7->Name = L"Legend1";
			this->chart18->Legends->Add(legend7);
			this->chart18->Location = System::Drawing::Point(6, 78);
			this->chart18->Name = L"chart18";
			this->chart18->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Grayscale;
			series16->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			series16->ChartArea = L"ChartArea1";
			series16->CustomProperties = L"PointWidth=1";
			series16->Legend = L"Legend1";
			series16->Name = L"Rav";
			this->chart18->Series->Add(series16);
			this->chart18->Size = System::Drawing::Size(453, 342);
			this->chart18->TabIndex = 2;
			this->chart18->Text = L"chart18";
			this->tabPage15->Controls->Add(this->chart19);
			this->tabPage15->Controls->Add(this->chart20);
			this->tabPage15->Location = System::Drawing::Point(4, 22);
			this->tabPage15->Name = L"tabPage15";
			this->tabPage15->Padding = System::Windows::Forms::Padding(3);
			this->tabPage15->Size = System::Drawing::Size(465, 538);
			this->tabPage15->TabIndex = 1;
			this->tabPage15->Text = L"Сигма коридор";
			this->tabPage15->UseVisualStyleBackColor = true;
			chartArea8->Name = L"ChartArea1";
			this->chart19->ChartAreas->Add(chartArea8);
			legend8->Name = L"Legend1";
			this->chart19->Legends->Add(legend8);
			this->chart19->Location = System::Drawing::Point(6, 274);
			this->chart19->Name = L"chart19";
			series17->ChartArea = L"ChartArea1";
			series17->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series17->Legend = L"Legend1";
			series17->Name = L"D(g)";
			series18->ChartArea = L"ChartArea1";
			series18->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series18->Legend = L"Legend1";
			series18->Name = L"e(g)";
			series19->ChartArea = L"ChartArea1";
			series19->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series19->Legend = L"Legend1";
			series19->Name = L"-e(g)";
			this->chart19->Series->Add(series17);
			this->chart19->Series->Add(series18);
			this->chart19->Series->Add(series19);
			this->chart19->Size = System::Drawing::Size(453, 258);
			this->chart19->TabIndex = 1;
			this->chart19->Text = L"chart19";
			chartArea9->Name = L"ChartArea1";
			this->chart20->ChartAreas->Add(chartArea9);
			legend9->Name = L"Legend1";
			this->chart20->Legends->Add(legend9);
			this->chart20->Location = System::Drawing::Point(6, 10);
			this->chart20->Name = L"chart20";
			series20->ChartArea = L"ChartArea1";
			series20->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series20->Legend = L"Legend1";
			series20->Name = L"m(g)";
			series21->ChartArea = L"ChartArea1";
			series21->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series21->Legend = L"Legend1";
			series21->Name = L"w(g)";
			series22->ChartArea = L"ChartArea1";
			series22->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series22->Legend = L"Legend1";
			series22->Name = L"-w(g)";
			this->chart20->Series->Add(series20);
			this->chart20->Series->Add(series21);
			this->chart20->Series->Add(series22);
			this->chart20->Size = System::Drawing::Size(453, 258);
			this->chart20->TabIndex = 0;
			this->chart20->Text = L"chart20";
			this->groupBox7->Controls->Add(this->richTextBox4);
			this->groupBox7->Location = System::Drawing::Point(6, 130);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(466, 440);
			this->groupBox7->TabIndex = 3;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Промежуточный результат";
			this->richTextBox4->Location = System::Drawing::Point(6, 19);
			this->richTextBox4->Name = L"richTextBox4";
			this->richTextBox4->Size = System::Drawing::Size(454, 415);
			this->richTextBox4->TabIndex = 0;
			this->richTextBox4->Text = L"";
			this->groupBox6->Controls->Add(this->textBox10);
			this->groupBox6->Controls->Add(this->label7);
			this->groupBox6->Controls->Add(this->button3);
			this->groupBox6->Controls->Add(this->textBox7);
			this->groupBox6->Controls->Add(this->textBox8);
			this->groupBox6->Controls->Add(this->label5);
			this->groupBox6->Controls->Add(this->textBox9);
			this->groupBox6->Controls->Add(this->label6);
			this->groupBox6->Location = System::Drawing::Point(6, 6);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(466, 118);
			this->groupBox6->TabIndex = 2;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Начальные данные";
			this->textBox10->Location = System::Drawing::Point(257, 32);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(48, 20);
			this->textBox10->TabIndex = 7;
			this->textBox10->Text = L"6";
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(239, 16);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(96, 13);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Степень свободы";
			this->button3->Location = System::Drawing::Point(360, 84);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 28);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Старт";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			this->textBox7->Location = System::Drawing::Point(128, 71);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(48, 20);
			this->textBox7->TabIndex = 4;
			this->textBox7->Text = L"1";
			this->textBox8->Location = System::Drawing::Point(32, 71);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(48, 20);
			this->textBox8->TabIndex = 3;
			this->textBox8->Text = L"0";
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(10, 55);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(196, 13);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Параметры распределения Norm[0,1]";
			this->textBox9->Location = System::Drawing::Point(78, 32);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(53, 20);
			this->textBox9->TabIndex = 1;
			this->textBox9->Text = L"100";
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(6, 16);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(195, 13);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Количество моделируемых значений";
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(6, 16);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(99, 13);
			this->label24->TabIndex = 2;
			this->label24->Text = L"Активный участок";
			this->checkBox6->AutoSize = true;
			this->checkBox6->Location = System::Drawing::Point(6, 32);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(96, 17);
			this->checkBox6->TabIndex = 3;
			this->checkBox6->Text = L"Угол наклона";
			this->checkBox6->UseVisualStyleBackColor = true;
			this->statusStrip2->Location = System::Drawing::Point(0, 604);
			this->statusStrip2->Name = L"statusStrip2";
			this->statusStrip2->Size = System::Drawing::Size(989, 22);
			this->statusStrip2->SizingGrip = false;
			this->statusStrip2->TabIndex = 1;
			this->statusStrip2->Text = L"statusStrip2";
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(989, 626);
			this->Controls->Add(this->statusStrip2);
			this->Controls->Add(this->tabControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabControl2->ResumeLayout(false);
			this->tabPage4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->tabPage5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart4))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabControl6->ResumeLayout(false);
			this->tabPage12->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart15))->EndInit();
			this->tabPage13->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart17))->EndInit();
			this->groupBox5->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabControl7->ResumeLayout(false);
			this->tabPage14->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart18))->EndInit();
			this->tabPage15->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart20))->EndInit();
			this->groupBox7->ResumeLayout(false);
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		//
		// Равномерное распределение
		//

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		UniformDistribution(Convert::ToInt32(textBox1->Text), Convert::ToInt32(textBox2->Text), Convert::ToInt32(textBox3->Text));

		richTextBox1->Clear();
		richTextBox1->Text = System::IO::File::ReadAllText("Data.txt", System::Text::Encoding::GetEncoding(1251));
	}

	private: System::Void UniformDistribution(int N, int left, int right)
	{
	   clock_t Time = clock();
	   ofstream out("Data.txt", ios::out);

	   out << "\t\tМоделирование независимых случайных величин имеющих равномерное и нормальное распределение" << endl << endl;
	   out << "\t\tРавномерное распределение" << endl << endl;

	   int k = 0, kol = 0;
	   float* Ravn = new float[N];

	   // Равномерное распределение
	   for (int i = 0; i < N; i++)
		   Ravn[i] = 1.0 * rand() / (RAND_MAX + 1); // от 0 до 1

	   float l_border = 0, r_border = 0, h = 0, * Pi = new float[20], * Coord = new float[20], max = Ravn[0], min = Ravn[0];

	   for (int i = 0; i < N; i++)
	   {
		   if (max < Ravn[i])
			   max = Ravn[i];
		   if (min > Ravn[i])
			   min = Ravn[i];
	   }

	   h = (max - min) * 0.1;
	   out << "\t\tШаг распределения: " << h << endl << endl;

	   l_border = 0;
	   r_border = h;
	   do
	   {
		   k = 0;
		   for (int i = 0; i < N; i++)
		   {
			   if (Ravn[i] > l_border && Ravn[i] < r_border)
				   k++;
		   }

		   Pi[kol] = k / (float)N;
		   Coord[kol] = l_border;
		   kol++;
		   l_border = r_border;
		   r_border += h;
	   } while (r_border < max);

	   Rav(out, N, Ravn);

	   double EndTime = (clock() - (double)Time) / CLOCKS_PER_SEC;
	   out << "\n\n\t\tВремя выполнения: " << EndTime << endl;

	   chart1->Series["Rav"]->Points->Clear();
	   chart4->Series["m(g)"]->Points->Clear();
	   chart4->Series["w(g)"]->Points->Clear();
	   chart4->Series["-w(g)"]->Points->Clear();
	   chart5->Series["D(g)"]->Points->Clear();
	   chart5->Series["e(g)"]->Points->Clear();
	   chart5->Series["-e(g)"]->Points->Clear();

	   for (int i = 0; i < kol; i++)
		   chart1->Series["Rav"]->Points->AddXY(Coord[i], Pi[i]);

	   float sigma = 2.5, mg = 0, Dg = 0;
	   for (int i = 1; i < N; i++)
	   {
		   mg = Ravn[i] * (1.0 / float(i));
		   chart4->Series["m(g)"]->Points->AddXY(i, mg);
		   chart4->Series["w(g)"]->Points->AddXY(i, 3.0 * sigma * (1 / pow(i, 0.5)));
		   chart4->Series["-w(g)"]->Points->AddXY(i, -3.0 * sigma * (1 / pow(i, 0.5)));

		   Dg = pow((Ravn[i] - mg), 2.0) * (1.0 / (float(i) - 1.0));
		   chart5->Series["D(g)"]->Points->AddXY(i, Dg);
		   chart5->Series["e(g)"]->Points->AddXY(i, 3.0 * sigma * 2.0 / pow((i + 1) - 1.0, 0.5));
		   chart5->Series["-e(g)"]->Points->AddXY(i, -3.0 * sigma * 2.0 / pow((i + 1) - 1.0, 0.5));
	   }

	   delete[]Ravn;
	   delete[]Pi;
	   delete[]Coord;

	   out.close();
	}

		//
		// Нормальное (Гпуссовское) распределение || С заданной плотностью
		//

	private: System::Void button2_Click_1(System::Object^  sender, System::EventArgs^  e) 
{
	int N = Convert::ToInt32(textBox6->Text), left = Convert::ToInt32(textBox5->Text), right = Convert::ToInt32(textBox4->Text);

	if (comboBox1->SelectedIndex == 0)
		NormalDistribution(N, left, right);
	else if (comboBox1->SelectedIndex == 1)
		NormalDistributionWithGivenDensity(N, left, right, Convert::ToDouble(textBox12->Text), Convert::ToDouble(textBox11->Text));

	richTextBox3->Clear();
	richTextBox3->Text = System::IO::File::ReadAllText("Data.txt", System::Text::Encoding::GetEncoding(1251));
}

	private: System::Void NormalDistribution(int N, int left, int right)
	{
		clock_t Time = clock();
		ofstream out("Data.txt", ios::out);

		out << "\t\tНормальное распределение (Гауссовское)" << endl << endl;
	
		int k = 0, kol = 0;
		float* Norm = new float[N], summ = 0, MO = 0, sko = 0;
		float l_border = 0, r_border = 0, h = 0, * Pi = new float[N], * Coord = new float[N], max, min;
	
		MO = (left + right) / 2.0; sko = (MO - left) / 3.0;
	
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < 25; j++)
				summ += 1.0 * rand() / RAND_MAX;
	
			Norm[i] = (sqrt(2.0) * (sko) * (summ - 12.5)) / 1.99661 + MO;
			summ = 0;
		}
	
		max = Norm[0]; min = Norm[0];
	
		for (int i = 0; i < N; i++)
		{
			if (max < Norm[i])
				max = Norm[i];
			if (min > Norm[i])
				min = Norm[i];
		}
	
		h = (max - min) * 0.1;
		out << "\t\tШаг распределения: " << h << endl << endl;
	
		l_border = 0;
		r_border = h;
		do
		{
			k = 0;
			for (int i = 0; i < N; i++)
			{
				if (Norm[i] > l_border && Norm[i] < r_border)
					k++;
			}
	
			Pi[kol] = k / (float)N;
			Coord[kol] = l_border;
			kol++;
			l_border = r_border;
			r_border += h;
		} while (r_border < max);
	
		Rav(out, N, Norm);
	
		double EndTime = (clock() - (double)Time) / CLOCKS_PER_SEC;
		out << "\n\n\t\tВремя выполнения: " << EndTime << endl;

		out.close();

		chart15->Series["Norm"]->Points->Clear();
		chart17->Series["m(g)"]->Points->Clear();
		chart17->Series["w(g)"]->Points->Clear();
		chart17->Series["-w(g)"]->Points->Clear();
		chart16->Series["D(g)"]->Points->Clear();
		chart16->Series["e(g)"]->Points->Clear();
		chart16->Series["-e(g)"]->Points->Clear();

		for (int i = 0; i < kol; i++)
		{
			chart15->Series["Norm"]->Points->AddXY(Coord[i], Pi[i]);
		}

		float sigma = 2.5, mg = 0, Dg = 0;
		for (int i = 1; i < N; i++)
		{
			mg = Norm[i] * (1.0 / float(i));
			chart17->Series["m(g)"]->Points->AddXY(i, mg);
			chart17->Series["w(g)"]->Points->AddXY(i, 3.0 * sigma / (pow(i, 0.5)));
			chart17->Series["-w(g)"]->Points->AddXY(i, -3.0 * sigma / (pow(i, 0.5)));

			Dg = pow(Norm[i] - mg, 2.0) * (1.0 / (float(i) - 1.0));
			chart16->Series["D(g)"]->Points->AddXY(i, Dg);
			chart16->Series["e(g)"]->Points->AddXY(i, 3.0 * sigma * 2.0 / pow((i + 1) - 1.0, 0.5));
			chart16->Series["-e(g)"]->Points->AddXY(i, -3.0 * sigma * 2.0 / pow((i + 1) - 1.0, 0.5));
		}

		delete[]Norm;
		delete[]Pi;
		delete[]Coord;
	}

	private: System::Void NormalDistributionWithGivenDensity(int N, int left, int right, double betta, double sigma)
	{
		clock_t Time = clock();
		ofstream out("Data.txt", ios::out);

		out << "\t\tНормальное распределение (с заданной плотностью)" << endl << endl;

		int k = 0, kol = 0;
		float* Norm = new float[N], summ = 0, MO = 0, sko = 0;
		float l_border = 0, r_border = 0, h = 0, * Pi = new float[N], * Coord = new float[N], max, min;

		float vsp = 0, p = 0;

		MO = (left + right) / 2.0;
		sko = (MO - left) / 3.0;

		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < 25; j++)
			 summ += 1.0 * rand() / (RAND_MAX + 1.0);

			Norm[i] = (sqrt(2.0) * (sko) * (summ - 12.5)) / 1.99661 + MO;
			Norm[i] = (Norm[i] + Norm[i]) / 2.0;

			// Равномерное распределение
			p = rand() % 2;

			if (p == 0)
			 vsp = 1.0;
			if (p == 1)
			 vsp = -1.0;

			Norm[i] = Norm[i] * sqrt(sigma) + betta * vsp;

			summ = 0;
		}

		max = Norm[0];
		min = Norm[0];

		for (int i = 0; i < N; i++)
		{
			if (max < Norm[i])
				max = Norm[i];
			if (min > Norm[i])
				min = Norm[i];
		}

		h = (max - min) / (40.0);
		out << "\t\tШаг распределения: " << h << endl << endl;

		l_border = min;
		r_border = min + h;

		do
		{
			k = 0;
			for (int i = 0; i < N; i++)
			{
				if (Norm[i] > l_border && Norm[i] < r_border)
				   k++;
			}

			Pi[kol] = k / (float)N;
			Coord[kol] = l_border;
			kol++;
			l_border = r_border;
			r_border += h;
		} while (r_border < max);

		Rav(out, N, Norm);

		double EndTime = (clock() - (double)Time) / CLOCKS_PER_SEC;
		out << "\n\n\t\tВремя выполнения: " << EndTime << endl;

		out.close();

		chart15->Series["Norm"]->Points->Clear();
		chart17->Series["m(g)"]->Points->Clear();
		chart17->Series["w(g)"]->Points->Clear();
		chart17->Series["-w(g)"]->Points->Clear();
		chart16->Series["D(g)"]->Points->Clear();
		chart16->Series["e(g)"]->Points->Clear();
		chart16->Series["-e(g)"]->Points->Clear();

		for (int i = 0; i < kol; i++)
		{
			chart15->Series["Norm"]->Points->AddXY(Coord[i], Pi[i]);
		}

		float sigmaChart = 2.5, mg = 0, Dg = 0;
		for (int i = 1; i < N; i++)
		{
			mg = Norm[i] * (1.0 / float(i));
			chart17->Series["m(g)"]->Points->AddXY(i, mg);
			chart17->Series["w(g)"]->Points->AddXY(i, 3.0 * sigmaChart / (pow(i, 0.5)));
			chart17->Series["-w(g)"]->Points->AddXY(i, -3.0 * sigmaChart / (pow(i, 0.5)));

			Dg = pow(Norm[i] - mg, 2.0) * (1.0 / (float(i) - 1.0));
			chart16->Series["D(g)"]->Points->AddXY(i, Dg);
			chart16->Series["e(g)"]->Points->AddXY(i, 3.0 * sigmaChart * 2.0 / pow((i + 1) - 1.0, 0.5));
			chart16->Series["-e(g)"]->Points->AddXY(i, -3.0 * sigmaChart * 2.0 / pow((i + 1) - 1.0, 0.5));
		}

		delete[]Norm;
		delete[]Pi;
		delete[]Coord;
	}

		 //
		 // Распределение Хи-квадрат
		 //

	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
{
	XiSquareDistributionMethod(Convert::ToInt32(textBox9->Text), Convert::ToInt32(textBox8->Text), Convert::ToInt32(textBox7->Text), Convert::ToInt32(textBox10->Text));

	richTextBox4->Clear();
	richTextBox4->Text = System::IO::File::ReadAllText("Data.txt", System::Text::Encoding::GetEncoding(1251));
}

	private: System::Void XiSquareDistributionMethod(int N, int left, int right, int step)
	{
		clock_t Time = clock();
		ofstream out("Data.txt", ios::out);

		out << "\t\tКоличество моделируемых значений: " << N << endl << endl;
		out << "\t\tПараметры распределения: Norm[" << left << "," << right << "]" << endl << endl;
		out << "\t\tСтепень свободы: " << step << endl << endl;
	
		int k, kol, j;
		float* Norm = new float[N], summ = 0, MO = 0, sko = 0, * Xi = new float[N];
		float l_border = 0, r_border = 0, h = 0, * Pi = new float[N], * Coord = new float[N], max, min;
	
		// Равномерное распределение
		MO = (left + right) * 0.5;
		sko = (MO - left) / 3.0;
	
		// Закон нормального распределения
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < 25; j++)
				summ += 1.0 * rand() / RAND_MAX;
	
			Norm[i] = (sqrt(2.0) * (sko) * (summ - 12.5)) / 1.99661 + MO;
			summ = 0;
		}
	
		// Заполняем массив Хи квадрата ( в зависимости от степени свободы )
		summ = kol = k = 0;
		do
		{
			summ = 0;
			j = 0;
	
			for (int i = k; i < N; i++)
			{
				if (j > 5)
					break;
	
				summ += pow(Norm[i], 2.0);
				j++;
			}
	
			Xi[kol] = summ;
			kol++;
			k += step;
		} while (k < N);
	
		// Ищим екстремумы массива Хи квадрат
		max = min = Xi[0];
		for (int i = 0; i < kol; i++)
		{
			if (max < Xi[i])
				max = Xi[i];
			if (min > Xi[i])
				min = Xi[i];
		}
	
		// Ищим вхождения в каждый интервал
		h = (max - min) * 0.1;
		l_border = kol = 0;
		r_border = h;
		do
		{
			k = 0;
			for (int i = 0; i < N; i++)
			{
				if (Xi[i] > l_border && Xi[i] < r_border)
					k++;
			}
	
			Pi[kol] = k / (float)N;
			Coord[kol] = l_border;
			kol++;
			l_border = r_border;
			r_border += h;
		} while (r_border < max);
	
		Rav(out, N, Norm);

		double EndTime = (clock() - (double)Time) / CLOCKS_PER_SEC;
		out << "\n\n\t\tВремя выполнения: " << EndTime << endl;

		out.close();

		chart18->Series["Rav"]->Points->Clear();
		chart20->Series["m(g)"]->Points->Clear();
		chart20->Series["w(g)"]->Points->Clear();
		chart20->Series["-w(g)"]->Points->Clear();
		chart19->Series["D(g)"]->Points->Clear();
		chart19->Series["e(g)"]->Points->Clear();
		chart19->Series["-e(g)"]->Points->Clear();

		for (int i = 0; i < kol; i++)
			chart18->Series["Rav"]->Points->AddXY(Coord[i], Pi[i]);

		float sigma = 2.5, mg = 0, Dg = 0;
		for (int i = 1; i < kol; i++)
		{
			mg = Xi[i] * (1.0 / float(i));
			chart20->Series["m(g)"]->Points->AddXY(i, mg);
			chart20->Series["w(g)"]->Points->AddXY(i, 3.0 * sigma / (pow(i, 0.5)));
			chart20->Series["-w(g)"]->Points->AddXY(i, -3.0 * sigma / (pow(i, 0.5)));

			Dg = pow(Xi[i] - mg, 2.0) * (1.0 / (float(i) - 1.0));
			chart19->Series["D(g)"]->Points->AddXY(i, Dg);
			chart19->Series["e(g)"]->Points->AddXY(i, 3.0 * sigma * 2.0 / pow((i + 1) - 1.0, 0.5));
			chart19->Series["-e(g)"]->Points->AddXY(i, -3.0 * sigma * 2.0 / pow((i + 1) - 1.0, 0.5));
		}

		delete[]Norm;
		delete[]Pi;
		delete[]Coord;
	}

};
}
