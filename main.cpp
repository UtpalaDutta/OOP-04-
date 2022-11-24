
#include <iostream>
#include <stdlib.h>

using namespace std;
class contact{
public:
	char fName[50], lName[50], address[50], email[50];
	long long phNo;
	virtual void createContact() {	
	}
	virtual void showContact() {	
	}
	virtual void search(){
	}
};
class close_contact:public contact
{
	public:
		void createContact()
		{
			cout<<"Enter your first name: ";
		cin>>fName;
		cout<<"Enter your last name: ";
		cin>>lName;
		cout<<"Enter phone: ";
		cin>>phNo;
		cout<<"Enter address: ";
		cin>>address;
		cout<<"Enter email: ";
		cin>>email;	
		}
		void showContact()
		{
			cout<<"Name: "<<fName<<" "<<lName<<endl;
		    cout<<"Phone: "<<phNo<<endl;
		    cout<<"Address: "<<address<<endl;
		    cout<<"Email: "<<email<<endl;	
		}
		void search() {
		long long phone;
		cout<<"Enter phone no.: ";
		cin>>phone;
        if (phNo==phone) 
				  showContact();
		else
		cout<<"\n\n No record not found";
	}
		
};
class prof_Contact:public contact
{
	public:
		void createContact()
		{
			cout<<"Enter your first name: ";
		cin>>fName;
		cout<<"Enter your last name: ";
		cin>>lName;
		cout<<"Enter phone: ";
		cin>>phNo;
		cout<<"Enter address: ";
		cin>>address;
		cout<<"Enter email: ";
		cin>>email;	
		}
		void showContact()
		{
			cout<<"Name: "<<fName<<" "<<lName<<endl;
		    cout<<"Phone: "<<phNo<<endl;
		    cout<<"Address: "<<address<<endl;
		    cout<<"Email: "<<email<<endl;	
		}
		void search() {
		long long phone;
		cout<<"Enter phone no.: ";
		cin>>phone;
        if (phNo==phone) 
				  showContact();
		else
		cout<<"\n\n No record not found";
	}
};
int main() {
	

	cout<<"\n\n\n\n\n\n\n\n\t\t\t * WELCOME TO CONTACT MANAGEMENT SYSTEM *";
	int cn,pn;
		cout<<"\n\n\n\n\n\n\n\n\t\t\tEnter no of close and prof conatcts:";
		cin>>cn>>pn;
		contact *c,*p;
		close_contact c1[cn];
		 prof_Contact p1[pn];
		 c=&c1[0];
		 p=&p1[0];
		while(1) {
		
		int choice;
		cout<<"\nCONTACT MANAGEMENT SYSTEM";
        cout<<"\n\nMAIN MENU";
		cout<<"\n=====================\n";
        cout<<"[1] Add a new Contact\n";
        cout<<"[2] List all close Contacts\n";
        cout<<"[3] List all professional Contacts\n";
        cout<<"[3] Search for contact\n";
        cout<<"[0] Exit";
		cout<<"\n=====================\n";
        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice) {
        	case 1:
        		int opt;
        		cout<<"1=Close or 2=professional";
        		cin>>opt;
        		if(opt=1)
        		{
	                
                  	try
                	{
		               if(cn>=5)
	            	    throw 5;
		            else
		            {
			            
			            for(int i=0;i<cn;i++)
			            {
			            	cout<<"\nEnter imf of contact"<<i<<endl;
			            	(c+i)->createContact();
						}
		            }
		        }
		        catch(int a)
		        {
		        	cout<<"\nError detected max limit of" <<a<< "contacts is reached";
		        	
				}
		    }
		    else if(opt=2)
		    {

                  	try
                	{
		               if(pn>=5)
	            	    throw 5;
		            else
		            {
			           
			            for(int i=0;i<pn;i++)
			            {
			            	cout<<"\nEnter imf of contact"<<i<<endl;
			            	(p+i)->createContact();
						}
		            }
		        }
		        catch(int a)
		        {
		        	cout<<"\nError detected max limit of" <<a<< "contacts is reached";
				}
		    }
		
		break;
        	case 2:
				cout<<"\nDisplaying:";
				cout<<"\nCLOSE CONTACTS:";
				
			
				for(int i=0;i<cn;i++)
				{
					(c+i)->showContact();
				}
				break;
			case 3:
                cout<<"\nPROFESSIONAL CONTACTS:";
            
				for(int i=0;i<pn;i++)
				{
					(p+i)->showContact();
				}
				break;				

			case 4:
				int op;
        		cout<<"1=Close and 2=Prof";
        		cin>>op;
        		if(op==1)
        		{
        			cout<<"\nCLOSE CONTACT:";
				    for(int i=0;i<cn;i++)
				    {
					   (c+i)->search();
				    }
				}
        		if(op==2)
        		{
        			cout<<"\nPROF CONTACT:";
				    for(int i=0;i<pn;i++)
				    {
					   (p+i)->search();
				    }
				}	
        		break;

        	default:
				continue;	
		}
		int opt;
		cout<<"\n\n..::Enter the Choice:\n[1] Main Menu\t\t[0] Exit\n";
		cin>>opt;

		switch (opt) {
			case 0:
        		
        		exit(0);
        		break;

			default:
				continue;
		}
 }


	return 0;
}