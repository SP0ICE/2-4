#include <iostream>
#include <string>

class TBook {
   public:
   std::string name;
   std::string author;
   int count;
   TBook();
   TBook(std::string aName, std::string aAuthor, int aCount);
};

TBook::TBook() {
   name = "His Majesty's Mercenary";
   author = "Vitaly Zykov";
   count =  100000;
}

TBook::TBook(std::string aName, std::string aAuthor, int aCount) {
   name = aName;
   author = aAuthor;
   count = aCount;
}

int main() {
   using namespace std;
   TBook book;
   TBook book2("The second life of Major", "Vladimir Sukhinin", 150000);
   std::cout<<"book.name = "<<book.name<<std::endl;
   std::cout<<"book.author = "<<book.author<<std::endl;
   std::cout<<"book.count = "<<book.count<<std::endl;
   std::cout<<book2.name<<std::endl;
   std::cout<<book2.author<<std::endl;
   std::cout<<book2.count<<std::endl;
   return 0;
}
