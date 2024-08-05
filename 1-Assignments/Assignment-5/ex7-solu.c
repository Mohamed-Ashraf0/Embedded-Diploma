#include <stdio.h>
#include <string.h>

enum fan_level{
	Level1,
	Level2,
	Level3,
};
int main(void)
{
	enum fan_level fan1=Level2;
	switch (fan1)
	{
	case Level1:
		printf("fan is level 1");
		break;
	case Level2:
		printf("fan is level 2");
		break;
	case Level3:
		printf("fan is level 3");
		break;
	}
}

