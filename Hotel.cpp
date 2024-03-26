#include <iostream>
#include "display.h"

using namespace std;

class Hotel : public Display {
private:
    string customerName;
    int age; 
    string nation;
    string dateOfBirth;
    float totAmount;

public:
    Hotel() {
        gotoxy(55, 2);
        cout << "-*-*-*-*- WELCOME TO HOTEL-MANAGEMENT SYSTEM -*-*-*-*-";
        totAmount = 0; 
    }

    void iter(float rate) { 
        totAmount += rate; 
    }

    void customerDetails() {
    	gotoxy(30,3);
    	cout << " ---------------" << endl;
    	gotoxy(31,4);
        cout << "...CHECK-IN..." << endl;
        gotoxy(30,5);
    	cout << " ---------------" << endl;
    	gotoxy(42,7);
    	cout << ". ______________________________ .";
    	gotoxy(42,9);
        cout << "Name: ";
        cin >> customerName;
	
    	gotoxy(42,11);
		cout << "Age: ";
		cin >> age;
		
    	gotoxy(42,13);
		cout << "Date of Birth: ";
		cin >> dateOfBirth;
		
    	gotoxy(42,15);
		cout << "Nationality: ";
		cin >> nation;
		
		gotoxy(42,17);
		cout << ". ______________________________ .";
    }

    void FoodOrder() {
        int choice, qtyNoodles, i = 25, qtySamosa, qtyRas_Malai, qtyRoll, qtyPakoda;
        float rate;
        gotoxy(30,19);
    	cout << " -----------------" << endl;
    	gotoxy(31,20);
        cout << "...ORDER-ITEMS..." << endl;
        gotoxy(30,21);
    	cout << " -----------------" << endl;
    	gotoxy(42,23);
    	cout << ". ______________________________ .";
    	
    	gotoxy(42,i);   // flag-1: may it create issue..
        do {
        	
        	gotoxy(42,27);
            cout << "1 -> Order -> Noodles";
        	gotoxy(72,27);
            cout << "Rate: Rs 30/-";
            cout << endl;

        	gotoxy(42,29);
            cout << "2 -> Order -> Samosa";
        	gotoxy(72,29);
            cout << "Rate: Rs 10/-";
            cout << endl;

        	gotoxy(42,31);
            cout << "3 -> Order -> Ras-Malai";
        	gotoxy(72,31);
            cout << "Rate: Rs 50/-";
            cout << endl;

        	gotoxy(42,33);
            cout << "4 -> Order -> Roll";
        	gotoxy(72,33);
            cout << "Rate: Rs 20/-";
            cout << endl;

        	gotoxy(42,35);
            cout << "5 -> Order -> Pakoda";
        	gotoxy(72,35);
            cout << "Rate: Rs 20/-";
            cout << endl;
//			i = 37;                             future check of value of i..
        	gotoxy(42,i);
            cout << "Input choice (Enter 6 to exit): ";
            cin >> choice;

        	gotoxy(42,39);
            switch (choice) {
                case 1:
                	gotoxy(42,41);
                	cout << "Order qty of Noodles: ";
                	cin >> qtyNoodles;
                	rate = qtyNoodles * 30;
                	iter(rate);
                	i += 27;
                    break;
                case 2:
                	gotoxy(42,43);
                	cout << "Order qty of Samosa: ";
                	cin >> qtySamosa;
                	rate = qtySamosa * 10;
                	iter(rate);
                	i += 27;
                    break;
                case 3:
                	gotoxy(42,45);
                	cout << "Order qty of Ras-Malai: ";
                	cin >> qtyRas_Malai;
                	rate = qtyRas_Malai * 50;
                	iter(rate);
//                	i += 27;
                    break;
                case 4:
                	gotoxy(42,47);
                	cout << "Order qty of Roll: ";
                	cin >> qtyRoll;
                	rate = qtyRoll * 20;
                	iter(rate);
//                	i += 27;
                    break;
                case 5:
                	gotoxy(42,49);
                	cout << "Order qty of Pakoda: ";
                	cin >> qtyPakoda;
                	rate = qtyPakoda * 20;
                	iter(rate);
//                	i += 27;
                    break;
                case 6:
                	gotoxy(42,51);
                    cout << "Exiting..." << endl;
                    gotoxy(42,53);
    				cout << ". ______________________________ .";
        	        i += 55;
                    break;
                default:
                    //gotoxy(42,7);
    				cout << ". ______________________________ .";
					cout << "Invalid choice!" << endl;
					i += 55; 
            }
        } while (choice != 6);
    }
    
    ~Hotel() {
        cout << "\n\nTotal Amount: Rs " << totAmount << "/-" << endl;
    }
};

//int main() {
//    Hotel cls;
//    cls.customerDetails();
//    cls.FoodOrder();
//    return 0;
//}