#pragma once
#include "Music.h"

namespace ProjectGlobCitJoe {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Calorie
	/// </summary>
	public ref class Calorie : public System::Windows::Forms::Form
	{
	public:
		Calorie(void)
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
		~Calorie()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ btnCalculators;

	private: System::Windows::Forms::Button^ btnHeart;
	private: System::Windows::Forms::Button^ btnMusic;
	private: System::Windows::Forms::Button^ btnHomes;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Calorie::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btnCalculators = (gcnew System::Windows::Forms::Button());
			this->btnHeart = (gcnew System::Windows::Forms::Button());
			this->btnMusic = (gcnew System::Windows::Forms::Button());
			this->btnHomes = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(1, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(507, 914);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// btnCalculators
			// 
			this->btnCalculators->BackColor = System::Drawing::Color::Transparent;
			this->btnCalculators->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnCalculators.Image")));
			this->btnCalculators->Location = System::Drawing::Point(394, 815);
			this->btnCalculators->Name = L"btnCalculators";
			this->btnCalculators->Size = System::Drawing::Size(87, 74);
			this->btnCalculators->TabIndex = 8;
			this->btnCalculators->UseVisualStyleBackColor = false;
			this->btnCalculators->Click += gcnew System::EventHandler(this, &Calorie::btnCalculators_Click);
			// 
			// btnHeart
			// 
			this->btnHeart->BackColor = System::Drawing::Color::Transparent;
			this->btnHeart->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnHeart.Image")));
			this->btnHeart->Location = System::Drawing::Point(269, 815);
			this->btnHeart->Name = L"btnHeart";
			this->btnHeart->Size = System::Drawing::Size(87, 74);
			this->btnHeart->TabIndex = 7;
			this->btnHeart->UseVisualStyleBackColor = false;
			this->btnHeart->Click += gcnew System::EventHandler(this, &Calorie::btnHeart_Click);
			// 
			// btnMusic
			// 
			this->btnMusic->BackColor = System::Drawing::Color::Transparent;
			this->btnMusic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnMusic.Image")));
			this->btnMusic->Location = System::Drawing::Point(151, 815);
			this->btnMusic->Name = L"btnMusic";
			this->btnMusic->Size = System::Drawing::Size(87, 74);
			this->btnMusic->TabIndex = 6;
			this->btnMusic->TabStop = false;
			this->btnMusic->UseVisualStyleBackColor = false;
			this->btnMusic->Click += gcnew System::EventHandler(this, &Calorie::btnMusic_Click);
			// 
			// btnHomes
			// 
			this->btnHomes->BackColor = System::Drawing::Color::Transparent;
			this->btnHomes->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnHomes.Image")));
			this->btnHomes->Location = System::Drawing::Point(31, 815);
			this->btnHomes->Name = L"btnHomes";
			this->btnHomes->Size = System::Drawing::Size(87, 74);
			this->btnHomes->TabIndex = 5;
			this->btnHomes->UseVisualStyleBackColor = false;
			this->btnHomes->Click += gcnew System::EventHandler(this, &Calorie::btnHomes_Click);
			// 
			// Calorie
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(508, 901);
			this->Controls->Add(this->btnCalculators);
			this->Controls->Add(this->btnHeart);
			this->Controls->Add(this->btnMusic);
			this->Controls->Add(this->btnHomes);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Calorie";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"WOTRACKER";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnCalculators_Click(System::Object^ sender, System::EventArgs^ e) {
		
		
	}
	private: System::Void btnHomes_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void btnMusic_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
private: System::Void btnHeart_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
