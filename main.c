//
//  main.c
//  infestPath
//
//  Created by Juyeop Kim on 2022/10/20.
//

#include <stdio.h>
#include <string.h>
#include "ifct_element.h"
#include "ifct_database.h"

#define MENU_PATIENT        1
#define MENU_PLACE          2
#define MENU_AGE            3
#define MENU_TRACK          4
#define MENU_EXIT           0

#define TIME_HIDE           2


int trackInfester(int patient_no, int *detected_time, int *place);
int main(int argc, const char * argv[]) {
    
    int menu_selection;
    void *ifct_element;
    FILE* fp;
    int pIndex, age, time;
    int placeHist[N_HISTORY];
    
    //------------- 1. loading patient info file ------------------------------
    //1-1. FILE pointer open
    if (argc != 2)
    {
        printf("[ERROR] syntax : infestPath (file path).");
        return -1;
    }
    
    fp = fopen(argv[1],"r");
    if (fp == NULL)
    {
        printf("[ERROR] Failed to open database file!! (%s)\n", argv[1]);
        return -1;
    }
    
    //1-2. loading each patient informations
    /*while (fscanf(fp, "3가지 읽기", 변수들) == 3)
    //fscanf의 읽은 수가 3이면 실행되게 하기 
    {
    	for(i=0; i<5;i++)
    		fscanf(5개 읽기) 
    	
    	ifs_element  =  ifsclee genElement 
    	ifsele_genElement(index, age, ,,,)
    	
	}
	*/
	//ifsele_genElement
	//ifct_getelement
			
	FILE*fp = fopen("patientinfo_sample.txt", "r");
	void* ifctele_genElement(int index, int age, unsigned int detected_time, int history_place[N_HISTORY]);
	while (!feof(fp)){
		fscanf(fp, "%d, %d, %d" &pIndex, &age, &time);	
		int i;
    	for (i=0;i<N_HISTORY;i++){
			fscanf("%s", &placeHist[i]); 
		//ifct_element = ifs_elegenElement;
		//ifctele_genElement(int index, int age, unsigned int detected_time, int history_place[N_HISTORY]);
			}
		ifctdb_addTail();
		ifctdb_len();                  
		}
		
		for(i=-; i< ; i++){
			ifct_element= ifctdb_getData(i);
			get
		}


    //1-3. FILE pointer close
    fclose(fp);
    
    
    do {
        printf("\n=============== INFECTION PATH MANAGEMENT PROGRAM (No. of patients : %i) =============\n", ifctdb_len());
        printf("1. Print details about a patient.\n");                      //MENU_PATIENT
        printf("2. Print list of patients infected at a place.\n");        //MENU_PLACE
        printf("3. Print list of patients in a range of age.\n");          //MENU_AGE
        printf("4. Track the root of the infection\n");                     //MENU_TRACK
        printf("0. Exit.\n");                                               //MENU_EXIT
        printf("=============== ------------------------------------------------------- =============\n\n");
        
        printf("Select a menu :");
        scanf("%d", &menu_selection);
        fflush(stdin);
        
        switch(menu_selection)
        {
            case MENU_EXIT:
                printf("Exiting the program... Bye bye.\n");
                break;
                
            case MENU_PATIENT:
            	scanf("%d", patient_no);
            	void* ifctdb_getData(patient_no);
            	ifsele_printElement();       
                break;
                
            case MENU_PLACE:

            	ifctele_getHistPlaceIndex(void* obj, int index);

          	
                break;
                
            case MENU_AGE:
            	ifsele_getAge();
            	printf(" ")
                break;
                
            case MENU_TRACK:
            	
                    
                break;
                
            default:
                printf("[ERROR Wrong menu selection! (%i), please choose between 0 ~ 4\n", menu_selection);
                break;
        }
    
    } while(menu_selection != 0);
    
    free(ptr);
    
    return 0;
}
