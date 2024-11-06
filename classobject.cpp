// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class result{
  public: int py;
  public: int java;
  public: int ruby;
  public: int Totalout;
  public: int Grade;
  public: void total(){
      int total = py + java + ruby;
      cout<<"the total marks is: "<<total;
      Totalout = total;
  }
  public: void percentage(){
      int percentage = (Totalout*100)/300;
      cout<<"\nPercentage %= "<<percentage;
      Grade = percentage;
  }
  public: void grade(){
      if(Grade>=80){
        cout<<"\nA grade";
      }else if(Grade>=60 || Grade<80){
        cout<<"\nB grade";  
      }else if(Grade>=40 || Grade<60){
        cout<<"\nC grade"; 
      }else if(Grade<40){
        cout<<"\nSorry to say but you are Failed..";
      }
  }
};
int main() {
    // Write C++ code here
    result object;
    object.py = 30;
    object.java = 56;
    object.ruby = 78;
    object.total();
    object.percentage();
    object.grade();
    

    return 0;
}
