#pragma once
#include "Joc.h"
#include "AI.h"
#include <msclr\marshal_cppstd.h>
namespace WorldeSol {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ number_OfGuesses;




	private: System::Windows::Forms::TextBox^ guesses_WordValue;

	private: System::Windows::Forms::Button^ start_Button;
	private: System::Windows::Forms::CheckBox^ bot_ActivationButton;
	private: System::Windows::Forms::Button^ T;





	private: System::Windows::Forms::Label^ Letter_1;
	private: System::Windows::Forms::Label^ Letter_2;
	private: System::Windows::Forms::Label^ Letter_3;
	private: System::Windows::Forms::Label^ Letter_4;
	private: System::Windows::Forms::Label^ Letter_5;
	private: System::Windows::Forms::FlowLayoutPanel^ istoric_CuvintePanel;







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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->number_OfGuesses = (gcnew System::Windows::Forms::Label());
			this->guesses_WordValue = (gcnew System::Windows::Forms::TextBox());
			this->start_Button = (gcnew System::Windows::Forms::Button());
			this->bot_ActivationButton = (gcnew System::Windows::Forms::CheckBox());
			this->T = (gcnew System::Windows::Forms::Button());
			this->Letter_1 = (gcnew System::Windows::Forms::Label());
			this->Letter_2 = (gcnew System::Windows::Forms::Label());
			this->Letter_3 = (gcnew System::Windows::Forms::Label());
			this->Letter_4 = (gcnew System::Windows::Forms::Label());
			this->Letter_5 = (gcnew System::Windows::Forms::Label());
			this->istoric_CuvintePanel = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(201, 60);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(329, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Guess The 5 Letter Word";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(270, 133);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(191, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Number of Guesses:";
			// 
			// number_OfGuesses
			// 
			this->number_OfGuesses->AutoSize = true;
			this->number_OfGuesses->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->number_OfGuesses->Location = System::Drawing::Point(478, 133);
			this->number_OfGuesses->Name = L"number_OfGuesses";
			this->number_OfGuesses->Size = System::Drawing::Size(23, 25);
			this->number_OfGuesses->TabIndex = 2;
			this->number_OfGuesses->Text = L"0";
			// 
			// guesses_WordValue
			// 
			this->guesses_WordValue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->guesses_WordValue->Location = System::Drawing::Point(267, 328);
			this->guesses_WordValue->Name = L"guesses_WordValue";
			this->guesses_WordValue->Size = System::Drawing::Size(198, 30);
			this->guesses_WordValue->TabIndex = 4;
			// 
			// start_Button
			// 
			this->start_Button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->start_Button->Location = System::Drawing::Point(299, 403);
			this->start_Button->Name = L"start_Button";
			this->start_Button->Size = System::Drawing::Size(130, 56);
			this->start_Button->TabIndex = 5;
			this->start_Button->Text = L"Start";
			this->start_Button->UseVisualStyleBackColor = true;
			this->start_Button->Click += gcnew System::EventHandler(this, &MainForm::start_Button_Click);
			// 
			// bot_ActivationButton
			// 
			this->bot_ActivationButton->AutoSize = true;
			this->bot_ActivationButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bot_ActivationButton->Location = System::Drawing::Point(285, 183);
			this->bot_ActivationButton->Name = L"bot_ActivationButton";
			this->bot_ActivationButton->Size = System::Drawing::Size(160, 33);
			this->bot_ActivationButton->TabIndex = 6;
			this->bot_ActivationButton->Text = L"Activate Bot";
			this->bot_ActivationButton->UseVisualStyleBackColor = true;
			// 
			// T
			// 
			this->T->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->T->Location = System::Drawing::Point(517, 314);
			this->T->Name = L"T";
			this->T->Size = System::Drawing::Size(142, 44);
			this->T->TabIndex = 7;
			this->T->Text = L"Try Word";
			this->T->UseVisualStyleBackColor = true;
			this->T->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// Letter_1
			// 
			this->Letter_1->AutoSize = true;
			this->Letter_1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Letter_1->Location = System::Drawing::Point(279, 247);
			this->Letter_1->Name = L"Letter_1";
			this->Letter_1->Size = System::Drawing::Size(29, 32);
			this->Letter_1->TabIndex = 8;
			this->Letter_1->Text = L"_";
			// 
			// Letter_2
			// 
			this->Letter_2->AutoSize = true;
			this->Letter_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Letter_2->Location = System::Drawing::Point(316, 247);
			this->Letter_2->Name = L"Letter_2";
			this->Letter_2->Size = System::Drawing::Size(29, 32);
			this->Letter_2->TabIndex = 9;
			this->Letter_2->Text = L"_";
			// 
			// Letter_3
			// 
			this->Letter_3->AutoSize = true;
			this->Letter_3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Letter_3->Location = System::Drawing::Point(351, 247);
			this->Letter_3->Name = L"Letter_3";
			this->Letter_3->Size = System::Drawing::Size(29, 32);
			this->Letter_3->TabIndex = 10;
			this->Letter_3->Text = L"_";
			// 
			// Letter_4
			// 
			this->Letter_4->AutoSize = true;
			this->Letter_4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Letter_4->Location = System::Drawing::Point(386, 247);
			this->Letter_4->Name = L"Letter_4";
			this->Letter_4->Size = System::Drawing::Size(29, 32);
			this->Letter_4->TabIndex = 11;
			this->Letter_4->Text = L"_";
			// 
			// Letter_5
			// 
			this->Letter_5->AutoSize = true;
			this->Letter_5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Letter_5->Location = System::Drawing::Point(421, 247);
			this->Letter_5->Name = L"Letter_5";
			this->Letter_5->Size = System::Drawing::Size(29, 32);
			this->Letter_5->TabIndex = 12;
			this->Letter_5->Text = L"_";
			// 
			// istoric_CuvintePanel
			// 
			this->istoric_CuvintePanel->Location = System::Drawing::Point(12, 133);
			this->istoric_CuvintePanel->Name = L"istoric_CuvintePanel";
			this->istoric_CuvintePanel->Size = System::Drawing::Size(200, 409);
			this->istoric_CuvintePanel->TabIndex = 13;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(752, 567);
			this->Controls->Add(this->istoric_CuvintePanel);
			this->Controls->Add(this->Letter_5);
			this->Controls->Add(this->Letter_4);
			this->Controls->Add(this->Letter_3);
			this->Controls->Add(this->Letter_2);
			this->Controls->Add(this->Letter_1);
			this->Controls->Add(this->T);
			this->Controls->Add(this->bot_ActivationButton);
			this->Controls->Add(this->start_Button);
			this->Controls->Add(this->guesses_WordValue);
			this->Controls->Add(this->number_OfGuesses);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void start_Button_Click(System::Object^ sender, System::EventArgs^ e) {


		if (bot_ActivationButton->Checked == false)
		{
			Generate_Random_Word();
		}
		else
		{
			string word_guess = "";
			Generate_Random_Word();
			string word_review = "";
			while (word_review != "CCCCC") {
				word_guess = start_AI(word_review);
				word_review = Play(word_guess);
				delete_impossible_words(word_guess, word_review);
				System::String^ try_word = marshal_as<System::String^>(word_guess);
				System::String^ review = marshal_as<System::String^>(word_review);
				Color_Letters(review, try_word);
				
			}
			System::String^ try_word = marshal_as<System::String^>(word_guess);
			Letter_1->Text = System::Convert::ToString(try_word[0]);
			Letter_2->Text = System::Convert::ToString(try_word[1]);
			Letter_3->Text = System::Convert::ToString(try_word[2]);
			Letter_4->Text = System::Convert::ToString(try_word[3]);
			Letter_5->Text = System::Convert::ToString(try_word[4]);
			
			System::String^ Update_Number = System::Convert::ToString(number_of_tries);
			number_OfGuesses->Text = System::Convert::ToString(Update_Number);
		}
	}

private:
	void Color_Letters(System::String^ word_review, System::String^ word_guess)
	{
		Label^ Let1 = gcnew Label();
		Label^ Let2 = gcnew Label();
		Label^ Let3 = gcnew Label();
		Label^ Let4 = gcnew Label();
		Label^ Let5 = gcnew Label();
		Let1->Text = System::Convert::ToString(word_guess[0]);
		Let2->Text = System::Convert::ToString(word_guess[1]);
		Let3->Text = System::Convert::ToString(word_guess[2]);
		Let4->Text = System::Convert::ToString(word_guess[3]);
		Let5->Text = System::Convert::ToString(word_guess[4]);
		Let1->Size = System::Drawing::Size(20, 20);
		Let2->Size = System::Drawing::Size(20, 20);
		Let3->Size = System::Drawing::Size(20, 20);
		Let4->Size = System::Drawing::Size(20, 20);
		Let5->Size = System::Drawing::Size(20, 20);


		System::String^ color;
		if (word_review[0] == 'G')
			color = "red";
		else if (word_review[0] == 'C')
			color = "green";
		else if (word_review[0] == 'A')
			color = "yellow";
		Letter_1->BackColor = System::Drawing::Color::FromName(color);
		Let1->BackColor = System::Drawing::Color::FromName(color);

		if (word_review[1] == 'G')
			color = "red";
		else if (word_review[1] == 'C')
			color = "green";
		else if (word_review[1] == 'A')
			color = "yellow";
		Letter_2->BackColor = System::Drawing::Color::FromName(color);
		Let2->BackColor = System::Drawing::Color::FromName(color);

		if (word_review[2] == 'G')
			color = "red";
		else if (word_review[2] == 'C')
			color = "green";
		else if (word_review[2] == 'A')
			color = "yellow";
		Letter_3->BackColor = System::Drawing::Color::FromName(color);
		Let3->BackColor = System::Drawing::Color::FromName(color);

		if (word_review[3] == 'G')
			color = "red";
		else if (word_review[3] == 'C')
			color = "green";
		else if (word_review[3] == 'A')
			color = "yellow";
		Letter_4->BackColor = System::Drawing::Color::FromName(color);
		Let4->BackColor = System::Drawing::Color::FromName(color);

		if (word_review[4] == 'G')
			color = "red";
		else if (word_review[4] == 'C')
			color = "green";
		else if (word_review[4] == 'A')
			color = "yellow";
		Letter_5->BackColor = System::Drawing::Color::FromName(color);
		Let5->BackColor = System::Drawing::Color::FromName(color);

		Let1->Location = Point(100, 100);
		Let2->Location = Point(110, 100);
		Let3->Location = Point(120, 100);
		Let4->Location = Point(130, 100);
		Let5->Location = Point(140, 100);

		istoric_CuvintePanel->Controls->Add(Let1);
		istoric_CuvintePanel->Controls->Add(Let2);
		istoric_CuvintePanel->Controls->Add(Let3);
		istoric_CuvintePanel->Controls->Add(Let4);
		istoric_CuvintePanel->Controls->Add(Let5);
	}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	System::String^ managedString = guesses_WordValue->Text;
	std::string try_word = marshal_as<std::string>(managedString);
	string word_review = Play(try_word);
	if (word_review != "Invalid") {
		System::String^ word_reviewManaged = marshal_as<System::String^>(word_review);
		Letter_1->Text = System::Convert::ToString(managedString[0]);
		Letter_2->Text = System::Convert::ToString(managedString[1]);
		Letter_3->Text = System::Convert::ToString(managedString[2]);
		Letter_4->Text = System::Convert::ToString(managedString[3]);
		Letter_5->Text = System::Convert::ToString(managedString[4]);

		System::String^ numberOfGuesses = number_OfGuesses->Text;
		int number_Of_Guesses_Value = System::Int32::Parse(numberOfGuesses);
		number_Of_Guesses_Value++;
		System::String^ Update_Number = System::Convert::ToString(number_Of_Guesses_Value);
		number_OfGuesses->Text = System::Convert::ToString(Update_Number);

		Color_Letters(word_reviewManaged, managedString);

		if (word_review == "CCCCC")
			System::Windows::Forms::MessageBox::Show("Congratulations!");
	}
	else
	{
		System::Windows::Forms::MessageBox::Show("You entered an invalid word, try again!");
	}
}
private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {

}
};
}
