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

//구조체 선언 
typedef struct ifs_ele{
	//번호
	int index;
	//나이
	int age;
	//감염시점
	int time; 

	//감염 직전 이동경로 enum 
	place_t place[N_HISTORY];	
} ifs_ele_t;


void* ifctele_genElement(int index, int age, unsigned int defected_time, int history_place[N_HISTORY])
{
	ifs_ele_t *ptr;
	
	ptr = (ifs_ele_t *)malloc(100*sizeof(ifs_ele_t));
	ptr->index = index;
	
	int ifsarray; 
	
	
	ifsarray[ifs_cnt].index = index;
	ifsarray[ifs_cnt].age = age;
	ifsarray[ifs_cnt].defected_time = defected_time;
	ifsarray[ifs_cnt].history_place = history_place;
	
	//(void*)
	return ptr;

}

int ifctele_getHistPlaceIndex(void* obj, int index);
unsigned int ifctele_getinfestedTime(void* obj);




void ifsele_printElement( void *obj)
{
	//ifsele_t 정의  
	ifsele_t*strPtr = (ifs_ele_t *)obj;
	
	printf("number");
	//str 정의 
	printf("age : %i\n", str->age);
	
	int i;
	for(i=0;i<30;i++)  // 최대숫자수정해야함   
	{
		ifsarray[i].index -> print;
	}
		
}

char* ifctele_getPlaceName(int placeIndex)
{
	return countryName[placeIndex];
}

