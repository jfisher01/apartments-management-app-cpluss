#pragma once
#include <iostream>
#include <string>


using namespace std;


class AjaxApartments {

private:
	
	float houseRent;
	float energyBill ;
	float internetBill ;
	float tvStreamingBill;
	float garbageBill ;

	
public:
	AjaxApartments();
	AjaxApartments(float houseRent, float energyBill, float internetBill, float tvStreamingBill, float garbageBill);

	float getHouseRent();

	float getEnergyBill();

	void setHouseRent(float houseRent);

	void setEnergyBill(float energy);

	float getInternetBill();

	void setInternetBill(float internetBil);

	float getTvStreamingBill();

	void setTvStreamingBill(float tvStreamingBill);

	float getGarbageBill();

	void setGarbageBill(float garbageBill);

	void AjaxManagementSystem();

	void ajaxOfficeInfo();
	void apartmentDetails();
	void viewManagementTeam();
	void callAjaxPhone();

	void newResidentRegistration();
	void viewAccessIdCard();
	void viewResidentsAccessID();
	void checkEntranceIdCard();

	void findResidents();
	void residentsIncedentReport();

	void accountTransactions();

	
	void useCalculator();
	void isOddOrEvenNumber( );
	void tempConversion();	

	void showSystemenu();
	void showOfficeMenu();
	void showResidentsMenu();
	void showAccountsMenu();
	void calculatorMenu();

	void purchaseStoreItem();

	
	
};

