#include<iostream>
using namespace std;

class LMS{
   private:
   string usertype;
   string username;
   string password;
  public:
  void login(){

  }
   void registor(){
    
  }
   void logout(){
    
  }
};



class user{
   private:
   string name;
   string ID;
   
  public:
  void verify(){

  }
   void checkaccount(){
    
  }
   void get_book_info(){
    
  }
};

class account{
  private:
  int no_borrowed_books;
  int no_reserved_books;
  int no_returned_books;  
  int no_lost_books;
  int fine_amount;
  public:
  void calculate_fine(){

  }
   
};



class book{
  private:
   string title;
   string author;
   string ISBN;
   string publication;
  public:
  void show_duedt(){

  }
   void reservation_status(){
    
  }
   void feedback(){
    
  }
  void book_request(){
    
  }
  void renw_info(){
    
  }
};


class librarian{
  private:
   string name;
   string ID;
   string password;
   string searchstring;
  public:
  void verify_librarian(){

  }
   void search(){
    
  }
   
};
class library_database{
  private:
   string list_of_book;
  public:
  void add(){

  }
   void Delete(){
    
  }
   void update(){
    
  }
  void display(){
    
  }
  void search(){
    
  }
};

int main(){
  
   return 0;
}
