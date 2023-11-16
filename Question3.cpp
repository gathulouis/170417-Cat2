#include <iostream>

using namespace std;

int main() {
    int choice;
    
    while (true) {
        // Display the menu
        cout << "Menu:" << endl;
        cout << "1. Go to About Us Page" << endl;
        cout << "2.Go to Services Page " << endl;
        cout << "3. Go to Full Profile Page" << endl;
        cout << "4. Logout" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: 
            string name, enjoy ;
            int age;
            cout<<"What is your name"<<endl;
            getline(cin,name);
            cout<<"What is your age"<<endl;
            cin>>age;
            cout<<"What do you enjoy most about c++ programming"<<endl;
            getline(cin,enjoy);

            cout<<name<<endl<<age<<endl<<enjoy<<endl;

            case 2: 
            string name, money ;
            int age;
            cout<<"What is your name"<<endl;
            getline(cin,name);
            cout<<"What is your age"<<endl;
            cin>>age;
            cout<<"What do you do to earn money"<<endl;
            getline(cin,money);

            cout<<name<<endl<<age<<endl<<money<<endl;

            case 3: 
            string name, money,birthyear,country,citizenship,citizenship,university,course,unitName,hobbies ;
            int age;
            cout<<"What is your name"<<endl;
            getline(cin,name);
            cout<<"What is your age"<<endl;
            cin>>age;
            cout<<"What do you do to earn money"<<endl;
            getline(cin,money);
             cout<<"What do you do to earn money"<<endl;
            getline(cin,birthyear);
             cout<<"What do you do to earn money"<<endl;
            getline(cin,country);
             cout<<"What do you do to earn money"<<endl;
            getline(cin,citizenship);
             cout<<"What do you do to earn money"<<endl;
            getline(cin,university);
            cout<<"What do you do to earn money"<<endl;
            getline(cin,course);
             cout<<"What do you do to earn money"<<endl;
            getline(cin,unitName);
             cout<<"What do you do to earn money"<<endl;
            getline(cin,hobbies);


            cout<<name<<endl<<age<<endl<<money<<endl;
               
                
                

            default:
                cout << "Invalid choice.select valid option (1-4)." << endl;
        }
    }
    return 0;
}

