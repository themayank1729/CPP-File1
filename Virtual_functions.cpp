#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Person{
  public:
  int age;
  string name;  
};
class Professor:public Person{
  private:
  int publications;
  int cur_id;    
  public:
  int getId()
  {
      return this->cur_id;
  }
  void setId(int id)
  {
      this->cur_id=id;
  }
  void getData(string name,int age,int pub)
  {
      this->name=name;
      this->publications=pub;
      this->age=age;
  } 
  void putData()
  {
    cout<<this->name<<" "<<this->age<<" "<<this->publications<<" "<<this->cur_id;
   } 
  
};


class Student : public Person{
    int marks[6];
    int cur_id;
    int sum=0;
    public:
    int getId()
    {
        return this->cur_id;
    }
    void setId(int id)
    {
        this->cur_id=id;
    }
       
  void getData(string name,int age,int marks[])
  {
      this->name=name;
      this->age=age;
      for (int i=0; i<6; i++) {
      this->marks[i]=marks[i];
      }
      for (int i=0; i<6; ) {
      sum+=this->marks[i];
      }
  }  
  
  void putData()
  {
      cout<<this->name<<" "<<this->age<<" "<<this->sum<<" "<<this->cur_id;
  }
};
int main() {
    int t;
    cin>>t;
    int temp=t;
     int i=0;
     int j=0;
     Professor P1[t];
     Student St[t];
    while(t--)
    {
        int id;
        cin>>id;
       
        if(id==1)
        {
           // Professor objP1[i];
            P1[i].setId(id);
            string name;
            int age,pub;
            cin>>name>>age>>pub;
            P1[i].getData(name,  age, pub);
            P1[i].putData();
            i++;
        }
        else{
            
            string name;
            int age;
            int marks[6];
            cin>>name>>age;
            for (int i=0; i<6; i++) {
            cin>>marks[i];
            }
            St[j].setId(t);
            St[j].getData( name, age, marks);
            St[j].putData();
             j++;
        }    
    }   
  
    return 0;
}
