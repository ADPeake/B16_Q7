#include "graph.h"
using namespace std;

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
        vector<pair<Node,double> > Node::getAdj(){
            return adjacents;
        }

        void Node::addAdj(Node n1, double distance){
            adjacents.push_back(pair<Node,double>(n1,distance));
            n1.adjacents.push_back(pair<Node,double>(*this,distance));
        }

        vector<Node> Graph::shortestPath(Node n1, Node n2){
            // vector<pair<Node,double> > neighbours = n1.getAdj();
            
            vector<pair<Node,double> >::iterator it;
            vector<Node> shortpath;
            Node currentNode = n1;

            while(currentNode.getID() != n2.getID()){
                cout<<"current node = "<<currentNode.getID()<<endl;
                vector<pair<Node,double> > neighbours = currentNode.getAdj();
                pair <Node,double> minDist = (*neighbours.begin());
            //find shortest path
            for(it = neighbours.begin(); it != neighbours.end(); ++it){
                if((*it).second < minDist.second){
                    minDist = *it; //find th minimum distance node
                    //cout<<"dist =  ="<<to_string(minDist.first)<<endl;
                }
            }
            
            //shortpath.push_back(minDist.first);
            cout<<"dist =  ="<<to_string(minDist.first.getID())<<endl;
            
            currentNode = minDist.first; //go from the next node
            
            }

            return shortpath;


        }

        void Graph::setNodes(vector<Node> nodes){
            nodes = nodes;
        }
