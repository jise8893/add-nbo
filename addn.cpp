#include <stdint.h>
#include <stddef.h>
#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <netinet/in.h>

int main(int argc, char* argv[])
{
	FILE * p= fopen(argv[1],"rb");
	FILE * q= fopen(argv[2],"rb");
	uint8_t network_buffer[4];
	uint8_t network_buffer2[4];
	if( p==NULL && q==NULL)
		printf("no exist file");
	

	fread(network_buffer,sizeof(uint8_t),sizeof(uint32_t),p);
	uint32_t * kk=reinterpret_cast<uint32_t*>(network_buffer);
	uint32_t n= ntohl(*kk);
	

	fread(network_buffer2,sizeof(uint8_t), sizeof(uint32_t),q);
	uint32_t * k2 = reinterpret_cast<uint32_t*>(network_buffer2);
	uint32_t n2=ntohl(*k2);

	printf("%d(0x%x) + %d(0x%x) =%d(0x%x)\n",n,n,n2,n2,(n+n2),n+n2);	
	
	

}
