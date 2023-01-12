#include <ros/ros.h>
#include <std_msgs/String.h>
#include <sstream>
#include <iostream>
#include <cstdio>
#include  <bits/stdc++.h>
#include <string>
void chatterCallback(const std_msgs::String::ConstPtr& msg){
    std::cout<<"B says: "<<(msg->data.c_str());
    std::cout<<"\n";
    
}
int main(int argc, char **argv){

	ros::init(argc, argv, "readerb");


	ros::NodeHandle nr;

	ros::Subscriber sub = nr.subscribe("chatterb", 1000, chatterCallback);

	ros::spin();

	return 0;
}
