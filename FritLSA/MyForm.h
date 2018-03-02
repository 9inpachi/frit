/*
Frit - Local Search Application with GUI
Visual C++ Project by Fawad Ali (9inpachi)
Made Opensource by me :)
Enjoy
*/
#pragma once
#pragma comment(lib, "shell32.lib")
#include<Windows.h>
#include<shellapi.h>
#include<string>
#include<msclr\marshal_cppstd.h>
namespace FritLSA {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Runtime::InteropServices;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  searchBox;
	protected:

	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::PictureBox^  searchBtn;

	private: System::Windows::Forms::FolderBrowserDialog^  folderBrowser;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  searchFolderDir;
	private: System::Windows::Forms::Button^  browseSearchFolder;


	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::ListBox^  searchResultsList;
	private: System::Windows::Forms::Button^  openSelected;
	private: System::Windows::Forms::Button^  sortResults;
	private: System::Windows::Forms::Label^  openItemErr;
	private: System::Windows::Forms::ComboBox^  searchLevel;

	private: System::Windows::Forms::Label^  label4;









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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->searchBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->searchBtn = (gcnew System::Windows::Forms::PictureBox());
			this->folderBrowser = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->searchFolderDir = (gcnew System::Windows::Forms::TextBox());
			this->browseSearchFolder = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->searchResultsList = (gcnew System::Windows::Forms::ListBox());
			this->openSelected = (gcnew System::Windows::Forms::Button());
			this->sortResults = (gcnew System::Windows::Forms::Button());
			this->openItemErr = (gcnew System::Windows::Forms::Label());
			this->searchLevel = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->searchBtn))->BeginInit();
			this->SuspendLayout();
			// 
			// searchBox
			// 
			this->searchBox->Location = System::Drawing::Point(41, 165);
			this->searchBox->Name = L"searchBox";
			this->searchBox->Size = System::Drawing::Size(224, 20);
			this->searchBox->TabIndex = 0;
			this->searchBox->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Snap ITC", 18, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(242, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(76, 31);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Frit";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(324, 22);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(125, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Local Search Application";
			// 
			// searchBtn
			// 
			this->searchBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"searchBtn.Image")));
			this->searchBtn->Location = System::Drawing::Point(271, 166);
			this->searchBtn->Name = L"searchBtn";
			this->searchBtn->Size = System::Drawing::Size(20, 20);
			this->searchBtn->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->searchBtn->TabIndex = 3;
			this->searchBtn->TabStop = false;
			this->searchBtn->Click += gcnew System::EventHandler(this, &MyForm::searchBtn_Click);
			// 
			// folderBrowser
			// 
			this->folderBrowser->HelpRequest += gcnew System::EventHandler(this, &MyForm::folderBrowserDialog1_HelpRequest);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(38, 96);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(188, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Select the folder you want to search in";
			// 
			// searchFolderDir
			// 
			this->searchFolderDir->Location = System::Drawing::Point(41, 113);
			this->searchFolderDir->Name = L"searchFolderDir";
			this->searchFolderDir->Size = System::Drawing::Size(185, 20);
			this->searchFolderDir->TabIndex = 5;
			this->searchFolderDir->TextChanged += gcnew System::EventHandler(this, &MyForm::searchFolderDir_TextChanged);
			// 
			// browseSearchFolder
			// 
			this->browseSearchFolder->Location = System::Drawing::Point(227, 113);
			this->browseSearchFolder->Name = L"browseSearchFolder";
			this->browseSearchFolder->Size = System::Drawing::Size(64, 20);
			this->browseSearchFolder->TabIndex = 6;
			this->browseSearchFolder->Text = L"Browse";
			this->browseSearchFolder->UseVisualStyleBackColor = true;
			this->browseSearchFolder->Click += gcnew System::EventHandler(this, &MyForm::browseSearchFolder_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(37, 142);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(66, 20);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Search";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// searchResultsList
			// 
			this->searchResultsList->FormattingEnabled = true;
			this->searchResultsList->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Search results will be displayed here..." });
			this->searchResultsList->Location = System::Drawing::Point(344, 73);
			this->searchResultsList->Name = L"searchResultsList";
			this->searchResultsList->Size = System::Drawing::Size(336, 186);
			this->searchResultsList->TabIndex = 10;
			this->searchResultsList->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox1_SelectedIndexChanged_1);
			// 
			// openSelected
			// 
			this->openSelected->Location = System::Drawing::Point(344, 265);
			this->openSelected->Name = L"openSelected";
			this->openSelected->Size = System::Drawing::Size(139, 32);
			this->openSelected->TabIndex = 11;
			this->openSelected->Text = L"Open Selected Item";
			this->openSelected->UseVisualStyleBackColor = true;
			this->openSelected->Click += gcnew System::EventHandler(this, &MyForm::openSelected_Click);
			// 
			// sortResults
			// 
			this->sortResults->Location = System::Drawing::Point(541, 265);
			this->sortResults->Name = L"sortResults";
			this->sortResults->Size = System::Drawing::Size(139, 32);
			this->sortResults->TabIndex = 12;
			this->sortResults->Text = L"Sort Results";
			this->sortResults->UseVisualStyleBackColor = true;
			this->sortResults->Click += gcnew System::EventHandler(this, &MyForm::sortResults_Click);
			// 
			// openItemErr
			// 
			this->openItemErr->AutoSize = true;
			this->openItemErr->ForeColor = System::Drawing::Color::Red;
			this->openItemErr->Location = System::Drawing::Point(343, 299);
			this->openItemErr->Name = L"openItemErr";
			this->openItemErr->Size = System::Drawing::Size(0, 13);
			this->openItemErr->TabIndex = 13;
			// 
			// searchLevel
			// 
			this->searchLevel->FormattingEnabled = true;
			this->searchLevel->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Level 1", L"Level 2" });
			this->searchLevel->Location = System::Drawing::Point(41, 212);
			this->searchLevel->Name = L"searchLevel";
			this->searchLevel->Size = System::Drawing::Size(250, 21);
			this->searchLevel->TabIndex = 14;
			this->searchLevel->Text = L"Level 1";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(38, 196);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(239, 13);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Select the levels of folder you want to search into";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(714, 321);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->searchLevel);
			this->Controls->Add(this->openItemErr);
			this->Controls->Add(this->sortResults);
			this->Controls->Add(this->openSelected);
			this->Controls->Add(this->searchResultsList);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->browseSearchFolder);
			this->Controls->Add(this->searchFolderDir);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->searchBtn);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->searchBox);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"Frit - Local Search Application";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->searchBtn))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void folderBrowserDialog1_HelpRequest(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void searchFolderDir_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
	
}
private: System::Void browseSearchFolder_Click(System::Object^  sender, System::EventArgs^  e) {
			 //Opening the folder browser and getting the path
			 folderBrowser->RootFolder = Environment::SpecialFolder::Desktop;
			 folderBrowser->Description = "Select the folder you want to search in";
			 folderBrowser->ShowNewFolderButton = false;
			 if (folderBrowser->ShowDialog() == Windows::Forms::DialogResult::OK){
				 searchFolderDir->Text = folderBrowser->SelectedPath;
			 }

}
private: System::Void openFileDialog1_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
}
private: System::Void searchBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			 //Clear previous list
			 searchResultsList->Items->Clear();
			 //Get folder to search
			 String ^ browsePath = searchFolderDir->Text;
			 //Replacing single slash with double for coding purposes
			 browsePath = browsePath->Replace("\\", "\\\\");
			 //Adding a slash at the end of the path (Important to make a search)
			 browsePath += "\\*";
			 //Convert path to std string
			 msclr::interop::marshal_context context;
			 std::string searchPath = context.marshal_as<std::string>(browsePath);

			 String^ searchQuery = searchBox->Text->ToLower();

			 //Level 1 Search
			 if (searchLevel->Text == "Level 1"){

				 int noOfFiles = 0;

				 WIN32_FIND_DATA file;
				 HANDLE search_handle = FindFirstFile(searchPath.c_str(), &file);

				 if (search_handle)
				 {
					 do{
						 if ((_stricmp(file.cFileName, ".")) && (_stricmp(file.cFileName, ".."))){

							 if (!String::IsNullOrEmpty(searchQuery)){
								 String^ fileName = gcnew String(file.cFileName);
								 if (fileName->ToLower()->Contains(searchQuery)){
									 searchResultsList->Items->Add(fileName);
								 }
							 }
							 else{
								 String^ fileName = gcnew String(file.cFileName);
								 searchResultsList->Items->Add(fileName);
							 }

						 }
					 } while (FindNextFile(search_handle, &file));
					 FindClose(search_handle);

				 }

			 }

			 //Level 2 Search
			 if (searchLevel->Text == "Level 2"){

				 WIN32_FIND_DATA fileL2;
				 HANDLE search_handleL2 = FindFirstFile(searchPath.c_str(), &fileL2);

				 if (search_handleL2)
				 {
					 do{
						 if ((_stricmp(fileL2.cFileName, ".")) && (_stricmp(fileL2.cFileName, ".."))){

							 if (!String::IsNullOrEmpty(searchQuery)){
								 String^ fileNameL2 = gcnew String(fileL2.cFileName);
								 if (fileNameL2->ToLower()->Contains(searchQuery)){

									 searchResultsList->Items->Add(fileNameL2);

								 }
								 //Deep search level 2 with query
								 if ((fileL2.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)){
									 if ((_stricmp(fileL2.cFileName, ".")) && (_stricmp(fileL2.cFileName, ".."))){
										 deepSearch(browsePath, fileNameL2, searchResultsList, searchQuery);
									 }
								 }
							 }
							 else{
								 String^ fileNameL2 = gcnew String(fileL2.cFileName);
								 searchResultsList->Items->Add(fileNameL2);
								 //Deep search level 2 without query
								 if ((fileL2.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)){
									 if ((_stricmp(fileL2.cFileName, ".")) && (_stricmp(fileL2.cFileName, ".."))){
										 deepSearch(browsePath, fileNameL2, searchResultsList, searchQuery);
									 }
								 }
							 }

						 }

					 } while (FindNextFile(search_handleL2, &fileL2));
					 FindClose(search_handleL2);

				 }
			 }
}
private: System::Void listBox1_SelectedIndexChanged_1(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void openSelected_Click(System::Object^  sender, System::EventArgs^  e) {
			 openItemErr->Text = "";
			 //Get folder to search
			 String ^ browsePath = searchFolderDir->Text;
			 browsePath = browsePath->Replace("\\", "\\\\");
			 String^ selectedItem = searchResultsList->SelectedItem->ToString();
			 if (!String::IsNullOrEmpty(searchResultsList->SelectedItem->ToString())){
				 selectedItem = browsePath + "\\" + selectedItem;
				 msclr::interop::marshal_context context1;
				 std::string itemToOpen = context1.marshal_as<std::string>(selectedItem);
				 ShellExecuteA(NULL, "open", itemToOpen.c_str(), NULL, NULL, SW_SHOWNORMAL);
			 }
			 else{
				 openItemErr->Text = "Please select an item to open.";
			 }
			 
}
private: System::Void sortResults_Click(System::Object^  sender, System::EventArgs^  e) {
			 searchResultsList->Sorted = true;
}

//Deep search function
public: System::Void deepSearch(String^ browsePath, String^ fileNameL2, ListBox^ searchResultsList, String^ searchQuery){
			//deep search
			String ^ browsePathL22 = browsePath->Replace("\\*", "");
			browsePathL22 += "\\" + fileNameL2 + "\\*";
			//Convert path to std string
			msclr::interop::marshal_context context;
			std::string searchPathL22 = context.marshal_as<std::string>(browsePathL22);

			WIN32_FIND_DATA fileL22;
			HANDLE search_handleL22 = FindFirstFile(searchPathL22.c_str(), &fileL22);
			if (search_handleL22)
			{
				do{
					if ((_stricmp(fileL22.cFileName, ".")) && (_stricmp(fileL22.cFileName, ".."))){
						if (!String::IsNullOrEmpty(searchQuery)){
							String^ fileNameL22 = gcnew String(fileL22.cFileName);
							if (fileNameL22->ToLower()->Contains(searchQuery)){
								searchResultsList->Items->Add(fileNameL2 + "\\" + fileNameL22);
							}
						}
						else{
							String^ fileNameL22 = gcnew String(fileL22.cFileName);
							searchResultsList->Items->Add(fileNameL2 + "\\" + fileNameL22);
						}
					}
				} while (FindNextFile(search_handleL22, &fileL22));
				FindClose(search_handleL22);

			}
			//deep search END
}

};
}

