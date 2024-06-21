#pragma once

namespace Interfaz1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Ventana1
	/// </summary>
	public ref class Ventana1 : public System::Windows::Forms::Form
	{
	public:
		Ventana1(void)
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
		~Ventana1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ t1;


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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->t1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(84, 117);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"SI";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Ventana1::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Sans Serif Collection", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(35, 25);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(184, 37);
			this->textBox1->TabIndex = 2;
			this->textBox1->Text = L"Hola, eres del Cbtis\?";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Ventana1::textBox1_TextChanged);
			// 
			// t1
			// 
			this->t1->AutoSize = true;
			this->t1->Location = System::Drawing::Point(120, 85);
			this->t1->Name = L"t1";
			this->t1->Size = System::Drawing::Size(29, 13);
			this->t1->TabIndex = 3;
			this->t1->Text = L"Hola";
			this->t1->Click += gcnew System::EventHandler(this, &Ventana1::label1_Click);
			// 
			// Ventana1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->AutoScrollMinSize = System::Drawing::Size(1, 1);
			this->ClientSize = System::Drawing::Size(275, 235);
			this->Controls->Add(this->t1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"Ventana1";
			this->Text = L"VentanaSan";
			this->Load += gcnew System::EventHandler(this, &Ventana1::Ventana1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Ventana1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ Resp = this->button1->Text;
		this->button1->Text = "Respuesta: " + Resp;
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
