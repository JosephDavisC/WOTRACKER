#pragma once
#include "Music.h"
#include "MyForm.h"
#include "Calorie.h"


namespace ProjectGlobCitJoe {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Home
	/// </summary>
	public ref class Home : public System::Windows::Forms::Form
	{
	public:
		Home(void)
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
		~Home()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ btnHomes;
	private: System::Windows::Forms::Button^ btnMusic;
	private: System::Windows::Forms::Button^ btnHeart;
	private: System::Windows::Forms::Button^ btnCalculator;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Home::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btnHomes = (gcnew System::Windows::Forms::Button());
			this->btnMusic = (gcnew System::Windows::Forms::Button());
			this->btnHeart = (gcnew System::Windows::Forms::Button());
			this->btnCalculator = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(509, 901);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Home::pictureBox1_Click);
			// 
			// btnHomes
			// 
			this->btnHomes->BackColor = System::Drawing::Color::Transparent;
			this->btnHomes->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnHomes.Image")));
			this->btnHomes->Location = System::Drawing::Point(31, 815);
			this->btnHomes->Name = L"btnHomes";
			this->btnHomes->Size = System::Drawing::Size(87, 74);
			this->btnHomes->TabIndex = 1;
			this->btnHomes->UseVisualStyleBackColor = false;
			// 
			// btnMusic
			// 
			this->btnMusic->BackColor = System::Drawing::Color::Transparent;
			this->btnMusic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnMusic.Image")));
			this->btnMusic->Location = System::Drawing::Point(151, 815);
			this->btnMusic->Name = L"btnMusic";
			this->btnMusic->Size = System::Drawing::Size(87, 74);
			this->btnMusic->TabIndex = 2;
			this->btnMusic->TabStop = false;
			this->btnMusic->UseVisualStyleBackColor = false;
			this->btnMusic->Click += gcnew System::EventHandler(this, &Home::btnMusic_Click);
			// 
			// btnHeart
			// 
			this->btnHeart->BackColor = System::Drawing::Color::Transparent;
			this->btnHeart->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnHeart.Image")));
			this->btnHeart->Location = System::Drawing::Point(269, 815);
			this->btnHeart->Name = L"btnHeart";
			this->btnHeart->Size = System::Drawing::Size(87, 74);
			this->btnHeart->TabIndex = 3;
			this->btnHeart->UseVisualStyleBackColor = false;
			this->btnHeart->Click += gcnew System::EventHandler(this, &Home::btnHeart_Click);
			// 
			// btnCalculator
			// 
			this->btnCalculator->BackColor = System::Drawing::Color::Transparent;
			this->btnCalculator->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnCalculator.Image")));
			this->btnCalculator->Location = System::Drawing::Point(394, 815);
			this->btnCalculator->Name = L"btnCalculator";
			this->btnCalculator->Size = System::Drawing::Size(87, 74);
			this->btnCalculator->TabIndex = 4;
			this->btnCalculator->UseVisualStyleBackColor = false;
			this->btnCalculator->Click += gcnew System::EventHandler(this, &Home::btnCalculator_Click);
			// 
			// Home
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(508, 901);
			this->Controls->Add(this->btnCalculator);
			this->Controls->Add(this->btnHeart);
			this->Controls->Add(this->btnMusic);
			this->Controls->Add(this->btnHomes);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Home";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"WOTRACKER";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnMusic_Click(System::Object^ sender, System::EventArgs^ e) {
		Home::Visible = false;
		Music^ p2 = gcnew Music();
		p2->ShowDialog();
		Home::Visible = true;
	}

	private: System::Void btnHeart_Click(System::Object^ sender, System::EventArgs^ e) {
		Home::Visible = false;
		MyForm^ p2 = gcnew MyForm();
		p2->ShowDialog();
		Home::Visible = true;
	}
	private: System::Void btnCalculator_Click(System::Object^ sender, System::EventArgs^ e) {
		Home::Visible = false;
		Calorie^ p2 = gcnew Calorie();
		p2->ShowDialog();
		Home::Visible = true;
	}

};
}
