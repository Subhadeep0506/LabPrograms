#include "iostream"
using namespace std;
int i;

struct Actor{
    string name;
    int id;
    float score;
}a,b,c;

int main(){
    a.name = "Subhadeep";
    b.name = "Subhrajyoti";
    
    a.id = 1290;
    a.score = 23.43;
    cout<<a.name<<"(ID: "<<a.id<<")has a score of "<<a.score<<".\n";
    Actor *actor_pointer;
    actor_pointer = &a;
    actor_pointer->name = "Mandal";
    cout<<a.name<<"(ID: "<<a.id<<")has a score of "<<a.score<<".\n";
    return 0;
}
