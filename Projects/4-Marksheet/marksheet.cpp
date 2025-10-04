#include <iostream>
#include <fstream>
using namespace std;

class Student {
  protected :
    string name;
    string prn;
    string motherName;
  
  public :
    void acceptStudent();
};

class Marks : public Student {
  protected :
    string sname[5];
    int smarks[5];

  public :
    void acceptMarks();
};

class Sport {
  protected :
    string sportName;
    int sportMark;

  public :
    void acceptSportMarks();
};

class Result : public Sport, public Marks {
  protected :
    int totalMarks;
    float percentage;
  
  public :
    void calculateResult();
};

class Display : public Result {
  public :
    void displayResult();
    void saveToFile();
};


// Defination of class member functions 

void Student :: acceptStudent() {
  cout << "Enter name of student : ";
  cin >> name;

  cout << "Enter PRN number of student : ";
  cin >> prn;

  cout << "Enter Mother name of student : ";
  cin >> motherName;
}

void Marks :: acceptMarks() {
  cout << "Enter Subject names and marks :" << endl;
  for(int i = 0; i < 5; i++) {
    cin >> sname[i] >> smarks[i];
  }
}

void Sport :: acceptSportMarks() {
  cout << "Enter sport name : ";
  cin >> sportName;

  cout << "Enter sport marks : ";
  cin >> sportMark;
}

void Result :: calculateResult() {
  totalMarks = sportMark;

  for(int i = 0; i < 5; i++) {
    totalMarks += smarks[i];
  }

  percentage = (float)totalMarks / 6;
}

void Display :: displayResult() {
  cout << "\tSanjivani college of Enginering kopargaon\t" << endl;
  cout << "Student name : " << name << endl;
  cout << "Mother name : " << motherName << endl;
  cout << "PRN :" << prn << endl;
  cout << "Subjects\t" << "Marks" << endl;
  for(int i = 0; i < 5; i++) {
    cout << sname[i] << "\t\t" << smarks[i] << endl;
  }
  cout << sportName << "\t\t" << sportMark << endl;
  cout << "\nTotal Marks : " << totalMarks;
  cout << "\tPersentage : " << percentage;
}

void Display :: saveToFile() {
  ofstream file("result.json");
  file << "{\n";
  file << "  \"name\": \"" << name << "\",\n";
  file << "  \"motherName\": \"" << motherName << "\",\n";
  file << "  \"prn\": \"" << prn << "\",\n";

  // Subjects array
  file << "  \"subject\": [";
  for (int i = 0; i < 5; i++) {
            file << "\"" << sname[i] << "\"";
            if (i < 4) file << ", ";
  }
  file << ", \"" << sportName << "\"],\n";

  // Marks array
  file << "  \"marks\": [";
  for (int i = 0; i < 5; i++) {
            file << smarks[i];
            if (i < 4) file << ", ";
  }
  file << ", " << sportMark << "],\n";

  file << "  \"total\": " << totalMarks << ",\n";
  file << "  \"percent\": " << percentage << "\n";
  file << "}";

  file.close();
  cout << "Data saved to result.json\n";
}

int main() {

  Display d;
  d.acceptStudent();
  d.acceptMarks();
  d.acceptSportMarks();
  d.calculateResult();
  d.displayResult();
  d.saveToFile();
  
  return 0;
}