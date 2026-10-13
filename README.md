# CourierEase

CourierEase is a desktop-based Courier Delivery Management System developed using C++/CLI, Windows Forms, MySQL, and .NET Framework.

The system allows customers to register, log in, book parcels, track deliveries, manage their profiles, and view delivery history. Administrators can manage deliveries, delivery staff, and parcel statuses.

---

## Technologies Used

- C++/CLI
- Windows Forms
- .NET Framework 4.7.2
- MySQL
- MySQL Connector/NET
- Visual Studio
- Git
- GitHub

---

## Main Features

### Customer Features

- Customer registration
- Customer login
- Customer profile management
- Book parcels
- Edit parcel details
- Delete parcels
- View delivery history
- Track parcel status

### Administrator Features

- Admin login
- Admin dashboard
- View and manage deliveries
- Assign delivery boys
- Update delivery status
- Add delivery boys
- Edit delivery boy information
- Delete delivery boys
- View delivery statistics

---

## Object-Oriented Programming Concepts

CourierEase demonstrates the main Object-Oriented Programming concepts required by the project.

### Class and Object

Classes such as:

- `Customer`
- `Parcel`
- `DeliveryService`
- `StandardDelivery`
- `ExpressDelivery`

are used to represent system entities and behaviour.

### Encapsulation

Classes use private fields and public properties to control access to data.

### Abstraction

`DeliveryService` is implemented as an abstract class.

### Inheritance

`StandardDelivery` and `ExpressDelivery` inherit from `DeliveryService`.

### Polymorphism

Both delivery classes override the same virtual functions:

```cpp
CalculateCharge()
GetServiceName()
```

This allows different delivery services to calculate charges differently through the same base class interface.

---

## Delivery Services

CourierEase supports two delivery service types.

### Standard Delivery

```text
Base charge: Rs. 250.00
Charge per kg: Rs. 80.00
```

### Express Delivery

```text
Base charge: Rs. 400.00
Charge per kg: Rs. 120.00
```

The final delivery charge is calculated according to the selected delivery service and parcel weight.

---

## Database

CourierEase uses a MySQL database named:

```text
courierease_db
```

The database contains the following tables:

- `customers`
- `admins`
- `delivery_boys`
- `parcels`
- `deliveries`
- `status_history`

---

## Database Tables

### customers

Stores registered customer information.

Main fields:

```text
customer_id
full_name
phone
email
address
password_hash
created_at
```

### admins

Stores administrator account information.

Main fields:

```text
admin_id
username
full_name
password_hash
created_at
```

### delivery_boys

Stores delivery staff information.

Main fields:

```text
boy_id
full_name
phone
email
vehicle_no
is_active
created_at
```

### parcels

Stores parcel information.

Main fields:

```text
parcel_id
tracking_no
customer_id
receiver_name
receiver_phone
receiver_address
receiver_city
description
weight_kg
parcel_type
declared_value
created_at
```

### deliveries

Stores delivery information related to parcels.

Main fields:

```text
delivery_id
parcel_id
boy_id
delivery_option
charge
pickup_address
status
created_at
updated_at
```

### status_history

Stores delivery status changes.

Main fields:

```text
history_id
delivery_id
admin_id
status
changed_at
```

---

## Password Security

CourierEase does not store customer or administrator passwords as plain text.

Passwords are hashed using:

```text
PBKDF2
SHA-256
100,000 iterations
16-byte random salt
32-byte derived hash
```

The password is stored in the database using this format:

```text
Base64Salt:Base64Hash
```

Password hashing and verification are handled by:

```text
PasswordHasher.h
```

---

## Database Connection Security

The MySQL root password is not stored directly in the source code.

CourierEase uses Windows user environment variables:

```text
COURIEREASE_DB_PASSWORD
COURIEREASE_DB_PORT
```

These values are configured automatically by the PowerShell setup script.

The application reads them through:

```text
DatabaseConnection.h
```

This allows different computers to use different MySQL passwords and port numbers without editing the source code.

---

# Setup on a New Laptop

Follow the steps below to run CourierEase on another Windows computer.

---

## 1. Install Required Software

Install the following first:

- Git for Windows
- Visual Studio
- MySQL Server
- MySQL Workbench
- MySQL Connector/NET

### Required Visual Studio Components

Open Visual Studio Installer and install:

```text
Desktop development with C++
C++/CLI support
.NET Framework 4.7.2 targeting pack
.NET Framework 4.7.2 SDK
Windows SDK
MSVC Build Tools for x64/x86
```

---

## 2. Clone the Repository

Open PowerShell.

Go to the normal Visual Studio repository folder:

```powershell
cd C:\Users\YOURNAME\source\repos
```

Replace `YOURNAME` with the Windows username of the computer.

Clone the repository:

```powershell
git clone https://github.com/Isurika-Aberathne/CourierEase.git
```

Enter the repository:

```powershell
cd CourierEase
```

---


## 3. Run the Automatic Database Setup

The repository contains:

```text
setup-courierease.ps1
```

Allow PowerShell scripts for the current PowerShell session:

```powershell
Set-ExecutionPolicy -Scope Process Bypass
```

Run the database setup script:

```powershell
.\setup-courierease.ps1
```

---

## What the Setup Script Does

The setup script automatically:

- Finds `mysql.exe`
- Asks for the MySQL root password
- Checks MySQL port `3306`
- Checks MySQL port `3307`
- Asks for another port if required
- Creates the `courierease_db` database
- Creates all required database tables
- Creates all required foreign keys
- Asks for an administrator username
- Asks for the administrator full name
- Asks for the administrator password
- Generates a secure PBKDF2-SHA256 password hash
- Creates the administrator account
- Updates the account if the same administrator username already exists
- Creates the `COURIEREASE_DB_PASSWORD` environment variable
- Creates the `COURIEREASE_DB_PORT` environment variable
- Verifies that the administrator account exists

---

## 4. Example Database Setup

The setup may look similar to this:

```text
========================================
       CourierEase Database Setup
========================================

MySQL found:
C:\Program Files\MySQL\MySQL Server 8.0\bin\mysql.exe

Enter MySQL root password:

Detecting MySQL port...

MySQL detected on port 3306

Enter CourierEase admin username:
Enter admin full name:
Enter CourierEase admin password:
```

Example:

```text
Admin username: admin
Admin full name: System Administrator
Admin password: your chosen password
```

Passwords are hidden while typing.

---

## 5. MySQL Port Support

CourierEase is not permanently tied to one MySQL port.

The setup script automatically checks:

```text
3306
3307
```

If MySQL is running on another port, the script asks for that port.

For example:

```text
3310
```

The selected port is then stored in:

```text
COURIEREASE_DB_PORT
```

This allows CourierEase to run on computers using different MySQL ports without changing the source code.

---

## 6. Restart Visual Studio

After the setup script finishes:

1. Close Visual Studio if it is open.
2. Open Visual Studio again.

This is required so Visual Studio can read the new environment variables.

---

## 7. Open the Project

Open:

```text
C:\Users\YOURNAME\source\repos\CourierEase\CourrierEase.slnx
```

Important:

The application branding is:

```text
CourierEase
```

The internal Visual Studio project and namespace use:

```text
CourrierEase
```

Do not rename the internal project or namespace because this may affect the Windows Forms Designer.

---

## 8. Build the Project

In Visual Studio select:

```text
Configuration: Debug
Platform: x64
```

Then select:

```text
Build -> Rebuild Solution
```

Wait until the build completes successfully.

---

## 9. Run CourierEase

Press:

```text
F5
```

or click the green Start button in Visual Studio.

---

# Quick New Laptop Setup

After installing Git, Visual Studio, MySQL, and MySQL Connector/NET, run:

```powershell
cd C:\Users\YOURNAME\source\repos
git clone https://github.com/Isurika-Aberathne/CourierEase.git
cd CourierEase
git config --global user.name "Isurika Aberathne"
git config --global user.email "isurika.aberathne2004@gmail.com"
Set-ExecutionPolicy -Scope Process Bypass
.\setup-courierease.ps1
```

After the setup completes:

```text
1. Close and reopen Visual Studio
2. Open CourrierEase.slnx
3. Select Debug
4. Select x64
5. Rebuild Solution
6. Press F5
```

---

# Working on Multiple Laptops

Before starting work on a laptop, pull the latest changes:

```powershell
git pull
```

After making and testing changes:

```powershell
git status
git add .
git commit -m "Describe your changes"
git push
```

Before switching to another laptop, always make sure the current laptop has pushed its latest changes.

On the other laptop run:

```powershell
git pull
```

before starting work.

---

# GitHub Authentication

When pushing from a new laptop for the first time, Git may open a browser and request GitHub authentication.

Sign in using the GitHub account that owns the repository:

```text
Isurika-Aberathne
```

Repository:

```text
https://github.com/Isurika-Aberathne/CourierEase
```

---

# Important Security Notes

Do not commit the following information to GitHub:

```text
MySQL root password
Admin plaintext password
Customer plaintext passwords
COURIEREASE_DB_PASSWORD value
```

The MySQL password is stored only in the local Windows user environment.

Admin and customer passwords are stored in the database as secure password hashes.

---

# Generated Visual Studio Files

The following folders are generated by Visual Studio and should not be committed:

```text
.vs/
x64/
Debug/
Release/
```

These are ignored using `.gitignore`.

If the Windows Forms Designer stops loading correctly, Visual Studio can be closed and the generated folders can safely be deleted.

Example:

```powershell
Remove-Item -Recurse -Force .vs
Remove-Item -Recurse -Force x64
Remove-Item -Recurse -Force .\CourrierEase\x64
```

Then reopen Visual Studio and rebuild the solution.

---

# Project Structure

```text
CourierEase/
|
|-- .gitignore
|-- README.md
|-- database.sql
|-- setup-courierease.ps1
|-- CourrierEase.slnx
|
`-- CourrierEase/
    |
    |-- DatabaseConnection.h
    |-- PasswordHasher.h
    |-- DeliveryService.h
    |-- Customer.h
    |-- Parcel.h
    |
    |-- MainForm.cpp
    |-- MainForm.h
    |
    |-- LoginFormDesigner.h
    |-- RegisterFormDesigner.h
    |-- CustomerDashboardDesigner.h
    |-- BookParcelFormDesigner.h
    |-- MyDeliveriesFormDesigner.h
    |-- EditParcelFormDesigner.h
    |-- CustomerProfileDesigner.h
    |
    |-- AdminLoginDesigner.h
    |-- AdminDashboardDesigner.h
    |-- ManageDeliveriesDesigner.h
    |-- DeliveryBoysDesigner.h
    |
    `-- other project files
```

---

# Database Setup Files

The repository contains:

```text
database.sql
setup-courierease.ps1
```

`setup-courierease.ps1` is the recommended method for setting up CourierEase on a new computer because it automatically:

- Creates the database
- Creates the tables
- Detects the MySQL port
- Creates the administrator account
- Configures the database environment variables

`database.sql` can be used as a manual database schema reference.

---

# Repository

GitHub Repository:

```text
https://github.com/Isurika-Aberathne/CourierEase
```

---

# Project Information

**Project Name:** CourierEase

**Project Type:** Courier Delivery Management System

**Application Type:** Windows Desktop Application

**Programming Language:** C++/CLI

**GUI Framework:** Windows Forms

**Database:** MySQL

**Framework:** .NET Framework 4.7.2
