#include <ntddk.h>

KIRQL WPOFFx64();
void WPONx64(KIRQL irql);


//���룺��HOOK������ַ����������ַ������ԭʼ������ַ��ָ�룬���ղ������ȵ�ָ�룻���أ�ԭ��ͷN�ֽڵ�����
void HookKernelApi(IN void* ApiAddress, IN void* Proxy_ApiAddress, OUT void* *Original_ApiAddress, OUT ULONG *PatchSize);

//���룺��HOOK������ַ��ԭʼ���ݣ���������  
void UnhookKernelApi(IN void* ApiAddress, IN void* OriCode, IN ULONG PatchSize);