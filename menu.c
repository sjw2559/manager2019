#include "menu.h"

int ask_menu(int is_login){
// 파라미터 : 로그인여부 (0 No, 1Yes)
// 리턴값 : 선택한 메뉴번호
// 메뉴번호 : 1. Sign up 2. Log in 3. Log out 0. Exit
  char input[30];
  if(is_login!=1){
   while(1){
    printf("> ");
    scanf("%s",input);
	if(strcmp(input,"login")==0){
	  return 2;
	}
	else if(strcmp(input,"join")==0){
	  return 1;
	}
	else if(strcmp(input,"list")==0){
	  return 4;
	}
	else if(strcmp(input,"exit")==0){
	  return 0;
	}
	else  printf("No such command!\n");
    }
  }
  else{
   getchar();
   while(1){
    printf("# ");
    fgets(input,30,stdin);
	if(strcmp(input,"logout\n")==0){
	  return 3;
	}
	else{ 
	  printf("%s",input);
	}
   }
  }
  
}
