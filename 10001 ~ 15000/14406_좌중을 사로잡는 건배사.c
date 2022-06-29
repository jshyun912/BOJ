#include <stdio.h>
#include <string.h>

int main()
{
	char hmm[13][25] =
	{
		"걸.걸.걸", "사.우.나", "지.화.자", "재.건.축", "오.징.어", "해.당.화",
		"우.아.미", "재.개.발", "사.이.다", "주.전.자", "나.가.자", "이.기.자", "청.바.지"
	};

	char in[15];

	scanf("%s", in);

	if (strcmp(in, hmm[0]) == 0)
		printf("더 사랑할걸, 더 참을걸, 더 즐길걸.");

	else if (strcmp(in, hmm[1]) == 0)
		printf("사랑과 우정을 나누자");

	else if (strcmp(in, hmm[2]) == 0)
		printf("지금부터 화합하자");

	else if (strcmp(in, hmm[3]) == 0)
		printf("재미있고 건강하게, 축복하며 살자");

	else if (strcmp(in, hmm[4]) == 0)
		printf("오래도록 징그럽게 어울리자");

	else if (strcmp(in, hmm[5]) == 0)
		printf("해가 갈수록 당당하고 화려하게");

	else if (strcmp(in, hmm[6]) == 0)
		printf("우아하고 아름다운 미래를 위하여");

	else if (strcmp(in, hmm[7]) == 0)
		printf("재미있고 개성있게 발전적으로 살자");

	else if (strcmp(in, hmm[8]) == 0)
		printf("사랑하자 이 세상 다 바쳐");

	else if (strcmp(in, hmm[9]) == 0)
		printf("주인의식을 갖고 전문성을 갖추고 자신있게 살자");

	else if (strcmp(in, hmm[10]) == 0)
		printf("나라, 가정, 자신의 발전을 위하여");

	else if (strcmp(in, hmm[11]) == 0)
		printf("이런 기회를 자주 만들자");

	else
		printf("청춘은 바로 지금부터");
}