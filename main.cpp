#include "graph.h"
#include <iostream>
using namespace std;
//homes
Node home0(1), home1(2), home2(3), home3(4), home4(5), home5(6), home6(7), home7(8), home8(9), home9(10);

vector<Node> customers;
Graph graph;

Node store(0);


int main(){
    //a)i)connect a few home nodes to the store
    store.addAdj(home0,1000);
    store.addAdj(home1,500);
    store.addAdj(home2,600);
    store.addAdj(home3,700);
    //a)ii)randomly connect
    home0.addAdj(home3,800);
    home0.addAdj(home4,900);
    home1.addAdj(home4,1);
    home4.addAdj(home5,100);
    home2.addAdj(home6,70);
    home6.addAdj(home8,100);
    home8.addAdj(home9,1);
    home9.addAdj(home7,800);
    home9.addAdj(home5,900);
    //b)
    home0.setOrders(1);
    home1.setOrders(2);
    home2.setOrders(1);
    home3.setOrders(2);
    home4.setOrders(1);
    home5.setOrders(2);
    home6.setOrders(1);
    home7.setOrders(2);
    home8.setOrders(1);
    home9.setOrders(2);

    customers.push_back(home0);
    customers.push_back(home1);
    customers.push_back(home2);
    customers.push_back(home3);
    customers.push_back(home4);
    customers.push_back(home5);
    customers.push_back(home6);
    customers.push_back(home7);
    customers.push_back(home8);
    customers.push_back(home9);
    graph.setNodes(customers);
    
    vector<Node> path = graph.shortestPath(store,home7);
    
    return 0;
}