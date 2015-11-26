#pragma once
#include "WebUI.h"
#include "DataReader.h"
#include "Punto3D.h"
#include "calibrate.h"
#include <GL\glew.h>
#include <GL\freeglut.h>

#define X_COOR 0
#define Y_COOR 1
#define Z_COOR 2
#define R_ANG 3
#define P_ANG 4
#define Y_ANG 5
#define PAQ_S 6
#define TIME 7
#define VEL 8
#define REAL_T 9
#define FRECUENCY 10
#define LOG 11
#define TH_STATE 12

/*
[0] = X
[1] = Y
[2] = Z
[3] = R
[4] = P
[5] = yaW
[6] = P/S
[7] = T
[8] = V
[9] = TR
[10] = FR
[11] = logpath
[12] = THREAD STATE
*/
namespace LidarGUI {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Net;
	using namespace System::Threading;

	/// <summary>
	/// Resumen de MainUI
	/// </summary>
	public ref class MainUI : public System::Windows::Forms::Form
	{
	public:
		MainUI(void)
		{
			InitializeComponent();
			parameters = gcnew cli::array<Object^>(13);
			for (int i = 0; i < 13; i++)
			{
				parameters[i] = -1.0;
			}
			//
			//TODO: agregar código de constructor aquí
			//
		}
		IPEndPoint^ LaserIpEndPoint = gcnew IPEndPoint(IPAddress::Any, 2368);
	private: System::Windows::Forms::Label^  reader_label;
	public:

	private: System::Windows::Forms::Timer^  timer1;
	public:		DataReader^ reader = gcnew DataReader(LaserIpEndPoint);
	private: System::Windows::Forms::Label^  analisis_label;
	public:

	public:
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  real_label;

	private: System::Windows::Forms::ToolStripMenuItem^  calibrarToolStripMenuItem;
	private: cli::array<Object^>^ parameters;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ToolStripMenuItem^  logsToolStripMenuItem;


	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::CheckBox^  log_checkBox;
	private: System::Windows::Forms::Button^  button1;
	private: System::ComponentModel::BackgroundWorker^  backgroundWorker1;









	public:
		Thread^ THREADER;
	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MainUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  configurarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  interfezWebToolStripMenuItem;
	private: System::Windows::Forms::Button^  button_Start;
	private: System::Windows::Forms::Label^  package_label;

	private: System::Windows::Forms::Label^  frecuency_label;

	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainUI::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->configurarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->interfezWebToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->calibrarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->logsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button_Start = (gcnew System::Windows::Forms::Button());
			this->package_label = (gcnew System::Windows::Forms::Label());
			this->frecuency_label = (gcnew System::Windows::Forms::Label());
			this->reader_label = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->analisis_label = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->real_label = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->log_checkBox = (gcnew System::Windows::Forms::CheckBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->menuStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->configurarToolStripMenuItem,
					this->logsToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(834, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// configurarToolStripMenuItem
			// 
			this->configurarToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->interfezWebToolStripMenuItem,
					this->calibrarToolStripMenuItem
			});
			this->configurarToolStripMenuItem->Name = L"configurarToolStripMenuItem";
			this->configurarToolStripMenuItem->Size = System::Drawing::Size(76, 20);
			this->configurarToolStripMenuItem->Text = L"Configurar";
			// 
			// interfezWebToolStripMenuItem
			// 
			this->interfezWebToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"interfezWebToolStripMenuItem.Image")));
			this->interfezWebToolStripMenuItem->Name = L"interfezWebToolStripMenuItem";
			this->interfezWebToolStripMenuItem->Size = System::Drawing::Size(140, 22);
			this->interfezWebToolStripMenuItem->Text = L"Interfez Web";
			this->interfezWebToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainUI::interfezWebToolStripMenuItem_Click);
			// 
			// calibrarToolStripMenuItem
			// 
			this->calibrarToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"calibrarToolStripMenuItem.Image")));
			this->calibrarToolStripMenuItem->Name = L"calibrarToolStripMenuItem";
			this->calibrarToolStripMenuItem->Size = System::Drawing::Size(140, 22);
			this->calibrarToolStripMenuItem->Text = L"Calibrar";
			this->calibrarToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainUI::calibrarToolStripMenuItem_Click);
			// 
			// logsToolStripMenuItem
			// 
			this->logsToolStripMenuItem->Name = L"logsToolStripMenuItem";
			this->logsToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->logsToolStripMenuItem->Text = L"Logs";
			// 
			// button_Start
			// 
			this->button_Start->BackColor = System::Drawing::Color::PaleGreen;
			this->button_Start->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_Start->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_Start.Image")));
			this->button_Start->Location = System::Drawing::Point(7, 19);
			this->button_Start->Name = L"button_Start";
			this->button_Start->Size = System::Drawing::Size(49, 34);
			this->button_Start->TabIndex = 1;
			this->button_Start->UseVisualStyleBackColor = false;
			this->button_Start->Click += gcnew System::EventHandler(this, &MainUI::button1_Click);
			// 
			// package_label
			// 
			this->package_label->AutoSize = true;
			this->package_label->Font = (gcnew System::Drawing::Font(L"Consolas", 11));
			this->package_label->Location = System::Drawing::Point(374, 10);
			this->package_label->Name = L"package_label";
			this->package_label->Size = System::Drawing::Size(64, 18);
			this->package_label->TabIndex = 6;
			this->package_label->Text = L"0 paq/s";
			this->package_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// frecuency_label
			// 
			this->frecuency_label->AutoSize = true;
			this->frecuency_label->Font = (gcnew System::Drawing::Font(L"Consolas", 11));
			this->frecuency_label->Location = System::Drawing::Point(284, 9);
			this->frecuency_label->Name = L"frecuency_label";
			this->frecuency_label->Size = System::Drawing::Size(40, 18);
			this->frecuency_label->TabIndex = 7;
			this->frecuency_label->Text = L"0 Hz";
			this->frecuency_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// reader_label
			// 
			this->reader_label->AutoSize = true;
			this->reader_label->BackColor = System::Drawing::Color::IndianRed;
			this->reader_label->Location = System::Drawing::Point(67, 10);
			this->reader_label->Name = L"reader_label";
			this->reader_label->Size = System::Drawing::Size(57, 13);
			this->reader_label->TabIndex = 8;
			this->reader_label->Text = L"LECTURA";
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MainUI::timer1_Tick);
			// 
			// analisis_label
			// 
			this->analisis_label->AutoSize = true;
			this->analisis_label->BackColor = System::Drawing::Color::IndianRed;
			this->analisis_label->Location = System::Drawing::Point(6, 10);
			this->analisis_label->Name = L"analisis_label";
			this->analisis_label->Size = System::Drawing::Size(55, 13);
			this->analisis_label->TabIndex = 9;
			this->analisis_label->Text = L"ANALISIS";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->real_label);
			this->groupBox1->Controls->Add(this->analisis_label);
			this->groupBox1->Controls->Add(this->package_label);
			this->groupBox1->Controls->Add(this->frecuency_label);
			this->groupBox1->Controls->Add(this->reader_label);
			this->groupBox1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->groupBox1->Location = System::Drawing::Point(0, 399);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(834, 28);
			this->groupBox1->TabIndex = 10;
			this->groupBox1->TabStop = false;
			// 
			// real_label
			// 
			this->real_label->AutoSize = true;
			this->real_label->BackColor = System::Drawing::Color::IndianRed;
			this->real_label->Location = System::Drawing::Point(130, 10);
			this->real_label->Name = L"real_label";
			this->real_label->Size = System::Drawing::Size(45, 13);
			this->real_label->TabIndex = 10;
			this->real_label->Text = L"T REAL";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(589, 248);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 11;
			this->label2->Text = L"label2";
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &MainUI::saveFileDialog1_FileOk);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->log_checkBox);
			this->groupBox2->Controls->Add(this->button_Start);
			this->groupBox2->Dock = System::Windows::Forms::DockStyle::Left;
			this->groupBox2->Location = System::Drawing::Point(0, 24);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(100, 375);
			this->groupBox2->TabIndex = 12;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Control";
			// 
			// log_checkBox
			// 
			this->log_checkBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"log_checkBox.Image")));
			this->log_checkBox->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->log_checkBox->Location = System::Drawing::Point(7, 69);
			this->log_checkBox->Name = L"log_checkBox";
			this->log_checkBox->Size = System::Drawing::Size(77, 24);
			this->log_checkBox->TabIndex = 2;
			this->log_checkBox->Text = L"Log";
			this->log_checkBox->UseVisualStyleBackColor = true;
			this->log_checkBox->CheckedChanged += gcnew System::EventHandler(this, &MainUI::log_checkBox_CheckedChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(377, 53);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(200, 145);
			this->button1->TabIndex = 13;
			this->button1->Text = L"OPENGL WINDOW";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainUI::button1_Click_1);
			// 
			// MainUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(834, 427);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MainUI";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Control LIDAR";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MainUI::MainUI_FormClosing);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void interfezWebToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		WebUI^ web = gcnew WebUI();
		web->Show();
	}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		if (button_Start->BackColor == System::Drawing::Color::PaleGreen) {
			timer1->Start();
			button_Start->BackColor = System::Drawing::Color::IndianRed;
			reader->ReadData(parameters);
			button_Start->Image = Image::FromFile("iconos\\stop.png"); //(cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
		}
		else {
			reader->StopReadData();
			parameters[LOG] = -1.0;
			log_checkBox->Checked = false;
			frecuency_label->Text = "0 Hz";
			package_label->Text = "0 Paq/s";
			real_label->BackColor = System::Drawing::Color::IndianRed;
			button_Start->Image = Image::FromFile("iconos\\play.png");
			button_Start->BackColor = System::Drawing::Color::PaleGreen;
			reader_label->BackColor = System::Drawing::Color::IndianRed;
			timer1->Stop();
		}
	}
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		try
		{
			if ((double)parameters[TH_STATE] == -1.0) {
				 reader_label->BackColor = System::Drawing::Color::IndianRed;
			}
		}
		catch (Exception^ e)
		{
			System::Threading::ThreadState state = (System::Threading::ThreadState)parameters[12];
			if (state == System::Threading::ThreadState::Running)
				reader_label->BackColor = System::Drawing::Color::PaleGreen;
			else reader_label->BackColor = System::Drawing::Color::IndianRed;
		}

		label2->Text = parameters[TH_STATE]->ToString();
		frecuency_label->Text = parameters[FRECUENCY]->ToString() + " Hz";
		package_label->Text = parameters[PAQ_S]->ToString() + " Paq/s";

		if ((double)parameters[TIME] > (1 / (double)parameters[PAQ_S]))
			real_label->BackColor = System::Drawing::Color::IndianRed;
		else
			real_label->BackColor = System::Drawing::Color::PaleGreen;
	}

	private: System::Void calibrarToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		calibrate^ cal = gcnew calibrate(parameters);
		cal->Show();
	}

	private: System::Void directorioToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		saveFileDialog1->InitialDirectory = "C:\\";
		saveFileDialog1->Filter = "Txt files (*.txt)|*.txt|Archivos de Log (*.log)|*.log";
		saveFileDialog1->OverwritePrompt = true;
		saveFileDialog1->FilterIndex = 2;
		saveFileDialog1->FileName = "log";
		saveFileDialog1->Title = "Guardar Archivo de Log";
		saveFileDialog1->ShowDialog();
	}
	private: System::Void saveFileDialog1_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
		parameters[11] = saveFileDialog1->OpenFile();
	}

	private: System::Void log_checkBox_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		try {
			if (log_checkBox->Checked && (double)parameters[LOG] == -1.0)
				if ((MessageBox::Show("Debes seleccionar el directorio para el archivo",
					"Archivo de log", MessageBoxButtons::OKCancel, MessageBoxIcon::Information) == System::Windows::Forms::DialogResult::OK))
					directorioToolStripMenuItem_Click(sender, e);
				else log_checkBox->Checked = false;
		}
		catch (Exception^ e) {
		}
	}
	private: System::Void MainUI_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
		reader->StopReadData();
	}
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	int argc = 0 ;
	char **argv;

	

	glutInit(&argc, argv);

	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);

	glutInitWindowPosition(500, 500);//optional
	glutInitWindowSize(800, 600); //optional
	glutCreateWindow("OpenGL First Window");

	glutMainLoop();

}

};
}
