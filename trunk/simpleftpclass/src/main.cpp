#include "ftp.h"
#include <iostream.h>

ftp theFtpConnection;

void main() {
	cout << "Test ftp class." << endl;

	theFtpConnection.DoOpen("ftp.test.com");
	theFtpConnection.DoLogin("user test:pwd");
	theFtpConnection.DoList("ls");

	theFtpConnection.DoCD("cd www");
	theFtpConnection.DoList("ls");

	theFtpConnection.DoAscii();
	theFtpConnection.DoLCD("cd temp");
	theFtpConnection.DoLCD("cd ..");
	theFtpConnection.DoGet("links.html");
	theFtpConnection.DoPut("links2.html");

	theFtpConnection.DoClose();
};