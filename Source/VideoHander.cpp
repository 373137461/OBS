#include "VideoHander.h"
#include <assert.h>

VideoHander::VideoHander()
{
}

VideoHander::~VideoHander()
{
}

void VideoHander::AfterConnectDone(const SOCKET *sock)
{
	// TODO TCP�������ֳɹ��󣬿��������socket�������շ�һЩ����
}

void VideoHander::BeforeDisconnect(const SOCKET *sock)
{
	// TODO �ڶ�����ǰ��һЩ��β��������ʱsocket������ʹ��
}

int VideoHander::OnDataToSend(const SOCKET *sock, const char *buf, int len)
{
	assert(*sock != NULL);
	
	// ���ͱ�������Ƶ���ݵ�������

	return send(*sock, buf, len, 0);
}


