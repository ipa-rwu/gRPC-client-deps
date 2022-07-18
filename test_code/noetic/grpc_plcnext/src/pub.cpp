// Copyright 2016 Open Source Robotics Foundation, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include <chrono>
#include <memory>
#include <thread>
#include <pthread.h>
#include <string>

#include "ros/ros.h"
#include "std_msgs/String.h"
#include "grpc_plcnext/grpc_client.hpp"
#include <iostream>
#include <fstream>
#include <time.h>

using namespace std;
int main(int argc, char *argv[])
{
	ros::init(argc, argv, "pub");
	ros::NodeHandle n;
	ros::Publisher chatter_pub = n.advertise<std_msgs::String>("chatter", 1000);
	gRPC_Client PLCnext_gRPC_Client;

	ros::Rate loop_rate(10);
	
	std::string ins_path = "Arp.Plc.Eclr/MainInstance.gRPC_Obj.string_data, Arp.Plc.Eclr/MainInstance.gRPC_Obj.string_data";
	std::cout << "instance path: " << ins_path << std::endl;

	int count = 0;
	while (ros::ok())
	{
		std::string string_data = "string " + std::to_string(count);
		std::string string_data_readback;
		PLCnext_gRPC_Client.sendToPLC(ins_path,string_data);
		PLCnext_gRPC_Client.getFromPLC(ins_path,string_data_readback);

		std_msgs::String msg;
		msg.data = string_data;
		chatter_pub.publish(msg);
		ROS_INFO("%s", msg.data.c_str());

		ros::spinOnce();
		loop_rate.sleep();
		++count;
	}

	return 0;
}