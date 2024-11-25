#include<stdio.h>
void main()
{
    int tp,tw,tm,tl,lm,lw,iw,im;
    tp=1441981744;
    tw=tp*48.4/100;
    tm=tp-tw;
    tl=tp*85.95/100;    //85.95% people are literate
    lm=tm*80.95/100;    //80.95% men are literate
    lw=tw*62.84/100;    //62.84% women are literate
    iw=tw-lw;
    im=tm-lm;   //illiterate=total-literate
    printf("total illiterate men =%d",im);
    printf("\ntotal illiterate women =%d",iw);
    printf("\n24CE016_Palak Bhut");
    return 0;
}
