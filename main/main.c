#include"main.h"

int main(int argc, char** argv)
{
	//test gcov
	int i=10;
	if(i==0)
	{
		printf("i=0\n");	
	}	
	else if(i>0)
	{
		printf("i>0\n");
	}	
	else
	{
		printf("i<0\n");
	}	
	
	//test calc
	printf("3+4=%d\n",add(3,4));
	printf("13-4=%d\n",minus(13,4));
	printf("3*4=%d\n",multiply(3,4));
	printf("12/4=%d\n",divide(12,4));	
	
	//test math
	printf("abs(-3)=%d\n",abs_n(-3));
	printf("max(2,3)=%d\n",max_n(2,3));
	printf("min(2,-3)=%d\n",min_n(2,-3));	
	
	//test branches
	printf("ret_0: %d\n",ret_0(2));	

	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
