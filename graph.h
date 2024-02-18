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

        void addAdj(Node n1, double distance);

        vector<pair<Node,double> > getAdj();
};

class Graph{
    public:
    vector<Node> shortestPath(Node n1, Node n2);
    void setNodes(vector<Node> nodes);
    private:
        vector<Node> nodes;
};