#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

//struct
struct struct_name{
    //data
};

struct sinhvien{
    char MaSV[20];
    char ten[50];
    float gpa;
    char lop[20];
};

typedef struct sinhvien SV;

int main()
{
    printf("helo tui la tung\n");
    printf("helo tui la tu\n");
    SV a;
    scanf("%s", a.MaSV);
    getchar();
    fgets(a.ten, sizeof(a.ten), stdin);
    scanf("%s", a.lop);
    // scanf("%s", a.lop);
    // printf("%s %s %lf %s\n", a.MaSV, a.ten, a.gpa, a.lop);
    printf("helo tui la tui\n");
    printf("%s\n%s\n%s", a.MaSV, a.ten, a.lop);
    printf("Test ok roi nhe");
    return 0;
}
