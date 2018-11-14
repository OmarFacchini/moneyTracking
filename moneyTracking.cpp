#include <iostream> //common input and output
#include <fstream>  //used to actually be able to work with files
#include <string>   //used to work with strings instead of char[lenght]
//#include <ctype.h>  //used to check if the input given by the user is an int or not
using namespace std;

//draws a table to show the choices the user can make
void drawTable(){
    cout << "0 - exit" << endl 
         << "1 - write a new file" << endl
         << "2- read a whole file" << endl
         << endl;
}


//asks for a txt file to write on, if exists writes on it, otherwise creates it and write on it
//also checks for errors while opening it
void write(){
    string fileName;
    string insertedText;
    ofstream myfile;

    cout << "insert file name with no spaces: ";
    cin >> fileName;

    //working only on .txt files just to make things easier, allow the user to choose the format would be a suicide basically.
    fileName += ".txt";

    //the following two lines are used to "close and clear" the cin function, otherwise getline wouldn't work properly working as a cin
    cin.clear();
    cin.ignore();


    //used to check if the file is available or if it can't be opened
    myfile.open(fileName);

    if(myfile.is_open()){

        cout << "inserting a blank line means you're done writing on that file" //explaining the user how to stop writing on a file  
             << "insert your text: " << endl;

        /*using blanks stops the cin, that's why you want to use getline()
          also using a while loop to allow the user to insert multiple lines
          using a blank line to stop the loop because it's easier for the user*/
        while(getline(cin, insertedText) && insertedText != ""){
            myfile << insertedText << "\n";
        }

        myfile.close();
    }
    else{
        cout << "Error opening file" << endl;
    }

}

void update(){

}


//asks for a txt file to read, if exists reads and prints it on console
//also checks for errors while opening it
//reading and printing the content of testing.txt
void read(){

    string fileName;
    string readLine;

    cout << "insert file name with no spaces: ";
    cin >> fileName;

    //working only on .txt files just to make things easier, allow the user to choose the format would be a suicide basically.
    fileName += ".txt";
    ifstream myFile(fileName);

    if(myFile.is_open()){
        while(getline(myFile,readLine)){
            cout << readLine << endl;
        }
        myFile.close();
    }
    else cout << "file doesn't exist" << endl << endl; 
}

void findWord(string wordToFind, string fileName, string sentence){
    /*
    bool found = false;

    while(std::string::npos != sentence.find(wordToFind)){

    }*/

}


//checks if the input given is actually a number and not a char
int checkInputIsInt(int choice){
    //while the input isn't a number ask for a reinput
    while(cin.fail()){
        cin.clear();
        cin.ignore();
        cout << "your choice must be a number, try again: ";
        cin >> choice;
    }
    return choice;
}

//well, that's the main, you know what it does, calls the functions above
int main(){

    int choice;

    drawTable();

    cout << "insert your choice: ";
    cin >> choice;

    choice = checkInputIsInt(choice);
 
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
                cout << "insert an existing one: " << endl;
                choice = checkInputIsInt(choice);
                break;
        }

        drawTable();
        cout << "insert your choice: ";
        cin >> choice;
        choice = checkInputIsInt(choice);
    }
  

    return 0;
}

