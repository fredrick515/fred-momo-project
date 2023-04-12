#include <iostream>
#include<string>

using namespace std;

int main() {
	//initialize default values
	int balance = 1000;
	int pin = 0000;
	int attempts = 0;
	int entry;
	
	//loop until exit option is selected
	do{
		//Display menu option
		cout<<"Welcome to floyd Mobile money service.\n";
		cout<<"1.Authenticate\n";
		cout<<"2.Reset pin\n";
		cout<<"3.Enter pin to check balance\n";
		cout<<"4.send Money\n";
		cout<<"5.Exit\n";
		cout<<"choose an option by enter 1-4:\n";
	    cin>>entry;
		
		//perform action based on user choice
		switch(entry){
			case 1:{
				int intput_pin;
				cout<<"Enter your pin";
				cin >> pin;
				
				if(pin==pin){
			        cout<<"Authentication successful.\n";
				}else{
					attempts++;
					cout<<"Invalid Pin.Attempt remaining:"<<3 - attempts <<endl;
					if(attempts >=3){
					   cout <<"Too many attempts.program will now exit.\n";
						return 0;
					}
				}   
				break;
			}
		    case 2:{
		    	int new_pin;
				cout<<"Enter your new pin";
				cin>>new_pin;
				pin = new_pin;
				cout<<"Pin changed successfully.\n";
				 
				break;
			}
            case 3:{
            	int intput_pin;
            	cout<<"Enter your new pin:\n";
            	cin>>intput_pin;
            	if(pin==pin){
            		cout<<"your balance is:"<<balance << endl;
            	}else{
                    cout<<"invalid pin.\n";
					return 0;
				}
				break;
			}		
		    case 4:{
		    	int recipient_number;
		    	int amount;
		    	cout<<"Enter recipient mobile number:";
		    	cin>>recipient_number;
		    	cout<<"Enter amount to send:";
		    	cin>>amount;
		    	if(amount<=balance){
		    		balance -= amount;
		    		cout<<"Transaction successful.New balance is:"<<balance<<endl;
		    	}else{
		    		cout<<"insufficient balance.\n";
				} 
				break;
			}
            case 5:{
            	cout<<"Exiting program.Thank you for using floyd Mobile Money Service.\n";
            	return 0;
            	
			}		
            default:{
            	cout<<"Invalid option.Please try again.\n";
			}		
		}
		  	
	}while(true);
	
	
		return 0;
}
