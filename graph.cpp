#include "graph.h"

        Node::Node(int id):id(id){}; // default node constructor
        void setOrders(int orders){
            orders = orders;
        }

        int Node::getOrders(){
            return orders;
        }
        void Node::setOrders(int o1){
            orders=o1;
        }

        int Node::getID(){
            return id;
        }

        void Node::addAdj(Node n1, int distance){
            adjacents.push_back(pair<Node,int>(n1,distance));
            n1.adjacents.push_back(pair<Node,int>(*this,distance));
        }
