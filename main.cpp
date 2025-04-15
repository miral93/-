#include <iostream>
using namespace std;
class User{
private:
    string username="miral";
    string password="1234";
public:
    bool login(string u,string p){
        return(u==username&&p==password);
    }
};
class Project{
private:
    string title;
    string description;

public:
    Project(string t,string d){
        title=t;
        description=d;
    }
void editProject(string newTitle,string newDescription) {
        title=newTitle;
        description=newDescription;
        cout<<"Project updated"<<endl;
    }
void display(){
        cout<<"Project Title: "<<title<<endl;
        cout<< "Description: "<<description<<endl;
    }
};

int main(){
    User user;
    string inputUser,inputPass;
    cout<<"Login"<<endl;
    cout<<"Enter username";
    cin>>inputUser;
    cout << "Enter password: ";
    cin >> inputPass;

    if (user.login(inputUser, inputPass)) {
        cout<<"success"<<endl;

Project myProject("project management","help manage projects");

        myProject.display();
        string newTitle, newDescription;
        cin.ignore();
        cout << "new project title: ";
        getline(cin, newTitle);
        cout << "new project description: ";
        getline(cin, newDescription);

    myProject.editProject(newTitle,newDescription);
        myProject.display();

    } else {
        cout << "Login failed username or password." << endl;
    }

    return 0;
}
