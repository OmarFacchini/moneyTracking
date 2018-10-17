#include <iostream> //std:: cout && std::cin
#include <fstream>  //used to actually be able to work with files
#include<string>    //used to work with strings instead of char[lenght]
using namespace std;

//draws a table to show the choices the user can make
void drawTable(){
    cout << "0 - exit" << endl 
         << "1 - write on file" << endl
         << "2- read from file" << endl
         << endl;
}

//asks for a txt file to write on, if exists writes on it, otherwise creates it and write on it
//also checks for errors while opening it
void write(){
    string fileName;
    string insertedText;
    ofstream myfile;

    cout << "insert file name: ";
    cin >> fileName;
    fileName += ".txt";

    myfile.open(fileName);

    if(myfile.is_open()){

        cout << "insert your text: ";
        /*using blanks stops the cin, you can keep typing but'll write only 'till the first blank
          also instantly closes the while(choice != 0) in main()*/
        cin >> insertedText;

        myfile << insertedText << "\n";
        cout << "Output operation successfully performed" << endl;

        myfile.close();
    }
    else{
        cout << "Error opening file";
    }

}

//asks for a txt file to read, if exists reads and prints it on console
//also checks for errors while opening it
void read(){
    
 //TODO
 
}


int main(){

    int choice;

    drawTable();

    cout << "insert your choice: ";
    cin >> choice;
    cout << endl;

    //loop to make the user make different choices without re-running the program, also checks for non-existing choices
    while(choice != 0){
        switch(choice){
            case 0: return 0;
            case 1: write();
                    break;
            case 2: read();
                    break;
            default: 
                cout << "choice not available" << endl;
                drawTable();
                cout << "insert an existing one: ";
                cin >> choice;
                break;
        }

        drawTable();
        cout << "insert your choice: ";
        cin >> choice;
    }

    
  

    /*

    //reading and printing the content of testing.txt
    string line;
    std::ifstream myFile("testing.txt");

    if(myFile.is_open){
        while(getline(myFile,line)){
            cout << line << '\n';
        }
        myFile.close();
    }

    */

    return 0;
}

