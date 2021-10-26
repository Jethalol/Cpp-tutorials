#include <iostream>
#include <string.h>

using namespace std;

int main() {

string alphabet {" [abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
string key{"[ XZNLWEBFJHQDYVTKFUOMPCIASRxnzlwebfjhqdvtkfuompciasr"};
    
string message{};

    cout<<"Enter your message : ";
    getline(cin, message);
    
    cout<<"Encrypting message..."<<endl;

    string encrypted_msg;

    for(char c : message) {

        int position;
        position = alphabet.find(c);
        
        if(position!= string::npos ) {

            encrypted_msg+= key.at(position); 

        }
        else {

            encrypted_msg+=c;
        }


    }
   
        cout<<encrypted_msg<<endl;
    
        cout<<"Decrypting message again : "<<endl;

        string decrypted_msg;

        for(char c : encrypted_msg) {

            int position;

            position = key.find(c);

            if(position!= string::npos) {

                decrypted_msg+=alphabet.at(position);

            }
            else {

                decrypted_msg+=c;
            }

        }
                cout<<decrypted_msg<<endl;
        
        
        return 0;

}        