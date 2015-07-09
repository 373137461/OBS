#ifndef VIDEOHANDER_H
#define VIDEOHANDER_H

#include <winsock2.h>

class VideoHander
{
public:
	/*
	 * �������TCP����������ɺ�Ļص�
	 * @sock socket�ľ��
	*/
	void AfterConnectDone(const SOCKET *sock);

	/*
	 * @sock   socket�ľ��
	 * @buf    ��Ҫ���͵�����buffer��ַ
	 * @len    ��Ҫ���͵����ݵ�len����
	 * @return ����sendϵͳ���õĽ��
	*/
	int OnDataToSend(const SOCKET *sock, const char *buf, int len);

	/*
	 * �������TCP�Ĵ����ֶ�����ǰ�Ļص�
	 * @sock socket�ľ��
	*/
	void BeforeDisconnect(const SOCKET *sock);

	VideoHander();
	~VideoHander();
};

#endif
