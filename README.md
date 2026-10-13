# CourierEase

CourierEase is a desktop Courier Delivery Management System developed for the ICT 1306 Object Oriented Programming group project.

## Technologies

- C++/CLI
- .NET Framework
- Windows Forms
- MySQL
- MySQL Connector/NET
- Visual Studio

## Main Features

### Customer
- Customer registration
- Customer login
- Customer profile management
- Book parcels
- View deliveries
- Edit parcel details
- Cancel eligible parcel orders
- Public parcel tracking

### Administrator
- Administrator login
- Dashboard statistics
- Manage deliveries
- Assign delivery staff
- Update delivery status
- View delivery status history
- Add and update delivery staff
- Activate and deactivate delivery staff

## Delivery Services

CourierEase supports:
- Standard Delivery
- Express Delivery

Delivery charges are calculated according to parcel weight and the selected delivery service.

## Object Oriented Programming Concepts

The project demonstrates:
- Classes
- Objects
- Encapsulation
- Abstraction
- Inheritance
- Polymorphism

`Customer` and `Parcel` are application classes.

`DeliveryService` is an abstract class.

`StandardDelivery` and `ExpressDelivery` inherit from `DeliveryService` and override the delivery charge calculation behaviour.

## Database

CourierEase uses MySQL.

Main tables:
- customers
- admins
- delivery_boys
- parcels
- deliveries
- status_history

## Database Configuration

The database password is not stored in the source code.

Before running the application, create the Windows user environment variable:

COURIEREASE_DB_PASSWORD

with your local MySQL password.

Default database configuration used by the project:
- Server: 127.0.0.1
- Port: 3307
- Database: courierease_db
- User: root

## Requirements

- Windows
- Visual Studio
- C++/CLI support
- .NET Framework
- MySQL Server
- MySQL Connector/NET

## Project

Developed for the ICT 1306 Object Oriented Programming group project.
