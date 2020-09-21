#include<iostream>

using namespace std;
class Search{

    public:
        Search();

        double volume(double length);

    private:
        double length_;    
};

Search::Search(){

    length_ = 4;
}

int main(){

    Search x;
    cout << "Search() Constructor invoked successfully !";

    return 0;
}