//2강->3강 81%
//3강->4강 64%
//4강->5강 50%
//5강->6강 26%
//6강->7강 15%
//7강->8강 7%
//8강->9강 4%
//9강->10강 2%  




#include <stdio.h>

float enforce2(int cost)
{
	float buy;
	float sell;
	float benefit;
	printf("2강 선수를 구매할 가격을 입력하세요(10000(만)제외):");
	scanf("%f",&buy);
	printf("3강 선수를 판매할 가격을 입력하세요(10000(만)제외):");
	scanf("%f",&sell);
	sell=sell*0.8;
	buy=buy*1.24+cost;
	benefit=sell-buy;
	return benefit;
}
float enforce3(int cost)
{
	float buy;
	float sell;
	float benefit;
	printf("3강 선수를 구매할 가격을 입력하세요(10000(만)제외):");
	scanf("%f",&buy);
	printf("4강 선수를  판매할 가격을 입력하세요(10000(만)제외):");
	scanf("%f",&sell);
	sell=sell*0.8;
	buy=buy*1.57+cost;
	benefit=sell-buy;
	return benefit;
}
float enforce4(int cost)
{
	float buy;
	float sell;
	float benefit;
	printf("4강 선수를  구매할 가격을 입력하세요(10000(만)제외):");
	scanf("%f",&buy);
	printf("5강 선수를  판매할 가격을 입력하세요(10000(만)제외):");
	scanf("%f",&sell);
	sell=sell*0.8;
	buy=buy*2+cost;
	benefit=sell-buy;
	return benefit;
}
float enforce5(int cost)
{
	float buy;
	float sell;
	float benefit;
	printf("5강 선수를  구매할 가격을 입력하세요(10000(만)제외):");
	scanf("%f",&buy);
	printf("6강 선수를  판매할 가격을 입력하세요(10000(만)제외):");
	scanf("%f",&sell);
	sell=sell*0.8;
	buy=buy*3.85+cost;
	benefit=sell-buy;
	return benefit;
}
float enforce6(int cost)
{
	float buy;
	float sell;
	float benefit;
	printf("6강 선수를 구매할 가격을 입력하세요(10000(만)제외):");
	scanf("%f",&buy);
	printf("7강 선수를 판매할 가격을 입력하세요(10000(만)제외):");
	scanf("%f",&sell);
	sell=sell*0.8;
	buy=buy*6.67+cost;
	benefit=sell-buy;
	return benefit;
}
float enforce7(int cost)
{
	float buy;
	float sell;
	float benefit;
	printf("7강 선수를 구매할 가격을 입력하세요(10000(만)제외):");
	scanf("%f",&buy);
	printf("8강 선수를 판매할 가격을 입력하세요(10000(만)제외):");
	scanf("%f",&sell);
	sell=sell*0.8;
	buy=buy*14.29+cost;
	benefit=sell-buy;
	return benefit;
}
float enforce8(int cost)
{
	float buy;
	float sell;
	float benefit;
	printf("8강 선수를 구매할 가격을 입력하세요(10000(만)제외):");
	scanf("%f",&buy);
	printf("9강 선수를 판매할 가격을 입력하세요(10000(만)제외):");
	scanf("%f",&sell);
	sell=sell*0.8;
	buy=buy*25+cost;
	benefit=sell-buy;
	return benefit;
}
float enforce9(int cost)
{
	float buy;
	float sell;
	float benefit;
	printf("9강 선수를 구매할 가격을 입력하세요(10000(만)제외):");
	scanf("%f",&buy);
	printf("10강 선수를 판매할 가격을 입력하세요(10000(만)제외):");
	scanf("%f",&sell);
	sell=sell*0.8;
	buy=buy*50+cost;
	benefit=sell-buy;
	return benefit;
}
int main(void)
{
	
	printf("====================피파온라인4 강화장사를 위한 매물의 적합성 검사 2022.05.04기준====================\n\n");
	printf("이론식: 선수 판매가 X 0.8(수수료)-소모비용=이익\n");
	printf("소모비용: 선수 구매가 X 강화확률역수값(+-0.01)+재료비용\n");
	printf("기댓값: 강화 100번을 했을 때 남는 차익\n\n");
	printf("조건\n1. 최근 거래량 5회이하\n2. 최저가 혹은 비슷한가격에 5장이상존재(최근거래가 매물보다 많은 경우 제외)\n3. 선수구매 비용이 5억이상(높은 확률로 강화장사로 유명한 매물임)\n4. 재료비용이 2000천만이상\n\n하나라도 충족 시 실패할 확률 매우 높음\n\n");
	printf("정수만 입력하며 단위 10000(만)생략 ex)25,000,000-->2500\n");
	printf("그만하고 싶다면 2~9를 제외한 아무키나 입력하세요.\n\n");
	while(1){
		int enforce=0;
		int cost=0;
		float benefit=0;
		printf("\n\n구매하려는 선수의 강화는 몇강입니까? ");
		scanf("%d",&enforce);
		if (enforce==2){
			printf("재료비용은 어느정도로 생각합니까? ");
			scanf("%d",&cost);
			benefit=enforce2(cost);
			if(benefit<0){
				printf("안좋은 매물로 손해볼 확률이 높습니다.\n");
				printf("기댓값: %.0f",benefit);
			}
			else if(benefit>0 && benefit<2000){
				printf("괜찮은 매물로 소소한 이득을 볼 확률이 높습니다.\n");
				printf("기댓값: %.0f",benefit);
			}
			else{
				printf("좋은 매물로 큰 이득을 볼 확률이 높습니다.\n");
				printf("기댓값: %.0f",benefit);
			}
		}
		else if (enforce==3){
			printf("재료비용은 어느정도로 생각합니까? ");
			scanf("%d",&cost);
			benefit=enforce3(cost);
			if(benefit<0){
				printf("안좋은 매물로 손해볼 확률이 높습니다.\n");
				printf("기댓값: %.0f",benefit);
			}
			else if(benefit>0 && benefit<2000){
				printf("괜찮은 매물로 소소한 이득을 볼 확률이 높습니다.\n");
				printf("기댓값: %.0f",benefit);
			}
			else{
				printf("좋은 매물로 큰 이득을 볼 확률이 높습니다.\n");
				printf("기댓값: %.0f",benefit);
			}
		}
		else if (enforce==4){
			printf("재료비용은 어느정도로 생각합니까? ");
			scanf("%d",&cost);
			benefit=enforce4(cost);
			if(benefit<0){
				printf("안좋은 매물로 손해볼 확률이 높습니다.\n");
				printf("기댓값: %.0f",benefit);
			}
			else if(benefit>0 && benefit<2000){
				printf("괜찮은 매물로 소소한 이득을 볼 확률이 높습니다.\n");
				printf("기댓값: %.0f",benefit);
			}
			else{
				printf("좋은 매물로 큰 이득을 볼 확률이 높습니다.\n");
				printf("기댓값: %.0f",benefit);
			}
		}
		else if (enforce==5){
			printf("재료비용은 어느정도로 생각합니까? ");
			scanf("%d",&cost);
			benefit=enforce5(cost);
			if(benefit<0){
				printf("안좋은 매물로 손해볼 확률이 높습니다.\n");
				printf("기댓값: %.0f",benefit);
			}
			else if(benefit>0 && benefit<2000){
				printf("괜찮은 매물로 소소한 이득을 볼 확률이 높습니다.\n");
				printf("기댓값: %.0f",benefit);
			}
			else{
				printf("좋은 매물로 큰 이득을 볼 확률이 높습니다.\n");
				printf("기댓값: %.0f",benefit);
			}
		}
		else if (enforce==6){
			printf("재료비용은 어느정도로 생각합니까? ");
			scanf("%d",&cost);
			benefit=enforce6(cost);
			if(benefit<0){
				printf("안좋은 매물로 손해볼 확률이 높습니다.\n");
				printf("기댓값: %.0f",benefit);
			}
			else if(benefit>0 && benefit<2000){
				printf("괜찮은 매물로 소소한 이득을 볼 확률이 높습니다.\n");
				printf("기댓값: %.0f",benefit);
			}
			else{
				printf("좋은 매물로 큰 이득을 볼 확률이 높습니다.\n");
				printf("기댓값: %.0f",benefit);
			}
		}
		else if (enforce==7){
			printf("재료비용은 어느정도로 생각합니까? ");
			scanf("%d",&cost);
			benefit=enforce7(cost);
			if(benefit<0){
				printf("안좋은 매물로 손해볼 확률이 높습니다.\n");
				printf("기댓값: %.0f",benefit);
			}
			else if(benefit>0 && benefit<2000){
				printf("괜찮은 매물로 소소한 이득을 볼 확률이 높습니다.\n");
				printf("기댓값: %.0f",benefit);
			}
			else{
				printf("좋은 매물로 큰 이득을 볼 확률이 높습니다.\n");
				printf("기댓값: %.0f",benefit);
			}
		}
		else if (enforce==8){
			printf("재료비용은 어느정도로 생각합니까? ");
			scanf("%d",&cost);
			benefit=enforce8(cost);
			if(benefit<0){
				printf("안좋은 매물로 손해볼 확률이 높습니다.\n");
				printf("기댓값: %.0f",benefit);
			}
			else if(benefit>0 && benefit<2000){
				printf("괜찮은 매물로 소소한 이득을 볼 확률이 높습니다.\n");
				printf("기댓값: %.0f",benefit);
			}
			else{
				printf("좋은 매물로 큰 이득을 볼 확률이 높습니다.\n");
				printf("기댓값: %.0f",benefit);
			}
		}
		else if (enforce==9){
			printf("재료비용은 어느정도로 생각합니까? ");
			scanf("%d",&cost);
			benefit=enforce9(cost);
			if(benefit<0){
				printf("안좋은 매물로 손해볼 확률이 높습니다.\n");
				printf("기댓값: %.0f",benefit);
			}
			else if(benefit>0 && benefit<2000){
				printf("괜찮은 매물로 소소한 이득을 볼 확률이 높습니다.\n");
				printf("기댓값: %.0f",benefit);
			}
			else{
				printf("좋은 매물로 큰 이득을 볼 확률이 높습니다.\n");
				printf("기댓값: %.0f",benefit);
			}
		}
		else{
			break;
		}
	}
	printf("적합성 검사를 종료합니다.");
 } 



