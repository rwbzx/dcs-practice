#include<iostream>
#include"zookeeper/zookeeper.h"

int main(int argc, char *argv[])
{
	const char* host = "127.0.0.1:2181,127.0.0.1:2182,"
        "127.0.0.1:2183";
	int timeout = 30000;

	zhandle_t* zkhandle = zookeeper_init(host, NULL, timeout, 0, NULL, 0);
	if( zkhandle == NULL)
	{
		std::cout << "zookeeper init failed." << std::endl;
		exit(1);
	}

	zookeeper_close(zkhandle);
	return 0;
}
