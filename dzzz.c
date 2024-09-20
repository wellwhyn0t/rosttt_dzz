#include <stdio.h>
#include <locale.h>

task_dz()
{
	//Ñîñòàâüòå ïðîãðàììó äëÿ îïðåäåëåíèÿ ñäà÷è ïîñëå ïîêóïêè â ìàãàçèíå òîâàðà :
	//ïåð÷àòîê ñòîèìîñòüþ À ðóá., ïîðòôåëÿ ñòîèìîñòüþ Á ðóá., ãàëñòóêà ñòîèìîñòüþ Ñ ðóá.
	//	Èñõîäíàÿ ñóììà, âûäåëåííàÿ íà ïîêóïêó – Ä ðóá.Â ñëó÷àå íåõâàòêè äåíåã ñäà÷à
	//	ïîëó÷èòñÿ îòðèöàòåëüíîé.
	int gloves_cost, bag_cost, tie_cost, all, change;
	puts("Ââåäèòå öåíó ïåð÷àòîê\nv");
	scanf("%d", &gloves_cost);
	puts("Ââåäèòå öåíó ïîðòôåëÿ\nv");
	scanf("%d", &bag_cost);
	puts("Ââåäèòå öåíó ãàëñòóêà\nv");
	scanf("%d", &tie_cost);
	puts("Ââåäèòå îáùóþ ñóììó äåíåã\nv");
	scanf("%d", &all);
	change = all - (gloves_cost + bag_cost + tie_cost);
	if (change > 0) {
		printf("Âàøà ñäà÷à %d ðóá!", change);
	}
	else {
		printf("Âàì íå õâàòàåò äåíåã, âåäü âàøà ñäà÷à %d ðóá.", change);
	}
}

main()
{
	setlocale(LC_ALL, "ru");
	task1();
}
