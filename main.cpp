#include "graph.h"
#include <iostream>
using namespace std;
//homes
Node home0(1), home1(2), home2(3), home3(4), home4(5), home5(6), home6(7), home7(8), home8(9), home9(10);

vector<Node> customers;


Node store(0);


int main(){
    //connect a few home nodes to the store
    store.addAdj(home0,rand()/double(RAND_MAX));
    store.addAdj(home1,rand()/double(RAND_MAX));
    store.addAdj(home2,rand()/double(RAND_MAX));
    store.addAdj(home3,rand()/double(RAND_MAX));
    //randomly connect
    home0.addAdj(home3,rand()/double(RAND_MAX));
    home0.addAdj(home4,rand()/double(RAND_MAX));
    home1.addAdj(home4,rand()/double(RAND_MAX));
    home4.addAdj(home5,rand()/double(RAND_MAX));
    home2.addAdj(home6,rand()/double(RAND_MAX));
    home6.addAdj(home8,rand()/double(RAND_MAX));
    home8.addAdj(home9,rand()/double(RAND_MAX));
    home9.addAdj(home7,rand()/double(RAND_MAX));
    home9.addAdj(home5,rand()/double(RAND_MAX));
    //b)
    
    return 0;
}