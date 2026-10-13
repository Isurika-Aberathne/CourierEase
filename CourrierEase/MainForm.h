#pragma once

#include "RegisterFormDesigner.h"
#include "LoginFormDesigner.h"
#include "AdminLoginDesigner.h"
#include "TrackingRepository.h"

namespace CourrierEase
{
	public ref class MainForm :
		public System::Windows::Forms::Form
	{
	public:

		MainForm(void)
		{
			InitializeComponent();
		}

	protected:

		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private:

		System::Windows::Forms::Panel^ pnlHeader;
		System::Windows::Forms::Panel^ pnlLogo;

		System::Windows::Forms::Label^ lblBrand;
		System::Windows::Forms::Label^ lblHome;
		System::Windows::Forms::Label^ lblServices;
		System::Windows::Forms::Label^ lblTrackNav;
		System::Windows::Forms::Label^ lblAbout;

		System::Windows::Forms::Button^ btnLogin;
		System::Windows::Forms::Button^ btnRegister;

		System::Windows::Forms::Label^ lblBadge;
		System::Windows::Forms::Label^ lblHeroTitle;
		System::Windows::Forms::Label^ lblHeroText;

		System::Windows::Forms::Button^ btnBookParcel;
		System::Windows::Forms::Button^ btnTrackHero;

		System::Windows::Forms::Panel^ pnlHeroImage;
		System::Windows::Forms::Panel^ pnlTruckBody;
		System::Windows::Forms::Panel^ pnlTruckCab;
		System::Windows::Forms::Panel^ pnlWheel1;
		System::Windows::Forms::Panel^ pnlWheel2;

		System::Windows::Forms::Label^ lblTruckText;

		System::Windows::Forms::Panel^ pnlTracking;
		System::Windows::Forms::Label^ lblTrackTitle;
		System::Windows::Forms::TextBox^ txtTracking;
		System::Windows::Forms::Button^ btnTrackParcel;

		System::Windows::Forms::Label^ lblServicesTitle;

		System::Windows::Forms::Panel^ pnlStandard;
		System::Windows::Forms::Panel^ pnlExpress;
		System::Windows::Forms::Panel^ pnlStandardIcon;
		System::Windows::Forms::Panel^ pnlExpressIcon;

		System::Windows::Forms::Label^ lblStandardTitle;
		System::Windows::Forms::Label^ lblStandardText;
		System::Windows::Forms::Label^ lblExpressTitle;
		System::Windows::Forms::Label^ lblExpressText;

		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			this->pnlHeader =
				(gcnew System::Windows::Forms::Panel());

			this->pnlLogo =
				(gcnew System::Windows::Forms::Panel());

			this->lblBrand =
				(gcnew System::Windows::Forms::Label());

			this->lblHome =
				(gcnew System::Windows::Forms::Label());

			this->lblServices =
				(gcnew System::Windows::Forms::Label());

			this->lblTrackNav =
				(gcnew System::Windows::Forms::Label());

			this->lblAbout =
				(gcnew System::Windows::Forms::Label());

			this->btnLogin =
				(gcnew System::Windows::Forms::Button());

			this->btnRegister =
				(gcnew System::Windows::Forms::Button());

			this->lblBadge =
				(gcnew System::Windows::Forms::Label());

			this->lblHeroTitle =
				(gcnew System::Windows::Forms::Label());

			this->lblHeroText =
				(gcnew System::Windows::Forms::Label());

			this->btnBookParcel =
				(gcnew System::Windows::Forms::Button());

			this->btnTrackHero =
				(gcnew System::Windows::Forms::Button());

			this->pnlHeroImage =
				(gcnew System::Windows::Forms::Panel());

			this->pnlTruckBody =
				(gcnew System::Windows::Forms::Panel());

			this->pnlTruckCab =
				(gcnew System::Windows::Forms::Panel());

			this->pnlWheel1 =
				(gcnew System::Windows::Forms::Panel());

			this->pnlWheel2 =
				(gcnew System::Windows::Forms::Panel());

			this->lblTruckText =
				(gcnew System::Windows::Forms::Label());

			this->pnlTracking =
				(gcnew System::Windows::Forms::Panel());

			this->lblTrackTitle =
				(gcnew System::Windows::Forms::Label());

			this->txtTracking =
				(gcnew System::Windows::Forms::TextBox());

			this->btnTrackParcel =
				(gcnew System::Windows::Forms::Button());

			this->lblServicesTitle =
				(gcnew System::Windows::Forms::Label());

			this->pnlStandard =
				(gcnew System::Windows::Forms::Panel());

			this->pnlStandardIcon =
				(gcnew System::Windows::Forms::Panel());

			this->lblStandardTitle =
				(gcnew System::Windows::Forms::Label());

			this->lblStandardText =
				(gcnew System::Windows::Forms::Label());

			this->pnlExpress =
				(gcnew System::Windows::Forms::Panel());

			this->pnlExpressIcon =
				(gcnew System::Windows::Forms::Panel());

			this->lblExpressTitle =
				(gcnew System::Windows::Forms::Label());

			this->lblExpressText =
				(gcnew System::Windows::Forms::Label());

			this->pnlHeader->SuspendLayout();
			this->pnlHeroImage->SuspendLayout();
			this->pnlTracking->SuspendLayout();
			this->pnlStandard->SuspendLayout();
			this->pnlExpress->SuspendLayout();
			this->SuspendLayout();

			//
			// pnlHeader
			//

			this->pnlHeader->BackColor =
				System::Drawing::Color::White;

			this->pnlHeader->Controls->Add(
				this->pnlLogo);

			this->pnlHeader->Controls->Add(
				this->lblBrand);

			this->pnlHeader->Controls->Add(
				this->lblHome);

			this->pnlHeader->Controls->Add(
				this->lblServices);

			this->pnlHeader->Controls->Add(
				this->lblTrackNav);

			this->pnlHeader->Controls->Add(
				this->lblAbout);

			this->pnlHeader->Controls->Add(
				this->btnLogin);

			this->pnlHeader->Controls->Add(
				this->btnRegister);

			this->pnlHeader->Location =
				System::Drawing::Point(0, 0);

			this->pnlHeader->Name =
				L"pnlHeader";

			this->pnlHeader->Size =
				System::Drawing::Size(1100, 65);

			this->pnlHeader->TabIndex = 0;

			//
			// pnlLogo
			//

			this->pnlLogo->BackColor =
				System::Drawing::Color::FromArgb(
					245, 158, 11);

			this->pnlLogo->Location =
				System::Drawing::Point(55, 18);

			this->pnlLogo->Name =
				L"pnlLogo";

			this->pnlLogo->Size =
				System::Drawing::Size(30, 30);

			this->pnlLogo->TabIndex = 0;

			//
			// lblBrand
			//

			this->lblBrand->AutoSize = true;

			this->lblBrand->Font =
				(gcnew System::Drawing::Font(
					L"Segoe UI",
					13,
					System::Drawing::FontStyle::Bold));

			this->lblBrand->ForeColor =
				System::Drawing::Color::FromArgb(
					15, 23, 42);

			this->lblBrand->Location =
				System::Drawing::Point(95, 20);

			this->lblBrand->Name =
				L"lblBrand";

			this->lblBrand->Size =
				System::Drawing::Size(135, 30);

			this->lblBrand->TabIndex = 1;

			this->lblBrand->Text =
				L"CourierEase";

			//
			// lblHome
			//

			this->lblHome->AutoSize = true;

			this->lblHome->Cursor =
				System::Windows::Forms::Cursors::Hand;

			this->lblHome->Font =
				(gcnew System::Drawing::Font(
					L"Segoe UI", 8));

			this->lblHome->ForeColor =
				System::Drawing::Color::FromArgb(
					37, 99, 235);

			this->lblHome->Location =
				System::Drawing::Point(590, 25);

			this->lblHome->Name =
				L"lblHome";

			this->lblHome->Size =
				System::Drawing::Size(46, 19);

			this->lblHome->TabIndex = 2;

			this->lblHome->Text =
				L"Home";

			//
			// lblServices
			//

			this->lblServices->AutoSize = true;

			this->lblServices->Cursor =
				System::Windows::Forms::Cursors::Hand;

			this->lblServices->Font =
				(gcnew System::Drawing::Font(
					L"Segoe UI", 8));

			this->lblServices->ForeColor =
				System::Drawing::Color::FromArgb(
					51, 65, 85);

			this->lblServices->Location =
				System::Drawing::Point(655, 25);

			this->lblServices->Name =
				L"lblServices";

			this->lblServices->Size =
				System::Drawing::Size(57, 19);

			this->lblServices->TabIndex = 3;

			this->lblServices->Text =
				L"Services";

			this->lblServices->Click +=
				gcnew System::EventHandler(
					this,
					&MainForm::lblServices_Click);

			//
			// lblTrackNav
			//

			this->lblTrackNav->AutoSize = true;

			this->lblTrackNav->Cursor =
				System::Windows::Forms::Cursors::Hand;

			this->lblTrackNav->Font =
				(gcnew System::Drawing::Font(
					L"Segoe UI", 8));

			this->lblTrackNav->ForeColor =
				System::Drawing::Color::FromArgb(
					51, 65, 85);

			this->lblTrackNav->Location =
				System::Drawing::Point(725, 25);

			this->lblTrackNav->Name =
				L"lblTrackNav";

			this->lblTrackNav->Size =
				System::Drawing::Size(80, 19);

			this->lblTrackNav->TabIndex = 4;

			this->lblTrackNav->Text =
				L"Track Parcel";

			this->lblTrackNav->Click +=
				gcnew System::EventHandler(
					this,
					&MainForm::lblTrackNav_Click);

			//
			// lblAbout
			//

			this->lblAbout->AutoSize = true;

			this->lblAbout->Cursor =
				System::Windows::Forms::Cursors::Hand;

			this->lblAbout->Font =
				(gcnew System::Drawing::Font(
					L"Segoe UI", 8));

			this->lblAbout->ForeColor =
				System::Drawing::Color::FromArgb(
					51, 65, 85);

			this->lblAbout->Location =
				System::Drawing::Point(815, 25);

			this->lblAbout->Name =
				L"lblAbout";

			this->lblAbout->Size =
				System::Drawing::Size(49, 19);

			this->lblAbout->TabIndex = 5;

			this->lblAbout->Text =
				L"Admin";

			this->lblAbout->Click +=
				gcnew System::EventHandler(
					this,
					&MainForm::lblAbout_Click);

			//
			// btnLogin
			//

			this->btnLogin->BackColor =
				System::Drawing::Color::White;

			this->btnLogin->Cursor =
				System::Windows::Forms::Cursors::Hand;

			this->btnLogin->FlatAppearance->BorderColor =
				System::Drawing::Color::FromArgb(
					37, 99, 235);

			this->btnLogin->FlatStyle =
				System::Windows::Forms::FlatStyle::Flat;

			this->btnLogin->ForeColor =
				System::Drawing::Color::FromArgb(
					37, 99, 235);

			this->btnLogin->Location =
				System::Drawing::Point(900, 17);

			this->btnLogin->Name =
				L"btnLogin";

			this->btnLogin->Size =
				System::Drawing::Size(70, 34);

			this->btnLogin->TabIndex = 0;

			this->btnLogin->Text =
				L"Login";

			this->btnLogin->UseVisualStyleBackColor =
				false;

			this->btnLogin->Click +=
				gcnew System::EventHandler(
					this,
					&MainForm::btnLogin_Click);

			//
			// btnRegister
			//

			this->btnRegister->BackColor =
				System::Drawing::Color::FromArgb(
					37, 99, 235);

			this->btnRegister->Cursor =
				System::Windows::Forms::Cursors::Hand;

			this->btnRegister->FlatAppearance->BorderSize =
				0;

			this->btnRegister->FlatStyle =
				System::Windows::Forms::FlatStyle::Flat;

			this->btnRegister->ForeColor =
				System::Drawing::Color::White;

			this->btnRegister->Location =
				System::Drawing::Point(980, 17);

			this->btnRegister->Name =
				L"btnRegister";

			this->btnRegister->Size =
				System::Drawing::Size(80, 34);

			this->btnRegister->TabIndex = 1;

			this->btnRegister->Text =
				L"Register";

			this->btnRegister->UseVisualStyleBackColor =
				false;

			this->btnRegister->Click +=
				gcnew System::EventHandler(
					this,
					&MainForm::btnRegister_Click);

			//
			// lblBadge
			//

			this->lblBadge->BackColor =
				System::Drawing::Color::FromArgb(
					219, 234, 254);

			this->lblBadge->Font =
				(gcnew System::Drawing::Font(
					L"Segoe UI",
					8,
					System::Drawing::FontStyle::Bold));

			this->lblBadge->ForeColor =
				System::Drawing::Color::FromArgb(
					37, 99, 235);

			this->lblBadge->Location =
				System::Drawing::Point(60, 115);

			this->lblBadge->Name =
				L"lblBadge";

			this->lblBadge->Size =
				System::Drawing::Size(140, 25);

			this->lblBadge->TabIndex = 1;

			this->lblBadge->Text =
				L"Fast - Safe - Reliable";

			this->lblBadge->TextAlign =
				System::Drawing::ContentAlignment::MiddleCenter;

			//
			// lblHeroTitle
			//

			this->lblHeroTitle->Font =
				(gcnew System::Drawing::Font(
					L"Segoe UI",
					25,
					System::Drawing::FontStyle::Bold));

			this->lblHeroTitle->ForeColor =
				System::Drawing::Color::FromArgb(
					15, 23, 42);

			this->lblHeroTitle->Location =
				System::Drawing::Point(60, 155);

			this->lblHeroTitle->Name =
				L"lblHeroTitle";

			this->lblHeroTitle->Size =
				System::Drawing::Size(480, 110);

			this->lblHeroTitle->TabIndex = 2;

			this->lblHeroTitle->Text =
				L"Your Parcels,\r\nDelivered with Care.";

			//
			// lblHeroText
			//

			this->lblHeroText->Font =
				(gcnew System::Drawing::Font(
					L"Segoe UI", 10));

			this->lblHeroText->ForeColor =
				System::Drawing::Color::FromArgb(
					100, 116, 139);

			this->lblHeroText->Location =
				System::Drawing::Point(60, 264);

			this->lblHeroText->Name =
				L"lblHeroText";

			this->lblHeroText->Size =
				System::Drawing::Size(480, 50);

			this->lblHeroText->TabIndex = 3;

			this->lblHeroText->Text =
				L"Book deliveries, manage your parcels, and track every shipment\r\n"
				L"from one simple desktop application.";

			//
			// btnBookParcel
			//

			this->btnBookParcel->BackColor =
				System::Drawing::Color::FromArgb(
					37, 99, 235);

			this->btnBookParcel->Cursor =
				System::Windows::Forms::Cursors::Hand;

			this->btnBookParcel->FlatAppearance->BorderSize =
				0;

			this->btnBookParcel->FlatStyle =
				System::Windows::Forms::FlatStyle::Flat;

			this->btnBookParcel->Font =
				(gcnew System::Drawing::Font(
					L"Segoe UI",
					9,
					System::Drawing::FontStyle::Bold));

			this->btnBookParcel->ForeColor =
				System::Drawing::Color::White;

			this->btnBookParcel->Location =
				System::Drawing::Point(60, 317);

			this->btnBookParcel->Name =
				L"btnBookParcel";

			this->btnBookParcel->Size =
				System::Drawing::Size(115, 38);

			this->btnBookParcel->TabIndex = 2;

			this->btnBookParcel->Text =
				L"Book a Parcel";

			this->btnBookParcel->UseVisualStyleBackColor =
				false;

			this->btnBookParcel->Click +=
				gcnew System::EventHandler(
					this,
					&MainForm::btnBookParcel_Click);

			//
			// btnTrackHero
			//

			this->btnTrackHero->BackColor =
				System::Drawing::Color::White;

			this->btnTrackHero->Cursor =
				System::Windows::Forms::Cursors::Hand;

			this->btnTrackHero->FlatAppearance->BorderColor =
				System::Drawing::Color::FromArgb(
					37, 99, 235);

			this->btnTrackHero->FlatStyle =
				System::Windows::Forms::FlatStyle::Flat;

			this->btnTrackHero->ForeColor =
				System::Drawing::Color::FromArgb(
					37, 99, 235);

			this->btnTrackHero->Location =
				System::Drawing::Point(182, 317);

			this->btnTrackHero->Name =
				L"btnTrackHero";

			this->btnTrackHero->Size =
				System::Drawing::Size(110, 38);

			this->btnTrackHero->TabIndex = 3;

			this->btnTrackHero->Text =
				L"Track Parcel";

			this->btnTrackHero->UseVisualStyleBackColor =
				false;

			this->btnTrackHero->Click +=
				gcnew System::EventHandler(
					this,
					&MainForm::btnTrackHero_Click);

			//
			// pnlHeroImage
			//

			this->pnlHeroImage->BackColor =
				System::Drawing::Color::FromArgb(
					239, 246, 255);

			this->pnlHeroImage->Controls->Add(
				this->pnlTruckBody);

			this->pnlHeroImage->Controls->Add(
				this->pnlTruckCab);

			this->pnlHeroImage->Controls->Add(
				this->pnlWheel1);

			this->pnlHeroImage->Controls->Add(
				this->pnlWheel2);

			this->pnlHeroImage->Controls->Add(
				this->lblTruckText);

			this->pnlHeroImage->Location =
				System::Drawing::Point(590, 105);

			this->pnlHeroImage->Name =
				L"pnlHeroImage";

			this->pnlHeroImage->Size =
				System::Drawing::Size(410, 250);

			this->pnlHeroImage->TabIndex = 4;

			//
			// pnlTruckBody
			//

			this->pnlTruckBody->BackColor =
				System::Drawing::Color::FromArgb(
					37, 99, 235);

			this->pnlTruckBody->Location =
				System::Drawing::Point(105, 85);

			this->pnlTruckBody->Name =
				L"pnlTruckBody";

			this->pnlTruckBody->Size =
				System::Drawing::Size(190, 75);

			this->pnlTruckBody->TabIndex = 0;

			//
			// pnlTruckCab
			//

			this->pnlTruckCab->BackColor =
				System::Drawing::Color::FromArgb(
					245, 158, 11);

			this->pnlTruckCab->Location =
				System::Drawing::Point(55, 50);

			this->pnlTruckCab->Name =
				L"pnlTruckCab";

			this->pnlTruckCab->Size =
				System::Drawing::Size(70, 65);

			this->pnlTruckCab->TabIndex = 1;

			//
			// pnlWheel1
			//

			this->pnlWheel1->BackColor =
				System::Drawing::Color::FromArgb(
					15, 23, 42);

			this->pnlWheel1->Location =
				System::Drawing::Point(135, 145);

			this->pnlWheel1->Name =
				L"pnlWheel1";

			this->pnlWheel1->Size =
				System::Drawing::Size(32, 32);

			this->pnlWheel1->TabIndex = 2;

			//
			// pnlWheel2
			//

			this->pnlWheel2->BackColor =
				System::Drawing::Color::FromArgb(
					15, 23, 42);

			this->pnlWheel2->Location =
				System::Drawing::Point(255, 145);

			this->pnlWheel2->Name =
				L"pnlWheel2";

			this->pnlWheel2->Size =
				System::Drawing::Size(32, 32);

			this->pnlWheel2->TabIndex = 3;

			//
			// lblTruckText
			//

			this->lblTruckText->Font =
				(gcnew System::Drawing::Font(
					L"Segoe UI",
					10,
					System::Drawing::FontStyle::Bold));

			this->lblTruckText->ForeColor =
				System::Drawing::Color::FromArgb(
					30, 64, 175);

			this->lblTruckText->Location =
				System::Drawing::Point(105, 195);

			this->lblTruckText->Name =
				L"lblTruckText";

			this->lblTruckText->Size =
				System::Drawing::Size(220, 30);

			this->lblTruckText->TabIndex = 4;

			this->lblTruckText->Text =
				L"Simple. Reliable. Trackable.";

			this->lblTruckText->TextAlign =
				System::Drawing::ContentAlignment::MiddleCenter;

			//
			// pnlTracking
			//

			this->pnlTracking->BackColor =
				System::Drawing::Color::White;

			this->pnlTracking->BorderStyle =
				System::Windows::Forms::BorderStyle::FixedSingle;

			this->pnlTracking->Controls->Add(
				this->lblTrackTitle);

			this->pnlTracking->Controls->Add(
				this->txtTracking);

			this->pnlTracking->Controls->Add(
				this->btnTrackParcel);

			this->pnlTracking->Location =
				System::Drawing::Point(60, 390);

			this->pnlTracking->Name =
				L"pnlTracking";

			this->pnlTracking->Size =
				System::Drawing::Size(940, 90);

			this->pnlTracking->TabIndex = 5;

			//
			// lblTrackTitle
			//

			this->lblTrackTitle->AutoSize = true;

			this->lblTrackTitle->Font =
				(gcnew System::Drawing::Font(
					L"Segoe UI",
					12,
					System::Drawing::FontStyle::Bold));

			this->lblTrackTitle->ForeColor =
				System::Drawing::Color::FromArgb(
					15, 23, 42);

			this->lblTrackTitle->Location =
				System::Drawing::Point(20, 15);

			this->lblTrackTitle->Name =
				L"lblTrackTitle";

			this->lblTrackTitle->Size =
				System::Drawing::Size(174, 28);

			this->lblTrackTitle->TabIndex = 0;

			this->lblTrackTitle->Text =
				L"Track Your Parcel";

			//
			// txtTracking
			//

			this->txtTracking->BorderStyle =
				System::Windows::Forms::BorderStyle::FixedSingle;

			this->txtTracking->Font =
				(gcnew System::Drawing::Font(
					L"Segoe UI", 10));

			this->txtTracking->Location =
				System::Drawing::Point(20, 47);

			this->txtTracking->Name =
				L"txtTracking";

			this->txtTracking->Size =
				System::Drawing::Size(650, 30);

			this->txtTracking->TabIndex = 0;

			this->txtTracking->KeyDown +=
				gcnew System::Windows::Forms::KeyEventHandler(
					this,
					&MainForm::txtTracking_KeyDown);

			//
			// btnTrackParcel
			//

			this->btnTrackParcel->BackColor =
				System::Drawing::Color::FromArgb(
					37, 99, 235);

			this->btnTrackParcel->Cursor =
				System::Windows::Forms::Cursors::Hand;

			this->btnTrackParcel->FlatAppearance->BorderSize =
				0;

			this->btnTrackParcel->FlatStyle =
				System::Windows::Forms::FlatStyle::Flat;

			this->btnTrackParcel->Font =
				(gcnew System::Drawing::Font(
					L"Segoe UI",
					9,
					System::Drawing::FontStyle::Bold));

			this->btnTrackParcel->ForeColor =
				System::Drawing::Color::White;

			this->btnTrackParcel->Location =
				System::Drawing::Point(690, 44);

			this->btnTrackParcel->Name =
				L"btnTrackParcel";

			this->btnTrackParcel->Size =
				System::Drawing::Size(115, 35);

			this->btnTrackParcel->TabIndex = 1;

			this->btnTrackParcel->Text =
				L"Track Parcel";

			this->btnTrackParcel->UseVisualStyleBackColor =
				false;

			this->btnTrackParcel->Click +=
				gcnew System::EventHandler(
					this,
					&MainForm::btnTrackParcel_Click);

			//
			// lblServicesTitle
			//

			this->lblServicesTitle->AutoSize = true;

			this->lblServicesTitle->Font =
				(gcnew System::Drawing::Font(
					L"Segoe UI",
					15,
					System::Drawing::FontStyle::Bold));

			this->lblServicesTitle->ForeColor =
				System::Drawing::Color::FromArgb(
					15, 23, 42);

			this->lblServicesTitle->Location =
				System::Drawing::Point(60, 510);

			this->lblServicesTitle->Name =
				L"lblServicesTitle";

			this->lblServicesTitle->Size =
				System::Drawing::Size(268, 35);

			this->lblServicesTitle->TabIndex = 6;

			this->lblServicesTitle->Text =
				L"Our Delivery Services";

			//
			// pnlStandard
			//

			this->pnlStandard->BackColor =
				System::Drawing::Color::White;

			this->pnlStandard->BorderStyle =
				System::Windows::Forms::BorderStyle::FixedSingle;

			this->pnlStandard->Controls->Add(
				this->pnlStandardIcon);

			this->pnlStandard->Controls->Add(
				this->lblStandardTitle);

			this->pnlStandard->Controls->Add(
				this->lblStandardText);

			this->pnlStandard->Location =
				System::Drawing::Point(60, 550);

			this->pnlStandard->Name =
				L"pnlStandard";

			this->pnlStandard->Size =
				System::Drawing::Size(455, 100);

			this->pnlStandard->TabIndex = 7;

			//
			// pnlStandardIcon
			//

			this->pnlStandardIcon->BackColor =
				System::Drawing::Color::FromArgb(
					219, 234, 254);

			this->pnlStandardIcon->Location =
				System::Drawing::Point(20, 25);

			this->pnlStandardIcon->Name =
				L"pnlStandardIcon";

			this->pnlStandardIcon->Size =
				System::Drawing::Size(40, 40);

			this->pnlStandardIcon->TabIndex = 0;

			//
			// lblStandardTitle
			//

			this->lblStandardTitle->AutoSize = true;

			this->lblStandardTitle->Font =
				(gcnew System::Drawing::Font(
					L"Segoe UI",
					10,
					System::Drawing::FontStyle::Bold));

			this->lblStandardTitle->ForeColor =
				System::Drawing::Color::FromArgb(
					15, 23, 42);

			this->lblStandardTitle->Location =
				System::Drawing::Point(75, 25);

			this->lblStandardTitle->Name =
				L"lblStandardTitle";

			this->lblStandardTitle->Size =
				System::Drawing::Size(156, 23);

			this->lblStandardTitle->TabIndex = 1;

			this->lblStandardTitle->Text =
				L"Standard Delivery";

			//
			// lblStandardText
			//

			this->lblStandardText->AutoSize = true;

			this->lblStandardText->ForeColor =
				System::Drawing::Color::FromArgb(
					100, 116, 139);

			this->lblStandardText->Location =
				System::Drawing::Point(75, 50);

			this->lblStandardText->Name =
				L"lblStandardText";

			this->lblStandardText->Size =
				System::Drawing::Size(348, 20);

			this->lblStandardText->TabIndex = 2;

			this->lblStandardText->Text =
				L"Affordable and reliable delivery for regular parcels.";

			//
			// pnlExpress
			//

			this->pnlExpress->BackColor =
				System::Drawing::Color::White;

			this->pnlExpress->BorderStyle =
				System::Windows::Forms::BorderStyle::FixedSingle;

			this->pnlExpress->Controls->Add(
				this->pnlExpressIcon);

			this->pnlExpress->Controls->Add(
				this->lblExpressTitle);

			this->pnlExpress->Controls->Add(
				this->lblExpressText);

			this->pnlExpress->Location =
				System::Drawing::Point(530, 550);

			this->pnlExpress->Name =
				L"pnlExpress";

			this->pnlExpress->Size =
				System::Drawing::Size(470, 100);

			this->pnlExpress->TabIndex = 8;

			//
			// pnlExpressIcon
			//

			this->pnlExpressIcon->BackColor =
				System::Drawing::Color::FromArgb(
					255, 237, 213);

			this->pnlExpressIcon->Location =
				System::Drawing::Point(20, 25);

			this->pnlExpressIcon->Name =
				L"pnlExpressIcon";

			this->pnlExpressIcon->Size =
				System::Drawing::Size(40, 40);

			this->pnlExpressIcon->TabIndex = 0;

			//
			// lblExpressTitle
			//

			this->lblExpressTitle->AutoSize = true;

			this->lblExpressTitle->Font =
				(gcnew System::Drawing::Font(
					L"Segoe UI",
					10,
					System::Drawing::FontStyle::Bold));

			this->lblExpressTitle->ForeColor =
				System::Drawing::Color::FromArgb(
					15, 23, 42);

			this->lblExpressTitle->Location =
				System::Drawing::Point(75, 25);

			this->lblExpressTitle->Name =
				L"lblExpressTitle";

			this->lblExpressTitle->Size =
				System::Drawing::Size(141, 23);

			this->lblExpressTitle->TabIndex = 1;

			this->lblExpressTitle->Text =
				L"Express Delivery";

			//
			// lblExpressText
			//

			this->lblExpressText->AutoSize = true;

			this->lblExpressText->ForeColor =
				System::Drawing::Color::FromArgb(
					100, 116, 139);

			this->lblExpressText->Location =
				System::Drawing::Point(75, 50);

			this->lblExpressText->Name =
				L"lblExpressText";

			this->lblExpressText->Size =
				System::Drawing::Size(284, 20);

			this->lblExpressText->TabIndex = 2;

			this->lblExpressText->Text =
				L"Faster delivery when your parcel is urgent.";

			//
			// MainForm
			//

			this->AutoScaleDimensions =
				System::Drawing::SizeF(8, 20);

			this->AutoScaleMode =
				System::Windows::Forms::AutoScaleMode::Font;

			this->BackColor =
				System::Drawing::Color::FromArgb(
					248, 250, 252);

			this->ClientSize =
				System::Drawing::Size(1100, 700);

			this->Controls->Add(
				this->pnlHeader);

			this->Controls->Add(
				this->lblBadge);

			this->Controls->Add(
				this->lblHeroTitle);

			this->Controls->Add(
				this->lblHeroText);

			this->Controls->Add(
				this->btnBookParcel);

			this->Controls->Add(
				this->btnTrackHero);

			this->Controls->Add(
				this->pnlHeroImage);

			this->Controls->Add(
				this->pnlTracking);

			this->Controls->Add(
				this->lblServicesTitle);

			this->Controls->Add(
				this->pnlStandard);

			this->Controls->Add(
				this->pnlExpress);

			this->Font =
				(gcnew System::Drawing::Font(
					L"Segoe UI", 9));

			this->FormBorderStyle =
				System::Windows::Forms::FormBorderStyle::FixedSingle;

			this->MaximizeBox = false;

			this->Name =
				L"MainForm";

			this->StartPosition =
				System::Windows::Forms::FormStartPosition::CenterScreen;

			this->Text =
				L"CourierEase";

			this->pnlHeader->ResumeLayout(false);
			this->pnlHeader->PerformLayout();

			this->pnlHeroImage->ResumeLayout(false);

			this->pnlTracking->ResumeLayout(false);
			this->pnlTracking->PerformLayout();

			this->pnlStandard->ResumeLayout(false);
			this->pnlStandard->PerformLayout();

			this->pnlExpress->ResumeLayout(false);
			this->pnlExpress->PerformLayout();

			this->ResumeLayout(false);
			this->PerformLayout();
		}

#pragma endregion

	private:

		System::Void btnLogin_Click(
			System::Object^ sender,
			System::EventArgs^ e)
		{
			LoginFormDesigner^ loginForm =
				gcnew LoginFormDesigner();

			this->Hide();

			loginForm->ShowDialog();

			delete loginForm;

			if (!this->IsDisposed)
			{
				this->Show();
			}
		}


		System::Void btnRegister_Click(
			System::Object^ sender,
			System::EventArgs^ e)
		{
			RegisterFormDesigner^ registerForm =
				gcnew RegisterFormDesigner();

			this->Hide();

			registerForm->ShowDialog();

			delete registerForm;

			if (!this->IsDisposed)
			{
				this->Show();
			}
		}


		System::Void btnBookParcel_Click(
			System::Object^ sender,
			System::EventArgs^ e)
		{
			LoginFormDesigner^ loginForm =
				gcnew LoginFormDesigner();

			this->Hide();

			loginForm->ShowDialog();

			delete loginForm;

			if (!this->IsDisposed)
			{
				this->Show();
			}
		}


		System::Void btnTrackHero_Click(
			System::Object^ sender,
			System::EventArgs^ e)
		{
			this->txtTracking->Focus();
		}


		System::Void lblTrackNav_Click(
			System::Object^ sender,
			System::EventArgs^ e)
		{
			this->txtTracking->Focus();
		}


		System::Void lblServices_Click(
			System::Object^ sender,
			System::EventArgs^ e)
		{
			this->lblServicesTitle->Focus();
		}


		System::Void lblAbout_Click(
			System::Object^ sender,
			System::EventArgs^ e)
		{
			AdminLoginDesigner^ adminLogin =
				gcnew AdminLoginDesigner();

			this->Hide();

			adminLogin->ShowDialog();

			delete adminLogin;

			if (!this->IsDisposed)
			{
				this->Show();
			}
		}


		System::Void txtTracking_KeyDown(
			System::Object^ sender,
			System::Windows::Forms::KeyEventArgs^ e)
		{
			if (e->KeyCode ==
				System::Windows::Forms::Keys::Enter)
			{
				e->SuppressKeyPress = true;
				TrackParcel();
			}
		}


		System::Void btnTrackParcel_Click(
			System::Object^ sender,
			System::EventArgs^ e)
		{
			TrackParcel();
		}


		void TrackParcel()
		{
			System::String^ tracking =
				this->txtTracking->Text->Trim();

			if (System::String::IsNullOrWhiteSpace(
				tracking))
			{
				this->txtTracking->Focus();

				System::Windows::Forms::MessageBox::Show(
					L"Please enter a tracking number.",
					L"Track Parcel",
					System::Windows::Forms::MessageBoxButtons::OK,
					System::Windows::Forms::MessageBoxIcon::Information);

				return;
			}

			try
			{
				System::Data::DataRow^ row =
					TrackingRepository::GetTrackingDetails(
						tracking);

				if (row == nullptr)
				{
					System::Windows::Forms::MessageBox::Show(
						L"No parcel was found for tracking number:\n\n" +
						tracking +
						L"\n\nPlease check the tracking number and try again.",
						L"Parcel Not Found",
						System::Windows::Forms::MessageBoxButtons::OK,
						System::Windows::Forms::MessageBoxIcon::Information);

					this->txtTracking->SelectAll();
					this->txtTracking->Focus();

					return;
				}

				System::String^ trackingNo =
					row["tracking_no"]->ToString();

				System::String^ receiverName =
					row["receiver_name"]->ToString();

				System::String^ receiverCity =
					row["receiver_city"]->ToString();

				System::String^ parcelType =
					row["parcel_type"]->ToString();

				System::String^ deliveryOption =
					row["delivery_option"]->ToString();

				System::String^ status =
					row["status"]->ToString();

				System::String^ charge =
					System::Convert::ToDecimal(
						row["charge"]
					).ToString("0.00");

				System::String^ createdDate =
					System::Convert::ToDateTime(
						row["created_at"]
					).ToString(
						"dd MMM yyyy hh:mm tt");

				System::String^ deliveryBoy =
					L"Not Assigned";

				if (
					row["delivery_boy"] !=
					System::DBNull::Value &&
					!System::String::IsNullOrWhiteSpace(
						row["delivery_boy"]->ToString())
					)
				{
					deliveryBoy =
						row["delivery_boy"]->ToString();
				}

				System::Data::DataTable^ history =
					TrackingRepository::GetTrackingHistory(
						trackingNo);

				System::String^ historyText =
					L"";

				if (
					history != nullptr &&
					history->Rows->Count > 0
					)
				{
					for each (
						System::Data::DataRow ^ historyRow
						in history->Rows)
					{
						System::String^ historyStatus =
							historyRow["status"]->ToString();

						System::String^ historyDate =
							System::Convert::ToDateTime(
								historyRow["changed_at"]
							).ToString(
								"dd MMM yyyy hh:mm tt"
							);

						historyText +=
							L"\n" +
							historyStatus +
							L"  -  " +
							historyDate;
					}
				}
				else
				{
					historyText =
						L"\nNo status history available.";
				}

				System::String^ message =
					L"Tracking Number: " +
					trackingNo +
					L"\n\nReceiver: " +
					receiverName +
					L"\nDestination: " +
					receiverCity +
					L"\nParcel Type: " +
					parcelType +
					L"\nDelivery Service: " +
					deliveryOption +
					L"\nDelivery Charge: Rs. " +
					charge +
					L"\n\nCurrent Status: " +
					status +
					L"\nDelivery Staff: " +
					deliveryBoy +
					L"\nBooked On: " +
					createdDate +
					L"\n\nStatus History:" +
					historyText;

				System::Windows::Forms::MessageBoxIcon icon =
					System::Windows::Forms::MessageBoxIcon::Information;

				if (
					System::String::Equals(
						status,
						L"Delivered",
						System::StringComparison::OrdinalIgnoreCase)
					)
				{
					icon =
						System::Windows::Forms::MessageBoxIcon::Information;
				}

				System::Windows::Forms::MessageBox::Show(
					message,
					L"Parcel Tracking - " +
					trackingNo,
					System::Windows::Forms::MessageBoxButtons::OK,
					icon);
			}
			catch (System::Exception^ ex)
			{
				System::Windows::Forms::MessageBox::Show(
					L"Unable to retrieve parcel tracking information.\n\n" +
					ex->Message,
					L"Tracking Error",
					System::Windows::Forms::MessageBoxButtons::OK,
					System::Windows::Forms::MessageBoxIcon::Error);
			}
		}
	};
}