#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

    struct kayit{
       char ad[10];
       char soyad[10];
       int no;
       int kontrol;
       };// onemliii...
     
    void menu(){
    setlocale(LC_ALL, "Turkish");
    printf("1.KAYIT EKLEME\n");
    printf("2.KAYIT LISTELE\n");
    printf("3.KAYIT ARAMA\n");
    printf("4.KAYIT GUNCELLEME\n");
    printf("5.KAYIT SÝLME\n");
    printf("6.CIKIS\n");
    }  
    void kayitekle(){
   
 
    int i,j,temp;
    char gecici1[10];
    struct kayit ogrenciyeni,ogrenci;
    FILE *dosya,*gecici;
    dosya=fopen("ogrenci.txt","a+");
    gecici=fopen("a.txt","a");
    if(dosya==NULL){printf("\n\nDOSYA ACÝLAMADÝ...\n\a");
    }
 
    else{
    printf("OGRENCÝNÝN ADÝ:");
    scanf("%s",ogrenciyeni.ad);
    printf("OGRENCÝNÝN SOYADÝ:");
    scanf("%s",ogrenciyeni.soyad);
    printf("OGRENCÝNÝN NUMARASÝ:");
    scanf("%d",&ogrenciyeni.no);
    ogrenciyeni.kontrol=1;
    int hata=0;
 
                     fscanf(dosya,"%s%s%d%d",ogrenci.ad,ogrenci.soyad,&ogrenci.no,&ogrenci.kontrol);
                     while(!feof(dosya)){
                   
                                        if(ogrenci.kontrol==1&&ogrenci.no==ogrenciyeni.no) {
                                                         hata=1;                                              
                                                         }              
                      fscanf(dosya,"%s%s%d%d",ogrenci.ad,ogrenci.soyad,&ogrenci.no,&ogrenci.kontrol);              
                                        }
                      fclose(dosya);  
                      dosya=fopen("ogrenci.txt","a+");
 
                    //rewind(dosya); ---dosya basina gelindi...

                           if(hata==0){
               
                                        fscanf(dosya,"%s%s%d%d",ogrenci.ad,ogrenci.soyad,&ogrenci.no,&ogrenci.kontrol);
                                        while(!feof(dosya)){
                       
                                        i=0;      
                                        while(ogrenciyeni.ad[i]==ogrenci.ad[i]){
                                                  i++;
                                                  }
                                                                 
                                        if(ogrenciyeni.ad[i]>ogrenci.ad[i]){
                                        fprintf(gecici,"%10s%10s%10d%5d\n",ogrenci.ad,ogrenci.soyad,ogrenci.no,ogrenci.kontrol);                                
                                               }                
                                        else{
                                             for(i=0;ogrenci.ad[i];i++){
                                                                        gecici1[i]=ogrenci.ad[i];  
                                                                        }
                                                                       while(i<9){
                                                                                  gecici1[i]=' ';    
                                                                                 i++;
                                                                                 }  
             
                                                                                 gecici1[i]='\0';    
                                            for(i=0;ogrenciyeni.ad[i];i++){
                                                                           ogrenci.ad[i]=ogrenciyeni.ad[i];  
                                                                           }
                                                                 while(i<9){
                                                                            ogrenci.ad[i]=' ';    
                                                                            i++;
                                                                            }  
                                                                            ogrenci.ad[i]='\0';          
                               
                   
                                             for(i=0;gecici1[i];i++){
                                                                     ogrenciyeni.ad[i]=gecici1[i];
                                                                     }
                                                           while(i<9){
                                                                       ogrenciyeni.ad[i]=' ';    
                                                                       i++;    
                                                                       }
                                                                             ogrenciyeni.ad[i]='\0';                    
                     
             
             
                                              /*strcpy(gecici1,ogrenci.ad);
                                               strcpy(ogrenci.ad,ogrenciyeni.ad);
                                              strcpy(ogrenciyeni.ad,gecici1); */
                                            for(i=0;ogrenci.soyad[i];i++){
                                                                          gecici1[i]=ogrenci.soyad[i];  
                                                                         }
                                                              while(i<9){
                                                                         gecici1[i]=' ';    
                                                                         i++;
                                                                         }  
             
                                                                          gecici1[i]='\0';    
                                               for(i=0;ogrenciyeni.soyad[i];i++){
                                                                                ogrenci.soyad[i]=ogrenciyeni.soyad[i];  
                                                                                 }
                                                               while(i<9){
                                                                          ogrenci.soyad[i]=' ';    
                                                                          i++;
                                                                          }  
                                                                                  ogrenci.soyad[i]='\0';          
                               
                   
                                             for(i=0;gecici1[i];i++){
                                                                     ogrenciyeni.soyad[i]=gecici1[i];
                                                                     }
                                                                      while(i<9){
                                                                                  ogrenciyeni.soyad[i]=' ';    
                                                                                  i++;    
                                                                                  }
                                                                                   ogrenciyeni.soyad[i]='\0';    
            /*strcpy(gecici1,ogrenci.soyad);
           strcpy(ogrenci.soyad,ogrenciyeni.soyad);
            strcpy(ogrenciyeni.soyad,gecici1);*/
         
                                                                      temp=ogrenci.no;
                                                                      ogrenci.no=ogrenciyeni.no;
                                                                       ogrenciyeni.no=temp;
       
                                                                      temp=ogrenci.kontrol;
                                                                      ogrenci.kontrol=ogrenciyeni.kontrol;
                                                                      ogrenciyeni.kontrol=temp;
             
                                               fprintf(gecici,"%10s%10s%10d%5d\n",ogrenci.ad,ogrenci.soyad,ogrenci.no,ogrenci.kontrol);            
                                              }                    
                                               fscanf(dosya,"%s%s%d%d",ogrenci.ad,ogrenci.soyad,&ogrenci.no,&ogrenci.kontrol);                  
                                              }
       
       
                                            fprintf(gecici,"%10s%10s%10d%5d\n",ogrenciyeni.ad,ogrenciyeni.soyad,ogrenciyeni.no,ogrenciyeni.kontrol);
       
          printf("KAYIT BASARIYLA EKLENDÝ....\n\n");
          fclose(dosya);
          fclose(gecici);
       
          remove("ogrenci.txt");
          rename("a.txt","ogrenci.txt");
       
          }//if sonu...  
   
     else{//ayni numaradan kayit yapilamadiði için.....
               
       printf("\n\nKAYIT YAPILAMADI...\a\a\n\n");
       fclose(dosya);  
       fclose(gecici);  
               remove("a.txt");
         
           }//else sonu..
     
   
       }
   
      }   //fonksiyon bitimi...
     
   
     void  kayitlistele(){
         int i,j;
         char temp[10];  
      struct kayit ogrenci;
      FILE *dosya;
      dosya=fopen("ogrenci.txt","r");
      if(dosya==NULL){
      printf("DOSYA ACILAMADI...\a\a\n");                                                                                                    
                     }
      else{
                fscanf(dosya,"%s%s%d%d",ogrenci.ad,ogrenci.soyad,&ogrenci.no,&ogrenci.kontrol);  
                 while(!feof(dosya)){
                                     if(ogrenci.kontrol==1){
                                      printf("%10s%10s%10d\n",ogrenci.ad,ogrenci.soyad,ogrenci.no);            
                                                            }            
                fscanf(dosya,"%s%s%d%d",ogrenci.ad,ogrenci.soyad,&ogrenci.no,&ogrenci.kontrol);                  
                                     }    
          }
    fclose(dosya);
     
   
                       }//fonksiyon sonu...    
   
   void kayitara(){
     int  i,j, bulunan=0,uzunluk=0;
     struct kayit ogrenci;
     char aranan[10];
     FILE*dosya;
     dosya=fopen("ogrenci.txt","r");
     if(dosya==NULL){printf("\n\nDOSYA ACILAMADI...\n\n\a");
                    }
     else{  
          printf("\n\nARANAN OGRENCÝNÝN ADÝ:");
          scanf("%s",aranan);
       
                  for(i=0;aranan[i]!='\0';i++){
                               uzunluk++;     }
     
       
       fscanf(dosya,"%s%s%d%d",ogrenci.ad,ogrenci.soyad,&ogrenci.no,&ogrenci.kontrol);
      while(!feof(dosya)){
                       
                         if(ogrenci.kontrol==1){
                                                 j=0;
                                                 for(i=0;ogrenci.ad[i]!='\0';i++){
             
                             if(aranan[j]==ogrenci.ad[i]){
                                                           j++;
         
                                                         if(j==uzunluk){
                                                                        printf("%10s%10s%10d\n",ogrenci.ad,ogrenci.soyad,ogrenci.no);                
                                                                        bulunan++;      
                                                                        }
                                                           }  
       
                                                          else{j=0;
                                                               }                          
                                     
                                                                                      }  
                                                  }//if sonu...                          
                           
          fscanf(dosya,"%s%s%d%d",ogrenci.ad,ogrenci.soyad,&ogrenci.no,&ogrenci.kontrol);  
                            }            
         fclose(dosya);
       
         if(bulunan==0){
          printf("\n\nARANAN KRÝTERE GÖRE KAYIT BULUNAMADI..\a\n\n");
                        }
         else{
         printf("\n\nTOPLAM %d KAYIT BULUNDU....\n\n",bulunan); }
              }//else sonu
     }//FONKSÝYON SONU...


void guncelleme(){
   
     char gecici1[10];
     int gun_no,temp;
     struct kayit ogrenci,ogrenciyeni;
     FILE *dosya,*gecici;
     dosya=fopen("ogrenci.txt","r+");
   
   
     if(dosya==NULL){
                                   printf("\n\nDOSYA ACILAMADI...\a\n\n");
                                 
                                   }
     else{
          gecici=fopen("a.txt","a+");
          kayitlistele();
          printf("GUNCELLENECEK OGRENCÝ NO:");
          scanf("%d",&gun_no);
       
          int var=0;
          fscanf(dosya,"%s%s%d%d",ogrenci.ad,ogrenci.soyad,&ogrenci.no,&ogrenci.kontrol);
      while(!feof(dosya)){
                          if(gun_no==ogrenci.no&&ogrenci.kontrol==1){
                         var=1;                                  
                          printf("OGRENCÝ ADÝ:");scanf("%s",ogrenciyeni.ad);                                      
                          printf("OGRENCÝ SOYADÝ:");scanf("%s",ogrenciyeni.soyad);
                          printf("OGRENCÝ NO:");scanf("%d",&ogrenciyeni.no);
                          ogrenciyeni.kontrol=1;
                                                             
                                                              }      
          fscanf(dosya,"%s%s%d%d",ogrenci.ad,ogrenci.soyad,&ogrenci.no,&ogrenci.kontrol);            
                          }  
      if(var==0){
                 printf("KAYIT BULUNAMADI...\a\a\n\n");
                 fclose(dosya);
                 fclose(gecici);
                 remove("a.txt");
               
                 }  
      else{  
    fclose(dosya);
    dosya=fopen("ogrenci.txt","a+");
       
         // rewind(dosya);
       
       
           int hata=0;      
          fscanf(dosya,"%s%s%d%d",ogrenci.ad,ogrenci.soyad,&ogrenci.no,&ogrenci.kontrol);
          while(!feof(dosya)){
             if(gun_no==ogrenci.no&&ogrenci.kontrol==1){
                                                     }              
                         else if(ogrenci.no==ogrenciyeni.no&&ogrenci.kontrol==1) {
                                                                       hata=1;                                          
                                                                      }            
          fscanf(dosya,"%s%s%d%d",ogrenci.ad,ogrenci.soyad,&ogrenci.no,&ogrenci.kontrol);              
                              }
                           
                           
                           
         if(hata==1){
                   
                  fclose(dosya);
                 fclose(gecici);
                 
         remove("a.txt");  
         printf("\n\nKAYIT GUNCELLENEMEDÝ...\a\a\n\n");
                 
                      kayitlistele();
                   }
                   
         else{
              fclose(dosya);
              dosya=fopen("ogrenci.txt","a+");
             //rewind(dosya);
     
            fscanf(dosya,"%s%s%d%d",ogrenci.ad,ogrenci.soyad,&ogrenci.no,&ogrenci.kontrol);
                                 while(!feof(dosya)){
                                                     int i=0;
                             
                                                      while(ogrenciyeni.ad[i]==ogrenci.ad[i]){
                                                                                              i++;
                                                                                              }              
                                                      if(ogrenciyeni.ad[i]>ogrenci.ad[i]){
                                                                                          if(gun_no==ogrenci.no&&ogrenci.kontrol==1) {                          
                                                                                                  ogrenci.kontrol=0;                          
                                                   fprintf(gecici,"%10s%10s%10d%5d\n",ogrenci.ad,ogrenci.soyad,ogrenci.no,ogrenci.kontrol);  
                                                           }
                                                                                          else{
                 
                                                  fprintf(gecici,"%10s%10s%10d%5d\n",ogrenci.ad,ogrenci.soyad,ogrenci.no,ogrenci.kontrol);  
                                                                                                }                          
                                                                                          }              
                else{
            if(ogrenci.no==gun_no&&ogrenci.kontrol==1){
                        ogrenci.kontrol=0;
    for(i=0;ogrenci.ad[i];i++){
                gecici1[i]=ogrenci.ad[i];  
                                      }
               while(i<9){
                    gecici1[i]=' ';    
                   i++;  }  
             
                gecici1[i]='\0';    
            for(i=0;ogrenciyeni.ad[i];i++){
                ogrenci.ad[i]=ogrenciyeni.ad[i];  
                                           }
               while(i<9){
               ogrenci.ad[i]=' ';    
                   i++;   }  
              ogrenci.ad[i]='\0';          
                               
                   
              for(i=0;gecici1[i];i++){
              ogrenciyeni.ad[i]=gecici1[i];
                                      }
              while(i<9){
                    ogrenciyeni.ad[i]=' ';    
                   i++;    
                        }
               ogrenciyeni.ad[i]='\0';                    
                     
             
             
            /*strcpy(gecici1,ogrenci.ad);
             strcpy(ogrenci.ad,ogrenciyeni.ad);
             strcpy(ogrenciyeni.ad,gecici1); */
           for(i=0;ogrenci.soyad[i];i++){
                gecici1[i]=ogrenci.soyad[i];  
                                      }
               while(i<9){
                    gecici1[i]=' ';    
                   i++;  }  
             
                gecici1[i]='\0';    
            for(i=0;ogrenciyeni.soyad[i];i++){
                ogrenci.soyad[i]=ogrenciyeni.soyad[i];  
                                           }
               while(i<9){
               ogrenci.soyad[i]=' ';    
                   i++;   }  
              ogrenci.soyad[i]='\0';          
                               
                   
              for(i=0;gecici1[i];i++){
              ogrenciyeni.soyad[i]=gecici1[i];
                                      }
              while(i<9){
                    ogrenciyeni.soyad[i]=' ';    
                   i++;    
                        }
               ogrenciyeni.soyad[i]='\0';    
            /*strcpy(gecici1,ogrenci.soyad);
           strcpy(ogrenci.soyad,ogrenciyeni.soyad);
            strcpy(ogrenciyeni.soyad,gecici1);*/
         
          temp=ogrenci.no;
          ogrenci.no=ogrenciyeni.no;
          ogrenciyeni.no=temp;
       
          temp=ogrenci.kontrol;
          ogrenci.kontrol=ogrenciyeni.kontrol;
          ogrenciyeni.kontrol=temp;                
                 
                 
            fprintf(gecici,"%10s%10s%10d%5d\n",ogrenci.ad,ogrenci.soyad,ogrenci.no,ogrenci.kontrol);      
                   
                     }
              else{
                   for(i=0;ogrenci.ad[i];i++){
                gecici1[i]=ogrenci.ad[i];  
                                      }
               while(i<9){
                    gecici1[i]=' ';    
                   i++;  }  
             
                gecici1[i]='\0';    
            for(i=0;ogrenciyeni.ad[i];i++){
                ogrenci.ad[i]=ogrenciyeni.ad[i];  
                                           }
               while(i<9){
               ogrenci.ad[i]=' ';    
                   i++;   }  
              ogrenci.ad[i]='\0';          
                               
                   
              for(i=0;gecici1[i];i++){
              ogrenciyeni.ad[i]=gecici1[i];
                                      }
              while(i<9){
                    ogrenciyeni.ad[i]=' ';    
                   i++;    
                        }
               ogrenciyeni.ad[i]='\0';                    
                     
             
             
            /*strcpy(gecici1,ogrenci.ad);
             strcpy(ogrenci.ad,ogrenciyeni.ad);
             strcpy(ogrenciyeni.ad,gecici1); */
           for(i=0;ogrenci.soyad[i];i++){
                gecici1[i]=ogrenci.soyad[i];  
                                      }
               while(i<9){
                    gecici1[i]=' ';    
                   i++;  }  
             
                gecici1[i]='\0';    
            for(i=0;ogrenciyeni.soyad[i];i++){
                ogrenci.soyad[i]=ogrenciyeni.soyad[i];  
                                           }
               while(i<9){
               ogrenci.soyad[i]=' ';    
                   i++;   }  
              ogrenci.soyad[i]='\0';          
                               
                   
              for(i=0;gecici1[i];i++){
              ogrenciyeni.soyad[i]=gecici1[i];
                                      }
              while(i<9){
                    ogrenciyeni.soyad[i]=' ';    
                   i++;    
                        }
               ogrenciyeni.soyad[i]='\0';    
            /*strcpy(gecici1,ogrenci.soyad);
           strcpy(ogrenci.soyad,ogrenciyeni.soyad);
            strcpy(ogrenciyeni.soyad,gecici1);*/
         
          temp=ogrenci.no;
          ogrenci.no=ogrenciyeni.no;
          ogrenciyeni.no=temp;
       
          temp=ogrenci.kontrol;
          ogrenci.kontrol=ogrenciyeni.kontrol;
          ogrenciyeni.kontrol=temp;      
           
                 
            fprintf(gecici,"%10s%10s%10d%5d\n",ogrenci.ad,ogrenci.soyad,ogrenci.no,ogrenci.kontrol);
                 
                 
                 
                   }    
                   
                   
                   
                           
                   
                     }              
            fscanf(dosya,"%s%s%d%d",ogrenci.ad,ogrenci.soyad,&ogrenci.no,&ogrenci.kontrol);              
                                }
            fprintf(gecici,"%10s%10s%10d%5d\n",ogrenciyeni.ad,ogrenciyeni.soyad,ogrenciyeni.no,ogrenciyeni.kontrol);
         
         
            fclose(dosya);
            fclose(gecici);
            remove("ogrenci.txt");
         
            rename("a.txt","ogrenci.txt");
         
         
            printf("\n\nKAYIT BASARIYLA GUNCELLENDI...\n\n");
    kayitlistele();
              }
              }//kayit bulunduysa....
          }//dosya acildiysa...
 
   
     }//fonksiyon bitimi..
     
   void kayitsil(){
   
     kayitlistele();
   
   
     struct kayit ogrenci;
     int sil_no,bulunan=0,var=0;
   
   
     FILE*dosya1,*dosya2;
   
     dosya1=fopen("ogrenci.txt","r");
           if(dosya1==NULL){printf("\n\nDOSYA ACILAMADI...\n\n\a");
                           }
           else{
                dosya2=fopen("yeni.txt","a");  
                printf("\n\nsilinecek ismin numarasini giriniz....");
                scanf("%d",&sil_no);
 
                 fscanf(dosya1,"%s%s%d%d",ogrenci.ad,ogrenci.soyad,&ogrenci.no,&ogrenci.kontrol);
                 while(!feof(dosya1)){
                                       if(sil_no==ogrenci.no &&  ogrenci.kontrol==1)  {
                                       var=1;        
                                       ogrenci.kontrol=0;
                                        fprintf(dosya2,"%10s%10s%10d%5d\n",ogrenci.ad,ogrenci.soyad,ogrenci.no,ogrenci.kontrol);                                        
                                                                           }
                                        else{
                                              fprintf(dosya2,"%10s%10s%10d%5d\n",ogrenci.ad,ogrenci.soyad,ogrenci.no,ogrenci.kontrol);
                                             }
   
                   fscanf(dosya1,"%s%s%d%d",ogrenci.ad,ogrenci.soyad,&ogrenci.no,&ogrenci.kontrol);
                                       }
 
                         
 
                      if(var==0){
                                printf("\n\nKAYIT BULUNAMADI...\a\a\n\n");      
                                 }
                      else{
                                printf("\n\nKAYIT BASARIYLA SÝLÝNDÝ.....\n\n");
                          }

     fclose(dosya1);
     fclose(dosya2);
   
     //dosyalari kapatmayi unutma...
       remove("ogrenci.txt");
       rename("yeni.txt","ogrenci.txt");
     }
     kayitlistele();
     }

main(){
 
     
int secim;
 do{

     
 printf("\t\t\tOGRENCÝ OTOMASYONU PROGRAMÝ.....\n");    
 menu();

 printf("SECÝMÝNÝZ:");
 scanf("%d",&secim);
 switch(secim){  
 case 1:
     kayitekle();
      break;
 case 2:
      kayitlistele();
      break;
  case 3:
       kayitara();
       break;
  case 4:
       guncelleme();
       break;  
   case 5:
        kayitsil();
        break;
   case 6:
       return 0;
        break;  
                               
             
   default:
           printf("\n1-6 ARASI SECÝM YAPINIZ...\a\a\n\n");
           break;      }
        system("PAUSE");
        system("cls");
       
}while(secim!=6);                
     
getch();    


       }
