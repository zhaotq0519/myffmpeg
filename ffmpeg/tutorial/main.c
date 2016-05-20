#include <stdio.h>
#include "avformat.h"
#include "avcodec.h"
#include "swscale.h"


#if 0
int main(int argc, char* argv[])
{
	AVFormatContext* pFormatCtx = NULL;

	int ret = 0;

	if(argc < 2)
	{
		printf("Please provide a file.\n");
		return 0;
	}

	av_register_all();

	ret = avformat_open_input(&pFormatCtx,argv[1],NULL,NULL);
	if(0!=ret)
	{
		return -1;
	}

	return 0;
}
#endif
