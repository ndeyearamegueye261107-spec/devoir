#include <stdio.h>
int main(){
int note,nbr;
printf("donne ta note : ");
scanf("%d",&note);
printf("donne ton nombre dabsence : ");
scanf("%d",&nbr);
if(note>=0 && 10<=note<12 && 0<nbr<=5){
    printf("passable");
}
else if(12<=note<14 && 0<nbr<=4){
    printf("bien");
}
else if(14<=note<16 && 0<nbr<=3){
    printf("tres bien");
}
else if(note>=16 && note<=20 && 0<nbr<=2){
    printf("excellent");
}


}
