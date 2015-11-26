#pragma once

namespace LidarGUI {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::IO;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de calibrate
	/// </summary>
	public ref class calibrate : public System::Windows::Forms::Form
	{
	public:
		calibrate(cli::array<Object^> ^% parameters_in)
		{
			InitializeComponent();
			param = parameters_in;
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~calibrate()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  tabControl1;
	protected:
	private: cli::array<Object^>^ param;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::Button^  load_button;

	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(calibrate::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->load_button = (gcnew System::Windows::Forms::Button());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			//
			// tabControl1
			//
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(7, 7);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(129, 135);
			this->tabControl1->TabIndex = 0;
			//
			// tabPage1
			//
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(121, 109);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Posición";
			this->tabPage1->UseVisualStyleBackColor = true;
			//
			// textBox3
			//
			this->textBox3->Location = System::Drawing::Point(32, 74);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(60, 20);
			this->textBox3->TabIndex = 5;
			this->textBox3->Text = L"0.00000";
			//
			// textBox2
			//
			this->textBox2->Location = System::Drawing::Point(32, 45);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(60, 20);
			this->textBox2->TabIndex = 4;
			this->textBox2->Text = L"0.00000";
			//
			// textBox1
			//
			this->textBox1->Location = System::Drawing::Point(32, 19);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(60, 20);
			this->textBox1->TabIndex = 3;
			this->textBox1->Text = L"0.00000";
			//
			// label3
			//
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(6, 74);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(19, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Z";
			//
			// label2
			//
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(6, 47);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(20, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Y";
			//
			// label1
			//
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label1->Location = System::Drawing::Point(6, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(20, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"X";
			//
			// tabPage2
			//
			this->tabPage2->Controls->Add(this->textBox4);
			this->tabPage2->Controls->Add(this->textBox5);
			this->tabPage2->Controls->Add(this->textBox6);
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(121, 109);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Ángulo";
			this->tabPage2->UseVisualStyleBackColor = true;
			//
			// textBox4
			//
			this->textBox4->Location = System::Drawing::Point(48, 74);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(60, 20);
			this->textBox4->TabIndex = 11;
			this->textBox4->Text = L"0.00000";
			//
			// textBox5
			//
			this->textBox5->Location = System::Drawing::Point(48, 47);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(60, 20);
			this->textBox5->TabIndex = 10;
			this->textBox5->Text = L"0.00000";
			//
			// textBox6
			//
			this->textBox6->Location = System::Drawing::Point(48, 19);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(60, 20);
			this->textBox6->TabIndex = 9;
			this->textBox6->Text = L"0.00000";
			//
			// label4
			//
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(6, 74);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(40, 20);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Yaw";
			//
			// label5
			//
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(6, 47);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(44, 20);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Pitch";
			//
			// label6
			//
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label6->Location = System::Drawing::Point(6, 19);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(38, 20);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Roll";
			//
			// openFileDialog1
			//
			this->openFileDialog1->FileName = L"Calibracion";
			this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &calibrate::openFileDialog1_FileOk);
			//
			// load_button
			//
			this->load_button->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"load_button.Image")));
			this->load_button->Location = System::Drawing::Point(152, 29);
			this->load_button->Name = L"load_button";
			this->load_button->Size = System::Drawing::Size(75, 25);
			this->load_button->TabIndex = 1;
			this->load_button->Text = L"Cargar";
			this->load_button->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->load_button->UseVisualStyleBackColor = true;
			this->load_button->Click += gcnew System::EventHandler(this, &calibrate::button1_Click);
			//
			// saveFileDialog1
			//
			this->saveFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &calibrate::saveFileDialog1_FileOk);
			//
			// button2
			//
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->Location = System::Drawing::Point(152, 58);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 25);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Generar";
			this->button2->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &calibrate::button2_Click);
			//
			// button3
			//
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->Location = System::Drawing::Point(152, 108);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 30);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Calibrar";
			this->button3->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &calibrate::button3_Click);
			//
			// calibrate
			//
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(240, 146);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->load_button);
			this->Controls->Add(this->tabControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"calibrate";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Calibración";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->ResumeLayout(false);
		}
#pragma endregion

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		openFileDialog1->InitialDirectory = "C:\\";
		openFileDialog1->Filter = "Txt files (*.txt)|*.txt|Archivos de Calibración (*.cal)|*.cal";
		openFileDialog1->Title = "Cargar Archivo de Calibracion";
		openFileDialog1->FilterIndex = 2;
		openFileDialog1->ShowDialog();
	}

	private: System::Void openFileDialog1_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
		try
		{
			Stream^ path = openFileDialog1->OpenFile();
			StreamReader^ reader = gcnew StreamReader(path);
			textBox1->Text = reader->ReadLine();
			textBox2->Text = reader->ReadLine();
			textBox3->Text = reader->ReadLine();
			textBox6->Text = reader->ReadLine();
			textBox5->Text = reader->ReadLine();
			textBox4->Text = reader->ReadLine();
			reader->Close();
			path->Close();
		}
		catch (Exception^ e)
		{
			MessageBox::Show(e->ToString());
		}
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		saveFileDialog1->InitialDirectory = "C:\\";
		saveFileDialog1->Filter = "Txt files (*.txt)|*.txt|Archivos de Calibración (*.cal)|*.cal";
		saveFileDialog1->OverwritePrompt = true;
		saveFileDialog1->FilterIndex = 2;
		saveFileDialog1->FileName = "ArchivoCalibracion";
		saveFileDialog1->Title = "Guardar Archivo de Calibracion";
		saveFileDialog1->ShowDialog();
	}
	private: System::Void saveFileDialog1_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
		try
		{
			Stream^ path = saveFileDialog1->OpenFile();
			StreamWriter^ writer = gcnew StreamWriter(path);
			writer->WriteLine(textBox1->Text);
			writer->WriteLine(textBox2->Text);
			writer->WriteLine(textBox3->Text);
			writer->WriteLine(textBox6->Text);
			writer->WriteLine(textBox5->Text);
			writer->WriteLine(textBox4->Text);
			writer->Flush();
			writer->Close();
			path->Close();
		}
		catch (Exception^ e)
		{
			MessageBox::Show(e->ToString());
		}
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		param[0] = Convert::ToDouble(textBox1->Text);
		param[1] = Convert::ToDouble(textBox2->Text);
		param[2] = Convert::ToDouble(textBox3->Text);
		param[3] = Convert::ToDouble(textBox6->Text);
		param[4] = Convert::ToDouble(textBox5->Text);
		param[5] = Convert::ToDouble(textBox4->Text);
		this->Close();
	}
	};
}
