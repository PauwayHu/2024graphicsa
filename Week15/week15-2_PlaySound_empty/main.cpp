///程式碼全刪
#include <windows.h>
#include <stdio.h>
int main()

{

    ///PlaySound("C:/Do.wav", NULL, SND_SYNC);
    PlaySound("C:/mykbeat.wav", NULL, SND_ASYNC);
    printf("輸入整數: ");
    int n;
    scanf("%&", &n);
}
