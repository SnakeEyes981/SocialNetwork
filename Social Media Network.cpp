#include<iostream>
using namespace std;




struct User{
	string userName;
	string userPass;
};

struct Node{
	User user;
	Node* next = NULL;
	Node* prev = NULL;
};

// Functions START


void loginMenu(){
	cout << "|=============================================================|" << endl;
	cout << "|                           1. Login                          |" << endl;
	cout << "|                           2. Sign-up                        |" << endl;
	cout << "|                           3. Exit                           |" << endl;
	cout << "|=============================================================|" << endl;
	return;
}
void afterLoginMainMenu(string uName){
	cout << "=================== User Name: " << uName << " ===================\n\n" << endl;
	cout << "1. View Friends" << endl;
	cout << "2. Search Peoples" << endl;
	cout << "3. Send Message" << endl;
	cout << "4. View Messages" << endl;
	cout << "5. Sign-out" << endl;
	return;
}


// Functions END


class SocialMedia{
	Node *head = NULL;
	Node *curr = NULL;
	public:
		void addUser(string uName, string uPass){
			if (head == NULL){
				head  = new Node;
				head->user.userName = uName;
				head->user.userPass = uPass;
				curr = head;
			}
			else {
				Node* temp = new Node;
	            temp->user.userName = uName;
	            temp->user.userPass = uPass;
	            curr->prev = temp;
	            temp->next = curr;
	            curr = temp;
			}
		}
		void showUsers(){
			if(head == NULL){
				cout << "No User Registered Now!" << endl;
			}
			else {
				Node* temp = head;
				while (temp != NULL){
					afterLoginMainMenu(temp->user.userName);
					temp = temp->prev;
				}
			}
		}
};

int main(){
	int choice;
	while(true){
		loginMenu();
		cin >> choice;
		cout << choice == 1 ? "Login";
		cout << choice == 2 ? "Signup";
		cout << choice == 3 ? return 0 : 
	}
}
