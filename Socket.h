 ///
 /// @file    Socket.h
 /// @author  panjiaming(www.wc.com19941214@gmail.com)
 /// @date    2017-09-27 23:58:47
 ///
 
#ifndef __WD_SOCKET_H__
#define	__WD_SOCKET_H__
namespace wd
{
class Socket
{
	public:
		Socket();
		Socket(int );
		int fd();
	private:
	int _fd;
};


};


#endif	
