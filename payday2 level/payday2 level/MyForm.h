#pragma once
#include <math.h>
int primerosdiezlevesl[10] = {900,1250,1550,1850,2200,2600,3000,3500,4000,4600};
namespace payday2level {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::Windows::Forms::ProgressBar^ progressBar2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::CheckBox^ checkBox1;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar2 = (gcnew System::Windows::Forms::ProgressBar());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(48, 72);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::TextBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(50, 47);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(98, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Experiencia Actual:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(36, 188);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(121, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Experiencia Acumulada:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(48, 213);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 2;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::TextBox2_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(345, 188);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(61, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Nivel futuro";
			// 
			// textBox3
			// 
			this->textBox3->Enabled = false;
			this->textBox3->Location = System::Drawing::Point(321, 213);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(335, 47);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(67, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Nivel Actual:";
			// 
			// textBox4
			// 
			this->textBox4->Enabled = false;
			this->textBox4->Location = System::Drawing::Point(321, 72);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 4;
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(13, 128);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(481, 23);
			this->progressBar1->Step = 1;
			this->progressBar1->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
			this->progressBar1->TabIndex = 8;
			// 
			// progressBar2
			// 
			this->progressBar2->Location = System::Drawing::Point(12, 259);
			this->progressBar2->Name = L"progressBar2";
			this->progressBar2->Size = System::Drawing::Size(481, 23);
			this->progressBar2->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(193, 154);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(94, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Siguiente nivel en:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(193, 285);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(94, 13);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Siguiente nivel en:";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(186, 213);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(112, 17);
			this->checkBox1->TabIndex = 12;
			this->checkBox1->Text = L"desde nivel actual";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(506, 315);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->progressBar2);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		long long exprestante=0;
	private: System::Void TextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text->Length == 0) { return; }
		for (int i = 0; i < textBox1->Text->Length; i++)
		{
			if (textBox1->Text[i] - '0' < 0 || textBox1->Text[i] - '0' >9) {
				MessageBox::Show(this, "oe subnormal experiencia es un numero", "error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				textBox1->Clear();
				return;
			}
		}
		long long exp = Convert::ToInt64(textBox1->Text);
		int level = 0;
		int limite=0;
		for (int i = level; i < 10; i++)
		{
			
			if (exp >= primerosdiezlevesl[i]) { exp -= primerosdiezlevesl[i]; level++; }
			else { limite= primerosdiezlevesl[i]; break; }
			
		}
		if (limite != 0) {
			exprestante = exp;
			textBox4->Text = "" + level;
			progressBar1->Value = (exp * 100) / limite;
			label5->Text = "Siguiente Nivel en:" + (limite - exp);
			return;
		}
		//barra;
		while (true)
		{
			int nextlevel= 1.3654321 * pow(level - 10, 3) + 4600;
			if (exp >= nextlevel) { exp -= nextlevel; level++; }
			else { limite = nextlevel; break; }
			
		}
		exprestante = exp;
		textBox4->Text = "" + level;
		progressBar1->Value = (exp*100)/limite;
		label5->Text = "Siguiente Nivel en:" +(limite-exp) ;
	}
private: System::Void TextBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox2->Text->Length == 0) { return; }
	for (int i = 0; i < textBox2->Text->Length; i++)
	{
		if (textBox2->Text[i] - '0' < 0 || textBox2->Text[i] - '0' >9) {
			MessageBox::Show(this, "oe subnormal experiencia es un numero", "error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			textBox2->Clear();
			return;
		}
	}
	long long exp = Convert::ToInt64(textBox2->Text);
	int level = 0;
	int limite = 0;
	if (checkBox1->Checked) { 
		if (textBox1->Text->Length == 0) { return; }
	level = Convert::ToInt32(textBox4->Text); 
	exp += exprestante; 
	}
	for (int i = level; i < 10; i++)
	{

		if (exp >= primerosdiezlevesl[i]) { exp -= primerosdiezlevesl[i]; level++; }
		else { limite = primerosdiezlevesl[i]; break; }

	}
	if (limite != 0) {
		textBox3->Text = "" + level;
		progressBar2->Value = (exp * 100) / limite;
		label6->Text = "Siguiente Nivel en:" + (limite - exp);
		return;
	}
	//barra;
	while (true)
	{
		int nextlevel = 1.3654321 * pow(level - 10, 3) + 4600;
		if (exp >= nextlevel) { exp -= nextlevel; level++; }
		else { limite = nextlevel; break; }

	}
	textBox3->Text = "" + level;
	progressBar2->Value = (exp * 100) / limite;
	label6->Text = "Siguiente Nivel en:" + (limite - exp);
}
};
}
