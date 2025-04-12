#include<iostream>
#include<string>
#include<vector>
#include<fstream>
#include<ctype.h>
#include<iomanip>
#include<stdio.h>
#include <cstring>
#include <typeinfo>

using namespace std;

class library{
   char bn[50];
   char ar[50];
   char bg[50];
   int yp;

   bool isNumber(const char* str) {
      int i = 0;
  
      if (str[0] == '\0') return false;  
  
      if (str[0] == '-') i = 1;  
  
      for (; str[i] != '\0'; i++) {
          if (!isdigit(str[i])) return false;
      }
  
      return true;
  }

public:

   void Add_a_book(char bne[50]){
      strcpy(bn, bne);
       cout << "\nEnter the author's name :" ;
       cin.ignore();  
       cin.getline(ar, 50);
       
       cout << "\nEnter the book genre :";
       cin.ignore();  
       cin.getline(bg, 50); 

       cout << "\nEnter the year of publication :";
       cin >> yp;

   } 

   void Add_a_book2(char bne[50]){
      strcpy(bn, bne);
      strcpy(ar, "George Orwell");
      strcpy(bg, "Political Fiction");
       yp = 1949;

   } 

   void Add_a_book3(char bne[50]){
      strcpy(bn, bne);
      strcpy(ar, "Harper Lee");
      strcpy(bg, "Drama");
       yp = 1960;

   } 

   void Add_a_book4(char bne[50]){
      strcpy(bn, bne);
      strcpy(ar, "J.R.R. Tolkien");
      strcpy(bg, "Fantasy ");
       yp = 1937;

   } 
   

   void Searching_for_books(){
  cout<<"===============================================================\n";
  cout<<"   Book name            Author                 Book genre           Year of publication\n";
  cout<<"===============================================================\n";
  if(strlen(bn) > 11)
      {
         cout<<setw(9)<<bn<<setw(12)<<ar<<setw(22)<<bg<<setw(25)<<yp<<endl;
      }
      else if (isNumber(bn)) 
      {
         cout<<setw(10)<<bn<<setw(23)<<ar<<setw(27)<<bg<<setw(20)<<yp<<endl;
      }
      
      else{
         cout<<setw(13)<<bn<<setw(22)<<ar<<setw(22)<<bg<<setw(23)<<yp<<endl;
      }

    }

    string rebook()
  {	
     return bn;
  }

  void reabook()
   {	
      if(strlen(bn) > 11)
      {
         cout<<setw(9)<<bn<<setw(12)<<ar<<setw(22)<<bg<<setw(25)<<yp<<endl;
      }
      else if (isNumber(bn)) 
      {
         cout<<setw(10)<<bn<<setw(23)<<ar<<setw(27)<<bg<<setw(20)<<yp<<endl;
      }
      
      else{
         cout<<setw(13)<<bn<<setw(22)<<ar<<setw(22)<<bg<<setw(23)<<yp<<endl;
      }
		
	}

 };
 

 class account{
   char acno[50];
   char name[50];
   char Book[50];
   int age , time;

public:
      void create_account(char accno[50])
 {
   strcpy(acno, accno);
   cout << "\nEnter The Name of The account Holder: ";
   cin.ignore();
   cin.getline(name, 50); 
   cout << "\nEnter your age: ";
   cin >> age;
   cout << "\nHow long are you going to be a member(Enter number): ";
   cin >> time;
   cout << endl;
   cout << endl;
   void LIST_OF_BOOKS();
   LIST_OF_BOOKS();
   cout << "\nWhat book would you like to borrow(Enter Book Name): ";
   cin.ignore();
   cin.getline(Book, 50); 
   cout<<"\n\n\n === Account Created... ===";
 }

   void show_account()
   {
      cout << "\nUsername : " << acno;
      cout << "\nAccount holder name :" << name;
      cout << "\nage : " << age;
      cout << "\nMembership time : " << time;
      cout << "\nWhat book would you like to borrow(Enter Book Name): " << Book;

   }

   void modify()
   {
      cout << "\nUsername : " << acno;
      cout << "\nEnter The Name of The account Holder: ";
      cin.ignore();
      cin.getline(name, 50);
      cout << "\nEnter your age: ";
      cin >> age;
      cout << "\nHow long are you going to be a member(Enter number): ";
      cin >> time;
      cout << "\nWhat book would you like to borrow(Enter Book Name): ";
      cin.ignore();
   cin.getline(Book, 50);  
   }

   void report()
   {	
		cout<<setw(8)<<acno<<setw(14)<<name<<setw(15)<<age<<setw(20)<<time<<setw(25)<<Book<<endl<<endl ;
	}

   string retacno()
   {	
		return acno;
	}

   int Userage()
   {	
		return age;
	}

	int Year()
   {	
		return time;
	}


 
 };

 void write_account();
 void intro();
 void display_sp(char[50]);
 void display_all();
 void modify_account(char[50]);
 void delete_account(char[50]);
 void A_A_B();
 void S_F_B(char [50]);
 void LIST_OF_BOOKS();
 
 int main(){
   int ch ;
   char num[50];
   char nom[50];
   intro();
    do
    {
            cout << "01.  ACCOUNT INQUIRY" << "         --     " << "ESTELAM HESAB .01" << endl << endl;
            cout << "02.  NEW ACCOUNT" << "             --     " << "EJAD HESAB .02" << endl << endl;
            cout << "03.  ALL ACCOUNT HOLDER LIST" << " --     " << "FEHREST HESAB HA .03" << endl << endl;
            cout << "04.  ADD A BOOK" << "              --     " << "AFZODAN KETAB(JADED) .04" << endl << endl;
            cout << "05.  SEARCH FOR A BOOK" << "       --     " << "JOSTOJO KETAB(NUM KETAB) .05" << endl << endl;
            cout << "06.  LIST OF BOOKS" << "           --     " << "FEHREST KETAB .06" << endl << endl;
            cout << "07.  EDIT ACCOUNT" << "            --     " << "ESLAH HESAB .07" << endl << endl;
            cout << "08.  CLOSE ACCOUNT" << "           --     " << "BASTAN HESAB .08" << endl << endl;
            cout << "09.  EXIT" << "                    --     " << "KHOROJ .09" << endl << endl;
            cout << "Select Your Option(1_9)";
            cin >> ch ;
            cout << endl;
            switch (ch)
            {
               case 1: 
               cout << "Enter your username: "; cin>>num;
               display_sp(num);
               break;

               case 2: 
               write_account();
               break;

               case 3: 
               display_all();
               break;

               case 4: 
               A_A_B();
               break;

               case 5: 
               cout << "Enter your Book name: "; 
               cin.ignore();  
               cin.getline(nom, 50);            
               S_F_B(nom);
               break;

               case 6: 
               LIST_OF_BOOKS();
               break;

               case 7: 
               cout<<"\n\n\tEnter your username : "; cin>>num;
			      modify_account(num);
               break;

               case 8: 
               cout<<"\n\n\tEnter your username : "; cin>>num;
			      delete_account(num);
               break;
            
            default:
               cout<<"Select Your Option (1-8): ";
               break;
            }

            cout << "\n\n" << "--------------------------" <<endl;
		system("Pause");

		system("CLS");
    }while (ch != 9);

    system("CLS");
	cout << " Welcom to dynamic library " << endl;
   cout << "---------------------------" << endl << endl << endl;

    return 0 ;
 }

 void write_account()
{
    account ac;
    bool flag = true;
    char ac_account[50];

    fstream libFile;
    libFile.open("library.dat", ios::binary | ios::in);
    if (!libFile)
    {
        fstream outFile("library.dat", ios::binary | ios::out | ios::app);
        library new_lb;
        char lb_library[50];

        strcpy(lb_library, "1984");
        new_lb.Add_a_book2(lb_library);
        outFile.write((char*)&new_lb, sizeof(library));

        strcpy(lb_library, "To Kill a Mockingbird");
        new_lb.Add_a_book3(lb_library);
        outFile.write((char*)&new_lb, sizeof(library));

        strcpy(lb_library, "The Hobbit");
        new_lb.Add_a_book4(lb_library);
        outFile.write((char*)&new_lb, sizeof(library));

        outFile.close();
    }
    else
    {
        libFile.close();
    }

    fstream inFile;
    inFile.open("account.dat", ios::binary | ios::in);

    if (!inFile) {
      inFile.open("account.dat", ios::binary | ios::out);
      inFile.close();
    }

    cout << "Enter your username: ";
    cin >> ac_account;

    if (inFile.is_open()) {
        while (inFile.read((char*)&ac, sizeof(account))) {
            if (ac.retacno() == ac_account) {
                flag = false;
                break;
            }
        }
        inFile.close();
    }

    fstream outFile;
    outFile.open("account.dat", ios::binary | ios::out | ios::app);

    if (flag) {
        account new_ac;
        cin.ignore();  
        new_ac.create_account(ac_account);
        outFile.write((char*)&new_ac, sizeof(account));
        cout << "\n\n=== Account Created Successfully ===" << endl;
    }
    else {
        cout << "\n\nUsername exists..." << endl;
    }

    outFile.close();
}


 void display_sp(char num[50])
{
	account ac;
	bool flag   = false;
	fstream inFile;
	inFile.open("account.dat" , ios::binary | ios::in);
	if(!inFile)
	{
		cout<<"File could not be open !! Press any Key...";
		return;
	}

   while (inFile.read((char*)&ac, sizeof(account)))
	{
		if (ac.retacno() == num)
		{
      cout << "\n==================== ACCOUNT DETAILS ====================\n";
      ac.show_account();
      cout << "\n========================================================\n";         
      flag = true;
      break;
		}
	}
	inFile.close();
	if(flag==false)
		cout<<"\n\nAccount does not exist";
}

void display_all(){
   account ac;
	ifstream inFile;
	inFile.open("account.dat",ios::binary);
	if(!inFile)
	{
		cout<<"File could not be open !! Press any Key...";
		return;
	}
	cout<<"\n\n\t\tACCOUNT HOLDER LIST\n\n";
	cout<<"====================================================\n";
	cout<<"  User Name.      NAME            age           Subscription time      Borrowing a book\n";
	cout<<"====================================================\n";
	while(inFile.read((char *) &ac, sizeof(account)))
	{
		ac.report();
	}
	inFile.close();
};

void delete_account(char num[50])
{
	account ac;
	ifstream inFile;
	ofstream outFile;
	inFile.open("account.dat",ios::binary);
	if(!inFile)
	{
		cout<<"File could not be open !! Press any Key...";
		return;
	}
	outFile.open("Temp.dat",ios::binary);
	inFile.seekg(0,ios::beg);
	while(inFile.read((char *) &ac, sizeof(account)))
	{
		if(ac.retacno()!=num)
		{
			outFile.write((char *) &ac, sizeof(account));
		}
	}
	inFile.close();
	outFile.close();
	remove("account.dat");
	rename("Temp.dat","account.dat");
	cout<<"\n\n\tRecord Deleted ..";
}

void modify_account(char num[50]){
   int found=0;
	account ac;
	fstream File;
	File.open("account.dat",ios::binary|ios::in|ios::out);
	if(!File)
	{
		cout<<"File could not be open !! Press any Key...";
		return;
	}
	while(File.read((char *) &ac, sizeof(account)) && found==0)
	{
		if(ac.retacno()==num)
		{
			ac.show_account();
			cout<<"\n\nEnter The New Details of account"<<endl;
			ac.modify();
			long long pos = (-1) * sizeof(account);
			File.seekp(pos,ios::cur);
			File.write((char *) &ac, sizeof(account));
			cout<<"\n\n\t Record Updated";
			found=1;
		}
	}
	File.close();
	if(found==0)
		cout<<"\n\n Record Not Found ";
};

void A_A_B(){
   library lb;
   fstream infile;
   bool flag = true;
   char lb_library[50];

   infile.open("library.dat", ios::binary | ios::in);

   if (!infile) {
      infile.open("library.dat", ios::binary | ios::out);
      infile.close();
   }

   cout << "Enter your Book name: ";
   cin.ignore();  
   cin.getline(lb_library, 50);


   if (infile.is_open()) {
       while (infile.read((char*)&lb, sizeof(library))) {
           if (lb.rebook() == lb_library) {
               flag = false;
               break;
           }
       }
       infile.close();
   }

   fstream outFile;
   outFile.open("library.dat", ios::binary | ios::out | ios::app);

   if (flag) {
       library new_lb;
       new_lb.Add_a_book(lb_library);
       outFile.write((char*)&new_lb, sizeof(library));
       cout << "\n\n=== Your book has been registered ===" << endl;
   }
   else {
       cout << "\n\nBook exists..." << endl;
   }

   outFile.close();

}

void S_F_B(char nom[50]){
   library lb;
   bool flag = false;
   fstream infile;
   infile.open("library.dat" , ios::binary | ios::in);
  if(!infile)
  {
     cout<<"File could not be open !! Press any Key...";
     return;
  }

  while (infile.read((char*)&lb, sizeof(library)))
  {
     if (lb.rebook() == nom)
     {
     cout << "\n====================== BOOK INFORMATION =========================\n";
     lb.Searching_for_books();
   
     flag = true;
     break;
     }
  }
  infile.close();
  if(flag==false)
     cout<<"\n\nThe book does not exist";
}

void LIST_OF_BOOKS(){
   library lb;
	ifstream infile;
	infile.open("library.dat",ios::binary);
	if(!infile)
	{
		cout<<"File could not be open !! Press any Key...";
		return;
	}
	cout<<"\n\n\t\tBOOK LIST\n\n";
	cout<<"====================================================\n";
	cout<<"   Book name            Author                 Book genre           Year of publication\n";
	cout<<"====================================================\n";
	while(infile.read((char *) &lb, sizeof(library)))
	{
		lb.reabook();
      cout<<endl;
	}
	infile.close();

}

 void intro(){
    cout << endl <<  "           Welcome to the library"<< endl ;
    cout << "      ------------------------------------" << endl  << "               Dynamic Library" << endl << endl;
    cout << "MAIN MENU" << endl << endl;
}