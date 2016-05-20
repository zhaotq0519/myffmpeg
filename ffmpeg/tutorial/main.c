#include <stdio.h>
#include "avformat.h"
#include "avcodec.h"
#include "swscale.h"


int main(int argc, char* argv[])
{
	if(argc < 2)
	{
		printf("Please provide a file.\n");
		return 0;
	}

	av_register_all();

	return 0;
}
