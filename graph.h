#include <iostream>
#include <vector>
#include <map>
using namespace std;


class Node{
    private:        
        int id;
        vector<pair<Node,double> > adjacents; //id, distance
        int orders;
    public:
        Node(int id); // default node constructor
        void setOrders(int orders);

        int getOrders();

        int getID();

        void addAdj(Node n1, int distance);
};

class Graph{
    private:
        vector<Node> nodes;
};