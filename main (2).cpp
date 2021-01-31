#include <iostream>

using namespace std;

int main()
{
     string attendant;
     string customername;
     string item[3] = ("Printer", "Phone", "Table");
            item[0]= "Printer";
            item[1]= "Phone";
            item[2]= "Table";
     int printer = 450;
     int phone = 700;
     int table =300;
     int ID;
     int quantity;
     double VAT =.12;
     double totalcost;
     int totalamountpaid;
     int balance;
     cout<< "Name of the customer"<<endl;
     cin>>customername;
cout<< " "<<endl;
     cout<< "Items In Stock"<<endl;
     cout<< "1.Printer \n2.Phone \n3.Table"<<endl;
cout<< " "<<endl;
     cout<< "The vat on the item is"<<endl;
     cout<< VAT<<endl;
cout<< " "<<endl;
     cout<< "Name of attendant"<<endl;
     cin>> attendant;
     cout << "Unique ID"<<endl;
     cin>> ID;
cout<< " "<<endl;
     cout<< "What you want to buy is "<< item[0]<<endl;
cout<< " "<<endl;
     cout<< "Quantity of what you bought is"<<endl;
     cin>>quantity;
cout<< " "<<endl;
     totalcost =(printer * quantity) + (VAT*printer);
cout<< " "<<endl;
     cout<< "You have to pay $"<<totalcost<<endl;
cout<< " "<<endl;
     cout<< "How much do you have"<<endl;
     cin>>totalamountpaid;
cout<< " "<<endl;
     if(totalamountpaid>totalcost){
        balance=totalamountpaid-totalcost;
        cout<< "Dear customer you have a balance $"<<balance<< " to take home."<<endl;
    }
        else
		{
        	cout<< "Dear customer your money is not up to price of the item"<<endl;
		}

/*     
cout<< " "<<endl;
      cout<< "Name of customer is "<<customername<<endl;
cout<< " "<<endl;
      cout<< "Item bought is "<<item[0]<<endl;
cout<< " "<<endl;
      cout<< "Quantity of item bought is "<<quantity<<endl;
cout<< " "<<endl;
      cout<< "VAT amount is "<<VAT<<endl;
cout<< " "<<endl;
      cout<< "Total cost is $"<<totalcost<<endl;
cout<< " "<<endl;
      cout<< "Total amount paid is $"<<totalamountpaid<<endl;
cout<< " "<<endl;
      cout<< " Balance is $"<< balance<<endl;*/



cout<< " "<<endl;
     cout<< "_______________RECEIPT_______________"<<endl;
     cout<< "| Customer's Name | "<<customername<<endl;
     cout<< "------------------------------------- "<<endl;
     cout<< "| Unique ID       | "<<ID<<endl;
     cout<< "------------------------------------- "<<endl;
     cout<< "| Item            | "<<item[0]<<endl;
     cout<< "------------------------------------- "<<endl;
     cout<< "| Quantity        | "<<quantity<<endl;
     cout<< "------------------------------------- "<<endl;
     cout<< "| Vat Amount      | "<<VAT<<endl;
     cout<< "------------------------------------- "<<endl;
     cout<< "| Total Cost      | $ "<<totalcost<<endl;
     cout<< "------------------------------------- "<<endl;
     cout<< "| Amount Paid     | $ "<<totalamountpaid<<endl;
     cout<< "------------------------------------- "<<endl;
	 cout<< "| Balance         | $ "<<balance<<endl;
	 cout<< "------------------------------------- "<<endl;

cout<<" "<<endl;
cout<< "Thank You For Transacting With Us!"<<endl;

    return 0;
}
