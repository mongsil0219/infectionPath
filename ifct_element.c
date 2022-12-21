	//
//  ifs_element.c
//  InfestPath
//
//  Created by Juyeop Kim on 2020/10/20.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "ifct_element.h"

typedef enum place {
    Seoul,          //0
    Jeju,           //1
    Tokyo,          //2
    LosAngeles,     //3
    NewYork,        //4
    Texas,          //5
    Toronto,        //6
    Paris,          //7
    Nice,           //8
    Rome,           //9
    Milan,          //10
    London,         //11
    Manchester,     //12
    Basel,          //13
    Luzern,         //14
    Munich,         //15
    Frankfurt,      //16
    Berlin,         //17
    Barcelona,      //18
    Madrid,         //19
    Amsterdam,      //20
    Stockholm,      //21
    Oslo,           //22
    Hanoi,          //23
    Bangkok,        //24
    KualaLumpur,    //25
    Singapore,      //26
    Sydney,         //27
    SaoPaulo,       //28
    Cairo,          //29
    Beijing,        //30
    Nairobi,        //31
    Cancun,         //32
    BuenosAires,    //33
    Reykjavik,      //34
    Glasgow,        //35
    Warsow,         //36
    Istanbul,       //37
    Dubai,          //38
    CapeTown        //39
} place_t;

char countryName[N_PLACE+1][MAX_PLACENAME] =
{   "Seoul",
    "Jeju",
    "Tokyo",
    "LosAngeles",
    "NewYork",
    "Texas",
    "Toronto",
    "Paris",
    "Nice",
    "Rome",
    "Milan",
    "London",
    "Manchester",
    "Basel",
    "Luzern",
    "Munich",
    "Frankfurt",
    "Berlin",
    "Barcelona",
    "Madrid",
    "Amsterdam",
    "Stockholm",
    "Oslo",
    "Hanoi",
    "Bangkok",
    "KualaLumpur",
    "Singapore",
    "Sydney",
    "SaoPaulo",
    "Cairo",
    "Beijing",
    "Nairobi",
    "Cancun",
    "BuenosAires",
    "Reykjavik",
    "Glasgow",
    "Warsow",
    "Istanbul",
    "Dubai",
    "CapeTown",
    "Unrecognized"
};

//구조체 선언 (정의 ) 
typedef struct ifs_ele
{
	int index;  //번호 
	int age;  //나이 
	int time; //감염시점 
	int place_t[N_HISTORY]; 
	//enum place_t{place};	//감염 직전 이동경로 enum 
	
} ifs_ele_t; 

//static ifs_ele_t ifsarray[20];
static int ifs_cnt;






void* ifctele_genElement(int index, int age, unsigned int detected_time, int history_place[N_HISTORY])  //구조체 내용 ( 생성) 저장  
{
	ifs_ele_t *ptr ;
	
	ptr = (void *)malloc(sizeof(int));
	ptr->index = index;
	ptr->age = age;
	ptr->time = detected_time;

	int i;
	for (i=0;i<N_HISTORY;i++)
	{
		ptr->place_t[i]=history_place[i];
	}
	//strcpy(*ptr->place_t ,history_place[N_HISTORY]);
	
	/*
	ifsarray[ifs_cnt].index = index;
	ifsarray[ifs_cnt].age = age;
	ifsarray[ifs_cnt].time = defected_time;
	ifsarray[ifs_cnt].place_t[N_HISTORY] = history_place[N_HISTORY];
	
	ifs_cnt ++ ; */
	//(void*)
	return (void*)ptr;
}

void* ifsele_getAge(void*obj) 
{
	ifs_ele_t *strPtr = (ifs_ele_t *)obj;
	int mn, mx;
        printf("minimal age :");
		scanf("%d", &mn);
		printf("maximal age :");
		scanf("%d", &mx);
		int i; 
		for (i=0; i<strPtr->index; i++)
			if(strPtr->age<=mx && strPtr->age>=mn)
				ifsele_printElement(void *obj);
					
	return (struct strPtr*)strPtr->age;
}


int ifctele_getHistPlaceIndex(void* obj, int index){
	ifs_ele_t *strPtr = (ifs_ele_t *)obj;
	fscanf(fp, "%d", &)
	int i; 
	for(i=0;i<N_HISTORY;i++){
	}
	
		
	
	return (struct strPtr*)strPtr->place_t;
	
}

unsigned int ifctele_getinfestedTime(void* obj){   
	ifs_ele_t *strPtr = (ifs_ele_t *)obj;

	return (struct strPtr*)strPtr->time;
	
}

char* ifctele_getPlaceName(int placeIndex)
{
	ifs_ele_t *strPtr = (ifs_ele_t *)obj;
	if (place_t == placeIndex)
	int i;
	for(i=0;i<N_HISTORY;i++){
		return countryName[place_t[i]]; 
	}
}




void ifsele_printElement(void *obj)
{
    scanf("%d", &pIndex);
	//ifs_ele_t 정의  
	ifs_ele_t*strPtr = (ifs_ele_t *)obj; //포인터로 구조체 가리키며 시작  
	//strPtr = &ifs_ele_t;
	int ptr=0;
	for(ptr  = 0; ptr<strPtr.index ; ptr++)
	{	
		if(ptr == pIndex)	
			printf("Patient index : %d\n", strPtr->index );
			printf("Patient age : %d\n", strPtr->age);
			printf("Detected time : %d\n", strPtr->time);
			int i;
			printf("Path History :");
			for(i=0; i<5; i++)
				printf(" %c(%d)->", ifs_ele_t.place_t[ptr][i]);			
		else
			printf("No Patient");
			
	}
}

	free(strPtr);

	/*strcpy(strPtr->age);
	strcpy(strPtr->time);
	strcpy(strPtr->place_t[N_HISTORY]);
	//printf("number : %i\n", strPtr->index);
	//str 정의 
	//printf("age : %i\n",  strPtr->age);

	
	int i;
	for(i=0;i<30;i++)  // 최대숫자수정해야함   
	{
		//ifsarray[i].index -> printf;
	}
	*/
	









