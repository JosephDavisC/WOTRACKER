#pragma once
#include "Calorie.h"

namespace ProjectGlobCitJoe {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Music
	/// </summary>
	public ref class Music : public System::Windows::Forms::Form
	{
	public:
		Music(void)
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
		~Music()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ btnCalculator;
	private: System::Windows::Forms::Button^ btnHeart;
	private: System::Windows::Forms::Button^ btnMusics;

	private: System::Windows::Forms::Button^ btnHome;

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Music::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btnCalculator = (gcnew System::Windows::Forms::Button());
			this->btnHeart = (gcnew System::Windows::Forms::Button());
			this->btnMusics = (gcnew System::Windows::Forms::Button());
			this->btnHome = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-1, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(507, 899);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// btnCalculator
			// 
			this->btnCalculator->BackColor = System::Drawing::Color::Transparent;
			this->btnCalculator->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnCalculator.Image")));
			this->btnCalculator->Location = System::Drawing::Point(394, 815);
			this->btnCalculator->Name = L"btnCalculator";
			this->btnCalculator->Size = System::Drawing::Size(87, 74);
			this->btnCalculator->TabIndex = 8;
			this->btnCalculator->UseVisualStyleBackColor = false;
			this->btnCalculator->Click += gcnew System::EventHandler(this, &Music::btnCalculator_Click);
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
			this->btnHeart->Click += gcnew System::EventHandler(this, &Music::btnHeart_Click);
			// 
			// btnMusics
			// 
			this->btnMusics->BackColor = System::Drawing::Color::Transparent;
			this->btnMusics->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnMusics.Image")));
			this->btnMusics->Location = System::Drawing::Point(151, 815);
			this->btnMusics->Name = L"btnMusics";
			this->btnMusics->Size = System::Drawing::Size(87, 74);
			this->btnMusics->TabIndex = 6;
			this->btnMusics->TabStop = false;
			this->btnMusics->UseVisualStyleBackColor = false;
			this->btnMusics->Click += gcnew System::EventHandler(this, &Music::btnMusics_Click);
			// 
			// btnHome
			// 
			this->btnHome->BackColor = System::Drawing::Color::Transparent;
			this->btnHome->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnHome.Image")));
			this->btnHome->Location = System::Drawing::Point(31, 815);
			this->btnHome->Name = L"btnHome";
			this->btnHome->Size = System::Drawing::Size(87, 74);
			this->btnHome->TabIndex = 5;
			this->btnHome->UseVisualStyleBackColor = false;
			this->btnHome->Click += gcnew System::EventHandler(this, &Music::btnHome_Click);
			// 
			// Music
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(508, 901);
			this->Controls->Add(this->btnCalculator);
			this->Controls->Add(this->btnHeart);
			this->Controls->Add(this->btnMusics);
			this->Controls->Add(this->btnHome);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Music";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"WOTRACKER";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnHome_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();

	}
private: System::Void btnMusics_Click(System::Object^ sender, System::EventArgs^ e) {
}
	private: System::Void btnCalculator_Click(System::Object^ sender, System::EventArgs^ e) {
		Music::Visible = false;
		Calorie^ p2 = gcnew Calorie();
		p2->ShowDialog();
		Music::Visible = true;
	}
private: System::Void btnHeart_Click(System::Object^ sender, System::EventArgs^ e) {

}
};
}
